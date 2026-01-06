`include "warp_pkg.sv"

module alu #(
    parameter int DATA_WIDTH = warp_pkg::DATA_WIDTH
)(
    input logic clk,
    input logic rst,

    input warp_pkg::alu_opcode_e opcode,

    input logic [DATA_WIDTH-1:0] operand1,
    input logic [DATA_WIDTH-1:0] operand2,
    input logic [DATA_WIDTH-1:0] operand3,
        
    output logic [DATA_WIDTH-1:0] result,
    output logic overflow,
    output logic ready
);
    import warp_pkg::*;

    always_comb begin
        case(opcode)
    end





endmodule