// Top-level module for Tiny SIMT Vector Engine (Warp)
// SystemVerilog implementation

`include "warp_pkg.sv"

module warp_engine #(
    parameter int NUM_LANES = warp_pkg::NUM_LANES_DEFAULT,
    parameter int DATA_WIDTH = warp_pkg::DATA_WIDTH,
    parameter int REG_FILE_SIZE = warp_pkg::REG_FILE_SIZE,
    parameter int FIFO_DEPTH = warp_pkg::FIFO_DEPTH,
    parameter int ADDR_WIDTH = warp_pkg::ADDR_WIDTH
)(
    // Clock and Reset
    input  logic clk,
    input  logic rst_n,

    // TODO: Add RoCC interface ports
    // Standard RoCC interface signals:
    // - io.cmd.valid, io.cmd.ready, io.cmd.bits.*
    // - io.resp.valid, io.resp.ready, io.resp.bits.*
    // - io.mem.req.*, io.mem.resp.*, io.mem.s2_nack
    // - io.exception.*
);

    import warp_pkg::*;

    // TODO: Instantiate sub-modules
    // - rocc_interface
    // - warp_controller
    // - instruction_fifo
    // - warp_mask
    // - lane_array
    // - memory_interface

endmodule

