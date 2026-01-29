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

## Architecture

```
┌─────────────────────────────────────────────────────────┐
│                     Warp Engine                          │
├─────────────────────────────────────────────────────────┤
│                                                           │
│  ┌──────────────┐      ┌──────────────────────────┐    │
│  │ RoCC         │      │  Warp Controller         │    │
│  │ Interface    │◄─────┤  (FSM + Control Logic)   │    │
│  └──────────────┘      └──────────────────────────┘    │
│         │                       │                        │
│         │                       ▼                        │
│         │              ┌─────────────────┐              │
│         │              │ Instruction FIFO │              │
│         │              └─────────────────┘              │
│         │                       │                        │
│         ▼                       ▼                        │
│  ┌──────────────┐      ┌─────────────────┐             │
│  │ Warp Mask    │──────►  Lane Array     │             │
│  │ (Predication)│      │  (8-16 Lanes)   │             │
│  └──────────────┘      └─────────────────┘             │
│                         ┌───┬───┬───┬───┐               │
│                         │L0 │L1 │...│L7 │               │
│                         ├───┼───┼───┼───┤               │
│                         │ALU│ALU│ALU│ALU│               │
│                         │RF │RF │RF │RF │               │
│                         └───┴───┴───┴───┘               │
│                                                           │
│  ┌──────────────────────────────────────────────┐       │
│  │        Memory Interface (Scatter/Gather)     │       │
│  └──────────────────────────────────────────────┘       │
│                           │                              │
└───────────────────────────┼──────────────────────────────┘
                            ▼
                     L1 Cache / Memory
```

### Components

1. **RoCC Interface**: Decodes commands from the RISC-V core
2. **Warp Controller**: FSM that manages instruction fetching and execution
3. **Instruction FIFO**: Buffers instructions for execution
4. **Warp Mask**: Per-lane enable/disable for predicated execution
5. **Lane Array**: 8-16 parallel processing lanes, each with:
   - ALU (ADD, MUL, FMA, MAX, RELU)
   - 32-entry register file
   - Pipeline stages (Fetch, Decode, Execute, Writeback)
6. **Memory Interface**: Handles scatter/gather memory operations

## Directory Structure

```
Warp/
├── rtl/                      # SystemVerilog RTL sources
│   ├── warp_engine.sv        # Top-level module
│   ├── rocc_interface.sv     # RoCC command decoder
│   ├── warp_controller.sv    # Main control FSM
│   ├── instruction_fifo.sv   # Instruction buffer
│   ├── warp_mask.sv          # Lane masking
│   ├── lane_array.sv         # Lane array wrapper
│   ├── processing_lane.sv    # Single lane implementation
│   ├── alu.sv                # ALU with all operations
│   ├── register_file.sv      # Per-lane register file
│   └── memory_interface.sv   # Memory request/response handler
├── include/
│   └── warp_pkg.sv           # Package with types and constants
├── tb/                       # Testbenches
│   ├── tb_alu.sv             # ALU unit tests
│   └── tb_warp_integration.sv # Full system integration test
├── src/main/scala/warp/      # Chipyard integration (Chisel)
│   ├── WarpAccelerator.scala # BlackBox wrapper
│   └── WarpConfigs.scala     # Chipyard configurations
├── software/                 # Bare-metal test programs
│   ├── warp_test.c           # Demo program
│   └── Makefile              # Software build
├── build.sbt                 # SBT build configuration
├── Makefile                  # RTL simulation
└── README.md                 # This file
```

## Building and Integration

### Chipyard Integration

The Warp accelerator has been integrated into Chipyard's build system. Available configurations:

- `RocketWarp4Config` - Rocket with 4-lane Warp (minimal, fast simulation)
- `RocketWarp8Config` - Rocket with 8-lane Warp (default)
- `RocketWarp16Config` - Rocket with 16-lane Warp (maximum parallelism)
- `TinyRocketWarpConfig` - Tiny Rocket with 8-lane Warp (fastest simulation)

To build in Chipyard:

```bash
cd $CHIPYARD_ROOT
make CONFIG=RocketWarp8Config
```

### RTL Simulation

To run standalone RTL simulations:

```bash
cd generators/Warp
make test_alu           # Test ALU only
make test_integration   # Test full Warp engine
make test_all           # Run all tests
```

Requirements: Verilator (or VCS)

### Software Demo

To compile the bare-metal test program:

```bash
cd generators/Warp/software
make
```

Requirements: RISC-V GNU toolchain

## Programming Model

