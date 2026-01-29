// Warp Mask Testbench
// Tests predication/enable logic for lanes

`timescale 1ns/1ps

`include "warp_pkg.sv"

module tb_warp_mask;

    import warp_pkg::*;

    parameter NUM_LANES = 8;

    // Clock and reset
    logic clk;
    logic rst_n;

    // Warp mask signals
    logic mask_update;
    logic [NUM_LANES-1:0] mask_in;
    logic [NUM_LANES-1:0] mask_out;
    logic [NUM_LANES-1:0] lane_enable;

    // DUT
    warp_mask #(
        .NUM_LANES(NUM_LANES)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .mask_update(mask_update),
        .mask_in(mask_in),
        .mask_out(mask_out),
        .lane_enable(lane_enable)
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

    // Test task
    task test_mask(
        input string test_name,
        input logic [NUM_LANES-1:0] mask_value,
        input logic [NUM_LANES-1:0] expected
    );
        test_count++;
        
        @(posedge clk);
        mask_update = 1;
        mask_in = mask_value;
        
        @(posedge clk);
        mask_update = 0;
        
        @(posedge clk);
        #1;
        
        if (mask_out == expected && lane_enable == expected) begin
            pass_count++;
            $display("[PASS] %s: mask=0b%08b, lane_enable=0b%08b", test_name, mask_out, lane_enable);
        end else begin
            fail_count++;
            $error("[FAIL] %s: expected 0b%08b, got mask=0b%08b, lane_enable=0b%08b", 
                   test_name, expected, mask_out, lane_enable);
        end
    endtask

    // Test sequence
    initial begin
        $display("========================================");
        $display("Warp Mask Testbench");
        $display("NUM_LANES = %0d", NUM_LANES);
        $display("========================================");
        
        // Reset
        rst_n = 0;
        mask_update = 0;
        mask_in = 0;
        #100;
        rst_n = 1;
        #50;

        test_count++;
        $display("\n--- Test 1: Initial state (all lanes enabled) ---");
        if (mask_out == {NUM_LANES{1'b1}}) begin
            pass_count++;
            $display("[PASS] All lanes enabled after reset: 0b%08b", mask_out);
        end else begin
            fail_count++;
            $error("[FAIL] Expected all lanes enabled, got 0b%08b", mask_out);
        end

        $display("\n--- Test 2: Enable/disable specific lanes ---");
        test_mask("Disable lane 0", 8'b11111110, 8'b11111110);
        test_mask("Enable only lane 0", 8'b00000001, 8'b00000001);
        test_mask("Enable only lane 7", 8'b10000000, 8'b10000000);
        test_mask("Enable all lanes", 8'b11111111, 8'b11111111);
        test_mask("Disable all lanes", 8'b00000000, 8'b00000000);

        $display("\n--- Test 3: Alternating patterns ---");
        test_mask("Alternating 10101010", 8'b10101010, 8'b10101010);
        test_mask("Alternating 01010101", 8'b01010101, 8'b01010101);

        $display("\n--- Test 4: Enable first half ---");
        test_mask("First 4 lanes", 8'b00001111, 8'b00001111);
        
        $display("\n--- Test 5: Enable second half ---");
        test_mask("Last 4 lanes", 8'b11110000, 8'b11110000);

        $display("\n--- Test 6: Single lane patterns ---");
        for (int i = 0; i < NUM_LANES; i++) begin
            logic [NUM_LANES-1:0] single_lane_mask = (1 << i);
            test_mask($sformatf("Enable only lane %0d", i), single_lane_mask, single_lane_mask);
        end

        $display("\n--- Test 7: Mask persistence (no update) ---");
        @(posedge clk);
        update = 1;
        new_mask = 8'b10101010;
        @(posedge clk);
        update = 0;
        
        // Wait several cycles without update
        repeat(5) @(posedge clk);
        
        test_count++;
        if (mask_out == 8'b10101010) begin
            pass_count++;
            $display("[PASS] Mask persists without update: 0b%08b", mask_out);
        end else begin
            fail_count++;
            $error("[FAIL] Mask changed without update: expected 0b10101010, got 0b%08b", mask_out);
        end

        $display("\n--- Test 8: Rapid mask updates ---");
        for (int i = 0; i < 4; i++) begin
            @(posedge clk);
            update = 1;
            new_mask = $random;
            @(posedge clk);
            test_count++;
            if (mask_out == new_mask) begin
                pass_count++;
                $display("[PASS] Rapid update %0d: mask=0b%08b", i, mask_out);
            end else begin
                fail_count++;
                $error("[FAIL] Rapid update %0d failed", i);
            end
        end
        update = 0;

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
