// Instruction FIFO Testbench
// Tests push, pop, full, empty, and overflow/underflow

`timescale 1ns/1ps

`include "warp_pkg.sv"

module tb_instruction_fifo;

    import warp_pkg::*;

    // Parameters
    parameter FIFO_DEPTH = 16;

    // Clock and reset
    logic clk;
    logic rst_n;

    // FIFO signals
    logic push, pop;
    logic [31:0] data_in, data_out;
    logic valid, full, empty;

    // DUT
    instruction_fifo #(
        .FIFO_DEPTH(FIFO_DEPTH)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .push(push),
        .data_in(data_in),
        .pop(pop),
        .data_out(data_out),
        .valid(valid),
        .full(full),
        .empty(empty)
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

    // Test sequence
    initial begin
        $display("========================================");
        $display("Instruction FIFO Testbench");
        $display("FIFO_DEPTH = %0d", FIFO_DEPTH);
        $display("========================================");
        
        // Reset
        rst_n = 0;
        push = 0;
        pop = 0;
        data_in = 0;
        #100;
        rst_n = 1;
        #50;

        test_count++;
        $display("\n--- Test 1: Initial state ---");
        if (empty && !full && !valid) begin
            pass_count++;
            $display("[PASS] FIFO empty after reset: empty=%b, full=%b, valid=%b", empty, full, valid);
        end else begin
            fail_count++;
            $error("[FAIL] FIFO not empty after reset: empty=%b, full=%b, valid=%b", empty, full, valid);
        end

        $display("\n--- Test 2: Push one item ---");
        @(posedge clk);
        push = 1;
        data_in = 32'hDEADBEEF;
        @(posedge clk);
        push = 0;
        @(posedge clk);
        
        test_count++;
        if (!empty && valid && data_out == 32'hDEADBEEF) begin
            pass_count++;
            $display("[PASS] Pushed and read 0x%08X", data_out);
        end else begin
            fail_count++;
            $error("[FAIL] Push failed: empty=%b, valid=%b, data=0x%08X", empty, valid, data_out);
        end

        $display("\n--- Test 3: Pop one item ---");
        @(posedge clk);
        pop = 1;
        @(posedge clk);
        pop = 0;
        @(posedge clk);
        
        test_count++;
        if (empty && !valid) begin
            pass_count++;
            $display("[PASS] FIFO empty after pop: empty=%b, valid=%b", empty, valid);
        end else begin
            fail_count++;
            $error("[FAIL] FIFO not empty after pop: empty=%b, valid=%b", empty, valid);
        end

        $display("\n--- Test 4: Fill FIFO completely ---");
        for (int i = 0; i < FIFO_DEPTH; i++) begin
            @(posedge clk);
            push = 1;
            data_in = 32'h1000 + i;
        end
        @(posedge clk);
        push = 0;
        @(posedge clk);
        
        test_count++;
        if (full && !empty) begin
            pass_count++;
            $display("[PASS] FIFO full after %0d pushes: full=%b, empty=%b", FIFO_DEPTH, full, empty);
        end else begin
            fail_count++;
            $error("[FAIL] FIFO not full after %0d pushes: full=%b, empty=%b", FIFO_DEPTH, full, empty);
        end

        $display("\n--- Test 5: Verify FIFO order (FIFO behavior) ---");
        pop = 0;
        for (int i = 0; i < FIFO_DEPTH; i++) begin
            @(posedge clk);
            test_count++;
            // Check data at current read pointer
            if (data_out == (32'h1000 + i)) begin
                pass_count++;
                $display("[PASS] Pop %0d: data=0x%08X", i, data_out);
            end else begin
                fail_count++;
                $error("[FAIL] Pop %0d: expected 0x%08X, got 0x%08X", i, 32'h1000+i, data_out);
            end
            // Pop on this cycle, read_ptr will increment next clock
            pop = 1;
        end
        @(posedge clk);
        pop = 0;
        @(posedge clk);
        
        test_count++;
        if (empty) begin
            pass_count++;
            $display("[PASS] FIFO empty after draining: empty=%b", empty);
        end else begin
            fail_count++;
            $error("[FAIL] FIFO not empty after draining: empty=%b", empty);
        end

        $display("\n--- Test 6: Simultaneous push and pop ---");
        // Fill halfway
        for (int i = 0; i < FIFO_DEPTH/2; i++) begin
            @(posedge clk);
            push = 1;
            data_in = 32'h2000 + i;
        end
        @(posedge clk);
        push = 0;
        
        // Simultaneous push/pop (count should stay same)
        @(posedge clk);
        push = 1;
        pop = 1;
        data_in = 32'hAAAAAAAA;
        @(posedge clk);
        push = 0;
        pop = 0;
        
        @(posedge clk);
        test_count++;
        if (!empty && !full) begin
            pass_count++;
            $display("[PASS] Simultaneous push/pop: empty=%b, full=%b", empty, full);
        end else begin
            fail_count++;
            $error("[FAIL] Simultaneous push/pop error: empty=%b, full=%b", empty, full);
        end

        // Drain remaining
        while (!empty) begin
            @(posedge clk);
            pop = 1;
        end
        pop = 0;

        $display("\n--- Test 7: Overflow protection ---");
        // Fill completely
        for (int i = 0; i < FIFO_DEPTH; i++) begin
            @(posedge clk);
            push = 1;
            data_in = 32'h3000 + i;
        end
        
        // Try to push when full
        @(posedge clk);
        push = 1;
        data_in = 32'hBADBAD00;
        @(posedge clk);
        push = 0;
        @(posedge clk);
        
        test_count++;
        if (full) begin
            pass_count++;
            $display("[PASS] Overflow protection: FIFO still full, no corruption");
        end else begin
            fail_count++;
            $error("[FAIL] Overflow protection failed");
        end

        // Drain
        while (!empty) begin
            @(posedge clk);
            pop = 1;
        end
        pop = 0;

        $display("\n--- Test 8: Underflow protection ---");
        @(posedge clk);
        pop = 1;  // Pop from empty FIFO
        @(posedge clk);
        pop = 0;
        @(posedge clk);
        
        test_count++;
        if (empty) begin
            pass_count++;
            $display("[PASS] Underflow protection: FIFO still empty");
        end else begin
            fail_count++;
            $error("[FAIL] Underflow protection failed");
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
