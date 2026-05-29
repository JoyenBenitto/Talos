// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxistream_tb.h for the primary calling header

#include "Vaxistream_tb__pch.h"
#include "Vaxistream_tb__Syms.h"
#include "Vaxistream_tb___024root.h"

VL_ATTR_COLD void Vaxistream_tb___024root___eval_initial__TOP(Vaxistream_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxistream_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxistream_tb___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    vlSelfRef.axistream_tb__DOT__ACLK = 0U;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x7265616dU;
    __Vtemp_1[2U] = 0x78697374U;
    __Vtemp_1[3U] = 0x6c642f61U;
    __Vtemp_1[4U] = 0x5f627569U;
    __Vtemp_1[5U] = 0x73696dU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}