### RoCC Commands

The Warp accelerator exposes three RoCC commands:

| Command | Funct7 | RS1 | RS2 | Description |
|---------|--------|-----|-----|-------------|
| KERNEL_START | 0 | kernel_addr | kernel_length | Start kernel execution |
| SET_MASK | 1 | mask_value | - | Set lane enable mask |
| GET_STATUS | 2 | - | - | Get accelerator status |

### Warp Instruction Format

32-bit instruction format:

```
[opcode:4][dst:5][src1:5][src2:5][imm:13]
```

| Field | Bits | Description |
|-------|------|-------------|
| opcode | [31:28] | Operation (ADD/MUL/FMA/MAX/RELU/LOAD/STORE) |
| dst | [27:23] | Destination register (0-31) |
| src1 | [22:18] | Source register 1 (0-31) |
| src2 | [17:13] | Source register 2 (0-31) |
| imm | [12:0] | Immediate value (13-bit signed) |

### Opcodes

| Opcode | Value | Operation | Description |
|--------|-------|-----------|-------------|
| OP_ADD | 0 | dst = src1 + src2 | Addition |
| OP_MUL | 1 | dst = src1 * src2 | Multiplication |
| OP_FMA | 2 | dst = (src1 * src2) + imm | Fused multiply-add |
| OP_MAX | 3 | dst = max(src1, src2) | Maximum (signed) |
| OP_RELU | 4 | dst = max(0, src1) | ReLU activation |
| OP_LOAD | 5 | dst = mem[addr] | Load from memory |
| OP_STORE | 6 | mem[addr] = src1 | Store to memory |

### Example Usage (C)

```c
// Enable all 8 lanes
warp_set_mask(0xFF);

// Create kernel: R3 = R1 + R2
uint32_t kernel[] = {
    make_warp_inst(WARP_OP_ADD, 1, 0, 0, 10),  // R1 = 10
    make_warp_inst(WARP_OP_ADD, 2, 0, 0, 20),  // R2 = 20
    make_warp_inst(WARP_OP_ADD, 3, 1, 2, 0),   // R3 = R1 + R2
};

// Execute kernel
warp_kernel_start((uint32_t)kernel, 3);

// Wait for completion
while (!(warp_get_status() & 0x4));
```

## NVIDIA Angle: SIMT Execution Model

This design captures key concepts from NVIDIA GPUs:

1. **Warp**: Group of 8-16 threads executing same instruction (like NVIDIA's 32-thread warps)
2. **SIMT**: Single Instruction, Multiple Thread execution model
3. **Predication**: Per-lane enable masks for conditional execution
4. **Register File**: Per-lane private registers (like GPU thread registers)
5. **Parallel ALUs**: Independent execution units per lane
6. **ML Operations**: FMA and RELU for neural network workloads

## Performance Characteristics

- **8-lane configuration**: 8 parallel operations per cycle
- **16-lane configuration**: 16 parallel operations per cycle
- **Pipeline depth**: 4 stages (Fetch, Decode, Execute, Writeback)
- **Instruction throughput**: 1 instruction per cycle (when no stalls)
- **Memory bandwidth**: Dependent on L1 cache (scatter/gather capable)

## Testing

Comprehensive testbenches are provided:

1. **ALU Testbench** (`tb/tb_alu.sv`):
   - Tests all ALU operations
   - Overflow detection
   - Edge cases (MAX_INT, MIN_INT, zero)

2. **Integration Testbench** (`tb/tb_warp_integration.sv`):
   - Full system test
   - RoCC command interface
   - Kernel execution flow
   - Memory operations

3. **Software Demo** (`software/warp_test.c`):
   - Real bare-metal test program
   - Demonstrates all operations
   - Masked execution examples

## Future Enhancements

Potential extensions:

1. **Tensor operations**: Matrix multiply support
2. **More lanes**: Scale to 32-64 lanes
3. **Double precision**: FP64 support
4. **Shared memory**: Scratchpad for lane communication
5. **Atomic operations**: For synchronization
6. **Vector memory**: Coalesced memory access

## References

- [Rocket Chip RoCC Documentation](https://github.com/chipsalliance/rocket-chip)
- [NVIDIA CUDA Programming Guide - SIMT Architecture](https://docs.nvidia.com/cuda/cuda-c-programming-guide/)
- [Chipyard Documentation](https://chipyard.readthedocs.io/)

## License

See LICENSE file in Chipyard root.

## Author

Built for CS199 - VLSI/GPU Architecture Project
