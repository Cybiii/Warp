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

    // Test sequence
    initial begin
        wait(rst_n);
        #10;

        // TODO: Test ADD operation
        opcode = OP_ADD;
        operand1 = 32'h10;
        operand2 = 32'h20;
        #10;
        assert (result == 32'h30) else $error("ADD test failed");

        // TODO: Test MUL operation
        opcode = OP_MUL;
        operand1 = 32'h5;
        operand2 = 32'h6;
        #10;
        assert (result == 32'h1E) else $error("MUL test failed");

        // TODO: Test FMA operation
        opcode = OP_FMA;
        operand1 = 32'h2;
        operand2 = 32'h3;
        operand3 = 32'h4;
        #10;
        assert (result == 32'hA) else $error("FMA test failed");

        // TODO: Test MAX operation
        opcode = OP_MAX;
        operand1 = 32'h10;
        operand2 = 32'h20;
        #10;
        assert (result == 32'h20) else $error("MAX test failed");

        // TODO: Test RELU operation
        opcode = OP_RELU;
        operand1 = 32'h10;
        #10;
        assert (result == 32'h10) else $error("RELU positive test failed");
        
        operand1 = 32'hFFFFFFFF; // -1
        #10;
        assert (result == 32'h0) else $error("RELU negative test failed");

        // TODO: Test overflow cases
        #100;
        $finish;
    end

endmodule

