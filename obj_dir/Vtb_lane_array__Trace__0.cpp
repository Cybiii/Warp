// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_lane_array__Syms.h"


void Vtb_lane_array___024root__trace_chg_0_sub_0(Vtb_lane_array___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_lane_array___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root__trace_chg_0\n"); );
    // Init
    Vtb_lane_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_lane_array___024root*>(voidSelf);
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_lane_array___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_lane_array___024root__trace_chg_0_sub_0(Vtb_lane_array___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_lane_array__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelf->tb_lane_array__DOT__execute));
        bufp->chgIData(oldp+2,(vlSelf->tb_lane_array__DOT__instruction),32);
        bufp->chgCData(oldp+3,(vlSelf->tb_lane_array__DOT__lane_enable),4);
        bufp->chgIData(oldp+4,(vlSelf->tb_lane_array__DOT__test_count),32);
        bufp->chgIData(oldp+5,(vlSelf->tb_lane_array__DOT__pass_count),32);
        bufp->chgIData(oldp+6,(vlSelf->tb_lane_array__DOT__fail_count),32);
        bufp->chgBit(oldp+7,((1U & (IData)(vlSelf->tb_lane_array__DOT__lane_enable))));
        bufp->chgBit(oldp+8,((1U & ((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                                    >> 1U))));
        bufp->chgBit(oldp+9,((1U & ((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                                    >> 2U))));
        bufp->chgBit(oldp+10,((1U & ((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                                     >> 3U))));
        bufp->chgIData(oldp+11,(vlSelf->tb_lane_array__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+12,(vlSelf->tb_lane_array__DOT__ready));
        bufp->chgBit(oldp+13,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_en));
        bufp->chgIData(oldp+14,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_data),32);
        bufp->chgCData(oldp+15,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next),2);
        bufp->chgBit(oldp+16,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_en));
        bufp->chgIData(oldp+17,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_data),32);
        bufp->chgCData(oldp+18,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next),2);
        bufp->chgBit(oldp+19,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_en));
        bufp->chgIData(oldp+20,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_data),32);
        bufp->chgCData(oldp+21,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next),2);
        bufp->chgBit(oldp+22,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_en));
        bufp->chgIData(oldp+23,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_data),32);
        bufp->chgCData(oldp+24,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+25,(vlSelf->tb_lane_array__DOT__dut__DOT__lane_ready),4);
        bufp->chgBit(oldp+26,(vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__ready));
        bufp->chgCData(oldp+27,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode),4);
        bufp->chgCData(oldp+28,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__dst_addr),5);
        bufp->chgCData(oldp+29,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src1_addr),5);
        bufp->chgCData(oldp+30,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src2_addr),5);
        bufp->chgIData(oldp+31,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__imm),32);
        bufp->chgIData(oldp+32,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1),32);
        bufp->chgIData(oldp+33,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data2),32);
        bufp->chgIData(oldp+34,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result),32);
        bufp->chgBit(oldp+35,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow));
        bufp->chgCData(oldp+36,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r),2);
        bufp->chgIData(oldp+37,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r),32);
        bufp->chgQData(oldp+38,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext),33);
        bufp->chgQData(oldp+40,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext),64);
        bufp->chgQData(oldp+42,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result),64);
        bufp->chgQData(oldp+44,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext),33);
        bufp->chgBit(oldp+46,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf));
        bufp->chgBit(oldp+47,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
        bufp->chgIData(oldp+48,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0]),32);
        bufp->chgIData(oldp+49,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1]),32);
        bufp->chgIData(oldp+50,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2]),32);
        bufp->chgIData(oldp+51,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3]),32);
        bufp->chgIData(oldp+52,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4]),32);
        bufp->chgIData(oldp+53,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5]),32);
        bufp->chgIData(oldp+54,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6]),32);
        bufp->chgIData(oldp+55,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7]),32);
        bufp->chgIData(oldp+56,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8]),32);
        bufp->chgIData(oldp+57,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9]),32);
        bufp->chgIData(oldp+58,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[10]),32);
        bufp->chgIData(oldp+59,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[11]),32);
        bufp->chgIData(oldp+60,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[12]),32);
        bufp->chgIData(oldp+61,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[13]),32);
        bufp->chgIData(oldp+62,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[14]),32);
        bufp->chgIData(oldp+63,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[15]),32);
        bufp->chgIData(oldp+64,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[16]),32);
        bufp->chgIData(oldp+65,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[17]),32);
        bufp->chgIData(oldp+66,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[18]),32);
        bufp->chgIData(oldp+67,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[19]),32);
        bufp->chgIData(oldp+68,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[20]),32);
        bufp->chgIData(oldp+69,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[21]),32);
        bufp->chgIData(oldp+70,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[22]),32);
        bufp->chgIData(oldp+71,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[23]),32);
        bufp->chgIData(oldp+72,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[24]),32);
        bufp->chgIData(oldp+73,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[25]),32);
        bufp->chgIData(oldp+74,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[26]),32);
        bufp->chgIData(oldp+75,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[27]),32);
        bufp->chgIData(oldp+76,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[28]),32);
        bufp->chgIData(oldp+77,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[29]),32);
        bufp->chgIData(oldp+78,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[30]),32);
        bufp->chgIData(oldp+79,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[31]),32);
        bufp->chgIData(oldp+80,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+81,(vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__ready));
        bufp->chgCData(oldp+82,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode),4);
        bufp->chgCData(oldp+83,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__dst_addr),5);
        bufp->chgCData(oldp+84,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src1_addr),5);
        bufp->chgCData(oldp+85,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src2_addr),5);
        bufp->chgIData(oldp+86,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__imm),32);
        bufp->chgIData(oldp+87,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1),32);
        bufp->chgIData(oldp+88,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data2),32);
        bufp->chgIData(oldp+89,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result),32);
        bufp->chgBit(oldp+90,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow));
        bufp->chgCData(oldp+91,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r),2);
        bufp->chgIData(oldp+92,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r),32);
        bufp->chgQData(oldp+93,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext),33);
        bufp->chgQData(oldp+95,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext),64);
        bufp->chgQData(oldp+97,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result),64);
        bufp->chgQData(oldp+99,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext),33);
        bufp->chgBit(oldp+101,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf));
        bufp->chgBit(oldp+102,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
        bufp->chgIData(oldp+103,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0]),32);
        bufp->chgIData(oldp+104,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1]),32);
        bufp->chgIData(oldp+105,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2]),32);
        bufp->chgIData(oldp+106,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3]),32);
        bufp->chgIData(oldp+107,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4]),32);
        bufp->chgIData(oldp+108,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5]),32);
        bufp->chgIData(oldp+109,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6]),32);
        bufp->chgIData(oldp+110,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7]),32);
        bufp->chgIData(oldp+111,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8]),32);
        bufp->chgIData(oldp+112,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9]),32);
        bufp->chgIData(oldp+113,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[10]),32);
        bufp->chgIData(oldp+114,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[11]),32);
        bufp->chgIData(oldp+115,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[12]),32);
        bufp->chgIData(oldp+116,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[13]),32);
        bufp->chgIData(oldp+117,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[14]),32);
        bufp->chgIData(oldp+118,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[15]),32);
        bufp->chgIData(oldp+119,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[16]),32);
        bufp->chgIData(oldp+120,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[17]),32);
        bufp->chgIData(oldp+121,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[18]),32);
        bufp->chgIData(oldp+122,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[19]),32);
        bufp->chgIData(oldp+123,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[20]),32);
        bufp->chgIData(oldp+124,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[21]),32);
        bufp->chgIData(oldp+125,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[22]),32);
        bufp->chgIData(oldp+126,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[23]),32);
        bufp->chgIData(oldp+127,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[24]),32);
        bufp->chgIData(oldp+128,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[25]),32);
        bufp->chgIData(oldp+129,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[26]),32);
        bufp->chgIData(oldp+130,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[27]),32);
        bufp->chgIData(oldp+131,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[28]),32);
        bufp->chgIData(oldp+132,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[29]),32);
        bufp->chgIData(oldp+133,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[30]),32);
        bufp->chgIData(oldp+134,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[31]),32);
        bufp->chgIData(oldp+135,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+136,(vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__ready));
        bufp->chgCData(oldp+137,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode),4);
        bufp->chgCData(oldp+138,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__dst_addr),5);
        bufp->chgCData(oldp+139,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src1_addr),5);
        bufp->chgCData(oldp+140,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src2_addr),5);
        bufp->chgIData(oldp+141,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__imm),32);
        bufp->chgIData(oldp+142,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1),32);
        bufp->chgIData(oldp+143,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data2),32);
        bufp->chgIData(oldp+144,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result),32);
        bufp->chgBit(oldp+145,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow));
        bufp->chgCData(oldp+146,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r),2);
        bufp->chgIData(oldp+147,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r),32);
        bufp->chgQData(oldp+148,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext),33);
        bufp->chgQData(oldp+150,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext),64);
        bufp->chgQData(oldp+152,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result),64);
        bufp->chgQData(oldp+154,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext),33);
        bufp->chgBit(oldp+156,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf));
        bufp->chgBit(oldp+157,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
        bufp->chgIData(oldp+158,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0]),32);
        bufp->chgIData(oldp+159,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1]),32);
        bufp->chgIData(oldp+160,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2]),32);
        bufp->chgIData(oldp+161,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3]),32);
        bufp->chgIData(oldp+162,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4]),32);
        bufp->chgIData(oldp+163,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5]),32);
        bufp->chgIData(oldp+164,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6]),32);
        bufp->chgIData(oldp+165,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7]),32);
        bufp->chgIData(oldp+166,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8]),32);
        bufp->chgIData(oldp+167,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9]),32);
        bufp->chgIData(oldp+168,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[10]),32);
        bufp->chgIData(oldp+169,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[11]),32);
        bufp->chgIData(oldp+170,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[12]),32);
        bufp->chgIData(oldp+171,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[13]),32);
        bufp->chgIData(oldp+172,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[14]),32);
        bufp->chgIData(oldp+173,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[15]),32);
        bufp->chgIData(oldp+174,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[16]),32);
        bufp->chgIData(oldp+175,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[17]),32);
        bufp->chgIData(oldp+176,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[18]),32);
        bufp->chgIData(oldp+177,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[19]),32);
        bufp->chgIData(oldp+178,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[20]),32);
        bufp->chgIData(oldp+179,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[21]),32);
        bufp->chgIData(oldp+180,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[22]),32);
        bufp->chgIData(oldp+181,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[23]),32);
        bufp->chgIData(oldp+182,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[24]),32);
        bufp->chgIData(oldp+183,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[25]),32);
        bufp->chgIData(oldp+184,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[26]),32);
        bufp->chgIData(oldp+185,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[27]),32);
        bufp->chgIData(oldp+186,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[28]),32);
        bufp->chgIData(oldp+187,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[29]),32);
        bufp->chgIData(oldp+188,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[30]),32);
        bufp->chgIData(oldp+189,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[31]),32);
        bufp->chgIData(oldp+190,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+191,(vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__ready));
        bufp->chgCData(oldp+192,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode),4);
        bufp->chgCData(oldp+193,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__dst_addr),5);
        bufp->chgCData(oldp+194,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src1_addr),5);
        bufp->chgCData(oldp+195,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src2_addr),5);
        bufp->chgIData(oldp+196,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__imm),32);
        bufp->chgIData(oldp+197,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1),32);
        bufp->chgIData(oldp+198,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data2),32);
        bufp->chgIData(oldp+199,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result),32);
        bufp->chgBit(oldp+200,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow));
        bufp->chgCData(oldp+201,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r),2);
        bufp->chgIData(oldp+202,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r),32);
        bufp->chgQData(oldp+203,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext),33);
        bufp->chgQData(oldp+205,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext),64);
        bufp->chgQData(oldp+207,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result),64);
        bufp->chgQData(oldp+209,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext),33);
        bufp->chgBit(oldp+211,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf));
        bufp->chgBit(oldp+212,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
        bufp->chgIData(oldp+213,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0]),32);
        bufp->chgIData(oldp+214,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1]),32);
        bufp->chgIData(oldp+215,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2]),32);
        bufp->chgIData(oldp+216,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3]),32);
        bufp->chgIData(oldp+217,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4]),32);
        bufp->chgIData(oldp+218,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5]),32);
        bufp->chgIData(oldp+219,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6]),32);
        bufp->chgIData(oldp+220,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7]),32);
        bufp->chgIData(oldp+221,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8]),32);
        bufp->chgIData(oldp+222,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9]),32);
        bufp->chgIData(oldp+223,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[10]),32);
        bufp->chgIData(oldp+224,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[11]),32);
        bufp->chgIData(oldp+225,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[12]),32);
        bufp->chgIData(oldp+226,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[13]),32);
        bufp->chgIData(oldp+227,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[14]),32);
        bufp->chgIData(oldp+228,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[15]),32);
        bufp->chgIData(oldp+229,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[16]),32);
        bufp->chgIData(oldp+230,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[17]),32);
        bufp->chgIData(oldp+231,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[18]),32);
        bufp->chgIData(oldp+232,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[19]),32);
        bufp->chgIData(oldp+233,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[20]),32);
        bufp->chgIData(oldp+234,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[21]),32);
        bufp->chgIData(oldp+235,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[22]),32);
        bufp->chgIData(oldp+236,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[23]),32);
        bufp->chgIData(oldp+237,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[24]),32);
        bufp->chgIData(oldp+238,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[25]),32);
        bufp->chgIData(oldp+239,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[26]),32);
        bufp->chgIData(oldp+240,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[27]),32);
        bufp->chgIData(oldp+241,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[28]),32);
        bufp->chgIData(oldp+242,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[29]),32);
        bufp->chgIData(oldp+243,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[30]),32);
        bufp->chgIData(oldp+244,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[31]),32);
        bufp->chgIData(oldp+245,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+246,(vlSelf->tb_lane_array__DOT__clk));
}

void Vtb_lane_array___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root__trace_cleanup\n"); );
    // Init
    Vtb_lane_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_lane_array___024root*>(voidSelf);
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
