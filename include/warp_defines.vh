// Warp Engine Constants and Parameters
// TODO: Define all constants and parameters

// Configuration Parameters
`define NUM_LANES_DEFAULT 8
`define DATA_WIDTH 32
`define REG_FILE_SIZE 32
`define FIFO_DEPTH 16
`define ADDR_WIDTH 32

// State Encodings
`define STATE_IDLE    3'b000
`define STATE_LOAD    3'b001
`define STATE_EXECUTE 3'b010
`define STATE_STALL   3'b011
`define STATE_DONE    3'b100

// Status Register Bits
`define STATUS_IDLE        0
`define STATUS_EXECUTING   1
`define STATUS_DONE        2
`define STATUS_ERROR       3
`define STATUS_FIFO_FULL   4
`define STATUS_FIFO_EMPTY  5

// TODO: Add more constants as needed

