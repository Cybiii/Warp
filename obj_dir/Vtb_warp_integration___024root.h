// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_warp_integration.h for the primary calling header

#ifndef VERILATED_VTB_WARP_INTEGRATION___024ROOT_H_
#define VERILATED_VTB_WARP_INTEGRATION___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_warp_integration__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_warp_integration___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_warp_integration__DOT__clk;
        CData/*0:0*/ tb_warp_integration__DOT__rst_n;
        CData/*0:0*/ tb_warp_integration__DOT__cmd_valid;
        CData/*0:0*/ tb_warp_integration__DOT__cmd_ready;
        CData/*6:0*/ tb_warp_integration__DOT__cmd_funct;
        CData/*4:0*/ tb_warp_integration__DOT__cmd_rs1;
        CData/*4:0*/ tb_warp_integration__DOT__cmd_rs2;
        CData/*4:0*/ tb_warp_integration__DOT__cmd_rd;
        CData/*0:0*/ tb_warp_integration__DOT__resp_ready;
        CData/*0:0*/ tb_warp_integration__DOT__mem_resp_valid;
        CData/*0:0*/ tb_warp_integration__DOT__mem_resp_ready;
        CData/*0:0*/ tb_warp_integration__DOT___Vpast_0_0;
        CData/*0:0*/ tb_warp_integration__DOT___Vpast_1_0;
        CData/*0:0*/ tb_warp_integration__DOT___Vpast_2_0;
        CData/*0:0*/ tb_warp_integration__DOT___Vpast_3_0;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__kernel_start;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__kernel_done;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__kernel_error;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__mask_update;
        CData/*7:0*/ tb_warp_integration__DOT__dut__DOT__mask_value;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__fifo_push;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__fifo_pop;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__fifo_full;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__fifo_empty;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lane_execute;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lane_ready;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__ctrl_mem_req;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_rd_r;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r;
        CData/*6:0*/ tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__opcode_r;
        CData/*1:0*/ tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_r;
        CData/*1:0*/ tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_next;
        CData/*2:0*/ tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r;
        CData/*2:0*/ tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_next;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__kernel_start_r;
        CData/*3:0*/ tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__write_ptr;
        CData/*3:0*/ tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__read_ptr;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count;
        CData/*7:0*/ tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r;
        CData/*7:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__lane_ready;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__ready;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__ready;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__ready;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__ready;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__ready;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__ready;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__ready;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__ready;
        CData/*3:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__dst_addr;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src1_addr;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src2_addr;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_en;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow;
        CData/*1:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r;
        CData/*1:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf;
        CData/*3:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__dst_addr;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src1_addr;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src2_addr;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_en;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow;
    };
    struct {
        CData/*1:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r;
        CData/*1:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf;
        CData/*3:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__dst_addr;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src1_addr;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src2_addr;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_en;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow;
        CData/*1:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r;
        CData/*1:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf;
        CData/*3:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__dst_addr;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src1_addr;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src2_addr;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_en;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow;
        CData/*1:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r;
        CData/*1:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf;
        CData/*3:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__opcode;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__dst_addr;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__src1_addr;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__src2_addr;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_write_en;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_overflow;
        CData/*1:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_r;
        CData/*1:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_next;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf;
        CData/*3:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__opcode;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__dst_addr;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__src1_addr;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__src2_addr;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_write_en;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_overflow;
        CData/*1:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_r;
        CData/*1:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_next;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf;
        CData/*3:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__opcode;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__dst_addr;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__src1_addr;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__src2_addr;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_write_en;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_overflow;
        CData/*1:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_r;
        CData/*1:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_next;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf;
        CData/*3:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__opcode;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__dst_addr;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__src1_addr;
        CData/*4:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__src2_addr;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_write_en;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_overflow;
        CData/*1:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_r;
        CData/*1:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_next;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf;
        CData/*0:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf;
    };
    struct {
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_warp_integration__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_warp_integration__DOT__rst_n__0;
        CData/*0:0*/ __VactContinue;
        CData/*0:0*/ __Vsampled__TOP__tb_warp_integration__DOT__cmd_ready;
        CData/*0:0*/ __Vsampled__TOP__tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r;
        SData/*15:0*/ tb_warp_integration__DOT__dut__DOT__kernel_length;
        SData/*15:0*/ tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__inst_count;
        SData/*15:0*/ tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__kernel_length_r;
        IData/*31:0*/ tb_warp_integration__DOT__cmd_rs1_data;
        IData/*31:0*/ tb_warp_integration__DOT__cmd_rs2_data;
        IData/*31:0*/ tb_warp_integration__DOT__mem_resp_data;
        IData/*31:0*/ tb_warp_integration__DOT__test_count;
        IData/*31:0*/ tb_warp_integration__DOT__pass_count;
        IData/*31:0*/ tb_warp_integration__DOT__fail_count;
        IData/*31:0*/ tb_warp_integration__DOT__monitor_counter;
        IData/*31:0*/ tb_warp_integration__DOT__mem_req_count;
        IData/*31:0*/ tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__kernel_addr;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lane_instruction;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_data_r;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_rs1_data_r;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_rs2_data_r;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__fetch_addr;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__kernel_addr_r;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__imm;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data2;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_data;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__imm;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data2;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_data;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__imm;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data2;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_data;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__imm;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data2;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_data;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__imm;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data1;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data2;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_write_data;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_result;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__inst_r;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__imm;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data1;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data2;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_write_data;
    };
    struct {
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_result;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__inst_r;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__imm;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data1;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data2;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_write_data;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_result;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__inst_r;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__imm;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data1;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data2;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_write_data;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_result;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__inst_r;
        IData/*31:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __Vdly__tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__fetch_addr;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext;
        QData/*63:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext;
        QData/*63:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result;
        QData/*32:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext;
        QData/*32:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext;
        QData/*63:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext;
        QData/*63:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result;
        QData/*32:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext;
        QData/*32:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext;
        QData/*63:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext;
        QData/*63:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result;
        QData/*32:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext;
        QData/*32:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext;
        QData/*63:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext;
        QData/*63:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result;
        QData/*32:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext;
        QData/*32:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext;
        QData/*63:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext;
        QData/*63:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result;
        QData/*32:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext;
        QData/*32:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext;
        QData/*63:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext;
        QData/*63:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result;
        QData/*32:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext;
        QData/*32:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext;
        QData/*63:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext;
        QData/*63:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result;
        QData/*32:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext;
        QData/*32:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext;
        QData/*63:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext;
        QData/*63:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result;
        QData/*32:0*/ tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext;
        VlUnpacked<IData/*31:0*/, 1024> tb_warp_integration__DOT__test_mem;
        VlUnpacked<IData/*31:0*/, 16> tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem;
        VlUnpacked<IData/*31:0*/, 32> tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers;
        VlUnpacked<IData/*31:0*/, 32> tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers;
        VlUnpacked<IData/*31:0*/, 32> tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers;
        VlUnpacked<IData/*31:0*/, 32> tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers;
        VlUnpacked<IData/*31:0*/, 32> tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers;
        VlUnpacked<IData/*31:0*/, 32> tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers;
        VlUnpacked<IData/*31:0*/, 32> tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers;
        VlUnpacked<IData/*31:0*/, 32> tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hce2080ec__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_warp_integration__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_warp_integration___024root(Vtb_warp_integration__Syms* symsp, const char* v__name);
    ~Vtb_warp_integration___024root();
    VL_UNCOPYABLE(Vtb_warp_integration___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
