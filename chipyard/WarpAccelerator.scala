// Chipyard Accelerator Wrapper for Warp SIMT Engine
// Wraps SystemVerilog warp_engine module as a RoCC accelerator

package warp

import chisel3._
import chisel3.util._
import chisel3.experimental.{IntParam}
import freechips.rocketchip.config.{Parameters, Field}
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.tile._
import freechips.rocketchip.rocket.{TLBConfig}

// Configuration parameters for Warp engine
case class WarpParams(
  numLanes: Int = 8,
  dataWidth: Int = 32,
  regFileSize: Int = 32,
  fifoDepth: Int = 16,
  addrWidth: Int = 32
)

case object WarpKey extends Field[Option[WarpParams]](None)

// BlackBox wrapper for SystemVerilog warp_engine module
class WarpEngineBlackBox(params: WarpParams) extends BlackBox(Map(
  "NUM_LANES" -> IntParam(params.numLanes),
  "DATA_WIDTH" -> IntParam(params.dataWidth),
  "REG_FILE_SIZE" -> IntParam(params.regFileSize),
  "FIFO_DEPTH" -> IntParam(params.fifoDepth),
  "ADDR_WIDTH" -> IntParam(params.addrWidth)
)) with HasBlackBoxResource {
  
  val io = IO(new Bundle {
    val clk = Input(Clock())
    val rst_n = Input(Bool())
    
    // RoCC Command interface
    val cmd_valid = Input(Bool())
    val cmd_ready = Output(Bool())
    val cmd_funct = Input(UInt(7.W))
    val cmd_rs1 = Input(UInt(5.W))
    val cmd_rs2 = Input(UInt(5.W))
    val cmd_rd = Input(UInt(5.W))
    val cmd_rs1_data = Input(UInt(32.W))
    val cmd_rs2_data = Input(UInt(32.W))
    
    // RoCC Response interface
    val resp_valid = Output(Bool())
    val resp_ready = Input(Bool())
    val resp_rd = Output(UInt(5.W))
    val resp_data = Output(UInt(32.W))
    
    // RoCC Memory interface
    val mem_req_valid = Output(Bool())
    val mem_req_ready = Input(Bool())
    val mem_req_addr = Output(UInt(params.addrWidth.W))
    val mem_req_write = Output(Bool())
    val mem_req_data = Output(UInt(32.W))
    val mem_resp_valid = Input(Bool())
    val mem_resp_ready = Output(Bool())
    val mem_resp_data = Input(UInt(32.W))
  })
  
  // Add SystemVerilog source files
  addResource("/rtl/warp_engine.sv")
  addResource("/rtl/rocc_interface.sv")
  addResource("/rtl/warp_controller.sv")
  addResource("/rtl/instruction_fifo.sv")
  addResource("/rtl/warp_mask.sv")
  addResource("/rtl/lane_array.sv")
  addResource("/rtl/processing_lane.sv")
  addResource("/rtl/register_file.sv")
  addResource("/rtl/alu.sv")
  addResource("/rtl/memory_interface.sv")
  addResource("/include/warp_pkg.sv")
}

// RoCC Accelerator wrapper
class WarpAccelerator(opcodes: OpcodeSet, params: WarpParams)(implicit p: Parameters)
  extends LazyRoCC(opcodes) {
  
  override lazy val module = new WarpAcceleratorModule(this, params)
}

class WarpAcceleratorModule(outer: WarpAccelerator, params: WarpParams)(implicit p: Parameters)
  extends LazyRoCCModuleImp(outer) {
  
  // Instantiate the BlackBox
  val warp_engine = Module(new WarpEngineBlackBox(params))
  
  // Connect clock and reset
  warp_engine.io.clk := clock
  warp_engine.io.rst_n := !reset.asBool
  
  // Connect RoCC command interface
  warp_engine.io.cmd_valid := io.cmd.valid
  io.cmd.ready := warp_engine.io.cmd_ready
  warp_engine.io.cmd_funct := io.cmd.bits.inst.funct
  warp_engine.io.cmd_rs1 := io.cmd.bits.inst.rs1
  warp_engine.io.cmd_rs2 := io.cmd.bits.inst.rs2
  warp_engine.io.cmd_rd := io.cmd.bits.inst.rd
  warp_engine.io.cmd_rs1_data := io.cmd.bits.rs1
  warp_engine.io.cmd_rs2_data := io.cmd.bits.rs2
  
  // Connect RoCC response interface
  io.resp.valid := warp_engine.io.resp_valid
  warp_engine.io.resp_ready := io.resp.ready
  io.resp.bits.rd := warp_engine.io.resp_rd
  io.resp.bits.data := warp_engine.io.resp_data
  
  // Connect memory interface
  io.mem.req.valid := warp_engine.io.mem_req_valid
  warp_engine.io.mem_req_ready := io.mem.req.ready
  io.mem.req.bits.addr := warp_engine.io.mem_req_addr
  io.mem.req.bits.tag := 0.U
  io.mem.req.bits.cmd := Mux(warp_engine.io.mem_req_write, 1.U, 0.U) // 1=write, 0=read
  io.mem.req.bits.size := 2.U // 32-bit (4 bytes)
  io.mem.req.bits.signed := false.B
  io.mem.req.bits.data := warp_engine.io.mem_req_data
  io.mem.req.bits.phys := false.B
  io.mem.req.bits.dprv := 0.U
  
  warp_engine.io.mem_resp_valid := io.mem.resp.valid
  warp_engine.io.mem_resp_data := io.mem.resp.bits.data
  warp_engine.io.mem_resp_ready := true.B // Always ready to accept responses
  
  // Handle memory s2_nack
  io.mem.s1_kill := false.B
  io.mem.s2_kill := false.B
  
  // No exceptions from this accelerator
  io.interrupt := false.B
  
  // Busy signal
  io.busy := warp_engine.io.cmd_valid && !warp_engine.io.cmd_ready
}

