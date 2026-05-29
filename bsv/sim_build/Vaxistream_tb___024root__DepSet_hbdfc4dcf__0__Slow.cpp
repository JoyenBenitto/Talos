// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxistream_tb.h for the primary calling header

#include "Vaxistream_tb__pch.h"
#include "Vaxistream_tb___024root.h"

VL_ATTR_COLD void Vaxistream_tb___024root___eval_static(Vaxistream_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxistream_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxistream_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vaxistream_tb___024root___eval_final(Vaxistream_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxistream_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxistream_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vaxistream_tb___024root___eval_settle(Vaxistream_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxistream_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxistream_tb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxistream_tb___024root___dump_triggers__act(Vaxistream_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxistream_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxistream_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge axistream_tb.ACLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxistream_tb___024root___dump_triggers__nba(Vaxistream_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxistream_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxistream_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge axistream_tb.ACLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaxistream_tb___024root___ctor_var_reset(Vaxistream_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxistream_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxistream_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->axistream_tb__DOT__ACLK = VL_RAND_RESET_I(1);
    vlSelf->axistream_tb__DOT__ARESETn = VL_RAND_RESET_I(1);
    vlSelf->axistream_tb__DOT__tREADY = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__axistream_tb__DOT__ACLK__0 = VL_RAND_RESET_I(1);
}
