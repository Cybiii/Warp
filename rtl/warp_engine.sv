// Top-level module for Tiny SIMT Vector Engine (Warp)
// SystemVerilog implementation


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

    // RoCC Command interface
    input  logic        cmd_valid,
    output logic        cmd_ready,
    input  logic [6:0]  cmd_funct,
    input  logic [4:0]  cmd_rs1,
    input  logic [4:0]  cmd_rs2,
    input  logic [4:0]  cmd_rd,
    input  logic [31:0] cmd_rs1_data,
    input  logic [31:0] cmd_rs2_data,
    
    // RoCC Response interface
    output logic        resp_valid,
    input  logic        resp_ready,
    output logic [4:0]  resp_rd,
    output logic [31:0] resp_data,
    
    // RoCC Memory interface
    output logic        mem_req_valid,
    input  logic        mem_req_ready,
    output logic [ADDR_WIDTH-1:0] mem_req_addr,
    output logic        mem_req_write,
    output logic [31:0] mem_req_data,
    input  logic        mem_resp_valid,
    output logic        mem_resp_ready,
    input  logic [31:0] mem_resp_data
);

    import warp_pkg::*;

    // Internal signals between modules
    
    // RoCC to Controller
    logic        kernel_start;
    logic [31:0] kernel_addr;
    logic [15:0] kernel_length;
    logic        kernel_done;
    logic        kernel_error;
    
    // RoCC to Mask
    logic                 mask_update;
    logic [NUM_LANES-1:0] mask_value;
    logic [NUM_LANES-1:0] lane_enable;
    
    // Controller to FIFO
    logic        fifo_push;
    logic [31:0] fifo_data_in;
    logic        fifo_pop;
    logic [31:0] fifo_data_out;
    logic        fifo_valid;
    logic        fifo_full;
    logic        fifo_empty;
    
    // Controller to Lane Array
    logic        lane_execute;
    logic [31:0] lane_instruction;
    logic        lane_ready;
    
    // Controller to Memory (for instruction fetch)
    logic        ctrl_mem_req;
    logic [31:0] ctrl_mem_addr;
    logic        ctrl_mem_ready;
    logic        ctrl_mem_valid;
    
    // Status
    warp_state_e warp_state;
    warp_status_t warp_status;

    // Instantiate RoCC Interface
    rocc_interface #(
        .NUM_LANES(NUM_LANES),
        .ADDR_WIDTH(ADDR_WIDTH)
    ) rocc_inst (
        .clk(clk),
        .rst_n(rst_n),
        // RoCC ports
        .cmd_valid(cmd_valid),
        .cmd_ready(cmd_ready),
        .cmd_funct(cmd_funct),
        .cmd_rs1(cmd_rs1),
        .cmd_rs2(cmd_rs2),
        .cmd_rd(cmd_rd),
        .cmd_rs1_data(cmd_rs1_data),
        .cmd_rs2_data(cmd_rs2_data),
        .resp_valid(resp_valid),
        .resp_ready(resp_ready),
        .resp_rd(resp_rd),
        .resp_data(resp_data),
        .mem_req_valid(mem_req_valid),
        .mem_req_ready(mem_req_ready),
        .mem_req_addr(mem_req_addr),
        .mem_req_write(mem_req_write),
        .mem_req_data(mem_req_data),
        .mem_resp_valid(mem_resp_valid),
        .mem_resp_ready(mem_resp_ready),
        .mem_resp_data(mem_resp_data),
        // Internal
        .kernel_start(kernel_start),
        .kernel_addr(kernel_addr),
        .kernel_length(kernel_length),
        .kernel_done(kernel_done),
        .kernel_error(kernel_error),
        .mask_update(mask_update),
        .mask_value(mask_value),
        .status(warp_status)
    );

    // Instantiate Warp Controller
    warp_controller #(
        .NUM_LANES(NUM_LANES),
        .FIFO_DEPTH(FIFO_DEPTH)
    ) controller_inst (
        .clk(clk),
        .rst_n(rst_n),
        .kernel_start(kernel_start),
        .kernel_addr(kernel_addr),
        .kernel_length(kernel_length),
        .kernel_done(kernel_done),
        .kernel_error(kernel_error),
        .fifo_pop(fifo_pop),
        .fifo_empty(fifo_empty),
        .fifo_valid(fifo_valid),
        .fifo_data(fifo_data_out),
        .lane_execute(lane_execute),
        .lane_instruction(lane_instruction),
        .lane_ready(lane_ready),
        .mem_req(ctrl_mem_req),
        .mem_addr(ctrl_mem_addr),
        .mem_ready(ctrl_mem_ready),
        .mem_valid(ctrl_mem_valid),
        .state(warp_state),
        .status(warp_status)
    );

    // Instantiate Instruction FIFO
    instruction_fifo #(
        .FIFO_DEPTH(FIFO_DEPTH),
        .DATA_WIDTH(32)
    ) fifo_inst (
        .clk(clk),
        .rst_n(rst_n),
        .push(fifo_push),
        .data_in(fifo_data_in),
        .pop(fifo_pop),
        .data_out(fifo_data_out),
        .valid(fifo_valid),
        .full(fifo_full),
        .empty(fifo_empty)
    );

    // Instantiate Warp Mask
    warp_mask #(
        .NUM_LANES(NUM_LANES)
    ) mask_inst (
        .clk(clk),
        .rst_n(rst_n),
        .mask_update(mask_update),
        .mask_in(mask_value),
        .mask_out(),
        .lane_enable(lane_enable)
    );

    // Instantiate Lane Array
    lane_array #(
        .NUM_LANES(NUM_LANES),
        .DATA_WIDTH(DATA_WIDTH)
    ) lanes_inst (
        .clk(clk),
        .rst_n(rst_n),
        .execute(lane_execute),
        .instruction(lane_instruction),
        .lane_enable(lane_enable),
        .ready(lane_ready)
    );

    // FIFO push logic (from memory responses during instruction load)
    assign fifo_push = ctrl_mem_valid && !fifo_full;
    assign fifo_data_in = mem_resp_data;
    assign ctrl_mem_ready = mem_req_ready;
    assign ctrl_mem_valid = mem_resp_valid;
    
    // Connect controller memory interface to RoCC memory interface
    assign mem_req_valid = ctrl_mem_req;
    assign mem_req_addr = ctrl_mem_addr;
    assign mem_req_write = 1'b0;  // Controller only reads instructions
    assign mem_req_data = '0;
    assign mem_resp_ready = 1'b1;  // Always ready to receive instructions

endmodule

