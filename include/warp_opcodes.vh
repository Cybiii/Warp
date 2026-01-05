// Warp Engine Instruction Opcodes
// TODO: Define all instruction opcodes

// ALU Operations
`define OP_ADD  4'b0000
`define OP_MUL  4'b0001
`define OP_FMA  4'b0010
`define OP_MAX  4'b0011
`define OP_RELU 4'b0100

// Memory Operations
`define OP_LOAD  4'b0101
`define OP_STORE 4'b0110

// Instruction Field Positions
`define FIELD_OPCODE     31:28
`define FIELD_DST     27:23
`define FIELD_SRC1    22:18
`define FIELD_SRC2    17:13
`define FIELD_IMM     12:0

// RoCC Custom Instruction Opcodes
`define ROCC_OP_KERNEL_START 7'b0000000
`define ROCC_OP_SET_MASK     7'b0000001
`define ROCC_OP_GET_STATUS   7'b0000010

// TODO: Add more opcodes as needed

