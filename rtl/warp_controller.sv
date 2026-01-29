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
    
    // Instruction counter
    logic [15:0] inst_count;
    logic [31:0] fetch_addr;
    
    // Control signals registered
    logic kernel_start_r;
    logic [31:0] kernel_addr_r;
    logic [15:0] kernel_length_r;

    // FSM state register
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state_r <= STATE_IDLE;
            inst_count <= '0;
            fetch_addr <= '0;
            kernel_start_r <= 1'b0;
            kernel_addr_r <= '0;
            kernel_length_r <= '0;
        end else begin
            state_r <= state_next;
            
            // Latch kernel parameters when starting
            if (kernel_start && (state_r == STATE_IDLE)) begin
                kernel_start_r <= 1'b1;
                kernel_addr_r <= kernel_addr;
                kernel_length_r <= kernel_length;
                fetch_addr <= kernel_addr;
                inst_count <= '0;
            end else if (state_r != STATE_IDLE) begin
                kernel_start_r <= 1'b0;
            end
            
            // Update instruction counter and fetch address
            if (state_r == STATE_LOAD && mem_valid && !fifo_pop) begin
                inst_count <= inst_count + 1'b1;
                fetch_addr <= fetch_addr + 4; // 32-bit instructions
            end else if (state_r == STATE_EXECUTE && fifo_pop && lane_ready) begin
                // Instruction consumed
            end
        end
    end

    // Next state logic
    always_comb begin
        state_next = state_r;
        fifo_pop = 1'b0;
        lane_execute = 1'b0;
        lane_instruction = '0;
        mem_req = 1'b0;
        kernel_done = 1'b0;
        kernel_error = 1'b0;
        
        case (state_r)
            STATE_IDLE: begin
                if (kernel_start) begin
                    state_next = STATE_LOAD;
                end
            end
            
            STATE_LOAD: begin
                // Fetch instructions from memory into FIFO
                mem_req = !fifo_full && (inst_count < kernel_length_r);
                
                if (inst_count >= kernel_length_r) begin
                    // All instructions loaded
                    state_next = STATE_EXECUTE;
                end else if (!mem_ready) begin
                    // Memory not ready, stall
                    state_next = STATE_STALL;
                end
            end
            
            STATE_EXECUTE: begin
                if (!fifo_empty && lane_ready) begin
                    // Execute instruction from FIFO
                    lane_execute = 1'b1;
                    lane_instruction = fifo_data;
                    fifo_pop = 1'b1;
                    
                    if (fifo_empty && (inst_count >= kernel_length_r)) begin
                        // Last instruction executed
                        state_next = STATE_DONE;
                    end
                end else if (fifo_empty && (inst_count >= kernel_length_r)) begin
                    // All done
                    state_next = STATE_DONE;
                end else if (!lane_ready) begin
                    // Lanes busy, stay in execute
                    state_next = STATE_EXECUTE;
                end
            end
            
            STATE_STALL: begin
                // Wait for memory to be ready
                if (mem_ready && !fifo_full) begin
                    state_next = STATE_LOAD;
                end
            end
            
            STATE_DONE: begin
                kernel_done = 1'b1;
                state_next = STATE_IDLE;
            end
            
            default: begin
                state_next = STATE_IDLE;
                kernel_error = 1'b1;
            end
        endcase
    end

    // Status output
    assign state = state_r;
    assign status.idle = (state_r == STATE_IDLE);
    assign status.executing = (state_r == STATE_EXECUTE);
    assign status.done = (state_r == STATE_DONE);
    assign status.error = kernel_error;
    assign status.fifo_full = fifo_full;
    assign status.fifo_empty = fifo_empty;

endmodule

