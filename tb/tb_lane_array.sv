// Lane Array Testbench
// Tests multiple processing lanes with mask and synchronization

`timescale 1ns/1ps

`include "warp_pkg.sv"

module tb_lane_array;

    import warp_pkg::*;

    parameter NUM_LANES = 4;  // Use smaller number for testing

    // Clock and reset
    logic clk;
    logic rst_n;

    // Control signals
    logic execute;
    logic [31:0] instruction;

    // Mask control
    logic [NUM_LANES-1:0] lane_enable;

    // Status
    logic ready;

    // DUT
    lane_array #(
        .NUM_LANES(NUM_LANES)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .execute(execute),
        .instruction(instruction),
        .lane_enable(lane_enable),
        .ready(ready)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Test counters
    int test_count = 0;
    int pass_count = 0;
    int fail_count = 0;

    // Helper function to create instruction
    function logic [31:0] make_inst(
        alu_opcode_e opcode,
        logic [4:0] dst,
        logic [4:0] src1,
        logic [4:0] src2
    );
        return {opcode[3:0], 5'd0, dst, src1, src2, 13'd0};
    endfunction

    // Test task
    task test_lane_array_instruction(
        input string test_name,
        input logic [31:0] inst,
        input logic [NUM_LANES-1:0] mask
    );
        test_count++;
        
        @(posedge clk);
        execute = 1;
        lane_enable = mask;
        instruction = inst;
        
        @(posedge clk);
        execute = 0;
        
        // Wait for ready
        repeat(20) begin
            @(posedge clk);
            if (ready) break;
        end
        
        if (ready) begin
            pass_count++;
            $display("[PASS] %s: completed with mask 0b%04b", test_name, mask);
        end else begin
            fail_count++;
            $error("[FAIL] %s: did not complete (ready=%b)", test_name, ready);
        end
        
        @(posedge clk);
    endtask

    // Test sequence
    initial begin
        $display("========================================");
        $display("Lane Array Testbench");
        $display("NUM_LANES = %0d", NUM_LANES);
        $display("========================================");
        
        // Reset
        rst_n = 0;
        execute = 0;
        instruction = 0;
        lane_enable = {NUM_LANES{1'b1}};
        #100;
        rst_n = 1;
        #50;

        test_count++;
        $display("\n--- Test 1: Initial state (all lanes ready) ---");
        if (ready) begin
            pass_count++;
            $display("[PASS] Lane array ready after reset");
        end else begin
            fail_count++;
            $error("[FAIL] Lane array not ready after reset");
        end

        $display("\n--- Test 2: Execute with all lanes enabled ---");
        test_lane_array_instruction("ADD with all lanes", make_inst(OP_ADD, 5'd1, 5'd2, 5'd3), 4'b1111);

        $display("\n--- Test 3: Execute with single lane enabled ---");
        test_lane_array_instruction("MUL with lane 0 only", make_inst(OP_MUL, 5'd4, 5'd5, 5'd6), 4'b0001);
        test_lane_array_instruction("ADD with lane 3 only", make_inst(OP_ADD, 5'd7, 5'd8, 5'd9), 4'b1000);

        $display("\n--- Test 4: Execute with alternating lanes ---");
        test_lane_array_instruction("MAX with lanes 0,2", make_inst(OP_MAX, 5'd10, 5'd11, 5'd12), 4'b0101);
        test_lane_array_instruction("ADD with lanes 1,3", make_inst(OP_ADD, 5'd13, 5'd14, 5'd15), 4'b1010);

        $display("\n--- Test 5: Execute with no lanes enabled (immediate ready) ---");
        test_count++;
        @(posedge clk);
        execute = 1;
        lane_enable = 4'b0000;
        instruction = make_inst(OP_ADD, 5'd1, 5'd2, 5'd3);
        @(posedge clk);
        execute = 0;
        
        // With no lanes enabled, should remain ready or quickly return to ready
        repeat(3) @(posedge clk);
        
        if (ready) begin
            pass_count++;
            $display("[PASS] No lanes enabled: remains ready");
        end else begin
            fail_count++;
            $error("[FAIL] No lanes enabled: not ready");
        end

        $display("\n--- Test 6: Back-to-back operations ---");
        for (int i = 0; i < 4; i++) begin
            test_lane_array_instruction($sformatf("Back-to-back op %0d", i), 
                                       make_inst(OP_ADD, i[4:0], i[4:0]+1, i[4:0]+2), 
                                       4'b1111);
        end

        $display("\n--- Test 7: Different masks for each operation ---");
        test_lane_array_instruction("Mask 0b1111", make_inst(OP_ADD, 5'd1, 5'd2, 5'd3), 4'b1111);
        test_lane_array_instruction("Mask 0b1110", make_inst(OP_MUL, 5'd4, 5'd5, 5'd6), 4'b1110);
        test_lane_array_instruction("Mask 0b1100", make_inst(OP_MAX, 5'd7, 5'd8, 5'd9), 4'b1100);
        test_lane_array_instruction("Mask 0b1000", make_inst(OP_ADD, 5'd10, 5'd11, 5'd12), 4'b1000);

        $display("\n--- Test 8: All lanes synchronize ---");
        test_count++;
        @(posedge clk);
        execute = 1;
        lane_enable = 4'b1111;
        instruction = make_inst(OP_FMA, 5'd20, 5'd21, 5'd22);
        @(posedge clk);
        execute = 0;
        
        // All lanes must complete before ready goes high
        repeat(20) begin
            @(posedge clk);
            if (ready) break;
        end
        
        if (ready) begin
            pass_count++;
            $display("[PASS] All lanes synchronized and completed");
        end else begin
            fail_count++;
            $error("[FAIL] Lanes did not synchronize");
        end

        // Summary
        #100;
        $display("\n========================================");
        $display("Test Summary");
        $display("========================================");
        $display("Total Tests: %0d", test_count);
        $display("Passed:      %0d", pass_count);
        $display("Failed:      %0d", fail_count);
        $display("========================================");
        
        if (fail_count == 0) begin
            $display("ALL TESTS PASSED!");
        end else begin
            $error("SOME TESTS FAILED!");
        end
        
        #100;
        $finish;
    end

endmodule
