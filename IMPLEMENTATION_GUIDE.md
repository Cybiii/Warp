# Implementation Guide

Quick reference for what goes in each file. See the plan for detailed specifications.

**Note**: This project uses SystemVerilog (.sv files). Use `warp_pkg.sv` for types, constants, and helper functions.

## RTL Files (`rtl/`) - SystemVerilog

### `warp_engine.sv` - Top-level module

- Instantiates all sub-modules
- Parameters: `NUM_LANES` (8-16, default 8), `DATA_WIDTH` (32), `REG_FILE_SIZE` (32), `FIFO_DEPTH` (16)
- RoCC interface ports (standard RoCC spec)
- Clock and reset

### `rocc_interface.v` - RoCC command decoder

- Standard RoCC interface: `io.cmd.*`, `io.resp.*`, `io.mem.*`
- Decodes custom instructions:
  - `kernel_start(rs1=addr, rs2={length, opcode})`
  - `set_mask(rs1=mask)`
  - `get_status(rd=status)`
- Memory request handling through core

### `warp_controller.v` - Main FSM

- States: IDLE, LOAD, EXECUTE, STALL, DONE
- Fetches instructions from FIFO
- Controls lane array execution
- Handles predication and synchronization

### `instruction_fifo.v` - Instruction buffer

- FIFO depth: 16-32 entries (configurable)
- 32-bit instruction format
- Handles overflow/underflow

### `warp_mask.v` - Warp mask register

- NUM_LANES bits (one per lane)
- Predication logic
- Mask update via RoCC instruction

### `lane_array.v` - Array of lanes

- Instantiates NUM_LANES processing lanes
- Broadcasts instructions to all lanes
- Collects results

### `processing_lane.v` - Single lane

- Integrates ALU, register file, mask control
- Pipeline: FETCH, DECODE, EXECUTE, WRITEBACK
- Executes when mask bit is set

### `alu.v` - Arithmetic Logic Unit

- Operations: ADD, MUL, FMA, MAX, RELU
- 32-bit integer/fixed-point
- Overflow/saturation handling

### `register_file.v` - Per-lane register file

- 32 registers × 32 bits (configurable)
- Dual-port (read/write same cycle)
- Register 0 = zero

### `memory_interface.v` - Memory access

- Uses RoCC `io.mem.*` channels
- Handles LOAD/STORE instructions
- Address calculation: `base + (lane_id * stride) + offset`

## Header Files (`include/`)

### `warp_pkg.sv` - SystemVerilog Package (SINGLE SOURCE OF TRUTH)

- **Parameters**: NUM_LANES_DEFAULT, DATA_WIDTH, REG_FILE_SIZE, FIFO_DEPTH, ADDR_WIDTH
- **Enums**:
  - `warp_state_e`: STATE_IDLE, STATE_LOAD, STATE_EXECUTE, STATE_STALL, STATE_DONE
  - `alu_opcode_e`: OP_ADD, OP_MUL, OP_FMA, OP_MAX, OP_RELU, OP_LOAD, OP_STORE
  - `rocc_opcode_e`: ROCC_OP_KERNEL_START, ROCC_OP_SET_MASK, ROCC_OP_GET_STATUS
- **Structs**:
  - `warp_status_t`: Status register with named fields
  - `warp_inst_t`: Instruction format with named fields
- **Helper Functions**: `get_opcode()`, `get_dst()`, `get_src1()`, `get_src2()`, `get_imm()`
- **Usage**: `import warp_pkg::*;` in your SystemVerilog modules

## Instruction Format (32-bit)

```
[31:28] Opcode
[27:23] Destination register (or base reg for STORE)
[22:18] Source register 1 (or data reg for STORE)
[17:13] Source register 2 (or stride reg for LOAD/STORE)
[12:0]  Immediate offset (sign-extended)
```

## Key Design Points

1. **Core-Agnostic**: Use standard RoCC interface, works with all Chipyard cores
2. **Memory Access**: Goes through core's memory system (not direct L1$)
3. **Data Loading**: Engine loads via LOAD instructions (autonomous)
4. **Result Transfer**: Engine writes via STORE instructions
5. **Register File**: 32 regs per lane, loaded via LOAD instructions
6. **States**: IDLE = no kernel, STALL = kernel paused

## Chipyard Integration (`chipyard/`)

### `WarpAccelerator.scala`

- Chisel BlackBox wrapper for Verilog module
- Connects RoCC interface to core
- Parameter passing

### `WarpConfigs.scala`

- `WithRocketWarpAccelerator`
- `WithBOOMWarpAccelerator`
- `WithCVA6WarpAccelerator`

## Testing Order

1. ALU → Processing Lane → Lane Array
2. Instruction FIFO → Warp Controller
3. Memory Interface → RoCC Interface
4. Top-level integration
5. Chipyard integration

Good luck with the implementation! 🚀
