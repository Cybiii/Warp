// Warp Controller Testbench
// SystemVerilog testbench

`timescale 1ns/1ps

`include "warp_pkg.sv"

module tb_warp_controller;

    import warp_pkg::*;

    // Clock and reset
    logic clk;
    logic rst_n;

    // TODO: Add testbench signals
    // TODO: Instantiate warp_controller
    // TODO: Test FSM state transitions
    // TODO: Test control signals

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
        
        // TODO: Test IDLE -> LOAD transition
        // TODO: Test LOAD -> EXECUTE transition
        // TODO: Test EXECUTE -> STALL transition
        // TODO: Test STALL -> EXECUTE transition
        // TODO: Test EXECUTE -> DONE transition
        
        #1000;
        $finish;
    end

endmodule

