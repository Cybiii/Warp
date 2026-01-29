// Processing Lane - Single lane with ALU, register file, and mask control
// SystemVerilog implementation


module processing_lane #(
    parameter int LANE_ID = 0,
    parameter int DATA_WIDTH = warp_pkg::DATA_WIDTH,
    parameter int REG_FILE_SIZE = warp_pkg::REG_FILE_SIZE
)(
    input  logic clk,
    input  logic rst_n,

    // Control
    input  logic execute,
    input  logic [31:0] instruction,
    output logic ready,

    // Mask control
    input  logic lane_enable,

    // Memory interface (for LOAD/STORE)
    // TODO: Add memory interface signals

    // TODO: Add other interfaces as needed
);

    import warp_pkg::*;

    // Decode signals
    alu_opcode_e opcode;
    logic [4:0] dst_addr, src1_addr, src2_addr;
    logic [31:0] imm;
    
    // Register file signals
    logic [DATA_WIDTH-1:0] rf_read_data1, rf_read_data2;
    logic rf_write_en;
    logic [DATA_WIDTH-1:0] rf_write_data;
    
    // ALU signals
    logic [DATA_WIDTH-1:0] alu_operand1, alu_operand2, alu_operand3;
    logic [DATA_WIDTH-1:0] alu_result;
    logic alu_overflow;
    logic alu_ready;
    
    // Pipeline state
    typedef enum logic [1:0] {
        LANE_IDLE,
        LANE_DECODE,
        LANE_EXECUTE,
        LANE_WRITEBACK
    } lane_state_e;
    
    lane_state_e state_r, state_next;
    logic [31:0] inst_r;
    
    // Instruction decode
    assign opcode = get_opcode(inst_r);
    assign dst_addr = get_dst(inst_r);
    assign src1_addr = get_src1(inst_r);
    assign src2_addr = get_src2(inst_r);
    assign imm = get_imm(inst_r);

    // Instantiate register file
    register_file #(
        .REG_FILE_SIZE(REG_FILE_SIZE),
        .DATA_WIDTH(DATA_WIDTH)
    ) rf_inst (
        .clk(clk),
        .rst_n(rst_n),
        .read_addr1(src1_addr),
        .read_data1(rf_read_data1),
        .read_addr2(src2_addr),
        .read_data2(rf_read_data2),
        .write_en(rf_write_en),
        .write_addr(dst_addr),
        .write_data(rf_write_data)
    );

    // Instantiate ALU
    alu #(
        .DATA_WIDTH(DATA_WIDTH)
    ) alu_inst (
        .clk(clk),
        .rst_n(rst_n),
        .opcode(opcode),
        .operand1(alu_operand1),
        .operand2(alu_operand2),
        .operand3(alu_operand3),
        .result(alu_result),
        .overflow(alu_overflow),
        .ready(alu_ready)
    );

    // ALU operand muxing
    assign alu_operand1 = rf_read_data1;
    assign alu_operand2 = rf_read_data2;
    assign alu_operand3 = imm; // For FMA third operand

    // Pipeline control
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state_r <= LANE_IDLE;
            inst_r <= '0;
        end else begin
            state_r <= state_next;
            
            if (execute && lane_enable && (state_r == LANE_IDLE)) begin
                inst_r <= instruction;
            end
        end
    end

    // State machine
    always_comb begin
        state_next = state_r;
        rf_write_en = 1'b0;
        rf_write_data = '0;
        ready = 1'b0;
        
        case (state_r)
            LANE_IDLE: begin
                ready = 1'b1;
                if (execute && lane_enable) begin
                    state_next = LANE_DECODE;
                end
            end
            
            LANE_DECODE: begin
                // Decode happens in one cycle, register file reads
                state_next = LANE_EXECUTE;
            end
            
            LANE_EXECUTE: begin
                if (alu_ready) begin
                    state_next = LANE_WRITEBACK;
                end
            end
            
            LANE_WRITEBACK: begin
                // Write result back to register file
                if (lane_enable && (opcode != OP_STORE)) begin
                    rf_write_en = 1'b1;
                    rf_write_data = alu_result;
                end
                state_next = LANE_IDLE;
            end
        endcase
    end

endmodule

