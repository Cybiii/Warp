// ALU - Arithmetic Logic Unit
// SystemVerilog implementation

`include "warp_pkg.sv"

module alu #(
    parameter int DATA_WIDTH = warp_pkg::DATA_WIDTH
)(
    input  logic clk,
    input  logic rst_n,

    // Operation
    input  warp_pkg::alu_opcode_e opcode,

    // Operands
    input  logic [DATA_WIDTH-1:0] operand1,
    input  logic [DATA_WIDTH-1:0] operand2,
    input  logic [DATA_WIDTH-1:0] operand3, // For FMA

    // Result
    output logic [DATA_WIDTH-1:0] result,
    output logic overflow,
    output logic ready
);

    import warp_pkg::*;

    // TODO: Implement ADD operation
    // TODO: Implement MUL operation
    // TODO: Implement FMA operation
    // TODO: Implement MAX operation
    // TODO: Implement RELU operation
    // TODO: Implement overflow/saturation

    always_comb begin
        result = '0;
        overflow = 1'b0;
        ready = 1'b1;

        case (opcode)
            OP_ADD: begin
                // TODO: Implement ADD
                result = operand1 + operand2;
            end
            OP_MUL: begin
                // TODO: Implement MUL
                result = operand1 * operand2;
            end
            OP_FMA: begin
                // TODO: Implement FMA: (op1 * op2) + op3
                result = (operand1 * operand2) + operand3;
            end
            OP_MAX: begin
                // TODO: Implement MAX
                result = (operand1 > operand2) ? operand1 : operand2;
            end
            OP_RELU: begin
                // TODO: Implement RELU: max(0, op1)
                result = (operand1[31]) ? '0 : operand1; // Sign bit check
            end
            default: begin
                result = '0;
            end
        endcase
    end

endmodule

