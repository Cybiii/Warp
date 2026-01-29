// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_lane_array__Syms.h"


VL_ATTR_COLD void Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__0(Vtb_lane_array___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0(Vtb_lane_array___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0(Vtb_lane_array___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup2__0(Vtb_lane_array___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup3__0(Vtb_lane_array___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup4__0(Vtb_lane_array___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_lane_array___024root__trace_init_sub__TOP__0(Vtb_lane_array___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("warp_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("warp_pkg__Vdedup0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("warp_pkg__Vdedup1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("warp_pkg__Vdedup2", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup2__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("warp_pkg__Vdedup3", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup3__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("warp_pkg__Vdedup4", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup4__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_lane_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+248,0,"NUM_LANES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"execute",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"lane_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+13,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"test_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+6,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+7,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+249,0,"NUM_LANES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"execute",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"lane_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+13,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"lane_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("gen_lanes[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("lane_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"LANE_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"execute",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"lane_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+29,0,"dst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+30,0,"src1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+31,0,"src2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+32,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"rf_read_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"rf_read_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"rf_write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"rf_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"alu_operand1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"alu_operand2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"alu_operand3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"alu_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"alu_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"state_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+16,0,"state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+38,0,"inst_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+33,0,"operand1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"operand2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"operand3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+39,0,"add_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+41,0,"mul_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+43,0,"fma_mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+45,0,"fma_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+47,0,"mul_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"add_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("rf_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"read_addr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+33,0,"read_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"read_addr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"read_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"write_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+49+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+81,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lanes[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("lane_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+253,0,"LANE_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"execute",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+82,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"lane_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+84,0,"dst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+85,0,"src1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+86,0,"src2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+87,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"rf_read_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"rf_read_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"rf_write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"rf_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"alu_operand1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"alu_operand2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"alu_operand3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"alu_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"alu_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"state_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+19,0,"state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+93,0,"inst_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+88,0,"operand1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"operand2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"operand3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+94,0,"add_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+96,0,"mul_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+98,0,"fma_mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+100,0,"fma_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+102,0,"mul_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"add_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("rf_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"read_addr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+88,0,"read_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"read_addr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+89,0,"read_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"write_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+104+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+136,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lanes[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("lane_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+254,0,"LANE_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"execute",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+137,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"lane_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+139,0,"dst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+140,0,"src1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+141,0,"src2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+142,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"rf_read_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"rf_read_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"rf_write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"rf_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"alu_operand1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"alu_operand2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"alu_operand3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+146,0,"alu_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"alu_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"state_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+22,0,"state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+148,0,"inst_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+143,0,"operand1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"operand2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"operand3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+146,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+149,0,"add_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+151,0,"mul_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+153,0,"fma_mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+155,0,"fma_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+157,0,"mul_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"add_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("rf_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"read_addr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+143,0,"read_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"read_addr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+144,0,"read_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"write_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+21,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+159+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+191,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lanes[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("lane_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+255,0,"LANE_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"execute",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+192,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"lane_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+193,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+194,0,"dst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+195,0,"src1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+196,0,"src2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+197,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"rf_read_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"rf_read_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"rf_write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"rf_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"alu_operand1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"alu_operand2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"alu_operand3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+201,0,"alu_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"alu_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"state_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+25,0,"state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+203,0,"inst_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+193,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+198,0,"operand1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"operand2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"operand3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+201,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+204,0,"add_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+206,0,"mul_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+208,0,"fma_mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+210,0,"fma_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+212,0,"mul_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"add_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("rf_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"read_addr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+198,0,"read_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"read_addr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+199,0,"read_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"write_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+214+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+256,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__0(Vtb_lane_array___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+257,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+258,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup4__0(Vtb_lane_array___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+257,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+258,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup3__0(Vtb_lane_array___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup3__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+257,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+258,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup2__0(Vtb_lane_array___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+257,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+258,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0(Vtb_lane_array___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+257,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+258,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0(Vtb_lane_array___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root__trace_init_sub__TOP__warp_pkg__Vdedup1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+257,0,"NUM_LANES_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+258,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_lane_array___024root__trace_init_top(Vtb_lane_array___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root__trace_init_top\n"); );
    // Body
    Vtb_lane_array___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_lane_array___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_lane_array___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_lane_array___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_lane_array___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_lane_array___024root__trace_register(Vtb_lane_array___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_lane_array___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_lane_array___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_lane_array___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_lane_array___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_lane_array___024root__trace_const_0_sub_0(Vtb_lane_array___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_lane_array___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root__trace_const_0\n"); );
    // Init
    Vtb_lane_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_lane_array___024root*>(voidSelf);
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_lane_array___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_lane_array___024root__trace_const_0_sub_0(Vtb_lane_array___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+248,(4U),32);
    bufp->fullIData(oldp+249,(4U),32);
    bufp->fullIData(oldp+250,(0x20U),32);
    bufp->fullIData(oldp+251,(0U),32);
    bufp->fullBit(oldp+252,(1U));
    bufp->fullIData(oldp+253,(1U),32);
    bufp->fullIData(oldp+254,(2U),32);
    bufp->fullIData(oldp+255,(3U),32);
    bufp->fullIData(oldp+256,(4U),32);
    bufp->fullIData(oldp+257,(8U),32);
    bufp->fullIData(oldp+258,(0x10U),32);
}

VL_ATTR_COLD void Vtb_lane_array___024root__trace_full_0_sub_0(Vtb_lane_array___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_lane_array___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root__trace_full_0\n"); );
    // Init
    Vtb_lane_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_lane_array___024root*>(voidSelf);
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_lane_array___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_lane_array___024root__trace_full_0_sub_0(Vtb_lane_array___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_lane_array__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelf->tb_lane_array__DOT__execute));
    bufp->fullIData(oldp+3,(vlSelf->tb_lane_array__DOT__instruction),32);
    bufp->fullCData(oldp+4,(vlSelf->tb_lane_array__DOT__lane_enable),4);
    bufp->fullIData(oldp+5,(vlSelf->tb_lane_array__DOT__test_count),32);
    bufp->fullIData(oldp+6,(vlSelf->tb_lane_array__DOT__pass_count),32);
    bufp->fullIData(oldp+7,(vlSelf->tb_lane_array__DOT__fail_count),32);
    bufp->fullBit(oldp+8,((1U & (IData)(vlSelf->tb_lane_array__DOT__lane_enable))));
    bufp->fullBit(oldp+9,((1U & ((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                                 >> 1U))));
    bufp->fullBit(oldp+10,((1U & ((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                                  >> 2U))));
    bufp->fullBit(oldp+11,((1U & ((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                                  >> 3U))));
    bufp->fullIData(oldp+12,(vlSelf->tb_lane_array__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+13,(vlSelf->tb_lane_array__DOT__ready));
    bufp->fullBit(oldp+14,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_en));
    bufp->fullIData(oldp+15,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_data),32);
    bufp->fullCData(oldp+16,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next),2);
    bufp->fullBit(oldp+17,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_en));
    bufp->fullIData(oldp+18,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_data),32);
    bufp->fullCData(oldp+19,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next),2);
    bufp->fullBit(oldp+20,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_en));
    bufp->fullIData(oldp+21,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_data),32);
    bufp->fullCData(oldp+22,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next),2);
    bufp->fullBit(oldp+23,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_en));
    bufp->fullIData(oldp+24,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_data),32);
    bufp->fullCData(oldp+25,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next),2);
    bufp->fullCData(oldp+26,(vlSelf->tb_lane_array__DOT__dut__DOT__lane_ready),4);
    bufp->fullBit(oldp+27,(vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__ready));
    bufp->fullCData(oldp+28,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode),4);
    bufp->fullCData(oldp+29,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__dst_addr),5);
    bufp->fullCData(oldp+30,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src1_addr),5);
    bufp->fullCData(oldp+31,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src2_addr),5);
    bufp->fullIData(oldp+32,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__imm),32);
    bufp->fullIData(oldp+33,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1),32);
    bufp->fullIData(oldp+34,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data2),32);
    bufp->fullIData(oldp+35,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result),32);
    bufp->fullBit(oldp+36,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow));
    bufp->fullCData(oldp+37,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r),2);
    bufp->fullIData(oldp+38,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r),32);
    bufp->fullQData(oldp+39,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext),33);
    bufp->fullQData(oldp+41,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext),64);
    bufp->fullQData(oldp+43,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result),64);
    bufp->fullQData(oldp+45,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext),33);
    bufp->fullBit(oldp+47,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf));
    bufp->fullBit(oldp+48,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
    bufp->fullIData(oldp+49,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0]),32);
    bufp->fullIData(oldp+50,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1]),32);
    bufp->fullIData(oldp+51,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2]),32);
    bufp->fullIData(oldp+52,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3]),32);
    bufp->fullIData(oldp+53,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4]),32);
    bufp->fullIData(oldp+54,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5]),32);
    bufp->fullIData(oldp+55,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6]),32);
    bufp->fullIData(oldp+56,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7]),32);
    bufp->fullIData(oldp+57,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8]),32);
    bufp->fullIData(oldp+58,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9]),32);
    bufp->fullIData(oldp+59,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[10]),32);
    bufp->fullIData(oldp+60,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[11]),32);
    bufp->fullIData(oldp+61,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[12]),32);
    bufp->fullIData(oldp+62,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[13]),32);
    bufp->fullIData(oldp+63,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[14]),32);
    bufp->fullIData(oldp+64,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[15]),32);
    bufp->fullIData(oldp+65,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[16]),32);
    bufp->fullIData(oldp+66,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[17]),32);
    bufp->fullIData(oldp+67,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[18]),32);
    bufp->fullIData(oldp+68,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[19]),32);
    bufp->fullIData(oldp+69,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[20]),32);
    bufp->fullIData(oldp+70,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[21]),32);
    bufp->fullIData(oldp+71,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[22]),32);
    bufp->fullIData(oldp+72,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[23]),32);
    bufp->fullIData(oldp+73,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[24]),32);
    bufp->fullIData(oldp+74,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[25]),32);
    bufp->fullIData(oldp+75,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[26]),32);
    bufp->fullIData(oldp+76,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[27]),32);
    bufp->fullIData(oldp+77,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[28]),32);
    bufp->fullIData(oldp+78,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[29]),32);
    bufp->fullIData(oldp+79,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[30]),32);
    bufp->fullIData(oldp+80,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[31]),32);
    bufp->fullIData(oldp+81,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+82,(vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__ready));
    bufp->fullCData(oldp+83,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode),4);
    bufp->fullCData(oldp+84,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__dst_addr),5);
    bufp->fullCData(oldp+85,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src1_addr),5);
    bufp->fullCData(oldp+86,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src2_addr),5);
    bufp->fullIData(oldp+87,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__imm),32);
    bufp->fullIData(oldp+88,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1),32);
    bufp->fullIData(oldp+89,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data2),32);
    bufp->fullIData(oldp+90,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result),32);
    bufp->fullBit(oldp+91,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow));
    bufp->fullCData(oldp+92,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r),2);
    bufp->fullIData(oldp+93,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r),32);
    bufp->fullQData(oldp+94,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext),33);
    bufp->fullQData(oldp+96,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext),64);
    bufp->fullQData(oldp+98,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result),64);
    bufp->fullQData(oldp+100,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext),33);
    bufp->fullBit(oldp+102,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf));
    bufp->fullBit(oldp+103,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
    bufp->fullIData(oldp+104,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0]),32);
    bufp->fullIData(oldp+105,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1]),32);
    bufp->fullIData(oldp+106,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2]),32);
    bufp->fullIData(oldp+107,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3]),32);
    bufp->fullIData(oldp+108,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4]),32);
    bufp->fullIData(oldp+109,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5]),32);
    bufp->fullIData(oldp+110,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6]),32);
    bufp->fullIData(oldp+111,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7]),32);
    bufp->fullIData(oldp+112,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8]),32);
    bufp->fullIData(oldp+113,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9]),32);
    bufp->fullIData(oldp+114,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[10]),32);
    bufp->fullIData(oldp+115,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[11]),32);
    bufp->fullIData(oldp+116,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[12]),32);
    bufp->fullIData(oldp+117,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[13]),32);
    bufp->fullIData(oldp+118,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[14]),32);
    bufp->fullIData(oldp+119,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[15]),32);
    bufp->fullIData(oldp+120,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[16]),32);
    bufp->fullIData(oldp+121,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[17]),32);
    bufp->fullIData(oldp+122,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[18]),32);
    bufp->fullIData(oldp+123,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[19]),32);
    bufp->fullIData(oldp+124,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[20]),32);
    bufp->fullIData(oldp+125,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[21]),32);
    bufp->fullIData(oldp+126,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[22]),32);
    bufp->fullIData(oldp+127,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[23]),32);
    bufp->fullIData(oldp+128,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[24]),32);
    bufp->fullIData(oldp+129,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[25]),32);
    bufp->fullIData(oldp+130,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[26]),32);
    bufp->fullIData(oldp+131,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[27]),32);
    bufp->fullIData(oldp+132,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[28]),32);
    bufp->fullIData(oldp+133,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[29]),32);
    bufp->fullIData(oldp+134,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[30]),32);
    bufp->fullIData(oldp+135,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[31]),32);
    bufp->fullIData(oldp+136,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+137,(vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__ready));
    bufp->fullCData(oldp+138,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode),4);
    bufp->fullCData(oldp+139,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__dst_addr),5);
    bufp->fullCData(oldp+140,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src1_addr),5);
    bufp->fullCData(oldp+141,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src2_addr),5);
    bufp->fullIData(oldp+142,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__imm),32);
    bufp->fullIData(oldp+143,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1),32);
    bufp->fullIData(oldp+144,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data2),32);
    bufp->fullIData(oldp+145,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result),32);
    bufp->fullBit(oldp+146,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow));
    bufp->fullCData(oldp+147,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r),2);
    bufp->fullIData(oldp+148,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r),32);
    bufp->fullQData(oldp+149,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext),33);
    bufp->fullQData(oldp+151,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext),64);
    bufp->fullQData(oldp+153,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result),64);
    bufp->fullQData(oldp+155,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext),33);
    bufp->fullBit(oldp+157,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf));
    bufp->fullBit(oldp+158,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
    bufp->fullIData(oldp+159,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0]),32);
    bufp->fullIData(oldp+160,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1]),32);
    bufp->fullIData(oldp+161,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2]),32);
    bufp->fullIData(oldp+162,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3]),32);
    bufp->fullIData(oldp+163,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4]),32);
    bufp->fullIData(oldp+164,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5]),32);
    bufp->fullIData(oldp+165,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6]),32);
    bufp->fullIData(oldp+166,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7]),32);
    bufp->fullIData(oldp+167,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8]),32);
    bufp->fullIData(oldp+168,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9]),32);
    bufp->fullIData(oldp+169,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[10]),32);
    bufp->fullIData(oldp+170,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[11]),32);
    bufp->fullIData(oldp+171,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[12]),32);
    bufp->fullIData(oldp+172,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[13]),32);
    bufp->fullIData(oldp+173,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[14]),32);
    bufp->fullIData(oldp+174,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[15]),32);
    bufp->fullIData(oldp+175,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[16]),32);
    bufp->fullIData(oldp+176,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[17]),32);
    bufp->fullIData(oldp+177,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[18]),32);
    bufp->fullIData(oldp+178,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[19]),32);
    bufp->fullIData(oldp+179,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[20]),32);
    bufp->fullIData(oldp+180,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[21]),32);
    bufp->fullIData(oldp+181,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[22]),32);
    bufp->fullIData(oldp+182,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[23]),32);
    bufp->fullIData(oldp+183,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[24]),32);
    bufp->fullIData(oldp+184,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[25]),32);
    bufp->fullIData(oldp+185,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[26]),32);
    bufp->fullIData(oldp+186,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[27]),32);
    bufp->fullIData(oldp+187,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[28]),32);
    bufp->fullIData(oldp+188,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[29]),32);
    bufp->fullIData(oldp+189,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[30]),32);
    bufp->fullIData(oldp+190,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[31]),32);
    bufp->fullIData(oldp+191,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+192,(vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__ready));
    bufp->fullCData(oldp+193,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode),4);
    bufp->fullCData(oldp+194,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__dst_addr),5);
    bufp->fullCData(oldp+195,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src1_addr),5);
    bufp->fullCData(oldp+196,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src2_addr),5);
    bufp->fullIData(oldp+197,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__imm),32);
    bufp->fullIData(oldp+198,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1),32);
    bufp->fullIData(oldp+199,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data2),32);
    bufp->fullIData(oldp+200,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result),32);
    bufp->fullBit(oldp+201,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow));
    bufp->fullCData(oldp+202,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r),2);
    bufp->fullIData(oldp+203,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r),32);
    bufp->fullQData(oldp+204,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext),33);
    bufp->fullQData(oldp+206,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext),64);
    bufp->fullQData(oldp+208,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result),64);
    bufp->fullQData(oldp+210,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext),33);
    bufp->fullBit(oldp+212,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf));
    bufp->fullBit(oldp+213,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
    bufp->fullIData(oldp+214,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0]),32);
    bufp->fullIData(oldp+215,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1]),32);
    bufp->fullIData(oldp+216,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2]),32);
    bufp->fullIData(oldp+217,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3]),32);
    bufp->fullIData(oldp+218,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4]),32);
    bufp->fullIData(oldp+219,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5]),32);
    bufp->fullIData(oldp+220,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6]),32);
    bufp->fullIData(oldp+221,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7]),32);
    bufp->fullIData(oldp+222,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8]),32);
    bufp->fullIData(oldp+223,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9]),32);
    bufp->fullIData(oldp+224,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[10]),32);
    bufp->fullIData(oldp+225,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[11]),32);
    bufp->fullIData(oldp+226,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[12]),32);
    bufp->fullIData(oldp+227,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[13]),32);
    bufp->fullIData(oldp+228,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[14]),32);
    bufp->fullIData(oldp+229,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[15]),32);
    bufp->fullIData(oldp+230,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[16]),32);
    bufp->fullIData(oldp+231,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[17]),32);
    bufp->fullIData(oldp+232,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[18]),32);
    bufp->fullIData(oldp+233,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[19]),32);
    bufp->fullIData(oldp+234,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[20]),32);
    bufp->fullIData(oldp+235,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[21]),32);
    bufp->fullIData(oldp+236,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[22]),32);
    bufp->fullIData(oldp+237,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[23]),32);
    bufp->fullIData(oldp+238,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[24]),32);
    bufp->fullIData(oldp+239,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[25]),32);
    bufp->fullIData(oldp+240,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[26]),32);
    bufp->fullIData(oldp+241,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[27]),32);
    bufp->fullIData(oldp+242,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[28]),32);
    bufp->fullIData(oldp+243,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[29]),32);
    bufp->fullIData(oldp+244,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[30]),32);
    bufp->fullIData(oldp+245,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[31]),32);
    bufp->fullIData(oldp+246,(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+247,(vlSelf->tb_lane_array__DOT__clk));
}
