// Instruction FIFO - Instruction buffer
// SystemVerilog implementation

`include "warp_pkg.sv"

module instruction_fifo #(
    parameter int FIFO_DEPTH = warp_pkg::FIFO_DEPTH,
    parameter int DATA_WIDTH = 32
)(
    input  logic clk,
    input  logic rst_n,

    // Write interface
    input  logic push,
    input  logic [DATA_WIDTH-1:0] data_in,

    // Read interface
    input  logic pop,
    output logic [DATA_WIDTH-1:0] data_out,
    output logic valid,

    // Status
    output logic full,
    output logic empty
);

    import warp_pkg::*;

    // FIFO storage
    logic [DATA_WIDTH-1:0] fifo_mem [FIFO_DEPTH-1:0];
    
    // Pointers
    logic [$clog2(FIFO_DEPTH)-1:0] write_ptr, read_ptr;
    logic [$clog2(FIFO_DEPTH):0] count;

    // TODO: Implement FIFO buffer
    // TODO: Implement overflow/underflow detection
    // TODO: Implement full/empty flags

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            write_ptr <= '0;
            read_ptr <= '0;
            count <= '0;
        end else begin
            // TODO: Implement FIFO logic
        end
    end

    assign empty = (count == 0);
    assign full = (count == FIFO_DEPTH);
    assign valid = !empty;

endmodule

