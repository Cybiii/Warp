// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_alu__Syms.h"


void Vtb_alu___024root__trace_chg_0_sub_0(Vtb_alu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_alu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root__trace_chg_0\n"); );
    // Init
    Vtb_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_alu___024root*>(voidSelf);
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_alu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_alu___024root__trace_chg_0_sub_0(Vtb_alu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->tb_alu__DOT__opcode),4);
        bufp->chgIData(oldp+1,(vlSelf->tb_alu__DOT__operand1),32);
        bufp->chgIData(oldp+2,(vlSelf->tb_alu__DOT__operand2),32);
        bufp->chgIData(oldp+3,(vlSelf->tb_alu__DOT__operand3),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_alu__DOT__test_count),32);
        bufp->chgIData(oldp+5,(vlSelf->tb_alu__DOT__pass_count),32);
        bufp->chgIData(oldp+6,(vlSelf->tb_alu__DOT__fail_count),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+7,(vlSelf->tb_alu__DOT__result),32);
        bufp->chgBit(oldp+8,(vlSelf->tb_alu__DOT__overflow));
        bufp->chgQData(oldp+9,(vlSelf->tb_alu__DOT__dut__DOT__add_result_ext),33);
        bufp->chgQData(oldp+11,(vlSelf->tb_alu__DOT__dut__DOT__mul_result_ext),64);
        bufp->chgQData(oldp+13,(vlSelf->tb_alu__DOT__dut__DOT__fma_mul_result),64);
        bufp->chgQData(oldp+15,(vlSelf->tb_alu__DOT__dut__DOT__fma_result_ext),33);
        bufp->chgBit(oldp+17,(vlSelf->tb_alu__DOT__dut__DOT__mul_ovf));
        bufp->chgBit(oldp+18,(vlSelf->tb_alu__DOT__dut__DOT__add_ovf));
    }
    bufp->chgBit(oldp+19,(vlSelf->tb_alu__DOT__clk));
    bufp->chgBit(oldp+20,(vlSelf->tb_alu__DOT__rst_n));
}

void Vtb_alu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root__trace_cleanup\n"); );
    // Init
    Vtb_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_alu___024root*>(voidSelf);
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
