// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_processing_lane__Syms.h"


void Vtb_processing_lane___024root__trace_chg_0_sub_0(Vtb_processing_lane___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_processing_lane___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root__trace_chg_0\n"); );
    // Init
    Vtb_processing_lane___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_processing_lane___024root*>(voidSelf);
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_processing_lane___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_processing_lane___024root__trace_chg_0_sub_0(Vtb_processing_lane___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_processing_lane__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelf->tb_processing_lane__DOT__lane_enable));
        bufp->chgBit(oldp+2,(vlSelf->tb_processing_lane__DOT__execute));
        bufp->chgIData(oldp+3,(vlSelf->tb_processing_lane__DOT__instruction),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_processing_lane__DOT__test_count),32);
        bufp->chgIData(oldp+5,(vlSelf->tb_processing_lane__DOT__pass_count),32);
        bufp->chgIData(oldp+6,(vlSelf->tb_processing_lane__DOT__fail_count),32);
        bufp->chgIData(oldp+7,(vlSelf->tb_processing_lane__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+8,(vlSelf->tb_processing_lane__DOT__ready));
        bufp->chgCData(oldp+9,(vlSelf->tb_processing_lane__DOT__dut__DOT__opcode),4);
        bufp->chgCData(oldp+10,(vlSelf->tb_processing_lane__DOT__dut__DOT__dst_addr),5);
        bufp->chgCData(oldp+11,(vlSelf->tb_processing_lane__DOT__dut__DOT__src1_addr),5);
        bufp->chgCData(oldp+12,(vlSelf->tb_processing_lane__DOT__dut__DOT__src2_addr),5);
        bufp->chgIData(oldp+13,(vlSelf->tb_processing_lane__DOT__dut__DOT__imm),32);
        bufp->chgIData(oldp+14,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data1),32);
        bufp->chgIData(oldp+15,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data2),32);
        bufp->chgIData(oldp+16,(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_result),32);
        bufp->chgBit(oldp+17,(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_overflow));
        bufp->chgCData(oldp+18,(vlSelf->tb_processing_lane__DOT__dut__DOT__state_r),2);
        bufp->chgIData(oldp+19,(vlSelf->tb_processing_lane__DOT__dut__DOT__inst_r),32);
        bufp->chgQData(oldp+20,(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__add_result_ext),33);
        bufp->chgQData(oldp+22,(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__mul_result_ext),64);
        bufp->chgQData(oldp+24,(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__fma_mul_result),64);
        bufp->chgQData(oldp+26,(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__fma_result_ext),33);
        bufp->chgBit(oldp+28,(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__mul_ovf));
        bufp->chgBit(oldp+29,(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__add_ovf));
        bufp->chgIData(oldp+30,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0]),32);
        bufp->chgIData(oldp+31,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[1]),32);
        bufp->chgIData(oldp+32,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[2]),32);
        bufp->chgIData(oldp+33,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[3]),32);
        bufp->chgIData(oldp+34,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[4]),32);
        bufp->chgIData(oldp+35,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[5]),32);
        bufp->chgIData(oldp+36,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[6]),32);
        bufp->chgIData(oldp+37,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[7]),32);
        bufp->chgIData(oldp+38,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[8]),32);
        bufp->chgIData(oldp+39,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[9]),32);
        bufp->chgIData(oldp+40,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[10]),32);
        bufp->chgIData(oldp+41,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[11]),32);
        bufp->chgIData(oldp+42,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[12]),32);
        bufp->chgIData(oldp+43,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[13]),32);
        bufp->chgIData(oldp+44,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[14]),32);
        bufp->chgIData(oldp+45,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[15]),32);
        bufp->chgIData(oldp+46,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[16]),32);
        bufp->chgIData(oldp+47,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[17]),32);
        bufp->chgIData(oldp+48,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[18]),32);
        bufp->chgIData(oldp+49,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[19]),32);
        bufp->chgIData(oldp+50,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[20]),32);
        bufp->chgIData(oldp+51,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[21]),32);
        bufp->chgIData(oldp+52,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[22]),32);
        bufp->chgIData(oldp+53,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[23]),32);
        bufp->chgIData(oldp+54,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[24]),32);
        bufp->chgIData(oldp+55,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[25]),32);
        bufp->chgIData(oldp+56,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[26]),32);
        bufp->chgIData(oldp+57,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[27]),32);
        bufp->chgIData(oldp+58,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[28]),32);
        bufp->chgIData(oldp+59,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[29]),32);
        bufp->chgIData(oldp+60,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[30]),32);
        bufp->chgIData(oldp+61,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[31]),32);
        bufp->chgIData(oldp+62,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+63,(vlSelf->tb_processing_lane__DOT__clk));
    bufp->chgBit(oldp+64,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_write_en));
    bufp->chgIData(oldp+65,(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_write_data),32);
    bufp->chgCData(oldp+66,(vlSelf->tb_processing_lane__DOT__dut__DOT__state_next),2);
}

void Vtb_processing_lane___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root__trace_cleanup\n"); );
    // Init
    Vtb_processing_lane___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_processing_lane___024root*>(voidSelf);
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
