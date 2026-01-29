// BlackBox Wrapper for warp_engine
// This module matches the Chisel BlackBox interface

module WarpEngineBlackBox #(
    parameter NUM_LANES = 8,
    parameter DATA_WIDTH = 32,
    parameter REG_FILE_SIZE = 32,
    parameter FIFO_DEPTH = 16,
    parameter ADDR_WIDTH = 32
)(
    input  logic clk,
    input  logic rst_n,
    
    // RoCC Command interface
    input  logic cmd_valid,
    output logic cmd_ready,
    input  logic [6:0] cmd_funct,
    input  logic [4:0] cmd_rs1,
    input  logic [4:0] cmd_rs2,
    input  logic [4:0] cmd_rd,
    input  logic [31:0] cmd_rs1_data,
    input  logic [31:0] cmd_rs2_data,
    
    // RoCC Response interface
    output logic resp_valid,
    input  logic resp_ready,
    output logic [4:0] resp_rd,
    output logic [31:0] resp_data,
    
    // RoCC Memory interface
    output logic mem_req_valid,
    input  logic mem_req_ready,
    output logic [ADDR_WIDTH-1:0] mem_req_addr,
    output logic mem_req_write,
    output logic [31:0] mem_req_data,
    input  logic mem_resp_valid,
    input  logic [31:0] mem_resp_data
);

    // Instantiate the actual warp_engine
    warp_engine #(
        .NUM_LANES(NUM_LANES),
        .DATA_WIDTH(DATA_WIDTH),
        .REG_FILE_SIZE(REG_FILE_SIZE),
        .FIFO_DEPTH(FIFO_DEPTH),
        .ADDR_WIDTH(ADDR_WIDTH)
    ) warp_engine_inst (
        .clk(clk),
        .rst_n(rst_n),
        
        // RoCC Command
        .cmd_valid(cmd_valid),
        .cmd_ready(cmd_ready),
        .cmd_funct(cmd_funct),
        .cmd_rs1(cmd_rs1),
        .cmd_rs2(cmd_rs2),
        .cmd_rd(cmd_rd),
        .cmd_rs1_data(cmd_rs1_data),
        .cmd_rs2_data(cmd_rs2_data),
        
        // RoCC Response
        .resp_valid(resp_valid),
        .resp_ready(resp_ready),
        .resp_rd(resp_rd),
        .resp_data(resp_data),
        
        // RoCC Memory
        .mem_req_valid(mem_req_valid),
        .mem_req_ready(mem_req_ready),
        .mem_req_addr(mem_req_addr),
        .mem_req_write(mem_req_write),
        .mem_req_data(mem_req_data),
        .mem_resp_valid(mem_resp_valid),
        .mem_resp_ready(),  // Tied to 1'b1 inside warp_engine
        .mem_resp_data(mem_resp_data)
    );

endmodule
