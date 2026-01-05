// RoCC Interface - Standard RoCC command decoder (core-agnostic)
// SystemVerilog implementation

`include "warp_pkg.sv"

module rocc_interface #(
    parameter int NUM_LANES = warp_pkg::NUM_LANES_DEFAULT,
    parameter int ADDR_WIDTH = warp_pkg::ADDR_WIDTH
)(
    input  logic clk,
    input  logic rst_n,

    // TODO: Add RoCC interface ports following standard RoCC spec
    // Command interface
    // input  logic        cmd_valid,
    // output logic        cmd_ready,
    // input  logic [31:0] cmd_inst,
    // input  logic [31:0] cmd_rs1,
    // input  logic [31:0] cmd_rs2,
    // input  logic        cmd_rs1_valid,
    // input  logic        cmd_rs2_valid,
    
    // Response interface
    // output logic        resp_valid,
    // input  logic        resp_ready,
    // output logic [4:0]  resp_rd,
    // output logic [31:0] resp_data,
    
    // Memory interface
    // output logic        mem_req_valid,
    // input  logic        mem_req_ready,
    // output logic [31:0] mem_req_addr,
    // output logic        mem_req_write,
    // output logic [31:0] mem_req_data,
    // input  logic        mem_resp_valid,
    // output logic        mem_resp_ready,
    // input  logic [31:0] mem_resp_data

    // Internal interfaces
    // TODO: Add internal signals to warp_controller, memory_interface, etc.
);

    import warp_pkg::*;

    // TODO: Implement command decoding
    // TODO: Implement kernel descriptor handling
    // TODO: Implement memory request handling
    // TODO: Implement status reporting

endmodule

