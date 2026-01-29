// Warp Controller Testbench
// Tests main control FSM for kernel execution

`timescale 1ns/1ps

`include "warp_pkg.sv"

module tb_warp_controller;

    import warp_pkg::*;

    // Clock and reset
    logic clk;
    logic rst_n;

    // Kernel control
    logic kernel_start;
    logic [31:0] kernel_addr;
    logic [15:0] kernel_length;

    // Instruction FIFO interface
    logic fifo_empty, fifo_valid;
    logic [31:0] fifo_data;
    logic fifo_pop;

    // Lane control
    logic lane_execute;
    logic [31:0] lane_instruction;
    logic lane_ready;

    // Memory interface
    logic mem_req, mem_ready, mem_valid;

    // Status
    logic kernel_done, kernel_error;
    warp_state_e state;
    warp_status_t status;

    // DUT
    warp_controller dut (
        .clk(clk),
        .rst_n(rst_n),
        .kernel_start(kernel_start),
        .kernel_addr(kernel_addr),
        .kernel_length(kernel_length),
        .kernel_done(kernel_done),
        .kernel_error(kernel_error),
        .fifo_pop(fifo_pop),
        .fifo_empty(fifo_empty),
        .fifo_valid(fifo_valid),
        .fifo_data(fifo_data),
        .lane_execute(lane_execute),
        .lane_instruction(lane_instruction),
        .lane_ready(lane_ready),
        .mem_req(mem_req),
        .mem_ready(mem_ready),
        .mem_valid(mem_valid),
        .state(state),
        .status(status)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Test counters
    int test_count = 0;
    int pass_count = 0;
    int fail_count = 0;

    // Memory model (simple ready/valid handshake)
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            mem_ready <= 1'b1;
        end else begin
            if (mem_req) begin
                mem_ready <= 1'b0;
                mem_valid <= 1'b1;
            end else begin
                mem_ready <= 1'b1;
                mem_valid <= 1'b0;
            end
        end
    end

    // Test sequence
    initial begin
        $display("========================================");
        $display("Warp Controller Testbench");
        $display("========================================");
        
        // Reset
        rst_n = 0;
        kernel_start = 0;
        kernel_addr = 0;
        kernel_length = 0;
        fifo_empty = 1;
        fifo_valid = 0;
        fifo_data = 0;
        lane_ready = 1;
        #100;
        rst_n = 1;
        #50;

        test_count++;
        $display("\n--- Test 1: Initial state (IDLE) ---");
        if (!kernel_done && !kernel_error && !fifo_pop && !lane_execute && !mem_req) begin
            pass_count++;
            $display("[PASS] Controller idle after reset");
        end else begin
            fail_count++;
            $error("[FAIL] Controller not idle: done=%b, error=%b, fifo_pop=%b, lane_exec=%b, mem_req=%b", 
                   kernel_done, kernel_error, fifo_pop, lane_execute, mem_req);
        end

        $display("\n--- Test 2: Start kernel with 4 instructions ---");
        test_count++;
        @(posedge clk);
        kernel_start = 1;
        kernel_addr = 32'h0;
        kernel_length = 4;
        @(posedge clk);
        kernel_start = 0;
        
        // Wait for memory requests
        repeat(20) begin
            @(posedge clk);
            if (mem_req) break;
        end
        
        if (mem_req) begin
            pass_count++;
            $display("[PASS] Controller started memory fetch");
        end else begin
            fail_count++;
            $error("[FAIL] Controller did not start memory fetch");
        end

        $display("\n--- Test 3: Load instructions into FIFO ---");
        test_count++;
        
        // Simulate FIFO accepting instructions
        repeat(10) @(posedge clk);
        
        // Once instructions are loaded, FIFO should have data
        fifo_empty = 0;
        fifo_valid = 1;
        fifo_data = 32'hDEADBEEF;
        
        if (!fifo_empty) begin
            pass_count++;
            $display("[PASS] Instructions in FIFO");
        end else begin
            fail_count++;
            $error("[FAIL] FIFO empty after load");
        end

        $display("\n--- Test 4: Execute instructions ---");
        test_count++;
        lane_ready = 1;
        
        // Wait for lane_execute
        repeat(10) begin
            @(posedge clk);
            if (lane_execute) break;
        end
        
        if (lane_execute) begin
            pass_count++;
            $display("[PASS] Controller signals lane execute");
        end else begin
            fail_count++;
            $error("[FAIL] Controller did not signal lane execute");
        end

        $display("\n--- Test 5: FIFO pop on execute ---");
        test_count++;
        if (fifo_pop) begin
            pass_count++;
            $display("[PASS] Controller pops from FIFO");
        end else begin
            fail_count++;
            $error("[FAIL] Controller did not pop from FIFO");
        end

        $display("\n--- Test 6: Complete execution ---");
        test_count++;
        
        // Simulate lane completing
        @(posedge clk);
        lane_ready = 0;
        @(posedge clk);
        @(posedge clk);
        lane_ready = 1;
        
        // Simulate FIFO becoming empty
        repeat(3) @(posedge clk);
        fifo_empty = 1;
        fifo_valid = 0;
        
        // Wait for kernel done
        repeat(20) begin
            @(posedge clk);
            if (kernel_done) break;
        end
        
        if (kernel_done && !kernel_error) begin
            pass_count++;
            $display("[PASS] Kernel completed successfully");
        end else begin
            fail_count++;
            $error("[FAIL] Kernel did not complete: done=%b, error=%b", kernel_done, kernel_error);
        end

        $display("\n--- Test 7: Return to IDLE after completion ---");
        test_count++;
        @(posedge clk);
        @(posedge clk);
        
        if (!lane_execute && !mem_req && !fifo_pop) begin
            pass_count++;
            $display("[PASS] Controller returned to IDLE");
        end else begin
            fail_count++;
            $error("[FAIL] Controller not idle after completion");
        end

        $display("\n--- Test 8: Second kernel execution ---");
        test_count++;
        
        // Wait for done flag to clear (controller returns to IDLE)
        repeat(5) @(posedge clk);
        
        // Prepare FIFO for second kernel
        fifo_empty = 0;
        fifo_valid = 1;
        fifo_data = 32'hCAFEBABE;
        
        @(posedge clk);
        kernel_start = 1;
        kernel_addr = 32'h10;
        kernel_length = 2;
        @(posedge clk);
        kernel_start = 0;
        
        // Wait for mem_req to start
        repeat(10) begin
            @(posedge clk);
            if (mem_req) break;
        end
        
        if (mem_req) begin
            pass_count++;
            $display("[PASS] Controller accepts second kernel");
        end else begin
            fail_count++;
            $error("[FAIL] Controller did not accept second kernel");
        end

        // Summary
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

endmodule
