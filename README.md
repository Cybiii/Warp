# Tiny SIMT Vector Engine (Warp)

A small SIMT (Single Instruction, Multiple Thread) vector engine with 8-16 configurable lanes, designed for integration with RISC-V cores via RoCC interface in Chipyard.

## Features

- 8-16 configurable processing lanes
- Core-agnostic RoCC interface (WIP works with Rocket, BOOM, CVA6, etc.)
- ALU operations: ADD, MUL, FMA, MAX, RELU
- Memory instructions: LOAD, STORE (scatter/gather support)
- Warp mask for predication
- Instruction FIFO for kernel execution
- Autonomous operation (engine loads and executes kernels)
