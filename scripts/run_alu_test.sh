#!/bin/bash
# Simple script to run ALU testbench
# Supports: VCS, ModelSim, Verilator

echo "Running ALU Testbench..."

# Check for VCS
if command -v vcs &> /dev/null; then
    echo "Using VCS..."
    vcs -sverilog -debug_access+all \
        include/warp_pkg.sv \
        rtl/alu.sv \
        tb/tb_alu.sv \
        -o alu_simv
    ./alu_simv
    rm -f alu_simv ucli.key vc_hdrs.h

# Check for Verilator
elif command -v verilator &> /dev/null; then
    echo "Using Verilator..."
    verilator --cc --exe --build \
        include/warp_pkg.sv \
        rtl/alu.sv \
        tb/tb_alu.sv \
        --top-module tb_alu \
        -o alu_sim
    ./obj_dir/alu_sim

# Check for ModelSim/QuestaSim
elif command -v vlog &> /dev/null; then
    echo "Using ModelSim/QuestaSim..."
    vlog -work work -sv include/warp_pkg.sv rtl/alu.sv tb/tb_alu.sv
    vsim -voptargs=+acc -c work.tb_alu -do "run -all; quit"

else
    echo "ERROR: No supported simulator found!"
    echo "Please install VCS, Verilator, or ModelSim/QuestaSim"
    exit 1
fi

