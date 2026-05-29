// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaxistream_tb.h for the primary calling header

#ifndef VERILATED_VAXISTREAM_TB___024ROOT_H_
#define VERILATED_VAXISTREAM_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vaxistream_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaxistream_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ axistream_tb__DOT__ACLK;
    CData/*0:0*/ axistream_tb__DOT__ARESETn;
    CData/*0:0*/ axistream_tb__DOT__tREADY;
    CData/*0:0*/ __Vtrigprevexpr___TOP__axistream_tb__DOT__ACLK__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf2bbadad__0;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vaxistream_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaxistream_tb___024root(Vaxistream_tb__Syms* symsp, const char* v__name);
    ~Vaxistream_tb___024root();
    VL_UNCOPYABLE(Vaxistream_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
