// Register File - Per-lane register file
// SystemVerilog implementation

`include "warp_pkg.sv"

module register_file #(
    parameter int REG_FILE_SIZE = warp_pkg::REG_FILE_SIZE,
    parameter int DATA_WIDTH = warp_pkg::DATA_WIDTH
)(
    input  logic clk,
    input  logic rst_n,

    // Read port 1
    input  logic [4:0] read_addr1,
    output logic [DATA_WIDTH-1:0] read_data1,

    // Read port 2
    input  logic [4:0] read_addr2,
    output logic [DATA_WIDTH-1:0] read_data2,

    // Write port
    input  logic write_en,
    input  logic [4:0] write_addr,
    input  logic [DATA_WIDTH-1:0] write_data
);

    import warp_pkg::*;

    // Register array
    logic [DATA_WIDTH-1:0] registers [REG_FILE_SIZE-1:0];

    // TODO: Implement register array
    // TODO: Implement dual-port read
    // TODO: Implement write port
    // TODO: Hardwire register 0 to zero

    // Read port 1
    always_comb begin
        if (read_addr1 == 5'b0) begin
            read_data1 = '0; // Register 0 is always zero
        end else begin
            read_data1 = registers[read_addr1];
        end
    end

    // Read port 2
    always_comb begin
        if (read_addr2 == 5'b0) begin
            read_data2 = '0; // Register 0 is always zero
        end else begin
            read_data2 = registers[read_addr2];
        end
    end

    // Write port
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (int i = 0; i < REG_FILE_SIZE; i++) begin
                registers[i] <= '0;
            end
        end else if (write_en && (write_addr != 5'b0)) begin
            registers[write_addr] <= write_data; // Register 0 is read-only
        end
    end

endmodule

