// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_alu.h for the primary calling header

#include "Vtb_alu__pch.h"
#include "Vtb_alu__Syms.h"
#include "Vtb_alu___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_alu___024root___eval_initial__TOP__Vtiming__2(Vtb_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Init
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__0__op;
    __Vtask_tb_alu__DOT__test_alu__0__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__0__op1;
    __Vtask_tb_alu__DOT__test_alu__0__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__0__op2;
    __Vtask_tb_alu__DOT__test_alu__0__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__0__op3;
    __Vtask_tb_alu__DOT__test_alu__0__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__0__expected_result;
    __Vtask_tb_alu__DOT__test_alu__0__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__0__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__0__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__0__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__1__op;
    __Vtask_tb_alu__DOT__test_alu__1__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__1__op1;
    __Vtask_tb_alu__DOT__test_alu__1__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__1__op2;
    __Vtask_tb_alu__DOT__test_alu__1__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__1__op3;
    __Vtask_tb_alu__DOT__test_alu__1__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__1__expected_result;
    __Vtask_tb_alu__DOT__test_alu__1__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__1__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__1__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__1__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__2__op;
    __Vtask_tb_alu__DOT__test_alu__2__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__2__op1;
    __Vtask_tb_alu__DOT__test_alu__2__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__2__op2;
    __Vtask_tb_alu__DOT__test_alu__2__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__2__op3;
    __Vtask_tb_alu__DOT__test_alu__2__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__2__expected_result;
    __Vtask_tb_alu__DOT__test_alu__2__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__2__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__2__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__2__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__3__op;
    __Vtask_tb_alu__DOT__test_alu__3__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__3__op1;
    __Vtask_tb_alu__DOT__test_alu__3__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__3__op2;
    __Vtask_tb_alu__DOT__test_alu__3__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__3__op3;
    __Vtask_tb_alu__DOT__test_alu__3__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__3__expected_result;
    __Vtask_tb_alu__DOT__test_alu__3__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__3__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__3__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__3__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__4__op;
    __Vtask_tb_alu__DOT__test_alu__4__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__4__op1;
    __Vtask_tb_alu__DOT__test_alu__4__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__4__op2;
    __Vtask_tb_alu__DOT__test_alu__4__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__4__op3;
    __Vtask_tb_alu__DOT__test_alu__4__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__4__expected_result;
    __Vtask_tb_alu__DOT__test_alu__4__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__4__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__4__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__4__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__5__op;
    __Vtask_tb_alu__DOT__test_alu__5__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__5__op1;
    __Vtask_tb_alu__DOT__test_alu__5__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__5__op2;
    __Vtask_tb_alu__DOT__test_alu__5__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__5__op3;
    __Vtask_tb_alu__DOT__test_alu__5__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__5__expected_result;
    __Vtask_tb_alu__DOT__test_alu__5__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__5__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__5__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__5__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__6__op;
    __Vtask_tb_alu__DOT__test_alu__6__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__6__op1;
    __Vtask_tb_alu__DOT__test_alu__6__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__6__op2;
    __Vtask_tb_alu__DOT__test_alu__6__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__6__op3;
    __Vtask_tb_alu__DOT__test_alu__6__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__6__expected_result;
    __Vtask_tb_alu__DOT__test_alu__6__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__6__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__6__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__6__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__7__op;
    __Vtask_tb_alu__DOT__test_alu__7__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__7__op1;
    __Vtask_tb_alu__DOT__test_alu__7__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__7__op2;
    __Vtask_tb_alu__DOT__test_alu__7__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__7__op3;
    __Vtask_tb_alu__DOT__test_alu__7__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__7__expected_result;
    __Vtask_tb_alu__DOT__test_alu__7__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__7__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__7__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__7__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__8__op;
    __Vtask_tb_alu__DOT__test_alu__8__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__8__op1;
    __Vtask_tb_alu__DOT__test_alu__8__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__8__op2;
    __Vtask_tb_alu__DOT__test_alu__8__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__8__op3;
    __Vtask_tb_alu__DOT__test_alu__8__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__8__expected_result;
    __Vtask_tb_alu__DOT__test_alu__8__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__8__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__8__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__8__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__9__op;
    __Vtask_tb_alu__DOT__test_alu__9__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__9__op1;
    __Vtask_tb_alu__DOT__test_alu__9__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__9__op2;
    __Vtask_tb_alu__DOT__test_alu__9__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__9__op3;
    __Vtask_tb_alu__DOT__test_alu__9__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__9__expected_result;
    __Vtask_tb_alu__DOT__test_alu__9__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__9__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__9__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__9__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__10__op;
    __Vtask_tb_alu__DOT__test_alu__10__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__10__op1;
    __Vtask_tb_alu__DOT__test_alu__10__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__10__op2;
    __Vtask_tb_alu__DOT__test_alu__10__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__10__op3;
    __Vtask_tb_alu__DOT__test_alu__10__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__10__expected_result;
    __Vtask_tb_alu__DOT__test_alu__10__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__10__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__10__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__10__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__11__op;
    __Vtask_tb_alu__DOT__test_alu__11__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__11__op1;
    __Vtask_tb_alu__DOT__test_alu__11__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__11__op2;
    __Vtask_tb_alu__DOT__test_alu__11__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__11__op3;
    __Vtask_tb_alu__DOT__test_alu__11__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__11__expected_result;
    __Vtask_tb_alu__DOT__test_alu__11__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__11__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__11__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__11__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__12__op;
    __Vtask_tb_alu__DOT__test_alu__12__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__12__op1;
    __Vtask_tb_alu__DOT__test_alu__12__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__12__op2;
    __Vtask_tb_alu__DOT__test_alu__12__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__12__op3;
    __Vtask_tb_alu__DOT__test_alu__12__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__12__expected_result;
    __Vtask_tb_alu__DOT__test_alu__12__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__12__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__12__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__12__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__13__op;
    __Vtask_tb_alu__DOT__test_alu__13__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__13__op1;
    __Vtask_tb_alu__DOT__test_alu__13__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__13__op2;
    __Vtask_tb_alu__DOT__test_alu__13__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__13__op3;
    __Vtask_tb_alu__DOT__test_alu__13__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__13__expected_result;
    __Vtask_tb_alu__DOT__test_alu__13__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__13__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__13__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__13__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__14__op;
    __Vtask_tb_alu__DOT__test_alu__14__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__14__op1;
    __Vtask_tb_alu__DOT__test_alu__14__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__14__op2;
    __Vtask_tb_alu__DOT__test_alu__14__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__14__op3;
    __Vtask_tb_alu__DOT__test_alu__14__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__14__expected_result;
    __Vtask_tb_alu__DOT__test_alu__14__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__14__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__14__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__14__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__15__op;
    __Vtask_tb_alu__DOT__test_alu__15__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__15__op1;
    __Vtask_tb_alu__DOT__test_alu__15__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__15__op2;
    __Vtask_tb_alu__DOT__test_alu__15__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__15__op3;
    __Vtask_tb_alu__DOT__test_alu__15__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__15__expected_result;
    __Vtask_tb_alu__DOT__test_alu__15__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__15__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__15__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__15__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__16__op;
    __Vtask_tb_alu__DOT__test_alu__16__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__16__op1;
    __Vtask_tb_alu__DOT__test_alu__16__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__16__op2;
    __Vtask_tb_alu__DOT__test_alu__16__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__16__op3;
    __Vtask_tb_alu__DOT__test_alu__16__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__16__expected_result;
    __Vtask_tb_alu__DOT__test_alu__16__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__16__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__16__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__16__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__17__op;
    __Vtask_tb_alu__DOT__test_alu__17__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__17__op1;
    __Vtask_tb_alu__DOT__test_alu__17__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__17__op2;
    __Vtask_tb_alu__DOT__test_alu__17__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__17__op3;
    __Vtask_tb_alu__DOT__test_alu__17__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__17__expected_result;
    __Vtask_tb_alu__DOT__test_alu__17__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__17__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__17__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__17__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__18__op;
    __Vtask_tb_alu__DOT__test_alu__18__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__18__op1;
    __Vtask_tb_alu__DOT__test_alu__18__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__18__op2;
    __Vtask_tb_alu__DOT__test_alu__18__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__18__op3;
    __Vtask_tb_alu__DOT__test_alu__18__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__18__expected_result;
    __Vtask_tb_alu__DOT__test_alu__18__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__18__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__18__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__18__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__19__op;
    __Vtask_tb_alu__DOT__test_alu__19__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__19__op1;
    __Vtask_tb_alu__DOT__test_alu__19__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__19__op2;
    __Vtask_tb_alu__DOT__test_alu__19__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__19__op3;
    __Vtask_tb_alu__DOT__test_alu__19__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__19__expected_result;
    __Vtask_tb_alu__DOT__test_alu__19__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__19__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__19__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__19__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__20__op;
    __Vtask_tb_alu__DOT__test_alu__20__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__20__op1;
    __Vtask_tb_alu__DOT__test_alu__20__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__20__op2;
    __Vtask_tb_alu__DOT__test_alu__20__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__20__op3;
    __Vtask_tb_alu__DOT__test_alu__20__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__20__expected_result;
    __Vtask_tb_alu__DOT__test_alu__20__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__20__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__20__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__20__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__21__op;
    __Vtask_tb_alu__DOT__test_alu__21__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__21__op1;
    __Vtask_tb_alu__DOT__test_alu__21__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__21__op2;
    __Vtask_tb_alu__DOT__test_alu__21__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__21__op3;
    __Vtask_tb_alu__DOT__test_alu__21__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__21__expected_result;
    __Vtask_tb_alu__DOT__test_alu__21__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__21__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__21__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__21__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__22__op;
    __Vtask_tb_alu__DOT__test_alu__22__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__22__op1;
    __Vtask_tb_alu__DOT__test_alu__22__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__22__op2;
    __Vtask_tb_alu__DOT__test_alu__22__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__22__op3;
    __Vtask_tb_alu__DOT__test_alu__22__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__22__expected_result;
    __Vtask_tb_alu__DOT__test_alu__22__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__22__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__22__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__22__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__23__op;
    __Vtask_tb_alu__DOT__test_alu__23__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__23__op1;
    __Vtask_tb_alu__DOT__test_alu__23__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__23__op2;
    __Vtask_tb_alu__DOT__test_alu__23__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__23__op3;
    __Vtask_tb_alu__DOT__test_alu__23__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__23__expected_result;
    __Vtask_tb_alu__DOT__test_alu__23__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__23__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__23__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__23__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__24__op;
    __Vtask_tb_alu__DOT__test_alu__24__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__24__op1;
    __Vtask_tb_alu__DOT__test_alu__24__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__24__op2;
    __Vtask_tb_alu__DOT__test_alu__24__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__24__op3;
    __Vtask_tb_alu__DOT__test_alu__24__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__24__expected_result;
    __Vtask_tb_alu__DOT__test_alu__24__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__24__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__24__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__24__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__25__op;
    __Vtask_tb_alu__DOT__test_alu__25__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__25__op1;
    __Vtask_tb_alu__DOT__test_alu__25__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__25__op2;
    __Vtask_tb_alu__DOT__test_alu__25__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__25__op3;
    __Vtask_tb_alu__DOT__test_alu__25__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__25__expected_result;
    __Vtask_tb_alu__DOT__test_alu__25__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__25__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__25__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__25__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__26__op;
    __Vtask_tb_alu__DOT__test_alu__26__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__26__op1;
    __Vtask_tb_alu__DOT__test_alu__26__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__26__op2;
    __Vtask_tb_alu__DOT__test_alu__26__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__26__op3;
    __Vtask_tb_alu__DOT__test_alu__26__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__26__expected_result;
    __Vtask_tb_alu__DOT__test_alu__26__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__26__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__26__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__26__test_name;
    CData/*3:0*/ __Vtask_tb_alu__DOT__test_alu__27__op;
    __Vtask_tb_alu__DOT__test_alu__27__op = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__27__op1;
    __Vtask_tb_alu__DOT__test_alu__27__op1 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__27__op2;
    __Vtask_tb_alu__DOT__test_alu__27__op2 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__27__op3;
    __Vtask_tb_alu__DOT__test_alu__27__op3 = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__test_alu__27__expected_result;
    __Vtask_tb_alu__DOT__test_alu__27__expected_result = 0;
    CData/*0:0*/ __Vtask_tb_alu__DOT__test_alu__27__expected_overflow;
    __Vtask_tb_alu__DOT__test_alu__27__expected_overflow = 0;
    std::string __Vtask_tb_alu__DOT__test_alu__27__test_name;
    // Body
    VL_WRITEF_NX("========================================\nALU Testbench Starting\n========================================\n",0);
    while ((1U & (~ (IData)(vlSelf->tb_alu__DOT__rst_n)))) {
        co_await vlSelf->__VtrigSched_h6352b31c__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_alu.rst_n)", 
                                                           "tb/tb_alu.sv", 
                                                           86);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       87);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n--- Testing ADD Operation ---\n",0);
    __Vtask_tb_alu__DOT__test_alu__0__test_name = std::string{"ADD: 0x10 + 0x20"};
    __Vtask_tb_alu__DOT__test_alu__0__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__0__expected_result = 0x30U;
    __Vtask_tb_alu__DOT__test_alu__0__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__0__op2 = 0x20U;
    __Vtask_tb_alu__DOT__test_alu__0__op1 = 0x10U;
    __Vtask_tb_alu__DOT__test_alu__0__op = 0U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__0__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__0__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__0__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__0__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__0__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__0__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__0__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__0__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__0__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__0__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__1__test_name = std::string{"ADD: -1 + 1 = 0"};
    __Vtask_tb_alu__DOT__test_alu__1__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__1__expected_result = 0U;
    __Vtask_tb_alu__DOT__test_alu__1__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__1__op2 = 1U;
    __Vtask_tb_alu__DOT__test_alu__1__op1 = 0xffffffffU;
    __Vtask_tb_alu__DOT__test_alu__1__op = 0U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__1__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__1__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__1__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__1__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__1__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__1__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__1__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__1__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__1__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__1__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__2__test_name = std::string{"ADD: MAX_INT + 1 (overflow)"};
    __Vtask_tb_alu__DOT__test_alu__2__expected_overflow = 1U;
    __Vtask_tb_alu__DOT__test_alu__2__expected_result = 0x80000000U;
    __Vtask_tb_alu__DOT__test_alu__2__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__2__op2 = 1U;
    __Vtask_tb_alu__DOT__test_alu__2__op1 = 0x7fffffffU;
    __Vtask_tb_alu__DOT__test_alu__2__op = 0U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__2__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__2__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__2__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__2__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__2__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__2__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__2__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__2__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__2__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__2__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__3__test_name = std::string{"ADD: MIN_INT + -1 (overflow)"};
    __Vtask_tb_alu__DOT__test_alu__3__expected_overflow = 1U;
    __Vtask_tb_alu__DOT__test_alu__3__expected_result = 0x7fffffffU;
    __Vtask_tb_alu__DOT__test_alu__3__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__3__op2 = 0xffffffffU;
    __Vtask_tb_alu__DOT__test_alu__3__op1 = 0x80000000U;
    __Vtask_tb_alu__DOT__test_alu__3__op = 0U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__3__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__3__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__3__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__3__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__3__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__3__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__3__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__3__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__3__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__3__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__4__test_name = std::string{"ADD: 5 + -1 = 4"};
    __Vtask_tb_alu__DOT__test_alu__4__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__4__expected_result = 4U;
    __Vtask_tb_alu__DOT__test_alu__4__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__4__op2 = 0xffffffffU;
    __Vtask_tb_alu__DOT__test_alu__4__op1 = 5U;
    __Vtask_tb_alu__DOT__test_alu__4__op = 0U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__4__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__4__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__4__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__4__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__4__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__4__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__4__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__4__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__4__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__4__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__5__test_name = std::string{"ADD: MIN_INT + MIN_INT (overflow)"};
    __Vtask_tb_alu__DOT__test_alu__5__expected_overflow = 1U;
    __Vtask_tb_alu__DOT__test_alu__5__expected_result = 0U;
    __Vtask_tb_alu__DOT__test_alu__5__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__5__op2 = 0x80000000U;
    __Vtask_tb_alu__DOT__test_alu__5__op1 = 0x80000000U;
    __Vtask_tb_alu__DOT__test_alu__5__op = 0U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__5__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__5__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__5__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__5__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__5__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__5__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__5__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__5__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__5__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__5__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    VL_WRITEF_NX("\n--- Testing MUL Operation ---\n",0);
    __Vtask_tb_alu__DOT__test_alu__6__test_name = std::string{"MUL: 5 * 6 = 30"};
    __Vtask_tb_alu__DOT__test_alu__6__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__6__expected_result = 0x1eU;
    __Vtask_tb_alu__DOT__test_alu__6__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__6__op2 = 6U;
    __Vtask_tb_alu__DOT__test_alu__6__op1 = 5U;
    __Vtask_tb_alu__DOT__test_alu__6__op = 1U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__6__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__6__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__6__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__6__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__6__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__6__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__6__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__6__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__6__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__6__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__7__test_name = std::string{"MUL: -1 * -1 = 1"};
    __Vtask_tb_alu__DOT__test_alu__7__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__7__expected_result = 1U;
    __Vtask_tb_alu__DOT__test_alu__7__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__7__op2 = 0xffffffffU;
    __Vtask_tb_alu__DOT__test_alu__7__op1 = 0xffffffffU;
    __Vtask_tb_alu__DOT__test_alu__7__op = 1U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__7__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__7__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__7__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__7__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__7__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__7__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__7__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__7__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__7__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__7__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__8__test_name = std::string{"MUL: 65536 * 65536 (overflow)"};
    __Vtask_tb_alu__DOT__test_alu__8__expected_overflow = 1U;
    __Vtask_tb_alu__DOT__test_alu__8__expected_result = 0U;
    __Vtask_tb_alu__DOT__test_alu__8__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__8__op2 = 0x10000U;
    __Vtask_tb_alu__DOT__test_alu__8__op1 = 0x10000U;
    __Vtask_tb_alu__DOT__test_alu__8__op = 1U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__8__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__8__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__8__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__8__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__8__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__8__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__8__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__8__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__8__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__8__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__9__test_name = std::string{"MUL: MAX_INT * 2 (overflow)"};
    __Vtask_tb_alu__DOT__test_alu__9__expected_overflow = 1U;
    __Vtask_tb_alu__DOT__test_alu__9__expected_result = 0xfffffffeU;
    __Vtask_tb_alu__DOT__test_alu__9__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__9__op2 = 2U;
    __Vtask_tb_alu__DOT__test_alu__9__op1 = 0x7fffffffU;
    __Vtask_tb_alu__DOT__test_alu__9__op = 1U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__9__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__9__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__9__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__9__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__9__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__9__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__9__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__9__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__9__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__9__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__10__test_name = 
        std::string{"MUL: 5 * -1 = -5"};
    __Vtask_tb_alu__DOT__test_alu__10__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__10__expected_result = 0xfffffffbU;
    __Vtask_tb_alu__DOT__test_alu__10__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__10__op2 = 0xffffffffU;
    __Vtask_tb_alu__DOT__test_alu__10__op1 = 5U;
    __Vtask_tb_alu__DOT__test_alu__10__op = 1U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__10__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__10__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__10__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__10__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__10__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__10__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__10__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__10__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__10__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__10__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__11__test_name = 
        std::string{"MUL: 0 * -1 = 0"};
    __Vtask_tb_alu__DOT__test_alu__11__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__11__expected_result = 0U;
    __Vtask_tb_alu__DOT__test_alu__11__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__11__op2 = 0xffffffffU;
    __Vtask_tb_alu__DOT__test_alu__11__op1 = 0U;
    __Vtask_tb_alu__DOT__test_alu__11__op = 1U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__11__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__11__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__11__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__11__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__11__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__11__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__11__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__11__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__11__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__11__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    VL_WRITEF_NX("\n--- Testing FMA Operation ---\n",0);
    __Vtask_tb_alu__DOT__test_alu__12__test_name = 
        std::string{"FMA: (2 * 3) + 4 = 10"};
    __Vtask_tb_alu__DOT__test_alu__12__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__12__expected_result = 0xaU;
    __Vtask_tb_alu__DOT__test_alu__12__op3 = 4U;
    __Vtask_tb_alu__DOT__test_alu__12__op2 = 3U;
    __Vtask_tb_alu__DOT__test_alu__12__op1 = 2U;
    __Vtask_tb_alu__DOT__test_alu__12__op = 2U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__12__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__12__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__12__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__12__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__12__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__12__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__12__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__12__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__12__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__12__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__13__test_name = 
        std::string{"FMA: (-1 * 2) + 5 = 3"};
    __Vtask_tb_alu__DOT__test_alu__13__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__13__expected_result = 3U;
    __Vtask_tb_alu__DOT__test_alu__13__op3 = 5U;
    __Vtask_tb_alu__DOT__test_alu__13__op2 = 2U;
    __Vtask_tb_alu__DOT__test_alu__13__op1 = 0xffffffffU;
    __Vtask_tb_alu__DOT__test_alu__13__op = 2U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__13__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__13__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__13__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__13__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__13__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__13__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__13__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__13__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__13__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__13__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__14__test_name = 
        std::string{"FMA: (65536 * 65536) + 0 (mul overflow)"};
    __Vtask_tb_alu__DOT__test_alu__14__expected_overflow = 1U;
    __Vtask_tb_alu__DOT__test_alu__14__expected_result = 0U;
    __Vtask_tb_alu__DOT__test_alu__14__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__14__op2 = 0x10000U;
    __Vtask_tb_alu__DOT__test_alu__14__op1 = 0x10000U;
    __Vtask_tb_alu__DOT__test_alu__14__op = 2U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__14__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__14__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__14__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__14__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__14__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__14__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__14__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__14__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__14__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__14__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__15__test_name = 
        std::string{"FMA: (MAX_INT * 1) + MAX_INT (add overflow)"};
    __Vtask_tb_alu__DOT__test_alu__15__expected_overflow = 1U;
    __Vtask_tb_alu__DOT__test_alu__15__expected_result = 0xfffffffeU;
    __Vtask_tb_alu__DOT__test_alu__15__op3 = 0x7fffffffU;
    __Vtask_tb_alu__DOT__test_alu__15__op2 = 1U;
    __Vtask_tb_alu__DOT__test_alu__15__op1 = 0x7fffffffU;
    __Vtask_tb_alu__DOT__test_alu__15__op = 2U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__15__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__15__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__15__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__15__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__15__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__15__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__15__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__15__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__15__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__15__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__16__test_name = 
        std::string{"FMA: (5 * 6) + -1 = 29"};
    __Vtask_tb_alu__DOT__test_alu__16__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__16__expected_result = 0x1dU;
    __Vtask_tb_alu__DOT__test_alu__16__op3 = 0xffffffffU;
    __Vtask_tb_alu__DOT__test_alu__16__op2 = 6U;
    __Vtask_tb_alu__DOT__test_alu__16__op1 = 5U;
    __Vtask_tb_alu__DOT__test_alu__16__op = 2U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__16__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__16__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__16__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__16__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__16__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__16__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__16__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__16__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__16__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__16__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    VL_WRITEF_NX("\n--- Testing MAX Operation ---\n",0);
    __Vtask_tb_alu__DOT__test_alu__17__test_name = 
        std::string{"MAX: max(16, 32) = 32"};
    __Vtask_tb_alu__DOT__test_alu__17__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__17__expected_result = 0x20U;
    __Vtask_tb_alu__DOT__test_alu__17__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__17__op2 = 0x20U;
    __Vtask_tb_alu__DOT__test_alu__17__op1 = 0x10U;
    __Vtask_tb_alu__DOT__test_alu__17__op = 3U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__17__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__17__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__17__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__17__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__17__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__17__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__17__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__17__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__17__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__17__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__18__test_name = 
        std::string{"MAX: max(-1, 1) = 1"};
    __Vtask_tb_alu__DOT__test_alu__18__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__18__expected_result = 1U;
    __Vtask_tb_alu__DOT__test_alu__18__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__18__op2 = 1U;
    __Vtask_tb_alu__DOT__test_alu__18__op1 = 0xffffffffU;
    __Vtask_tb_alu__DOT__test_alu__18__op = 3U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__18__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__18__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__18__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__18__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__18__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__18__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__18__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__18__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__18__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__18__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__19__test_name = 
        std::string{"MAX: max(-1, -2) = -1"};
    __Vtask_tb_alu__DOT__test_alu__19__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__19__expected_result = 0xfffffffeU;
    __Vtask_tb_alu__DOT__test_alu__19__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__19__op2 = 0xfffffffeU;
    __Vtask_tb_alu__DOT__test_alu__19__op1 = 0xffffffffU;
    __Vtask_tb_alu__DOT__test_alu__19__op = 3U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__19__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__19__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__19__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__19__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__19__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__19__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__19__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__19__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__19__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__19__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__20__test_name = 
        std::string{"MAX: max(MIN_INT, MAX_INT) = MAX_INT"};
    __Vtask_tb_alu__DOT__test_alu__20__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__20__expected_result = 0x7fffffffU;
    __Vtask_tb_alu__DOT__test_alu__20__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__20__op2 = 0x7fffffffU;
    __Vtask_tb_alu__DOT__test_alu__20__op1 = 0x80000000U;
    __Vtask_tb_alu__DOT__test_alu__20__op = 3U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__20__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__20__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__20__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__20__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__20__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__20__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__20__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__20__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__20__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__20__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__21__test_name = 
        std::string{"MAX: max(5, 5) = 5"};
    __Vtask_tb_alu__DOT__test_alu__21__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__21__expected_result = 5U;
    __Vtask_tb_alu__DOT__test_alu__21__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__21__op2 = 5U;
    __Vtask_tb_alu__DOT__test_alu__21__op1 = 5U;
    __Vtask_tb_alu__DOT__test_alu__21__op = 3U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__21__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__21__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__21__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__21__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__21__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__21__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__21__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__21__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__21__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__21__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    VL_WRITEF_NX("\n--- Testing RELU Operation ---\n",0);
    __Vtask_tb_alu__DOT__test_alu__22__test_name = 
        std::string{"RELU: relu(16) = 16"};
    __Vtask_tb_alu__DOT__test_alu__22__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__22__expected_result = 0x10U;
    __Vtask_tb_alu__DOT__test_alu__22__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__22__op2 = 0U;
    __Vtask_tb_alu__DOT__test_alu__22__op1 = 0x10U;
    __Vtask_tb_alu__DOT__test_alu__22__op = 4U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__22__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__22__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__22__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__22__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__22__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__22__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__22__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__22__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__22__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__22__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__23__test_name = 
        std::string{"RELU: relu(-1) = 0"};
    __Vtask_tb_alu__DOT__test_alu__23__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__23__expected_result = 0U;
    __Vtask_tb_alu__DOT__test_alu__23__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__23__op2 = 0U;
    __Vtask_tb_alu__DOT__test_alu__23__op1 = 0xffffffffU;
    __Vtask_tb_alu__DOT__test_alu__23__op = 4U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__23__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__23__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__23__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__23__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__23__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__23__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__23__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__23__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__23__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__23__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__24__test_name = 
        std::string{"RELU: relu(0) = 0"};
    __Vtask_tb_alu__DOT__test_alu__24__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__24__expected_result = 0U;
    __Vtask_tb_alu__DOT__test_alu__24__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__24__op2 = 0U;
    __Vtask_tb_alu__DOT__test_alu__24__op1 = 0U;
    __Vtask_tb_alu__DOT__test_alu__24__op = 4U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__24__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__24__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__24__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__24__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__24__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__24__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__24__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__24__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__24__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__24__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__25__test_name = 
        std::string{"RELU: relu(MAX_INT) = MAX_INT"};
    __Vtask_tb_alu__DOT__test_alu__25__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__25__expected_result = 0x7fffffffU;
    __Vtask_tb_alu__DOT__test_alu__25__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__25__op2 = 0U;
    __Vtask_tb_alu__DOT__test_alu__25__op1 = 0x7fffffffU;
    __Vtask_tb_alu__DOT__test_alu__25__op = 4U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__25__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__25__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__25__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__25__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__25__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__25__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__25__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__25__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__25__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__25__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__26__test_name = 
        std::string{"RELU: relu(MIN_INT) = 0"};
    __Vtask_tb_alu__DOT__test_alu__26__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__26__expected_result = 0U;
    __Vtask_tb_alu__DOT__test_alu__26__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__26__op2 = 0U;
    __Vtask_tb_alu__DOT__test_alu__26__op1 = 0x80000000U;
    __Vtask_tb_alu__DOT__test_alu__26__op = 4U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__26__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__26__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__26__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__26__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__26__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__26__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__26__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__26__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__26__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__26__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    __Vtask_tb_alu__DOT__test_alu__27__test_name = 
        std::string{"RELU: relu(5) = 5"};
    __Vtask_tb_alu__DOT__test_alu__27__expected_overflow = 0U;
    __Vtask_tb_alu__DOT__test_alu__27__expected_result = 5U;
    __Vtask_tb_alu__DOT__test_alu__27__op3 = 0U;
    __Vtask_tb_alu__DOT__test_alu__27__op2 = 0U;
    __Vtask_tb_alu__DOT__test_alu__27__op1 = 5U;
    __Vtask_tb_alu__DOT__test_alu__27__op = 4U;
    vlSelf->tb_alu__DOT__test_count = ((IData)(1U) 
                                       + vlSelf->tb_alu__DOT__test_count);
    vlSelf->tb_alu__DOT__opcode = __Vtask_tb_alu__DOT__test_alu__27__op;
    vlSelf->tb_alu__DOT__operand1 = __Vtask_tb_alu__DOT__test_alu__27__op1;
    vlSelf->tb_alu__DOT__operand2 = __Vtask_tb_alu__DOT__test_alu__27__op2;
    vlSelf->tb_alu__DOT__operand3 = __Vtask_tb_alu__DOT__test_alu__27__op3;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_alu__DOT__result == __Vtask_tb_alu__DOT__test_alu__27__expected_result) 
                   & ((IData)(vlSelf->tb_alu__DOT__overflow) 
                      == (IData)(__Vtask_tb_alu__DOT__test_alu__27__expected_overflow))))) {
        vlSelf->tb_alu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: result=0x%08x, overflow=%b\n",0,
                     -1,&(__Vtask_tb_alu__DOT__test_alu__27__test_name),
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(vlSelf->tb_alu__DOT__overflow));
    } else {
        vlSelf->tb_alu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_alu__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:75: Assertion failed in %Ntb_alu.test_alu: [FAIL] %@: expected result=0x%08x, got 0x%08x | expected overflow=%b, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_alu__DOT__test_alu__27__test_name),
                     32,__Vtask_tb_alu__DOT__test_alu__27__expected_result,
                     32,vlSelf->tb_alu__DOT__result,
                     1,(IData)(__Vtask_tb_alu__DOT__test_alu__27__expected_overflow),
                     1,vlSelf->tb_alu__DOT__overflow);
        VL_STOP_MT("tb/tb_alu.sv", 75, "");
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_alu.sv", 
                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n========================================\nTest Summary\n========================================\nTotal Tests: %0d\nPassed:      %0d\nFailed:      %0d\n========================================\n",0,
                 32,vlSelf->tb_alu__DOT__test_count,
                 32,vlSelf->tb_alu__DOT__pass_count,
                 32,vlSelf->tb_alu__DOT__fail_count);
    if (VL_LIKELY((0U == vlSelf->tb_alu__DOT__fail_count))) {
        VL_WRITEF_NX("ALL TESTS PASSED!\n",0);
    } else {
        VL_WRITEF_NX("[%0t] %%Error: tb_alu.sv:145: Assertion failed in %Ntb_alu: SOME TESTS FAILED!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_alu.sv", 145, "");
    }
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_alu.sv", 
                                       148);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb/tb_alu.sv", 149, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_alu___024root___dump_triggers__act(Vtb_alu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_alu___024root___eval_triggers__act(Vtb_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_alu__DOT__rst_n) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_alu__DOT__rst_n__0)));
    vlSelf->__Vtrigprevexpr___TOP__tb_alu__DOT__rst_n__0 
        = vlSelf->tb_alu__DOT__rst_n;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_alu___024root___dump_triggers__act(vlSelf);
    }
#endif
}
