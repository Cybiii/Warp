// Instruction FIFO - Instruction buffer
// SystemVerilog implementation


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

    // FIFO implementation with simultaneous push/pop support
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            write_ptr <= '0;
            read_ptr <= '0;
            count <= '0;
        end else begin
            case ({push && !full, pop && !empty})
                2'b10: begin // Push only
                    fifo_mem[write_ptr] <= data_in;
                    write_ptr <= write_ptr + 1'b1;
                    count <= count + 1'b1;
                end
                2'b01: begin // Pop only
                    read_ptr <= read_ptr + 1'b1;
                    count <= count - 1'b1;
                end
                2'b11: begin // Simultaneous push and pop
                    fifo_mem[write_ptr] <= data_in;
                    write_ptr <= write_ptr + 1'b1;
                    read_ptr <= read_ptr + 1'b1;
                    // count stays the same
                end
                default: begin
                    // No operation
                end
            endcase
        end
    end

    // Output data from read pointer
    assign data_out = fifo_mem[read_ptr];
    
    // Status flags
    assign empty = (count == 0);
    assign full = (count == FIFO_DEPTH);
    assign valid = !empty;

endmodule

