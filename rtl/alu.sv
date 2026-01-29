// ALU - Arithmetic Logic Unit


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

    // Intermediate signals for overflow detection
    logic [DATA_WIDTH:0] add_result_ext;        // Extended for ADD overflow
    logic [2*DATA_WIDTH-1:0] mul_result_ext;   // Extended for MUL overflow
    logic [2*DATA_WIDTH-1:0] fma_mul_result;    // MUL result for FMA
    logic [DATA_WIDTH:0] fma_result_ext;        // Extended for FMA overflow
    logic mul_ovf, add_ovf;                      // Overflow flags for FMA

    always_comb begin
        result = '0;
        overflow = 1'b0;
        ready = 1'b1;

        // Compute extended results for overflow detection
        add_result_ext = {1'b0, operand1} + {1'b0, operand2};
        mul_result_ext = $signed(operand1) * $signed(operand2);
        fma_mul_result = $signed(operand1) * $signed(operand2);
        fma_result_ext = {1'b0, fma_mul_result[DATA_WIDTH-1:0]} + {1'b0, operand3};

        case (opcode)
            OP_ADD: begin
                result = add_result_ext[DATA_WIDTH-1:0];
                // Overflow: if both operands same sign, result should have same sign
                // Signed overflow: (op1[31] == op2[31]) && (result[31] != op1[31])
                overflow = (operand1[DATA_WIDTH-1] == operand2[DATA_WIDTH-1]) && 
                           (result[DATA_WIDTH-1] != operand1[DATA_WIDTH-1]);
            end
            
            OP_MUL: begin
                result = mul_result_ext[DATA_WIDTH-1:0];
                // Overflow: if upper bits don't match sign extension of result
                // For signed multiplication, upper bits should be sign extension of lower bits
                overflow = (mul_result_ext[2*DATA_WIDTH-1:DATA_WIDTH] != {DATA_WIDTH{result[DATA_WIDTH-1]}});
            end
            
            OP_FMA: begin
                // FMA: (op1 * op2) + op3
                result = fma_result_ext[DATA_WIDTH-1:0];
                // Overflow can occur in multiply or add
                // Check multiply overflow first
                mul_ovf = (fma_mul_result[2*DATA_WIDTH-1:DATA_WIDTH] != {DATA_WIDTH{fma_mul_result[DATA_WIDTH-1]}});
                // Check add overflow
                add_ovf = (fma_mul_result[DATA_WIDTH-1] == operand3[DATA_WIDTH-1]) && 
                          (result[DATA_WIDTH-1] != fma_mul_result[DATA_WIDTH-1]);
                overflow = mul_ovf || add_ovf;
            end
            
            OP_MAX: begin
                // Signed comparison for MAX
                result = ($signed(operand1) > $signed(operand2)) ? operand1 : operand2;
                overflow = 1'b0; // MAX never overflows
            end
            
            OP_RELU: begin
                // RELU: max(0, op1) - clamps negative values to zero
                result = (operand1[DATA_WIDTH-1]) ? '0 : operand1; // Sign bit check
                overflow = 1'b0; // RELU never overflows
            end
            
            default: begin
                result = '0;
                overflow = 1'b0;
            end
        endcase
    end

endmodule

