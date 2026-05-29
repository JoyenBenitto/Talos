// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxistream_tb.h for the primary calling header

#include "Vaxistream_tb__pch.h"
#include "Vaxistream_tb__Syms.h"
#include "Vaxistream_tb___024root.h"

void Vaxistream_tb___024root___ctor_var_reset(Vaxistream_tb___024root* vlSelf);

Vaxistream_tb___024root::Vaxistream_tb___024root(Vaxistream_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaxistream_tb___024root___ctor_var_reset(this);
}

void Vaxistream_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vaxistream_tb___024root::~Vaxistream_tb___024root() {
}
