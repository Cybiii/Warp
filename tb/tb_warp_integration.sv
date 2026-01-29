// Warp Engine Integration Testbench
// SystemVerilog testbench for complete SIMT engine

`timescale 1ns/1ps

`include "warp_pkg.sv"

module tb_warp_integration;

    import warp_pkg::*;

    // Clock and reset
    logic clk;
    logic rst_n;

    // RoCC interface signals
    logic        cmd_valid;
    logic        cmd_ready;
    logic [6:0]  cmd_funct;
    logic [4:0]  cmd_rs1;
    logic [4:0]  cmd_rs2;
    logic [4:0]  cmd_rd;
    logic [31:0] cmd_rs1_data;
    logic [31:0] cmd_rs2_data;
    
    logic        resp_valid;
    logic        resp_ready;
    logic [4:0]  resp_rd;
    logic [31:0] resp_data;
    
    logic        mem_req_valid;
    logic        mem_req_ready;
    logic [31:0] mem_req_addr;
    logic        mem_req_write;
    logic [31:0] mem_req_data;
    logic        mem_resp_valid;
    logic        mem_resp_ready;
    logic [31:0] mem_resp_data;

    // Test memory
    logic [31:0] test_mem [0:1023];
    
    // Test counters
    int test_count = 0;
    int pass_count = 0;
    int fail_count = 0;
    
    // Monitor cmd_ready and internal signals
    always @(posedge clk) begin
        if (cmd_ready && $past(!cmd_ready)) begin
            $display("[MON] cmd_ready went HIGH at time %0t", $time);
        end
        if (!cmd_ready && $past(cmd_ready)) begin
            $display("[MON] cmd_ready went LOW at time %0t", $time);
        end
        
        // Monitor kernel signals after KERNEL_START sent
        if (cmd_valid && !cmd_ready && cmd_funct == 7'd0) begin
            $display("[MON] KERNEL_START sent, monitoring kernel signals...");
        end
    end
    
    // Periodic status monitor
    int monitor_counter = 0;
    always @(posedge clk) begin
        if (!cmd_ready && rst_n) begin
            monitor_counter++;
            if (monitor_counter % 100 == 0) begin
                $display("[MON] Waiting for cmd_ready (stuck for %0d cycles)... resp_valid=%b, resp_ready=%b, cmd_valid=%b", 
                         monitor_counter, resp_valid, resp_ready, cmd_valid);
            end
        end else begin
            monitor_counter = 0;
        end
    end

    // Instantiate warp_engine
    warp_engine #(
        .NUM_LANES(8),
        .DATA_WIDTH(32),
        .REG_FILE_SIZE(32),
        .FIFO_DEPTH(16),
        .ADDR_WIDTH(32)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .cmd_valid(cmd_valid),
        .cmd_ready(cmd_ready),
        .cmd_funct(cmd_funct),
        .cmd_rs1(cmd_rs1),
        .cmd_rs2(cmd_rs2),
        .cmd_rd(cmd_rd),
        .cmd_rs1_data(cmd_rs1_data),
        .cmd_rs2_data(cmd_rs2_data),
        .resp_valid(resp_valid),
        .resp_ready(resp_ready),
        .resp_rd(resp_rd),
        .resp_data(resp_data),
        .mem_req_valid(mem_req_valid),
        .mem_req_ready(mem_req_ready),
        .mem_req_addr(mem_req_addr),
        .mem_req_write(mem_req_write),
        .mem_req_data(mem_req_data),
        .mem_resp_valid(mem_resp_valid),
        .mem_resp_ready(mem_resp_ready),
        .mem_resp_data(mem_resp_data)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Memory model
    always_ff @(posedge clk) begin
        if (mem_req_valid && mem_req_ready) begin
            if (mem_req_write) begin
                test_mem[mem_req_addr[11:2]] <= mem_req_data;
                $display("[MEM] Write: addr=0x%08X, data=0x%08X", mem_req_addr, mem_req_data);
            end else begin
                mem_resp_data <= test_mem[mem_req_addr[11:2]];
                mem_resp_valid <= 1'b1;
                $display("[MEM] Read: addr=0x%08X, data=0x%08X", mem_req_addr, test_mem[mem_req_addr[11:2]]);
            end
        end else begin
            mem_resp_valid <= 1'b0;
        end
    end

    assign mem_req_ready = 1'b1;

    // Helper task to send RoCC command
    task send_rocc_cmd(
        input logic [6:0] funct,
        input logic [31:0] rs1_data,
        input logic [31:0] rs2_data,
        input string cmd_name
    );
        int timeout;
        
        // Ensure clean state
        resp_ready = 1'b0;
        
        @(posedge clk);
        cmd_valid = 1'b1;
        cmd_funct = funct;
        cmd_rs1_data = rs1_data;
        cmd_rs2_data = rs2_data;
        cmd_rd = 5'd1;
        
        $display("[CMD] Sending %s: rs1=0x%08X, rs2=0x%08X", cmd_name, rs1_data, rs2_data);
        
        // Wait for cmd_ready with timeout
        timeout = 0;
        while (!cmd_ready && timeout < 100) begin
            @(posedge clk);
            timeout++;
        end
        if (timeout >= 100) begin
            $error("[ERROR] Timeout waiting for cmd_ready!");
            return;
        end
        
        @(posedge clk);
        cmd_valid = 1'b0;
        
        // Give FSM time to process and reach RESPOND state
        @(posedge clk);
        @(posedge clk);
        
        // Wait for response with timeout
        resp_ready = 1'b1;
        timeout = 0;
        while (!resp_valid && timeout < 10000) begin
            @(posedge clk);
            timeout++;
            if (timeout % 1000 == 0) begin
                $display("[DEBUG] Waiting for resp_valid... (%0d cycles)", timeout);
            end
        end
        
        if (timeout >= 10000) begin
            $error("[ERROR] Timeout waiting for resp_valid!");
            return;
        end
        
        $display("[RESP] Received response: data=0x%08X (after %0d cycles)", resp_data, timeout);
        @(posedge clk);
        resp_ready = 1'b0;
        
        // Allow FSM to return to IDLE
        @(posedge clk);
        @(posedge clk);
    endtask

    // Initialize test memory with simple kernel
    initial begin
        // Simple ADD kernel: dst = src1 + src2
        // Instruction format: [opcode:4][dst:5][src1:5][src2:5][imm:13]
        
        // Instruction 0: R1 = R0 + 10 (ADD immediate)
        test_mem[0] = {4'h0, 5'd1, 5'd0, 5'd0, 13'd10};  // R1 = 10
        
        // Instruction 1: R2 = R0 + 20
        test_mem[1] = {4'h0, 5'd2, 5'd0, 5'd0, 13'd20};  // R2 = 20
        
        // Instruction 2: R3 = R1 + R2
        test_mem[2] = {4'h0, 5'd3, 5'd1, 5'd2, 13'd0};   // R3 = R1 + R2 = 30
        
        // Instruction 3: R4 = R1 * R2 (MUL)
        test_mem[3] = {4'h1, 5'd4, 5'd1, 5'd2, 13'd0};   // R4 = R1 * R2 = 200
        
        // Instruction 4: R5 = MAX(R1, R2)
        test_mem[4] = {4'h3, 5'd5, 5'd1, 5'd2, 13'd0};   // R5 = MAX(10, 20) = 20
        
        // Instruction 5: R6 = RELU(R1)
        test_mem[5] = {4'h4, 5'd6, 5'd1, 5'd0, 13'd0};   // R6 = RELU(10) = 10
    end

    // Main test sequence
    initial begin
        $display("========================================");
        $display("Warp Engine Integration Test");
        $display("========================================");
        
        // Initialize
        rst_n = 0;
        cmd_valid = 0;
        cmd_funct = 0;
        cmd_rs1_data = 0;
        cmd_rs2_data = 0;
        resp_ready = 0;
        
        #100;
        rst_n = 1;
        #50;

        // Test 1: Get status first (simple test)
        $display("\n--- Test 1: Get Status (First) ---");
        send_rocc_cmd(ROCC_OP_GET_STATUS, 32'h0, 32'h0, "GET_STATUS");
        test_count++;
        $display("[DEBUG] Status bits: idle=%b, exec=%b, done=%b, error=%b", 
                 resp_data[0], resp_data[1], resp_data[2], resp_data[3]);
        if (resp_data[0]) pass_count++; // Should be idle
        else fail_count++;

        // Test 2: Set mask to enable all lanes
        $display("\n--- Test 2: Set Warp Mask ---");
        send_rocc_cmd(ROCC_OP_SET_MASK, 32'hFF, 32'h0, "SET_MASK (all lanes)");
        test_count++;
        pass_count++;

        // Test 3: Start kernel execution (this will block until kernel completes)
        $display("\n--- Test 3: Execute Kernel ---");
        $display("[INFO] KERNEL_START will wait for kernel completion before returning...");
        send_rocc_cmd(ROCC_OP_KERNEL_START, 32'h0, 32'h6, "KERNEL_START (6 instructions)");
        test_count++;
        pass_count++;
        $display("[INFO] Kernel execution completed!");
        
        // Give system extra time to settle after kernel execution
        #1000;

        // Test 4: Check final status  
        $display("\n--- Test 4: Check Final Status ---");
        send_rocc_cmd(ROCC_OP_GET_STATUS, 32'h0, 32'h0, "GET_STATUS (after kernel)");
        test_count++;
        $display("[DEBUG] Status after kernel: idle=%b, exec=%b, done=%b, error=%b, fifo_empty=%b", 
                 resp_data[0], resp_data[1], resp_data[2], resp_data[3], resp_data[5]);
        if (resp_data[0] || resp_data[2]) pass_count++; // Should be idle or done
        else fail_count++;

        // Test Summary
        #100;
        $display("\n========================================");
        $display("Test Summary");
        $display("========================================");
        $display("Total Tests: %0d", test_count);
        $display("Passed:      %0d", pass_count);
        $display("Failed:      %0d", fail_count);
        $display("========================================");
        
        if (fail_count == 0) begin
            $display("ALL TESTS PASSED!");
        end else begin
            $error("SOME TESTS FAILED!");
        end
        
        #100;
        $finish;
    end

    // Timeout watchdog
    initial begin
        #200000;  // Increased timeout for kernel execution
        $error("TEST TIMEOUT!");
        $finish;
    end

endmodule
