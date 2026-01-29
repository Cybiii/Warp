// Processing Lane Testbench
// Tests single lane pipeline: fetch, decode, execute, writeback

`timescale 1ns/1ps

`include "warp_pkg.sv"

module tb_processing_lane;

    import warp_pkg::*;

    // Clock and reset
    logic clk;
    logic rst_n;

    // Control signals
    logic lane_enable;
    logic execute;

    // Instruction input
    logic [31:0] instruction;

    // Ready
    logic ready;

    // DUT
    processing_lane dut (
        .clk(clk),
        .rst_n(rst_n),
        .lane_enable(lane_enable),
        .execute(execute),
        .instruction(instruction),
        .ready(ready)
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

    // Helper function to create instruction
    function logic [31:0] make_inst(
        alu_opcode_e opcode,
        logic [4:0] dst,
        logic [4:0] src1,
        logic [4:0] src2
    );
        return {opcode[3:0], 5'd0, dst, src1, src2, 13'd0};
    endfunction

    // Test task
    task test_lane_instruction(
        input string test_name,
        input logic [31:0] inst
    );
        test_count++;
        
        @(posedge clk);
        execute = 1;
        lane_enable = 1;
        instruction = inst;
        
        @(posedge clk);
        execute = 0;
        
        // Wait for ready (lane completes and goes back to ready)
        repeat(10) begin
            @(posedge clk);
            if (ready) break;
        end
        
        if (ready) begin
            pass_count++;
            $display("[PASS] %s: completed", test_name);
        end else begin
            fail_count++;
            $error("[FAIL] %s: did not complete in time (ready=%b)", test_name, ready);
        end
        
        lane_enable = 1;
        @(posedge clk);
    endtask

    // Test sequence
    initial begin
        $display("========================================");
        $display("Processing Lane Testbench");
        $display("========================================");
        
        // Reset
        rst_n = 0;
        lane_enable = 1;
        execute = 0;
        instruction = 0;
        #100;
        rst_n = 1;
        #50;

        test_count++;
        $display("\n--- Test 1: Initial state ---");
        if (ready) begin
            pass_count++;
            $display("[PASS] Lane ready after reset");
        end else begin
            fail_count++;
            $error("[FAIL] Lane not ready after reset: ready=%b", ready);
        end

        $display("\n--- Test 2: Basic ALU operations ---");
        test_lane_instruction("ADD R1 = R2 + R3", make_inst(OP_ADD, 5'd1, 5'd2, 5'd3));
        test_lane_instruction("MUL R4 = R5 * R6", make_inst(OP_MUL, 5'd4, 5'd5, 5'd6));
        test_lane_instruction("MAX R7 = max(R8, R9)", make_inst(OP_MAX, 5'd7, 5'd8, 5'd9));

        $display("\n--- Test 3: Write to R0 (should be ignored) ---");
        test_lane_instruction("ADD R0 = R1 + R2 (ignored)", make_inst(OP_ADD, 5'd0, 5'd1, 5'd2));

        $display("\n--- Test 4: Same register operations ---");
        test_lane_instruction("ADD R5 = R5 + R5", make_inst(OP_ADD, 5'd5, 5'd5, 5'd5));

        $display("\n--- Test 5: Pipeline stress test (back-to-back) ---");
        for (int i = 0; i < 8; i++) begin
            test_count++;
            @(posedge clk);
            execute = 1;
            enable = 1;
            instruction = make_inst(OP_ADD, i[4:0], i[4:0]+1, i[4:0]+2);
            @(posedge clk);
            execute = 0;
            
            // Wait for completion
            repeat(10) begin
                @(posedge clk);
                if (done) break;
            end
            
            if (done) begin
                pass_count++;
                $display("[PASS] Back-to-back inst %0d completed", i);
            end else begin
                fail_count++;
                $error("[FAIL] Back-to-back inst %0d failed", i);
            end
            enable = 0;
        end

        $display("\n--- Test 6: Disabled lane (enable=0) ---");
        test_count++;
        @(posedge clk);
        enable = 0;  // Disabled
        execute = 1;
        instruction = make_inst(OP_ADD, 5'd10, 5'd11, 5'd12);
        
        repeat(5) @(posedge clk);
        
        if (!done) begin
            pass_count++;
            $display("[PASS] Disabled lane does not execute");
        end else begin
            fail_count++;
            $error("[FAIL] Disabled lane executed instruction");
        end
        
        execute = 0;

        $display("\n--- Test 7: Ready signal check ---");
        test_count++;
        @(posedge clk);
        if (ready) begin
            pass_count++;
            $display("[PASS] Lane ready when idle");
        end else begin
            fail_count++;
            $error("[FAIL] Lane not ready when idle");
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
