// Top-level testbench for warp engine
// SystemVerilog testbench

`timescale 1ns/1ps

`include "warp_pkg.sv"

module tb_warp_engine;

    import warp_pkg::*;

    // Clock and reset
    logic clk;
    logic rst_n;

    // TODO: Add testbench signals
    // TODO: Instantiate warp_engine
    // TODO: Create test stimulus
    // TODO: Add verification checks

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Reset generation
    initial begin
        rst_n = 0;
        #100;
        rst_n = 1;
    end

    // Test sequence
    initial begin
        // TODO: Initialize signals
        wait(rst_n);
        #10;
        
        // TODO: Run test cases
        // TODO: Check results
        
        #1000;
        $finish;
    end

endmodule

