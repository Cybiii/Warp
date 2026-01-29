// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_warp_mask__Syms.h"


VL_ATTR_COLD void Vtb_warp_mask___024root__trace_init_sub__TOP__warp_pkg__0(Vtb_warp_mask___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_warp_mask___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0(Vtb_warp_mask___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_warp_mask___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0(Vtb_warp_mask___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_warp_mask___024root__trace_init_sub__TOP__0(Vtb_warp_mask___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("warp_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_warp_mask___024root__trace_init_sub__TOP__warp_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("warp_pkg__Vdedup0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_warp_mask___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("warp_pkg__Vdedup1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_warp_mask___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_warp_mask", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"NUM_LANES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"mask_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"mask_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"mask_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"lane_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"test_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+5,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+6,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"NUM_LANES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+10,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"mask_update",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"mask_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"mask_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"lane_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"mask_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"single_lane_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_warp_mask___024root__trace_init_sub__TOP__warp_pkg__0(Vtb_warp_mask___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root__trace_init_sub__TOP__warp_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+13,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+14,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+14,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+15,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+14,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_warp_mask___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0(Vtb_warp_mask___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+13,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+14,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+14,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+15,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+14,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_warp_mask___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0(Vtb_warp_mask___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+13,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+14,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+14,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+15,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+14,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_warp_mask___024root__trace_init_top(Vtb_warp_mask___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root__trace_init_top\n"); );
    // Body
    Vtb_warp_mask___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_warp_mask___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_warp_mask___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_warp_mask___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_warp_mask___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_warp_mask___024root__trace_register(Vtb_warp_mask___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_warp_mask___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_warp_mask___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_warp_mask___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_warp_mask___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_warp_mask___024root__trace_const_0_sub_0(Vtb_warp_mask___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_warp_mask___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root__trace_const_0\n"); );
    // Init
    Vtb_warp_mask___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_warp_mask___024root*>(voidSelf);
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_warp_mask___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_warp_mask___024root__trace_const_0_sub_0(Vtb_warp_mask___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+12,(8U),32);
    bufp->fullIData(oldp+13,(8U),32);
    bufp->fullIData(oldp+14,(0x20U),32);
    bufp->fullIData(oldp+15,(0x10U),32);
}

VL_ATTR_COLD void Vtb_warp_mask___024root__trace_full_0_sub_0(Vtb_warp_mask___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_warp_mask___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root__trace_full_0\n"); );
    // Init
    Vtb_warp_mask___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_warp_mask___024root*>(voidSelf);
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_warp_mask___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_warp_mask___024root__trace_full_0_sub_0(Vtb_warp_mask___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_warp_mask__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelf->tb_warp_mask__DOT__mask_update));
    bufp->fullCData(oldp+3,(vlSelf->tb_warp_mask__DOT__mask_in),8);
    bufp->fullIData(oldp+4,(vlSelf->tb_warp_mask__DOT__test_count),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_warp_mask__DOT__pass_count),32);
    bufp->fullIData(oldp+6,(vlSelf->tb_warp_mask__DOT__fail_count),32);
    bufp->fullIData(oldp+7,(vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+8,(vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask),8);
    bufp->fullIData(oldp+9,(vlSelf->tb_warp_mask__DOT__unnamedblk3__DOT__i),32);
    bufp->fullBit(oldp+10,(vlSelf->tb_warp_mask__DOT__clk));
    bufp->fullCData(oldp+11,(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r),8);
}
