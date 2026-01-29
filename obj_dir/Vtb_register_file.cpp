// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_register_file__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_register_file::Vtb_register_file(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_register_file__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_register_file::Vtb_register_file(const char* _vcname__)
    : Vtb_register_file(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_register_file::~Vtb_register_file() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_register_file___024root___eval_debug_assertions(Vtb_register_file___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_register_file___024root___eval_static(Vtb_register_file___024root* vlSelf);
void Vtb_register_file___024root___eval_initial(Vtb_register_file___024root* vlSelf);
void Vtb_register_file___024root___eval_settle(Vtb_register_file___024root* vlSelf);
void Vtb_register_file___024root___eval(Vtb_register_file___024root* vlSelf);

void Vtb_register_file::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_register_file::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_register_file___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_register_file___024root___eval_static(&(vlSymsp->TOP));
        Vtb_register_file___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_register_file___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_register_file___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_register_file::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_register_file::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_register_file::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_register_file___024root___eval_final(Vtb_register_file___024root* vlSelf);

VL_ATTR_COLD void Vtb_register_file::final() {
    Vtb_register_file___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_register_file::hierName() const { return vlSymsp->name(); }
const char* Vtb_register_file::modelName() const { return "Vtb_register_file"; }
unsigned Vtb_register_file::threads() const { return 1; }
void Vtb_register_file::prepareClone() const { contextp()->prepareClone(); }
void Vtb_register_file::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_register_file::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_register_file___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_register_file___024root__trace_init_top(Vtb_register_file___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_register_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_register_file___024root*>(voidSelf);
    Vtb_register_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_register_file___024root__trace_decl_types(tracep);
    Vtb_register_file___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_register_file___024root__trace_register(Vtb_register_file___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_register_file::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_register_file::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    (void)levels; (void)options; // Prevent unused variable warning
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_register_file___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
