# Tiny SIMT Vector Engine (Warp)

A small SIMT (Single Instruction, Multiple Thread) vector engine with 8-16 configurable lanes, designed for integration with RISC-V cores via RoCC interface in Chipyard.

## Features

- 8-16 configurable processing lanes
- Core-agnostic RoCC interface (works with Rocket, BOOM, CVA6, etc.)
- ALU operations: ADD, MUL, FMA, MAX, RELU
- Memory instructions: LOAD, STORE (scatter/gather support)
- Warp mask for predication
- Instruction FIFO for kernel execution
- Autonomous operation (engine loads and executes kernels)

## Quick Start

1. Implement RTL modules in `rtl/` (SystemVerilog `.sv` files)
2. Use `warp_pkg.sv` package for constants, types, and opcodes
3. Create testbenches in `tb/` (SystemVerilog `.sv` files)
4. Integrate with Chipyard in `chipyard/`

**Note**: This project uses SystemVerilog for better type safety, packages, and modern HDL features.

See `docs/` for detailed documentation.

## Status

🚧 **In Development** - Folder structure created, ready for implementation.
