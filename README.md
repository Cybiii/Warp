# Tiny SIMT Vector Engine (Warp)

A small SIMT (Single Instruction, Multiple Thread) vector engine with 8-16 configurable lanes, designed for integration with RISC-V cores via RoCC interface in Chipyard.

## Project Structure

```
Warp/
├── rtl/                    # Verilog RTL source files
├── include/                 # Verilog header files (defines, opcodes)
├── tb/                     # Testbenches
│   └── test_vectors/       # Test vector files
├── scripts/                # Build and simulation scripts
├── docs/                   # Documentation
└── chipyard/               # Chipyard integration files (Scala)
```

## Features

- 8-16 configurable processing lanes
- Core-agnostic RoCC interface (works with Rocket, BOOM, CVA6, etc.)
- ALU operations: ADD, MUL, FMA, MAX, RELU
- Memory instructions: LOAD, STORE (scatter/gather support)
- Warp mask for predication
- Instruction FIFO for kernel execution
- Autonomous operation (engine loads and executes kernels)

## Quick Start

1. Implement RTL modules in `rtl/`
2. Define constants and opcodes in `include/`
3. Create testbenches in `tb/`
4. Integrate with Chipyard in `chipyard/`

See `docs/` for detailed documentation.

## Status

🚧 **In Development** - Folder structure created, ready for implementation.
