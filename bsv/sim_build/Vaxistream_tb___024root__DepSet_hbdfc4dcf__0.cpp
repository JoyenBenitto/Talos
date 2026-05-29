// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxistream_tb.h for the primary calling header

#include "Vaxistream_tb__pch.h"
#include "Vaxistream_tb___024root.h"

VL_ATTR_COLD void Vaxistream_tb___024root___eval_initial__TOP(Vaxistream_tb___024root* vlSelf);
VlCoroutine Vaxistream_tb___024root___eval_initial__TOP__Vtiming__0(Vaxistream_tb___024root* vlSelf);
VlCoroutine Vaxistream_tb___024root___eval_initial__TOP__Vtiming__1(Vaxistream_tb___024root* vlSelf);

void Vaxistream_tb___024root___eval_initial(Vaxistream_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxistream_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxistream_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaxistream_tb___024root___eval_initial__TOP(vlSelf);
    Vaxistream_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vaxistream_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__axistream_tb__DOT__ACLK__0 
        = vlSelfRef.axistream_tb__DOT__ACLK;
}

VL_INLINE_OPT VlCoroutine Vaxistream_tb___024root___eval_initial__TOP__Vtiming__0(Vaxistream_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxistream_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxistream_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.axistream_tb__DOT__ARESETn = 0U;
    vlSelfRef.axistream_tb__DOT__tREADY = 0U;
    co_await vlSelfRef.__VtrigSched_hf2bbadad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axistream_tb.ACLK)", 
                                                         "axistream_tb.v", 
                                                         49);
    co_await vlSelfRef.__VtrigSched_hf2bbadad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axistream_tb.ACLK)", 
                                                         "axistream_tb.v", 
                                                         49);
    co_await vlSelfRef.__VtrigSched_hf2bbadad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axistream_tb.ACLK)", 
                                                         "axistream_tb.v", 
                                                         49);
    co_await vlSelfRef.__VtrigSched_hf2bbadad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axistream_tb.ACLK)", 
                                                         "axistream_tb.v", 
                                                         49);
    vlSelfRef.axistream_tb__DOT__ARESETn = 1U;
    co_await vlSelfRef.__VtrigSched_hf2bbadad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axistream_tb.ACLK)", 
                                                         "axistream_tb.v", 
                                                         52);
    vlSelfRef.axistream_tb__DOT__tREADY = 0U;
    co_await vlSelfRef.__VtrigSched_hf2bbadad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axistream_tb.ACLK)", 
                                                         "axistream_tb.v", 
                                                         56);
    VL_WRITEF_NX("[%0t] tVALID=0 tDATA=aaaaaaaa tSTRB=a tKEEP=a tLAST=0 tREADY=%b\n",0,
                 64,VL_TIME_UNITED_Q(1),-9,1,(IData)(vlSelfRef.axistream_tb__DOT__tREADY));
    vlSelfRef.axistream_tb__DOT__tREADY = 1U;
    co_await vlSelfRef.__VtrigSched_hf2bbadad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axistream_tb.ACLK)", 
                                                         "axistream_tb.v", 
                                                         62);
    VL_WRITEF_NX("[%0t] tVALID=0 tDATA=aaaaaaaa tSTRB=a tKEEP=a tLAST=0 tREADY=%b\n",0,
                 64,VL_TIME_UNITED_Q(1),-9,1,(IData)(vlSelfRef.axistream_tb__DOT__tREADY));
    co_await vlSelfRef.__VtrigSched_hf2bbadad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axistream_tb.ACLK)", 
                                                         "axistream_tb.v", 
                                                         66);
    co_await vlSelfRef.__VtrigSched_hf2bbadad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axistream_tb.ACLK)", 
                                                         "axistream_tb.v", 
                                                         66);
    co_await vlSelfRef.__VtrigSched_hf2bbadad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axistream_tb.ACLK)", 
                                                         "axistream_tb.v", 
                                                         66);
    co_await vlSelfRef.__VtrigSched_hf2bbadad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axistream_tb.ACLK)", 
                                                         "axistream_tb.v", 
                                                         66);
    VL_WRITEF_NX("[%0t] simulation done\n",0,64,VL_TIME_UNITED_Q(1),
                 -9);
    VL_FINISH_MT("axistream_tb.v", 68, "");
}

VL_INLINE_OPT VlCoroutine Vaxistream_tb___024root___eval_initial__TOP__Vtiming__1(Vaxistream_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxistream_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxistream_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "axistream_tb.v", 
                                             37);
        vlSelfRef.axistream_tb__DOT__ACLK = (1U & (~ (IData)(vlSelfRef.axistream_tb__DOT__ACLK)));
    }
}

void Vaxistream_tb___024root___eval_act(Vaxistream_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxistream_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxistream_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vaxistream_tb___024root___eval_nba(Vaxistream_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxistream_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxistream_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vaxistream_tb___024root___timing_resume(Vaxistream_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxistream_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxistream_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hf2bbadad__0.resume(
                                                   "@(posedge axistream_tb.ACLK)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vaxistream_tb___024root___timing_commit(Vaxistream_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxistream_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxistream_tb___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hf2bbadad__0.commit(
                                                   "@(posedge axistream_tb.ACLK)");
    }
}

void Vaxistream_tb___024root___eval_triggers__act(Vaxistream_tb___024root* vlSelf);

bool Vaxistream_tb___024root___eval_phase__act(Vaxistream_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxistream_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxistream_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vaxistream_tb___024root___eval_triggers__act(vlSelf);
    Vaxistream_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vaxistream_tb___024root___timing_resume(vlSelf);
        Vaxistream_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vaxistream_tb___024root___eval_phase__nba(Vaxistream_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxistream_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxistream_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vaxistream_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxistream_tb___024root___dump_triggers__nba(Vaxistream_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxistream_tb___024root___dump_triggers__act(Vaxistream_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vaxistream_tb___024root___eval(Vaxistream_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxistream_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxistream_tb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vaxistream_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("axistream_tb.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vaxistream_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("axistream_tb.v", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vaxistream_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vaxistream_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vaxistream_tb___024root___eval_debug_assertions(Vaxistream_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxistream_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxistream_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
