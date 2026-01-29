// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_processing_lane__Syms.h"


VL_ATTR_COLD void Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__0(Vtb_processing_lane___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0(Vtb_processing_lane___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0(Vtb_processing_lane___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__Vdedup2__0(Vtb_processing_lane___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__Vdedup3__0(Vtb_processing_lane___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_processing_lane___024root__trace_init_sub__TOP__0(Vtb_processing_lane___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("warp_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("warp_pkg__Vdedup0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("warp_pkg__Vdedup1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("warp_pkg__Vdedup2", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__Vdedup2__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("warp_pkg__Vdedup3", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__Vdedup3__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_processing_lane", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"lane_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"execute",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"test_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+6,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+7,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+68,0,"LANE_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+69,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+69,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"execute",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"lane_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"dst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"src1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"src2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"rf_read_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"rf_read_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"rf_write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"rf_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"alu_operand1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"alu_operand2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"alu_operand3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"alu_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"alu_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"state_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+67,0,"state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+20,0,"inst_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+69,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"operand1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"operand2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"operand3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+21,0,"add_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+23,0,"mul_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+25,0,"fma_mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+27,0,"fma_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+29,0,"mul_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"add_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("rf_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+69,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+69,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"read_addr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"read_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"read_addr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"read_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"write_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+66,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+31+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+63,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__0(Vtb_processing_lane___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+71,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+69,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+69,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+72,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+69,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__Vdedup3__0(Vtb_processing_lane___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__Vdedup3__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+71,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+69,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+69,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+72,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+69,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__Vdedup2__0(Vtb_processing_lane___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__Vdedup2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+71,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+69,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+69,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+72,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+69,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0(Vtb_processing_lane___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+71,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+69,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+69,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+72,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+69,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0(Vtb_processing_lane___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+71,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+69,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+69,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+72,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+69,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_processing_lane___024root__trace_init_top(Vtb_processing_lane___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root__trace_init_top\n"); );
    // Body
    Vtb_processing_lane___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_processing_lane___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_processing_lane___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_processing_lane___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_processing_lane___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_processing_lane___024root__trace_register(Vtb_processing_lane___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_processing_lane___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_processing_lane___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_processing_lane___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_processing_lane___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_processing_lane___024root__trace_const_0_sub_0(Vtb_processing_lane___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_processing_lane___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root__trace_const_0\n"); );
    // Init
    Vtb_processing_lane___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_processing_lane___024root*>(voidSelf);
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_processing_lane___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_processing_lane___024root__trace_const_0_sub_0(Vtb_processing_lane___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+68,(0U),32);
    bufp->fullIData(oldp+69,(0x20U),32);
    bufp->fullBit(oldp+70,(1U));
    bufp->fullIData(oldp+71,(8U),32);
    bufp->fullIData(oldp+72,(0x10U),32);
}

VL_ATTR_COLD void Vtb_processing_lane___024root__trace_full_0_sub_0(Vtb_processing_lane___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_processing_lane___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root__trace_full_0\n"); );
    // Init
    Vtb_processing_lane___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_processing_lane___024root*>(voidSelf);
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_processing_lane___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_processing_lane___024root__trace_full_0_sub_0(Vtb_processing_lane___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_processing_lane__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelf->tb_processing_lane__DOT__lane_enable));
    bufp->fullBit(oldp+3,(vlSelf->tb_processing_lane__DOT__execute));
    bufp->fullIData(oldp+4,(vlSelf->tb_processing_lane__DOT__instruction),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_processing_lane__DOT__test_count),32);
    bufp->fullIData(oldp+6,(vlSelf->tb_processing_lane__DOT__pass_count),32);
    bufp->fullIData(oldp+7,(vlSelf->tb_processing_lane__DOT__fail_count),32);
    bufp->fullIData(oldp+8,(vlSelf->tb_processing_lane__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+9,(vlSelf->tb_processing_lane__DOT__ready));
    bufp->fullCData(oldp+10,(vlSelf->tb_processing_lane__DOT__dut__DOT__opcode),4);
    bufp->fullCData(oldp+11,(vlSelf->tb_processing_lane__DOT__dut__DOT__dst_addr),5);
    bufp->fullCData(oldp+12,(vlSelf->tb_processing_lane__DOT__dut__DOT__src1_addr),5);
    bufp->fullCData(oldp+13,(vlSelf->tb_processing_lane__DOT__dut__DOT__src2_addr),5);
    bufp->fullIData(oldp+14,(vlSelf->tb_processing_lane__DOT__dut__DOT__imm),32);
    bufp->fullIData(oldp+15,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data1),32);
    bufp->fullIData(oldp+16,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data2),32);
    bufp->fullIData(oldp+17,(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_result),32);
    bufp->fullBit(oldp+18,(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_overflow));
    bufp->fullCData(oldp+19,(vlSelf->tb_processing_lane__DOT__dut__DOT__state_r),2);
    bufp->fullIData(oldp+20,(vlSelf->tb_processing_lane__DOT__dut__DOT__inst_r),32);
    bufp->fullQData(oldp+21,(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__add_result_ext),33);
    bufp->fullQData(oldp+23,(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__mul_result_ext),64);
    bufp->fullQData(oldp+25,(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__fma_mul_result),64);
    bufp->fullQData(oldp+27,(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__fma_result_ext),33);
    bufp->fullBit(oldp+29,(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__mul_ovf));
    bufp->fullBit(oldp+30,(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__add_ovf));
    bufp->fullIData(oldp+31,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0]),32);
    bufp->fullIData(oldp+32,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[1]),32);
    bufp->fullIData(oldp+33,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[2]),32);
    bufp->fullIData(oldp+34,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[3]),32);
    bufp->fullIData(oldp+35,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[4]),32);
    bufp->fullIData(oldp+36,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[5]),32);
    bufp->fullIData(oldp+37,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[6]),32);
    bufp->fullIData(oldp+38,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[7]),32);
    bufp->fullIData(oldp+39,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[8]),32);
    bufp->fullIData(oldp+40,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[9]),32);
    bufp->fullIData(oldp+41,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[10]),32);
    bufp->fullIData(oldp+42,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[11]),32);
    bufp->fullIData(oldp+43,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[12]),32);
    bufp->fullIData(oldp+44,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[13]),32);
    bufp->fullIData(oldp+45,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[14]),32);
    bufp->fullIData(oldp+46,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[15]),32);
    bufp->fullIData(oldp+47,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[16]),32);
    bufp->fullIData(oldp+48,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[17]),32);
    bufp->fullIData(oldp+49,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[18]),32);
    bufp->fullIData(oldp+50,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[19]),32);
    bufp->fullIData(oldp+51,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[20]),32);
    bufp->fullIData(oldp+52,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[21]),32);
    bufp->fullIData(oldp+53,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[22]),32);
    bufp->fullIData(oldp+54,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[23]),32);
    bufp->fullIData(oldp+55,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[24]),32);
    bufp->fullIData(oldp+56,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[25]),32);
    bufp->fullIData(oldp+57,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[26]),32);
    bufp->fullIData(oldp+58,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[27]),32);
    bufp->fullIData(oldp+59,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[28]),32);
    bufp->fullIData(oldp+60,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[29]),32);
    bufp->fullIData(oldp+61,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[30]),32);
    bufp->fullIData(oldp+62,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[31]),32);
    bufp->fullIData(oldp+63,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+64,(vlSelf->tb_processing_lane__DOT__clk));
    bufp->fullBit(oldp+65,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_write_en));
    bufp->fullIData(oldp+66,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_write_data),32);
    bufp->fullCData(oldp+67,(vlSelf->tb_processing_lane__DOT__dut__DOT__state_next),2);
}
