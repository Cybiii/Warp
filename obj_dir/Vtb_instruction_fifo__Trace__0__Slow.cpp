// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_instruction_fifo__Syms.h"


VL_ATTR_COLD void Vtb_instruction_fifo___024root__trace_init_sub__TOP__warp_pkg__0(Vtb_instruction_fifo___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_instruction_fifo___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0(Vtb_instruction_fifo___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_instruction_fifo___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0(Vtb_instruction_fifo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_instruction_fifo___024root__trace_init_sub__TOP__0(Vtb_instruction_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("warp_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_instruction_fifo___024root__trace_init_sub__TOP__warp_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("warp_pkg__Vdedup0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_instruction_fifo___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("warp_pkg__Vdedup1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_instruction_fifo___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_instruction_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+36,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"test_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+6,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+7,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+37,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+35,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"push",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fifo_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+16+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+32,0,"write_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+33,0,"read_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_instruction_fifo___024root__trace_init_sub__TOP__warp_pkg__0(Vtb_instruction_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root__trace_init_sub__TOP__warp_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+39,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+37,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_instruction_fifo___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0(Vtb_instruction_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+39,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+37,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_instruction_fifo___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0(Vtb_instruction_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+39,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+37,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_instruction_fifo___024root__trace_init_top(Vtb_instruction_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root__trace_init_top\n"); );
    // Body
    Vtb_instruction_fifo___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_instruction_fifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_instruction_fifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_instruction_fifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_instruction_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_instruction_fifo___024root__trace_register(Vtb_instruction_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_instruction_fifo___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_instruction_fifo___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_instruction_fifo___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_instruction_fifo___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_instruction_fifo___024root__trace_const_0_sub_0(Vtb_instruction_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_instruction_fifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root__trace_const_0\n"); );
    // Init
    Vtb_instruction_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_instruction_fifo___024root*>(voidSelf);
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_instruction_fifo___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_instruction_fifo___024root__trace_const_0_sub_0(Vtb_instruction_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+36,(0x10U),32);
    bufp->fullIData(oldp+37,(0x10U),32);
    bufp->fullIData(oldp+38,(0x20U),32);
    bufp->fullIData(oldp+39,(8U),32);
}

VL_ATTR_COLD void Vtb_instruction_fifo___024root__trace_full_0_sub_0(Vtb_instruction_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_instruction_fifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root__trace_full_0\n"); );
    // Init
    Vtb_instruction_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_instruction_fifo___024root*>(voidSelf);
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_instruction_fifo___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_instruction_fifo___024root__trace_full_0_sub_0(Vtb_instruction_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_instruction_fifo__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelf->tb_instruction_fifo__DOT__push));
    bufp->fullBit(oldp+3,(vlSelf->tb_instruction_fifo__DOT__pop));
    bufp->fullIData(oldp+4,(vlSelf->tb_instruction_fifo__DOT__data_in),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_instruction_fifo__DOT__test_count),32);
    bufp->fullIData(oldp+6,(vlSelf->tb_instruction_fifo__DOT__pass_count),32);
    bufp->fullIData(oldp+7,(vlSelf->tb_instruction_fifo__DOT__fail_count),32);
    bufp->fullIData(oldp+8,(vlSelf->tb_instruction_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+9,(vlSelf->tb_instruction_fifo__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+10,(vlSelf->tb_instruction_fifo__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+11,(vlSelf->tb_instruction_fifo__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+12,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                             [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]),32);
    bufp->fullBit(oldp+13,((0U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count))));
    bufp->fullBit(oldp+14,((0x10U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count))));
    bufp->fullBit(oldp+15,((0U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count))));
    bufp->fullIData(oldp+16,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[0]),32);
    bufp->fullIData(oldp+17,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[1]),32);
    bufp->fullIData(oldp+18,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[2]),32);
    bufp->fullIData(oldp+19,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[3]),32);
    bufp->fullIData(oldp+20,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[4]),32);
    bufp->fullIData(oldp+21,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[5]),32);
    bufp->fullIData(oldp+22,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[6]),32);
    bufp->fullIData(oldp+23,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[7]),32);
    bufp->fullIData(oldp+24,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[8]),32);
    bufp->fullIData(oldp+25,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[9]),32);
    bufp->fullIData(oldp+26,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[10]),32);
    bufp->fullIData(oldp+27,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[11]),32);
    bufp->fullIData(oldp+28,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[12]),32);
    bufp->fullIData(oldp+29,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[13]),32);
    bufp->fullIData(oldp+30,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[14]),32);
    bufp->fullIData(oldp+31,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[15]),32);
    bufp->fullCData(oldp+32,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__write_ptr),4);
    bufp->fullCData(oldp+33,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr),4);
    bufp->fullCData(oldp+34,(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count),5);
    bufp->fullBit(oldp+35,(vlSelf->tb_instruction_fifo__DOT__clk));
}
