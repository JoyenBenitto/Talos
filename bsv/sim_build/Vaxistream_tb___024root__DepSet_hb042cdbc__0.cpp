// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxistream_tb.h for the primary calling header

#include "Vaxistream_tb__pch.h"
#include "Vaxistream_tb__Syms.h"
#include "Vaxistream_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxistream_tb___024root___dump_triggers__act(Vaxistream_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vaxistream_tb___024root___eval_triggers__act(Vaxistream_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxistream_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxistream_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.axistream_tb__DOT__ACLK) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__axistream_tb__DOT__ACLK__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__axistream_tb__DOT__ACLK__0 
        = vlSelfRef.axistream_tb__DOT__ACLK;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaxistream_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
