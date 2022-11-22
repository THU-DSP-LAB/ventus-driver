// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus__Syms.h"
#include "VVentus___024root.h"

void VVentus___024root___ctor_var_reset(VVentus___024root* vlSelf);

VVentus___024root::VVentus___024root(VVentus__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVentus___024root___ctor_var_reset(this);
}

void VVentus___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VVentus___024root::~VVentus___024root() {
}
