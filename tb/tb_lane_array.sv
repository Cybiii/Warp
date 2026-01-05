// Lane Array Testbench
// SystemVerilog testbench

`timescale 1ns/1ps

`include "warp_pkg.sv"

module tb_lane_array;

    import warp_pkg::*;

    // Clock and reset
    logic clk;
    logic rst_n;

    // TODO: Add testbench signals
    // TODO: Instantiate lane_array
    // TODO: Test instruction broadcasting to all lanes
    // TODO: Test result collection
    // TODO: Test synchronization

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
        
        // TODO: Test with all lanes enabled
        // TODO: Test with some lanes disabled (mask)
        // TODO: Test synchronization
        
        #1000;
        $finish;
    end

endmodule

