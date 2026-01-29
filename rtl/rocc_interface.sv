// RoCC Interface - Standard RoCC command decoder (core-agnostic)
// SystemVerilog implementation

`include "warp_pkg.sv"

module rocc_interface #(
    parameter int NUM_LANES = warp_pkg::NUM_LANES_DEFAULT,
    parameter int ADDR_WIDTH = warp_pkg::ADDR_WIDTH
)(
    input  logic clk,
    input  logic rst_n,

    // RoCC Command interface (from core)
    input  logic        cmd_valid,
    output logic        cmd_ready,
    input  logic [6:0]  cmd_funct,
    input  logic [4:0]  cmd_rs1,
    input  logic [4:0]  cmd_rs2,
    input  logic [4:0]  cmd_rd,
    input  logic [31:0] cmd_rs1_data,
    input  logic [31:0] cmd_rs2_data,
    
    // RoCC Response interface (to core)
    output logic        resp_valid,
    input  logic        resp_ready,
    output logic [4:0]  resp_rd,
    output logic [31:0] resp_data,
    
    // RoCC Memory interface (to L1 cache)
    output logic        mem_req_valid,
    input  logic        mem_req_ready,
    output logic [ADDR_WIDTH-1:0] mem_req_addr,
    output logic        mem_req_write,
    output logic [31:0] mem_req_data,
    input  logic        mem_resp_valid,
    output logic        mem_resp_ready,
    input  logic [31:0] mem_resp_data,

    // Internal warp controller interface
    output logic        kernel_start,
    output logic [31:0] kernel_addr,
    output logic [15:0] kernel_length,
    input  logic        kernel_done,
    input  logic        kernel_error,
    
    // Warp mask interface
    output logic                 mask_update,
    output logic [NUM_LANES-1:0] mask_value,
    
    // Status interface
    input  warp_pkg::warp_status_t status
);

    import warp_pkg::*;

    // Command decode
    rocc_opcode_e opcode;
    assign opcode = rocc_opcode_e'(cmd_funct);
    
    // Response generation
    logic [4:0]  resp_rd_r;
    logic [31:0] resp_data_r;
    logic resp_valid_r;
    
    // Captured command for processing
    rocc_opcode_e opcode_r;
    logic [31:0] cmd_rs1_data_r;
    logic [31:0] cmd_rs2_data_r;
    
    // State for command handling
    typedef enum logic [1:0] {
        CMD_IDLE,
        CMD_PROCESS,
        CMD_WAIT_DONE,
        CMD_RESPOND
    } cmd_state_e;
    
    cmd_state_e cmd_state_r, cmd_state_next;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            cmd_state_r <= CMD_IDLE;
            resp_rd_r <= '0;
            resp_data_r <= '0;
            resp_valid_r <= 1'b0;
            opcode_r <= ROCC_OP_GET_STATUS;
            cmd_rs1_data_r <= '0;
            cmd_rs2_data_r <= '0;
        end else begin
            cmd_state_r <= cmd_state_next;
            
            // Capture command when accepting it
            if (cmd_state_r == CMD_IDLE && cmd_valid) begin
                opcode_r <= opcode;
                cmd_rs1_data_r <= cmd_rs1_data;
                cmd_rs2_data_r <= cmd_rs2_data;
                resp_rd_r <= cmd_rd;
            end
            
            if (cmd_state_r == CMD_RESPOND) begin
                resp_valid_r <= 1'b1;
                case (opcode_r)
                    ROCC_OP_GET_STATUS: begin
                        resp_data_r <= {26'b0, status};
                    end
                    default: begin
                        resp_data_r <= '0;
                    end
                endcase
            end else if (resp_ready) begin
                resp_valid_r <= 1'b0;
            end
        end
    end

    // Command processing FSM
    always_comb begin
        cmd_state_next = cmd_state_r;
        cmd_ready = 1'b0;
        kernel_start = 1'b0;
        kernel_addr = '0;
        kernel_length = '0;
        mask_update = 1'b0;
        mask_value = '0;
        
        case (cmd_state_r)
            CMD_IDLE: begin
                cmd_ready = 1'b1;
                if (cmd_valid) begin
                    cmd_state_next = CMD_PROCESS;
                end
            end
            
            CMD_PROCESS: begin
                case (opcode_r)
                    ROCC_OP_KERNEL_START: begin
                        // rs1 = kernel address, rs2[15:0] = length
                        kernel_start = 1'b1;
                        kernel_addr = cmd_rs1_data_r;
                        kernel_length = cmd_rs2_data_r[15:0];
                        cmd_state_next = CMD_WAIT_DONE;
                    end
                    
                    ROCC_OP_SET_MASK: begin
                        // rs1 = mask value (lower NUM_LANES bits)
                        mask_update = 1'b1;
                        mask_value = cmd_rs1_data_r[NUM_LANES-1:0];
                        cmd_state_next = CMD_RESPOND;
                    end
                    
                    ROCC_OP_GET_STATUS: begin
                        // Return status in response
                        cmd_state_next = CMD_RESPOND;
                    end
                    
                    default: begin
                        cmd_state_next = CMD_RESPOND;
                    end
                endcase
            end
            
            CMD_WAIT_DONE: begin
                if (kernel_done || kernel_error) begin
                    cmd_state_next = CMD_RESPOND;
                end
            end
            
            CMD_RESPOND: begin
                if (resp_valid_r && resp_ready) begin
                    cmd_state_next = CMD_IDLE;
                end
            end
        endcase
    end

    // Output assignments
    assign resp_valid = resp_valid_r;
    assign resp_rd = resp_rd_r;
    assign resp_data = resp_data_r;
    
    // Pass through memory interface
    // (In full implementation, this would be managed by the controller)
    assign mem_resp_ready = 1'b1;

endmodule

