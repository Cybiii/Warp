// Memory Interface - Memory access via RoCC (core-agnostic)
// SystemVerilog implementation

`include "warp_pkg.sv"

module memory_interface #(
    parameter int NUM_LANES = warp_pkg::NUM_LANES_DEFAULT,
    parameter int DATA_WIDTH = warp_pkg::DATA_WIDTH,
    parameter int ADDR_WIDTH = warp_pkg::ADDR_WIDTH
)(
    input  logic clk,
    input  logic rst_n,

    // Lane information
    input  logic [NUM_LANES-1:0] lane_enable,
    input  logic [$clog2(NUM_LANES)-1:0] lane_id,

    // Address calculation
    input  logic [ADDR_WIDTH-1:0] base_addr,
    input  logic [DATA_WIDTH-1:0] stride,
    input  logic [12:0] offset,

    // Memory request
    output logic mem_req_valid,
    input  logic mem_req_ready,
    output logic [ADDR_WIDTH-1:0] mem_req_addr,
    output logic mem_req_write,
    output logic [DATA_WIDTH-1:0] mem_req_data,

    // Memory response
    input  logic mem_resp_valid,
    output logic mem_resp_ready,
    input  logic [DATA_WIDTH-1:0] mem_resp_data,

    // Control
    input  logic load_req,
    input  logic store_req,
    output logic load_done,
    output logic store_done
);

    import warp_pkg::*;

    // Address calculation: base + (lane_id * stride) + offset
    logic [ADDR_WIDTH-1:0] calculated_addr;

    // TODO: Implement memory request generation
    // TODO: Implement address calculation per lane
    // TODO: Implement response handling
    // TODO: Implement backpressure logic

    always_comb begin
        calculated_addr = base_addr + (lane_id * stride) + {{19{offset[12]}}, offset};
    end

    // TODO: Implement memory request/response state machine

endmodule

