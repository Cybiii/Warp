// Lane Array - Array of processing lanes
// SystemVerilog implementation

`include "warp_pkg.sv"

module lane_array #(
    parameter int NUM_LANES = warp_pkg::NUM_LANES_DEFAULT,
    parameter int DATA_WIDTH = warp_pkg::DATA_WIDTH
)(
    input  logic clk,
    input  logic rst_n,

    // Control
    input  logic execute,
    input  logic [31:0] instruction,
    input  logic [NUM_LANES-1:0] lane_enable,
    output logic ready,

    // TODO: Add other interfaces as needed
);

    import warp_pkg::*;

    // Per-lane ready signals
    logic [NUM_LANES-1:0] lane_ready;
    
    // Synchronization: all enabled lanes must be ready
    always_comb begin
        ready = 1'b1;
        for (int i = 0; i < NUM_LANES; i++) begin
            if (lane_enable[i]) begin
                ready = ready && lane_ready[i];
            end
        end
    end

    // Generate processing lanes
    genvar i;
    generate
        for (i = 0; i < NUM_LANES; i++) begin : gen_lanes
            processing_lane #(
                .LANE_ID(i),
                .DATA_WIDTH(DATA_WIDTH)
            ) lane_inst (
                .clk(clk),
                .rst_n(rst_n),
                .execute(execute),
                .instruction(instruction),
                .lane_enable(lane_enable[i]),
                .ready(lane_ready[i])
            );
        end
    endgenerate

endmodule

