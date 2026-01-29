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
    
    // State machine for memory operations
    typedef enum logic [1:0] {
        MEM_IDLE,
        MEM_REQUEST,
        MEM_WAIT_RESP,
        MEM_DONE
    } mem_state_e;
    
    mem_state_e state_r, state_next;
    logic [$clog2(NUM_LANES)-1:0] current_lane;
    logic [DATA_WIDTH-1:0] write_data_r;

    // Address calculation
    always_comb begin
        calculated_addr = base_addr + (current_lane * stride) + {{19{offset[12]}}, offset};
    end

    // State machine for memory requests
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state_r <= MEM_IDLE;
            current_lane <= '0;
            write_data_r <= '0;
        end else begin
            state_r <= state_next;
            
            if (state_r == MEM_IDLE && (load_req || store_req)) begin
                current_lane <= '0;
            end else if (state_r == MEM_WAIT_RESP && mem_resp_valid) begin
                if (current_lane < NUM_LANES - 1 && lane_enable[current_lane + 1]) begin
                    current_lane <= current_lane + 1'b1;
                end else begin
                    // Find next enabled lane
                    for (int i = current_lane + 1; i < NUM_LANES; i++) begin
                        if (lane_enable[i]) begin
                            current_lane <= i;
                            break;
                        end
                    end
                end
            end
            
            if (store_req && state_r == MEM_IDLE) begin
                write_data_r <= mem_req_data;
            end
        end
    end

    // Next state logic
    always_comb begin
        state_next = state_r;
        
        case (state_r)
            MEM_IDLE: begin
                if (load_req || store_req) begin
                    state_next = MEM_REQUEST;
                end
            end
            
            MEM_REQUEST: begin
                if (mem_req_ready) begin
                    state_next = MEM_WAIT_RESP;
                end
            end
            
            MEM_WAIT_RESP: begin
                if (mem_resp_valid) begin
                    // Check if all enabled lanes are done
                    if (current_lane >= NUM_LANES - 1 || 
                        !(|(lane_enable & ~((1 << (current_lane + 1)) - 1)))) begin
                        state_next = MEM_DONE;
                    end else begin
                        state_next = MEM_REQUEST;
                    end
                end
            end
            
            MEM_DONE: begin
                state_next = MEM_IDLE;
            end
        endcase
    end

    // Output assignments
    assign mem_req_valid = (state_r == MEM_REQUEST) && lane_enable[current_lane];
    assign mem_req_addr = calculated_addr;
    assign mem_req_write = store_req && (state_r != MEM_IDLE);
    assign mem_resp_ready = (state_r == MEM_WAIT_RESP);
    assign load_done = (state_r == MEM_DONE) && !store_req;
    assign store_done = (state_r == MEM_DONE) && store_req;

endmodule

