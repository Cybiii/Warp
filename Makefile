# Makefile for Warp SIMT Engine Testing and Simulation

# Paths
RTL_DIR = rtl
TB_DIR = tb
INCLUDE_DIR = include
BUILD_DIR = build

# Tools
VERILATOR = verilator
VCS = vcs
IVERILOG = iverilog
VVP = vvp

# Verilator flags
VERILATOR_FLAGS = \
	--binary \
	--timing \
	-Wall \
	-Wno-fatal \
	--trace \
	+incdir+$(INCLUDE_DIR) \
	-I$(RTL_DIR)

# VCS flags
VCS_FLAGS = \
	-sverilog \
	+incdir+$(INCLUDE_DIR) \
	-timescale=1ns/1ps \
	-full64 \
	-debug_access+all

# Icarus Verilog flags
IVERILOG_FLAGS = \
	-g2012 \
	-I$(INCLUDE_DIR) \
	-I$(RTL_DIR)

# RTL source files
RTL_SRCS = \
	$(RTL_DIR)/alu.sv \
	$(RTL_DIR)/register_file.sv \
	$(RTL_DIR)/warp_mask.sv \
	$(RTL_DIR)/instruction_fifo.sv \
	$(RTL_DIR)/memory_interface.sv \
	$(RTL_DIR)/processing_lane.sv \
	$(RTL_DIR)/lane_array.sv \
	$(RTL_DIR)/warp_controller.sv \
	$(RTL_DIR)/rocc_interface.sv \
	$(RTL_DIR)/warp_engine.sv

.PHONY: all clean test_alu test_integration help

all: help

help:
	@echo "Warp SIMT Engine - Makefile Targets"
	@echo "===================================="
	@echo "test_alu           - Run ALU testbench"
	@echo "test_integration   - Run full integration testbench"
	@echo "test_all           - Run all testbenches"
	@echo "clean              - Clean build artifacts"
	@echo ""
	@echo "Note: Requires Verilator, VCS, or Icarus Verilog"

# Create build directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Test ALU with Verilator
test_alu: $(BUILD_DIR)
	@echo "Running ALU testbench..."
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module tb_alu \
		-o $(BUILD_DIR)/tb_alu \
		$(INCLUDE_DIR)/warp_pkg.sv \
		$(RTL_DIR)/alu.sv \
		$(TB_DIR)/tb_alu.sv
	@echo "Executing testbench..."
	./$(BUILD_DIR)/tb_alu

# Test full integration with Verilator
test_integration: $(BUILD_DIR)
	@echo "Running Warp Engine integration testbench..."
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module tb_warp_integration \
		-o $(BUILD_DIR)/tb_warp_integration \
		$(INCLUDE_DIR)/warp_pkg.sv \
		$(RTL_SRCS) \
		$(TB_DIR)/tb_warp_integration.sv
	@echo "Executing testbench..."
	./$(BUILD_DIR)/tb_warp_integration

# Run all tests
test_all: test_alu test_integration
	@echo "All tests completed!"

# Alternative: VCS simulation
vcs_alu: $(BUILD_DIR)
	@echo "Compiling ALU testbench with VCS..."
	cd $(BUILD_DIR) && $(VCS) $(VCS_FLAGS) \
		-o simv_alu \
		../$(INCLUDE_DIR)/warp_pkg.sv \
		../$(RTL_DIR)/alu.sv \
		../$(TB_DIR)/tb_alu.sv
	@echo "Running simulation..."
	$(BUILD_DIR)/simv_alu

vcs_integration: $(BUILD_DIR)
	@echo "Compiling Warp Engine integration testbench with VCS..."
	cd $(BUILD_DIR) && $(VCS) $(VCS_FLAGS) \
		-o simv_integration \
		../$(INCLUDE_DIR)/warp_pkg.sv \
		$(addprefix ../,$(RTL_SRCS)) \
		../$(TB_DIR)/tb_warp_integration.sv
	@echo "Running simulation..."
	$(BUILD_DIR)/simv_integration

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR)
	rm -f *.log *.vcd *.vpd
	rm -rf csrc simv* ucli.key vc_hdrs.h
	rm -rf DVEfiles inter.vpd
	rm -f *.jou *.log *.pb
	@echo "Clean complete!"

# Lint with Verilator
lint:
	@echo "Linting RTL with Verilator..."
	$(VERILATOR) --lint-only \
		+incdir+$(INCLUDE_DIR) \
		-I$(RTL_DIR) \
		$(INCLUDE_DIR)/warp_pkg.sv \
		$(RTL_SRCS)
	@echo "Lint complete!"
