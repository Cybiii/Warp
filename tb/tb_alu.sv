// ALU Testbench
// SystemVerilog testbench

`timescale 1ns/1ps

`include "warp_pkg.sv"

module tb_alu;

    import warp_pkg::*;

    // Clock
    logic clk;
    logic rst_n;

    // ALU signals
    alu_opcode_e opcode;
    logic [31:0] operand1, operand2, operand3;
    logic [31:0] result;
    logic overflow, ready;

    // TODO: Instantiate alu
    alu dut (
        .clk(clk),
        .rst_n(rst_n),
        .opcode(opcode),
        .operand1(operand1),
        .operand2(operand2),
        .operand3(operand3),
        .result(result),
        .overflow(overflow),
        .ready(ready)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Reset
    initial begin
        rst_n = 0;
        #100;
        rst_n = 1;
    end

    // Test counters
    int test_count = 0;
    int pass_count = 0;
    int fail_count = 0;

    // Helper task to run a test
    task test_alu(
        input alu_opcode_e op,
        input logic [31:0] op1,
        input logic [31:0] op2,
        input logic [31:0] op3,
        input logic [31:0] expected_result,
        input logic expected_overflow,
        input string test_name
    );
        test_count++;
        opcode = op;
        operand1 = op1;
        operand2 = op2;
        operand3 = op3;
        #10; // Wait for combinational logic
        
        if (result == expected_result && overflow == expected_overflow) begin
            pass_count++;
            $display("[PASS] %s: result=0x%08X, overflow=%b", test_name, result, overflow);
        end else begin
            fail_count++;
            $error("[FAIL] %s: expected result=0x%08X, got 0x%08X | expected overflow=%b, got %b", 
                   test_name, expected_result, result, expected_overflow, overflow);
        end
    endtask

    // Test sequence
    initial begin
        $display("========================================");
        $display("ALU Testbench Starting");
        $display("========================================");
        
        wait(rst_n);
        #10;

        // ========== ADD Operation Tests ==========
        $display("\n--- Testing ADD Operation ---");
        test_alu(OP_ADD, 32'h10, 32'h20, 32'h0, 32'h30, 1'b0, "ADD: 0x10 + 0x20");
        test_alu(OP_ADD, 32'hFFFFFFFF, 32'h1, 32'h0, 32'h0, 1'b0, "ADD: -1 + 1 = 0");
        test_alu(OP_ADD, 32'h7FFFFFFF, 32'h1, 32'h0, 32'h80000000, 1'b1, "ADD: MAX_INT + 1 (overflow)");
        test_alu(OP_ADD, 32'h80000000, 32'hFFFFFFFF, 32'h0, 32'h7FFFFFFF, 1'b1, "ADD: MIN_INT + -1 (overflow)");
        test_alu(OP_ADD, 32'h5, 32'hFFFFFFFF, 32'h0, 32'h4, 1'b0, "ADD: 5 + -1 = 4");
        test_alu(OP_ADD, 32'h80000000, 32'h80000000, 32'h0, 32'h0, 1'b1, "ADD: MIN_INT + MIN_INT (overflow)");

        // ========== MUL Operation Tests ==========
        $display("\n--- Testing MUL Operation ---");
        test_alu(OP_MUL, 32'h5, 32'h6, 32'h0, 32'h1E, 1'b0, "MUL: 5 * 6 = 30");
        test_alu(OP_MUL, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'h0, 32'h1, 1'b0, "MUL: -1 * -1 = 1");
        test_alu(OP_MUL, 32'h10000, 32'h10000, 32'h0, 32'h0, 1'b1, "MUL: 65536 * 65536 (overflow)");
        test_alu(OP_MUL, 32'h7FFFFFFF, 32'h2, 32'h0, 32'hFFFFFFFE, 1'b1, "MUL: MAX_INT * 2 (overflow)");
        test_alu(OP_MUL, 32'h5, 32'hFFFFFFFF, 32'h0, 32'hFFFFFFFB, 1'b0, "MUL: 5 * -1 = -5");
        test_alu(OP_MUL, 32'h0, 32'hFFFFFFFF, 32'h0, 32'h0, 1'b0, "MUL: 0 * -1 = 0");

        // ========== FMA Operation Tests ==========
        $display("\n--- Testing FMA Operation ---");
        test_alu(OP_FMA, 32'h2, 32'h3, 32'h4, 32'hA, 1'b0, "FMA: (2 * 3) + 4 = 10");
        test_alu(OP_FMA, 32'hFFFFFFFF, 32'h2, 32'h5, 32'h3, 1'b0, "FMA: (-1 * 2) + 5 = 3");
        test_alu(OP_FMA, 32'h10000, 32'h10000, 32'h0, 32'h0, 1'b1, "FMA: (65536 * 65536) + 0 (mul overflow)");
        test_alu(OP_FMA, 32'h7FFFFFFF, 32'h1, 32'h7FFFFFFF, 32'hFFFFFFFE, 1'b1, "FMA: (MAX_INT * 1) + MAX_INT (add overflow)");
        test_alu(OP_FMA, 32'h5, 32'h6, 32'hFFFFFFFF, 32'h1D, 1'b0, "FMA: (5 * 6) + -1 = 29");

        // ========== MAX Operation Tests ==========
        $display("\n--- Testing MAX Operation ---");
        test_alu(OP_MAX, 32'h10, 32'h20, 32'h0, 32'h20, 1'b0, "MAX: max(16, 32) = 32");
        test_alu(OP_MAX, 32'hFFFFFFFF, 32'h1, 32'h0, 32'h1, 1'b0, "MAX: max(-1, 1) = 1");
        test_alu(OP_MAX, 32'hFFFFFFFF, 32'hFFFFFFFE, 32'h0, 32'hFFFFFFFF, 1'b0, "MAX: max(-1, -2) = -1");
        test_alu(OP_MAX, 32'h80000000, 32'h7FFFFFFF, 32'h0, 32'h7FFFFFFF, 1'b0, "MAX: max(MIN_INT, MAX_INT) = MAX_INT");
        test_alu(OP_MAX, 32'h5, 32'h5, 32'h0, 32'h5, 1'b0, "MAX: max(5, 5) = 5");

        // ========== RELU Operation Tests ==========
        $display("\n--- Testing RELU Operation ---");
        test_alu(OP_RELU, 32'h10, 32'h0, 32'h0, 32'h10, 1'b0, "RELU: relu(16) = 16");
        test_alu(OP_RELU, 32'hFFFFFFFF, 32'h0, 32'h0, 32'h0, 1'b0, "RELU: relu(-1) = 0");
        test_alu(OP_RELU, 32'h0, 32'h0, 32'h0, 32'h0, 1'b0, "RELU: relu(0) = 0");
        test_alu(OP_RELU, 32'h7FFFFFFF, 32'h0, 32'h0, 32'h7FFFFFFF, 1'b0, "RELU: relu(MAX_INT) = MAX_INT");
        test_alu(OP_RELU, 32'h80000000, 32'h0, 32'h0, 32'h0, 1'b0, "RELU: relu(MIN_INT) = 0");
        test_alu(OP_RELU, 32'h5, 32'h0, 32'h0, 32'h5, 1'b0, "RELU: relu(5) = 5");

        // ========== Test Summary ==========
        #10;
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

