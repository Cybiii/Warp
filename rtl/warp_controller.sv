// Warp Controller - Main control unit FSM
// SystemVerilog implementation

`include "warp_pkg.sv"

module warp_controller #(
    parameter int NUM_LANES = warp_pkg::NUM_LANES_DEFAULT,
    parameter int FIFO_DEPTH = warp_pkg::FIFO_DEPTH
)(
    input  logic clk,
    input  logic rst_n,

    // Control signals
    input  logic kernel_start,
    input  logic [31:0] kernel_addr,
    input  logic [15:0] kernel_length,
    output logic kernel_done,
    output logic kernel_error,

    // FIFO interface
    output logic fifo_pop,
    input  logic fifo_empty,
    input  logic fifo_valid,
    input  logic [31:0] fifo_data,

    // Lane array interface
    output logic lane_execute,
    output logic [31:0] lane_instruction,
    input  logic lane_ready,

    // Memory interface
    output logic mem_req,
    input  logic mem_ready,
    input  logic mem_valid,

    // Status
    output warp_pkg::warp_state_e state,
    output warp_pkg::warp_status_t status
);

    import warp_pkg::*;

    // State register
    warp_state_e state_r, state_next;

    // TODO: Implement FSM
    // TODO: Implement instruction fetch logic
    // TODO: Implement lane control
    // TODO: Implement stall detection

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state_r <= STATE_IDLE;
        end else begin
            state_r <= state_next;
        end
    end

    always_comb begin
        state_next = state_r;
        // TODO: Implement state transitions
    end

    assign state = state_r;

endmodule

