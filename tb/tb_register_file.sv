// Register File Testbench
// Tests dual-port read and single-port write

`timescale 1ns/1ps

`include "warp_pkg.sv"

module tb_register_file;

    import warp_pkg::*;

    // Clock and reset
    logic clk;
    logic rst_n;

    // Register file signals
    logic [4:0] read_addr1, read_addr2;
    logic [31:0] read_data1, read_data2;
    logic write_en;
    logic [4:0] write_addr;
    logic [31:0] write_data;

    // DUT
    register_file dut (
        .clk(clk),
        .rst_n(rst_n),
        .read_addr1(read_addr1),
        .read_data1(read_data1),
        .read_addr2(read_addr2),
        .read_data2(read_data2),
        .write_en(write_en),
        .write_addr(write_addr),
        .write_data(write_data)
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
    task test_rf(
        input string test_name,
        input logic [4:0] waddr,
        input logic [31:0] wdata,
        input logic wen,
        input logic [4:0] raddr1,
        input logic [4:0] raddr2,
        input logic [31:0] expected_rdata1,
        input logic [31:0] expected_rdata2
    );
        test_count++;
        
        // Write
        @(posedge clk);
        write_addr = waddr;
        write_data = wdata;
        write_en = wen;
        
        // Read
        @(posedge clk);
        write_en = 1'b0;
        read_addr1 = raddr1;
        read_addr2 = raddr2;
        
        @(posedge clk);
        #1; // Small delay for signal propagation
        
        if (read_data1 == expected_rdata1 && read_data2 == expected_rdata2) begin
            pass_count++;
            $display("[PASS] %s: R%0d=0x%08X, R%0d=0x%08X", 
                     test_name, raddr1, read_data1, raddr2, read_data2);
        end else begin
            fail_count++;
            $error("[FAIL] %s: R%0d expected 0x%08X got 0x%08X, R%0d expected 0x%08X got 0x%08X",
                   test_name, raddr1, expected_rdata1, read_data1, 
                   raddr2, expected_rdata2, read_data2);
        end
    endtask

    // Test sequence
    initial begin
        $display("========================================");
        $display("Register File Testbench");
        $display("========================================");
        
        // Reset
        rst_n = 0;
        write_en = 0;
        write_addr = 0;
        write_data = 0;
        read_addr1 = 0;
        read_addr2 = 0;
        #100;
        rst_n = 1;
        #50;

        $display("\n--- Test 1: R0 is always zero ---");
        test_rf("Write to R0 (should fail)", 5'd0, 32'hDEADBEEF, 1'b1, 5'd0, 5'd1, 32'h0, 32'h0);
        test_rf("Read R0 after reset", 5'd0, 32'h0, 1'b0, 5'd0, 5'd0, 32'h0, 32'h0);

        $display("\n--- Test 2: Write and read back ---");
        test_rf("Write R1=0x12345678", 5'd1, 32'h12345678, 1'b1, 5'd1, 5'd0, 32'h12345678, 32'h0);
        test_rf("Write R2=0xABCDEF00", 5'd2, 32'hABCDEF00, 1'b1, 5'd2, 5'd1, 32'hABCDEF00, 32'h12345678);
        test_rf("Write R31=0xFFFFFFFF", 5'd31, 32'hFFFFFFFF, 1'b1, 5'd31, 5'd2, 32'hFFFFFFFF, 32'hABCDEF00);

        $display("\n--- Test 3: Dual-port read ---");
        test_rf("Read R1 and R2 simultaneously", 5'd0, 32'h0, 1'b0, 5'd1, 5'd2, 32'h12345678, 32'hABCDEF00);
        test_rf("Read R2 and R31 simultaneously", 5'd0, 32'h0, 1'b0, 5'd2, 5'd31, 32'hABCDEF00, 32'hFFFFFFFF);

        $display("\n--- Test 4: Overwrite registers ---");
        test_rf("Overwrite R1=0x11111111", 5'd1, 32'h11111111, 1'b1, 5'd1, 5'd2, 32'h11111111, 32'hABCDEF00);
        test_rf("Overwrite R2=0x22222222", 5'd2, 32'h22222222, 1'b1, 5'd2, 5'd1, 32'h22222222, 32'h11111111);

        $display("\n--- Test 5: Write to all registers ---");
        for (int i = 1; i < 32; i++) begin
            @(posedge clk);
            write_addr = i;
            write_data = i * 100;
            write_en = 1'b1;
        end
        @(posedge clk);
        write_en = 1'b0;
        
        // Verify
        for (int i = 1; i < 32; i++) begin
            @(posedge clk);
            read_addr1 = i;
            @(posedge clk);
            #1;
            if (read_data1 == i * 100) begin
                pass_count++;
                test_count++;
            end else begin
                fail_count++;
                test_count++;
                $error("[FAIL] R%0d: expected %0d, got %0d", i, i*100, read_data1);
            end
        end
        $display("[INFO] Verified all 31 registers (R1-R31)");

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
