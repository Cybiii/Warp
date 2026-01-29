// SystemVerilog Package for Warp Engine
// Contains all constants, parameters, and type definitions

package warp_pkg;

    // Configuration Parameters
    parameter int NUM_LANES_DEFAULT = 8;
    parameter int DATA_WIDTH = 32;
    parameter int REG_FILE_SIZE = 32;
    parameter int FIFO_DEPTH = 16;
    parameter int ADDR_WIDTH = 32;

    // State Encodings
    typedef enum logic [2:0] {
        STATE_IDLE    = 3'b000,
        STATE_LOAD    = 3'b001,
        STATE_EXECUTE = 3'b010,
        STATE_STALL   = 3'b011,
        STATE_DONE    = 3'b100
    } warp_state_e;

    // ALU Operation Opcodes
    typedef enum logic [3:0] {
        OP_ADD  = 4'b0000,
        OP_MUL  = 4'b0001,
        OP_FMA  = 4'b0010,
        OP_MAX  = 4'b0011,
        OP_RELU = 4'b0100,
        OP_LOAD = 4'b0101,
        OP_STORE = 4'b0110
    } alu_opcode_e;

    // RoCC Custom Instruction Opcodes
    typedef enum logic [6:0] {
        ROCC_OP_KERNEL_START = 7'b0000000,
        ROCC_OP_SET_MASK     = 7'b0000001,
        ROCC_OP_GET_STATUS   = 7'b0000010
    } rocc_opcode_e;

    // Status Register Bits
    typedef struct packed {
        logic idle;
        logic executing;
        logic done;
        logic error;
        logic fifo_full;
        logic fifo_empty;
    } warp_status_t;

    // Instruction Format (32-bit)
    typedef struct packed {
        logic [3:0]  opcode;    // [31:28]
        logic [4:0]  dst;       // [27:23]
        logic [4:0]  src1;      // [22:18]
        logic [4:0]  src2;      // [17:13]
        logic [12:0] imm;       // [12:0]
    } warp_inst_t;

    // Function to extract opcode from instruction
    function automatic alu_opcode_e get_opcode(logic [31:0] inst);
        return alu_opcode_e'(inst[31:28]);
    endfunction

    // Function to extract destination register
    function automatic logic [4:0] get_dst(logic [31:0] inst);
        return inst[27:23];
    endfunction

    // Function to extract source register 1
    function automatic logic [4:0] get_src1(logic [31:0] inst);
        return inst[22:18];
    endfunction

    // Function to extract source register 2
    function automatic logic [4:0] get_src2(logic [31:0] inst);
        return inst[17:13];
    endfunction

    // Function to extract immediate (sign-extended)
    function automatic logic [31:0] get_imm(logic [31:0] inst);
        return {{19{inst[12]}}, inst[12:0]}; // Sign extend
    endfunction

endpackage

