# Warp - Tiny SIMT Vector Engine

A small SIMT (Single Instruction, Multiple Thread) vector accelerator with 8-16 configurable lanes, designed for integration with RISC-V cores via RoCC interface in Chipyard.

## Features

- **8-16 configurable processing lanes** for SIMT parallel execution
- **Core-agnostic RoCC interface** compatible with Rocket, BOOM, CVA6, etc.
- **ALU operations**: ADD, MUL, FMA, MAX, RELU
- **Memory instructions**: LOAD, STORE with scatter/gather support
- **Warp mask** for lane predication (conditional execution)
- **Instruction FIFO** for autonomous kernel execution
- **Independent operation**: Engine loads and executes kernels from memory

