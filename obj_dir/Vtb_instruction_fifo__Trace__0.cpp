// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_instruction_fifo__Syms.h"


void Vtb_instruction_fifo___024root__trace_chg_0_sub_0(Vtb_instruction_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_instruction_fifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root__trace_chg_0\n"); );
    // Init
    Vtb_instruction_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_instruction_fifo___024root*>(voidSelf);
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_instruction_fifo___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_instruction_fifo___024root__trace_chg_0_sub_0(Vtb_instruction_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_instruction_fifo__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelf->tb_instruction_fifo__DOT__push));
        bufp->chgBit(oldp+2,(vlSelf->tb_instruction_fifo__DOT__pop));
        bufp->chgIData(oldp+3,(vlSelf->tb_instruction_fifo__DOT__data_in),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_instruction_fifo__DOT__test_count),32);
        bufp->chgIData(oldp+5,(vlSelf->tb_instruction_fifo__DOT__pass_count),32);
        bufp->chgIData(oldp+6,(vlSelf->tb_instruction_fifo__DOT__fail_count),32);
        bufp->chgIData(oldp+7,(vlSelf->tb_instruction_fifo__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+8,(vlSelf->tb_instruction_fifo__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+9,(vlSelf->tb_instruction_fifo__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+10,(vlSelf->tb_instruction_fifo__DOT__unnamedblk4__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+11,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                                [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]),32);
        bufp->chgBit(oldp+12,((0U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count))));
        bufp->chgBit(oldp+13,((0x10U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count))));
        bufp->chgBit(oldp+14,((0U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count))));
        bufp->chgIData(oldp+15,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[0]),32);
        bufp->chgIData(oldp+16,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[1]),32);
        bufp->chgIData(oldp+17,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[2]),32);
        bufp->chgIData(oldp+18,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[3]),32);
        bufp->chgIData(oldp+19,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[4]),32);
        bufp->chgIData(oldp+20,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[5]),32);
        bufp->chgIData(oldp+21,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[6]),32);
        bufp->chgIData(oldp+22,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[7]),32);
        bufp->chgIData(oldp+23,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[8]),32);
        bufp->chgIData(oldp+24,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[9]),32);
        bufp->chgIData(oldp+25,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[10]),32);
        bufp->chgIData(oldp+26,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[11]),32);
        bufp->chgIData(oldp+27,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[12]),32);
        bufp->chgIData(oldp+28,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[13]),32);
        bufp->chgIData(oldp+29,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[14]),32);
        bufp->chgIData(oldp+30,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[15]),32);
        bufp->chgCData(oldp+31,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__write_ptr),4);
        bufp->chgCData(oldp+32,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr),4);
        bufp->chgCData(oldp+33,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count),5);
    }
    bufp->chgBit(oldp+34,(vlSelf->tb_instruction_fifo__DOT__clk));
}

void Vtb_instruction_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root__trace_cleanup\n"); );
    // Init
    Vtb_instruction_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_instruction_fifo___024root*>(voidSelf);
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
