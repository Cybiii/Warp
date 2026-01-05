// Warp Mask - Per-lane enable/disable register and predication logic
// SystemVerilog implementation

`include "warp_pkg.sv"

module warp_mask #(
    parameter int NUM_LANES = warp_pkg::NUM_LANES_DEFAULT
)(
    input  logic clk,
    input  logic rst_n,

    // Mask update
    input  logic mask_update,
    input  logic [NUM_LANES-1:0] mask_in,

    // Current mask
    output logic [NUM_LANES-1:0] mask_out,

    // Per-lane enable (for predication)
    output logic [NUM_LANES-1:0] lane_enable
);

    import warp_pkg::*;

    // Mask register
    logic [NUM_LANES-1:0] mask_r;

    // TODO: Implement mask register
    // TODO: Implement mask update logic
    // TODO: Implement predication logic

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            mask_r <= {NUM_LANES{1'b1}}; // All lanes enabled by default
        end else if (mask_update) begin
            mask_r <= mask_in;
        end
    end

    assign mask_out = mask_r;
    assign lane_enable = mask_r;

endmodule

