// Processing Lane Testbench
// SystemVerilog testbench

`timescale 1ns/1ps

`include "warp_pkg.sv"

module tb_processing_lane;

    import warp_pkg::*;

    // Clock and reset
    logic clk;
    logic rst_n;

    // TODO: Add testbench signals
    // TODO: Instantiate processing_lane
    // TODO: Test with mask enabled
    // TODO: Test with mask disabled
    // TODO: Test pipeline behavior

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
        
        // TODO: Test lane with mask = 1
        // TODO: Test lane with mask = 0
        // TODO: Test pipeline stages
        
        #1000;
        $finish;
    end

endmodule

