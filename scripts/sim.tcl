# Simulation Script for SystemVerilog
# TODO: Implement simulation script for your simulator (ModelSim, VCS, Verilator, etc.)
# - Compile SystemVerilog RTL files
# - Compile testbench
# - Run simulation
# - Generate waveforms

# Example for ModelSim (adjust for your simulator):
# vlog -work work -sv include/warp_pkg.sv
# vlog -work work -sv rtl/*.sv
# vlog -work work -sv tb/*.sv
# vsim -voptargs=+acc work.tb_warp_engine
# run -all

# Example for VCS:
# vcs -sverilog include/warp_pkg.sv rtl/*.sv tb/tb_warp_engine.sv -o simv
# ./simv

# Example for Verilator:
# verilator --cc --exe --build rtl/*.sv tb/tb_warp_engine.sv

puts "TODO: Implement simulation script for SystemVerilog"

