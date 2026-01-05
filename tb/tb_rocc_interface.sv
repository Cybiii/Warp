// RoCC Interface Testbench
// SystemVerilog testbench

`timescale 1ns/1ps

`include "warp_pkg.sv"

module tb_rocc_interface;

    import warp_pkg::*;

    // Clock and reset
    logic clk;
    logic rst_n;

    // TODO: Add testbench signals
    // TODO: Instantiate rocc_interface
    // TODO: Simulate RoCC command interface
    // TODO: Test custom instructions

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

    initial begin
        wait(rst_n);
        #10;
        
        // TODO: Test kernel_start instruction
        // TODO: Test set_mask instruction
        // TODO: Test get_status instruction
        // TODO: Test memory requests
        
        #1000;
        $finish;
    end

endmodule

