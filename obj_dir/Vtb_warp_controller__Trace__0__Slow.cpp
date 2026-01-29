// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_warp_controller__Syms.h"


VL_ATTR_COLD void Vtb_warp_controller___024root__trace_init_sub__TOP__warp_pkg__0(Vtb_warp_controller___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_warp_controller___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0(Vtb_warp_controller___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_warp_controller___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0(Vtb_warp_controller___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_warp_controller___024root__trace_init_sub__TOP__0(Vtb_warp_controller___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("warp_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_warp_controller___024root__trace_init_sub__TOP__warp_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("warp_pkg__Vdedup0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_warp_controller___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("warp_pkg__Vdedup1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_warp_controller___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_warp_controller", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+23,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"kernel_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"kernel_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"kernel_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+5,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"fifo_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"fifo_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"lane_execute",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"lane_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"lane_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"mem_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"kernel_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"kernel_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+27,0,"status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+9,0,"test_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+10,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+11,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+29,0,"NUM_LANES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+30,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+23,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"kernel_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"kernel_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"kernel_length",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+15,0,"kernel_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"kernel_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"fifo_pop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"fifo_empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"fifo_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"fifo_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"lane_execute",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"lane_instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"lane_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"mem_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"mem_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+27,0,"status",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+17,0,"state_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+28,0,"state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"inst_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"fetch_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"kernel_start_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"kernel_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"kernel_length_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_warp_controller___024root__trace_init_sub__TOP__warp_pkg__0(Vtb_warp_controller___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root__trace_init_sub__TOP__warp_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+29,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+31,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+31,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+30,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+31,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_warp_controller___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0(Vtb_warp_controller___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+29,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+31,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+31,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+30,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+31,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_warp_controller___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0(Vtb_warp_controller___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+29,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+31,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+31,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+30,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+31,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_warp_controller___024root__trace_init_top(Vtb_warp_controller___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root__trace_init_top\n"); );
    // Body
    Vtb_warp_controller___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_warp_controller___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_warp_controller___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_warp_controller___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_warp_controller___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_warp_controller___024root__trace_register(Vtb_warp_controller___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_warp_controller___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_warp_controller___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_warp_controller___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_warp_controller___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_warp_controller___024root__trace_const_0_sub_0(Vtb_warp_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_warp_controller___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root__trace_const_0\n"); );
    // Init
    Vtb_warp_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_warp_controller___024root*>(voidSelf);
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_warp_controller___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_warp_controller___024root__trace_const_0_sub_0(Vtb_warp_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+29,(8U),32);
    bufp->fullIData(oldp+30,(0x10U),32);
    bufp->fullIData(oldp+31,(0x20U),32);
}

VL_ATTR_COLD void Vtb_warp_controller___024root__trace_full_0_sub_0(Vtb_warp_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_warp_controller___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root__trace_full_0\n"); );
    // Init
    Vtb_warp_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_warp_controller___024root*>(voidSelf);
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_warp_controller___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_warp_controller___024root__trace_full_0_sub_0(Vtb_warp_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_warp_controller__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelf->tb_warp_controller__DOT__kernel_start));
    bufp->fullIData(oldp+3,(vlSelf->tb_warp_controller__DOT__kernel_addr),32);
    bufp->fullSData(oldp+4,(vlSelf->tb_warp_controller__DOT__kernel_length),16);
    bufp->fullBit(oldp+5,(vlSelf->tb_warp_controller__DOT__fifo_empty));
    bufp->fullBit(oldp+6,(vlSelf->tb_warp_controller__DOT__fifo_valid));
    bufp->fullIData(oldp+7,(vlSelf->tb_warp_controller__DOT__fifo_data),32);
    bufp->fullBit(oldp+8,(vlSelf->tb_warp_controller__DOT__lane_ready));
    bufp->fullIData(oldp+9,(vlSelf->tb_warp_controller__DOT__test_count),32);
    bufp->fullIData(oldp+10,(vlSelf->tb_warp_controller__DOT__pass_count),32);
    bufp->fullIData(oldp+11,(vlSelf->tb_warp_controller__DOT__fail_count),32);
    bufp->fullBit(oldp+12,(vlSelf->tb_warp_controller__DOT__mem_req));
    bufp->fullBit(oldp+13,(vlSelf->tb_warp_controller__DOT__mem_ready));
    bufp->fullBit(oldp+14,(vlSelf->tb_warp_controller__DOT__mem_valid));
    bufp->fullBit(oldp+15,(vlSelf->tb_warp_controller__DOT__kernel_done));
    bufp->fullBit(oldp+16,(vlSelf->tb_warp_controller__DOT__kernel_error));
    bufp->fullCData(oldp+17,(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r),3);
    bufp->fullSData(oldp+18,(vlSelf->tb_warp_controller__DOT__dut__DOT__inst_count),16);
    bufp->fullIData(oldp+19,(vlSelf->tb_warp_controller__DOT__dut__DOT__fetch_addr),32);
    bufp->fullBit(oldp+20,(vlSelf->tb_warp_controller__DOT__dut__DOT__kernel_start_r));
    bufp->fullIData(oldp+21,(vlSelf->tb_warp_controller__DOT__dut__DOT__kernel_addr_r),32);
    bufp->fullSData(oldp+22,(vlSelf->tb_warp_controller__DOT__dut__DOT__kernel_length_r),16);
    bufp->fullBit(oldp+23,(vlSelf->tb_warp_controller__DOT__clk));
    bufp->fullBit(oldp+24,(vlSelf->tb_warp_controller__DOT__fifo_pop));
    bufp->fullBit(oldp+25,(vlSelf->tb_warp_controller__DOT__lane_execute));
    bufp->fullIData(oldp+26,(vlSelf->tb_warp_controller__DOT__lane_instruction),32);
    bufp->fullCData(oldp+27,((((0U == (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r)) 
                               << 5U) | (((2U == (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r)) 
                                          << 4U) | 
                                         (((4U == (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r)) 
                                           << 3U) | 
                                          (((IData)(vlSelf->tb_warp_controller__DOT__kernel_error) 
                                            << 2U) 
                                           | (IData)(vlSelf->tb_warp_controller__DOT__fifo_empty)))))),6);
    bufp->fullCData(oldp+28,(vlSelf->tb_warp_controller__DOT__dut__DOT__state_next),3);
}
