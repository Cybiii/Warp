// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_warp_controller__Syms.h"


void Vtb_warp_controller___024root__trace_chg_0_sub_0(Vtb_warp_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_warp_controller___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root__trace_chg_0\n"); );
    // Init
    Vtb_warp_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_warp_controller___024root*>(voidSelf);
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_warp_controller___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_warp_controller___024root__trace_chg_0_sub_0(Vtb_warp_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_warp_controller__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelf->tb_warp_controller__DOT__kernel_start));
        bufp->chgIData(oldp+2,(vlSelf->tb_warp_controller__DOT__kernel_addr),32);
        bufp->chgSData(oldp+3,(vlSelf->tb_warp_controller__DOT__kernel_length),16);
        bufp->chgBit(oldp+4,(vlSelf->tb_warp_controller__DOT__fifo_empty));
        bufp->chgBit(oldp+5,(vlSelf->tb_warp_controller__DOT__fifo_valid));
        bufp->chgIData(oldp+6,(vlSelf->tb_warp_controller__DOT__fifo_data),32);
        bufp->chgBit(oldp+7,(vlSelf->tb_warp_controller__DOT__lane_ready));
        bufp->chgIData(oldp+8,(vlSelf->tb_warp_controller__DOT__test_count),32);
        bufp->chgIData(oldp+9,(vlSelf->tb_warp_controller__DOT__pass_count),32);
        bufp->chgIData(oldp+10,(vlSelf->tb_warp_controller__DOT__fail_count),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+11,(vlSelf->tb_warp_controller__DOT__mem_req));
        bufp->chgBit(oldp+12,(vlSelf->tb_warp_controller__DOT__mem_ready));
        bufp->chgBit(oldp+13,(vlSelf->tb_warp_controller__DOT__mem_valid));
        bufp->chgBit(oldp+14,(vlSelf->tb_warp_controller__DOT__kernel_done));
        bufp->chgBit(oldp+15,(vlSelf->tb_warp_controller__DOT__kernel_error));
        bufp->chgCData(oldp+16,(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r),3);
        bufp->chgSData(oldp+17,(vlSelf->tb_warp_controller__DOT__dut__DOT__inst_count),16);
        bufp->chgIData(oldp+18,(vlSelf->tb_warp_controller__DOT__dut__DOT__fetch_addr),32);
        bufp->chgBit(oldp+19,(vlSelf->tb_warp_controller__DOT__dut__DOT__kernel_start_r));
        bufp->chgIData(oldp+20,(vlSelf->tb_warp_controller__DOT__dut__DOT__kernel_addr_r),32);
        bufp->chgSData(oldp+21,(vlSelf->tb_warp_controller__DOT__dut__DOT__kernel_length_r),16);
    }
    bufp->chgBit(oldp+22,(vlSelf->tb_warp_controller__DOT__clk));
    bufp->chgBit(oldp+23,(vlSelf->tb_warp_controller__DOT__fifo_pop));
    bufp->chgBit(oldp+24,(vlSelf->tb_warp_controller__DOT__lane_execute));
    bufp->chgIData(oldp+25,(vlSelf->tb_warp_controller__DOT__lane_instruction),32);
    bufp->chgCData(oldp+26,((((0U == (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r)) 
                              << 5U) | (((2U == (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r)) 
                                         << 4U) | (
                                                   ((4U 
                                                     == (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r)) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->tb_warp_controller__DOT__kernel_error) 
                                                       << 2U) 
                                                      | (IData)(vlSelf->tb_warp_controller__DOT__fifo_empty)))))),6);
    bufp->chgCData(oldp+27,(vlSelf->tb_warp_controller__DOT__dut__DOT__state_next),3);
}

void Vtb_warp_controller___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root__trace_cleanup\n"); );
    // Init
    Vtb_warp_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_warp_controller___024root*>(voidSelf);
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
