// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus_L1TagAccess.h"
#include "VVentus__Syms.h"

void VVentus_L1TagAccess___ctor_var_reset(VVentus_L1TagAccess* vlSelf);

VVentus_L1TagAccess::VVentus_L1TagAccess(VVentus__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVentus_L1TagAccess___ctor_var_reset(this);
}

void VVentus_L1TagAccess::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VVentus_L1TagAccess::~VVentus_L1TagAccess() {
}
