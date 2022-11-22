// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus_ArrayMultiplier.h"

VL_INLINE_OPT void VVentus_ArrayMultiplier___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__mul__DOT__ArrayMultiplier__1(VVentus_ArrayMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_ArrayMultiplier___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__mul__DOT__ArrayMultiplier__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hde7d52c0__0;
    VlWide<3>/*95:0*/ __Vtemp_h2a892c25__0;
    VlWide<3>/*95:0*/ __Vtemp_hd3624bf3__0;
    // Body
    vlSelf->__PVT__mulDataModule__DOT__c22_81__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_209__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_208__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_92__DOT__cout 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_228__DOT__CSA3_2_1__DOT__sum) 
           & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_227__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_92__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_228__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_227__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c32_34__DOT__a_xor_b 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_218__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_165__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c32_33__DOT__a_xor_b 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_217__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_163__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c32_32__DOT__a_xor_b 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_216__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_161__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c32_35__DOT__a_xor_b 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_219__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_167__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_82__DOT__cout 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_210__DOT__CSA3_2_1__DOT__sum) 
           & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_209__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_82__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_210__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_209__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_87__DOT__cout 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_215__DOT__CSA3_2_1__DOT__sum) 
           & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_214__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_87__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_215__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_214__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c32_36__DOT__a_xor_b 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_220__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_169__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c32_38__DOT__a_xor_b 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_222__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_173__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c32_37__DOT__a_xor_b 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_221__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_171__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_83__DOT__cout 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_211__DOT__CSA3_2_1__DOT__sum) 
           & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_210__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_83__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_211__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_210__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_91__DOT__cout 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_227__DOT__CSA3_2_1__DOT__sum) 
           & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_226__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_91__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_227__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_226__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_90__DOT__cout 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_226__DOT__CSA3_2_1__DOT__sum) 
           & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_225__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_90__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_226__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_225__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_86__DOT__cout 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_214__DOT__CSA3_2_1__DOT__sum) 
           & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_213__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_86__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_214__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_213__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_84__DOT__cout 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_212__DOT__CSA3_2_1__DOT__sum) 
           & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_211__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_84__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_212__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_211__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_85__DOT__cout 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_213__DOT__CSA3_2_1__DOT__sum) 
           & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_212__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_85__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_213__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_212__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_89__DOT__cout 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_225__DOT__CSA3_2_1__DOT__sum) 
           & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_224__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_89__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_225__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_224__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c32_39__DOT__a_xor_b 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_224__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_177__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_88__DOT__cout 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_223__DOT__CSA3_2_1__DOT__sum) 
           & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_222__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c22_88__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_223__DOT__CSA3_2_1__DOT__sum) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_222__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c32_40__DOT__cout 
        = (((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_229__DOT__CSA3_2_1__DOT__sum) 
            & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_187__DOT__CSA3_2_1__DOT__cout)) 
           | ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_40__DOT__a_xor_b) 
              & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_228__DOT__CSA3_2_1__DOT__cout)));
    vlSelf->__PVT__mulDataModule__DOT__c32_40__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_40__DOT__a_xor_b) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_228__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c32_34__DOT__cout 
        = (((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_218__DOT__CSA3_2_1__DOT__sum) 
            & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_165__DOT__CSA3_2_1__DOT__cout)) 
           | ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_34__DOT__a_xor_b) 
              & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_217__DOT__CSA3_2_1__DOT__cout)));
    vlSelf->__PVT__mulDataModule__DOT__c32_34__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_34__DOT__a_xor_b) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_217__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c32_33__DOT__cout 
        = (((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_217__DOT__CSA3_2_1__DOT__sum) 
            & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_163__DOT__CSA3_2_1__DOT__cout)) 
           | ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_33__DOT__a_xor_b) 
              & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_216__DOT__CSA3_2_1__DOT__cout)));
    vlSelf->__PVT__mulDataModule__DOT__c32_33__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_33__DOT__a_xor_b) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_216__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c32_32__DOT__cout 
        = (((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_216__DOT__CSA3_2_1__DOT__sum) 
            & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_161__DOT__CSA3_2_1__DOT__cout)) 
           | ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_32__DOT__a_xor_b) 
              & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_215__DOT__CSA3_2_1__DOT__cout)));
    vlSelf->__PVT__mulDataModule__DOT__c32_32__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_32__DOT__a_xor_b) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_215__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c32_35__DOT__cout 
        = (((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_219__DOT__CSA3_2_1__DOT__sum) 
            & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_167__DOT__CSA3_2_1__DOT__cout)) 
           | ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_35__DOT__a_xor_b) 
              & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_218__DOT__CSA3_2_1__DOT__cout)));
    vlSelf->__PVT__mulDataModule__DOT__c32_35__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_35__DOT__a_xor_b) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_218__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c32_36__DOT__cout 
        = (((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_220__DOT__CSA3_2_1__DOT__sum) 
            & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_169__DOT__CSA3_2_1__DOT__cout)) 
           | ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_36__DOT__a_xor_b) 
              & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_219__DOT__CSA3_2_1__DOT__cout)));
    vlSelf->__PVT__mulDataModule__DOT__c32_36__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_36__DOT__a_xor_b) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_219__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c32_38__DOT__cout 
        = (((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_222__DOT__CSA3_2_1__DOT__sum) 
            & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_173__DOT__CSA3_2_1__DOT__cout)) 
           | ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_38__DOT__a_xor_b) 
              & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_221__DOT__CSA3_2_1__DOT__cout)));
    vlSelf->__PVT__mulDataModule__DOT__c32_38__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_38__DOT__a_xor_b) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_221__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c32_37__DOT__cout 
        = (((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_221__DOT__CSA3_2_1__DOT__sum) 
            & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_171__DOT__CSA3_2_1__DOT__cout)) 
           | ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_37__DOT__a_xor_b) 
              & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_220__DOT__CSA3_2_1__DOT__cout)));
    vlSelf->__PVT__mulDataModule__DOT__c32_37__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_37__DOT__a_xor_b) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_220__DOT__CSA3_2_1__DOT__cout));
    vlSelf->__PVT__mulDataModule__DOT__c32_39__DOT__cout 
        = (((IData)(vlSelf->__PVT__mulDataModule__DOT__c53_224__DOT__CSA3_2_1__DOT__sum) 
            & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_177__DOT__CSA3_2_1__DOT__cout)) 
           | ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_39__DOT__a_xor_b) 
              & (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_223__DOT__CSA3_2_1__DOT__cout)));
    vlSelf->__PVT__mulDataModule__DOT__c32_39__DOT__sum 
        = ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_39__DOT__a_xor_b) 
           ^ (IData)(vlSelf->__PVT__mulDataModule__DOT__c53_223__DOT__CSA3_2_1__DOT__cout));
    __Vtemp_hde7d52c0__0[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_34__DOT__cout)) 
                                         << 0x21U) 
                                        | (((QData)((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_33__DOT__cout)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_32__DOT__cout) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_87__DOT__cout) 
                                                                  << 0x1eU) 
                                                                 | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_86__DOT__cout) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_85__DOT__cout) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_84__DOT__cout) 
                                                                           << 0x1bU) 
                                                                          | ((((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_83__DOT__cout) 
                                                                               << 0x1aU) 
                                                                              | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_82__DOT__cout) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_81__DOT__cout) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_80__DOT__cout) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_79__DOT__cout) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_78__DOT__cout) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_77__DOT__cout) 
                                                                                << 0x14U) 
                                                                                | ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_76__DOT__cout) 
                                                                                << 0x13U)))))))) 
                                                                             | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_75__DOT__cout) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_74__DOT__cout) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_73__DOT__cout) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_72__DOT__cout) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_71__DOT__cout) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_70__DOT__cout) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_69__DOT__cout) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_68__DOT__cout) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_67__DOT__cout) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_66__DOT__cout) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_65__DOT__cout) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_64__DOT__cout) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_63__DOT__cout) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_62__DOT__cout) 
                                                                                << 5U) 
                                                                                | ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_61__DOT__cout) 
                                                                                << 4U))))))))))))))))))))))))));
    __Vtemp_hde7d52c0__0[1U] = ((0xfffffffcU & (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_110__DOT__cout) 
                                                 << 0x1fU) 
                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_109__DOT__cout) 
                                                    << 0x1eU) 
                                                   | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_108__DOT__cout) 
                                                       << 0x1dU) 
                                                      | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_107__DOT__cout) 
                                                          << 0x1cU) 
                                                         | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_106__DOT__cout) 
                                                             << 0x1bU) 
                                                            | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_105__DOT__cout) 
                                                                << 0x1aU) 
                                                               | ((((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_104__DOT__cout) 
                                                                    << 0x19U) 
                                                                   | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_103__DOT__cout) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_102__DOT__cout) 
                                                                          << 0x17U) 
                                                                         | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_101__DOT__cout) 
                                                                             << 0x16U) 
                                                                            | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_41__DOT__cout) 
                                                                                << 0x15U) 
                                                                               | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_100__DOT__cout) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_99__DOT__cout) 
                                                                                << 0x13U) 
                                                                                | ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_98__DOT__cout) 
                                                                                << 0x12U)))))))) 
                                                                  | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_97__DOT__cout) 
                                                                      << 0x11U) 
                                                                     | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_96__DOT__cout) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_95__DOT__cout) 
                                                                            << 0xfU) 
                                                                           | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_94__DOT__cout) 
                                                                               << 0xeU) 
                                                                              | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_93__DOT__cout) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_40__DOT__cout) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_92__DOT__cout) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_91__DOT__cout) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_90__DOT__cout) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_89__DOT__cout) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_39__DOT__cout) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_88__DOT__cout) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_38__DOT__cout) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_37__DOT__cout) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_36__DOT__cout) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_35__DOT__cout) 
                                                                                << 2U)))))))))))))))))))))))) 
                                | (IData)(((((QData)((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_34__DOT__cout)) 
                                             << 0x21U) 
                                            | (((QData)((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_33__DOT__cout)) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_32__DOT__cout) 
                                                                   << 0x1fU) 
                                                                  | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_87__DOT__cout) 
                                                                      << 0x1eU) 
                                                                     | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_86__DOT__cout) 
                                                                         << 0x1dU) 
                                                                        | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_85__DOT__cout) 
                                                                            << 0x1cU) 
                                                                           | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_84__DOT__cout) 
                                                                               << 0x1bU) 
                                                                              | ((((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_83__DOT__cout) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_82__DOT__cout) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_81__DOT__cout) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_80__DOT__cout) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_79__DOT__cout) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_78__DOT__cout) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_77__DOT__cout) 
                                                                                << 0x14U) 
                                                                                | ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_76__DOT__cout) 
                                                                                << 0x13U)))))))) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_75__DOT__cout) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_74__DOT__cout) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_73__DOT__cout) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_72__DOT__cout) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_71__DOT__cout) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_70__DOT__cout) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_69__DOT__cout) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_68__DOT__cout) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_67__DOT__cout) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_66__DOT__cout) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_65__DOT__cout) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_64__DOT__cout) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_63__DOT__cout) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_62__DOT__cout) 
                                                                                << 5U) 
                                                                                | ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_61__DOT__cout) 
                                                                                << 4U))))))))))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hde7d52c0__0[2U] = (3U & ((2U & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_112__DOT__cout) 
                                             << 1U)) 
                                      | ((3U & (IData)(vlSelf->__PVT__mulDataModule__DOT__c22_111__DOT__cout)) 
                                         | ((3U & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_110__DOT__cout) 
                                                   >> 1U)) 
                                            | ((3U 
                                                & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_109__DOT__cout) 
                                                   >> 2U)) 
                                               | ((3U 
                                                   & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_108__DOT__cout) 
                                                      >> 3U)) 
                                                  | ((3U 
                                                      & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_107__DOT__cout) 
                                                         >> 4U)) 
                                                     | ((3U 
                                                         & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_106__DOT__cout) 
                                                            >> 5U)) 
                                                        | ((3U 
                                                            & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_105__DOT__cout) 
                                                               >> 6U)) 
                                                           | ((3U 
                                                               & (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_104__DOT__cout) 
                                                                   >> 7U) 
                                                                  | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_103__DOT__cout) 
                                                                      >> 8U) 
                                                                     | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_102__DOT__cout) 
                                                                         >> 9U) 
                                                                        | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_101__DOT__cout) 
                                                                            >> 0xaU) 
                                                                           | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_41__DOT__cout) 
                                                                               >> 0xbU) 
                                                                              | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_100__DOT__cout) 
                                                                                >> 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_99__DOT__cout) 
                                                                                >> 0xdU) 
                                                                                | ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_98__DOT__cout) 
                                                                                >> 0xeU))))))))) 
                                                              | ((3U 
                                                                  & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_97__DOT__cout) 
                                                                     >> 0xfU)) 
                                                                 | ((3U 
                                                                     & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_96__DOT__cout) 
                                                                        >> 0x10U)) 
                                                                    | ((3U 
                                                                        & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_95__DOT__cout) 
                                                                           >> 0x11U)) 
                                                                       | ((3U 
                                                                           & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_94__DOT__cout) 
                                                                              >> 0x12U)) 
                                                                          | ((3U 
                                                                              & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_93__DOT__cout) 
                                                                                >> 0x13U)) 
                                                                             | ((3U 
                                                                                & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_40__DOT__cout) 
                                                                                >> 0x14U)) 
                                                                                | ((3U 
                                                                                & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_92__DOT__cout) 
                                                                                >> 0x15U)) 
                                                                                | ((3U 
                                                                                & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_91__DOT__cout) 
                                                                                >> 0x16U)) 
                                                                                | ((3U 
                                                                                & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_90__DOT__cout) 
                                                                                >> 0x17U)) 
                                                                                | ((3U 
                                                                                & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_89__DOT__cout) 
                                                                                >> 0x18U)) 
                                                                                | ((3U 
                                                                                & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_39__DOT__cout) 
                                                                                >> 0x19U)) 
                                                                                | ((3U 
                                                                                & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_88__DOT__cout) 
                                                                                >> 0x1aU)) 
                                                                                | ((3U 
                                                                                & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_38__DOT__cout) 
                                                                                >> 0x1bU)) 
                                                                                | ((3U 
                                                                                & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_37__DOT__cout) 
                                                                                >> 0x1cU)) 
                                                                                | ((3U 
                                                                                & ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_36__DOT__cout) 
                                                                                >> 0x1dU)) 
                                                                                | ((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_35__DOT__cout) 
                                                                                >> 0x1eU))))))))))))))))))))))))));
    vlSelf->__PVT__mulDataModule__DOT__carry_1[0U] 
        = __Vtemp_hde7d52c0__0[0U];
    vlSelf->__PVT__mulDataModule__DOT__carry_1[1U] 
        = __Vtemp_hde7d52c0__0[1U];
    vlSelf->__PVT__mulDataModule__DOT__carry_1[2U] 
        = __Vtemp_hde7d52c0__0[2U];
    __Vtemp_h2a892c25__0[0U] = (IData)((((QData)((IData)(
                                                         (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_34__DOT__sum) 
                                                           << 0x10U) 
                                                          | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_33__DOT__sum) 
                                                              << 0xfU) 
                                                             | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_32__DOT__sum) 
                                                                 << 0xeU) 
                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_87__DOT__sum) 
                                                                    << 0xdU) 
                                                                   | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_86__DOT__sum) 
                                                                       << 0xcU) 
                                                                      | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_85__DOT__sum) 
                                                                          << 0xbU) 
                                                                         | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_84__DOT__sum) 
                                                                             << 0xaU) 
                                                                            | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_83__DOT__sum) 
                                                                                << 9U) 
                                                                               | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_82__DOT__sum) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_81__DOT__sum) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_80__DOT__sum) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_79__DOT__sum) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_78__DOT__sum) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_77__DOT__sum) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_76__DOT__sum) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_75__DOT__sum) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__mulDataModule__DOT__c22_74__DOT__sum))))))))))))))))))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_73__DOT__sum) 
                                                            << 0xfU) 
                                                           | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_72__DOT__sum) 
                                                               << 0xeU) 
                                                              | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_71__DOT__sum) 
                                                                  << 0xdU) 
                                                                 | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_70__DOT__sum) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_69__DOT__sum) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_68__DOT__sum) 
                                                                           << 0xaU) 
                                                                          | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_67__DOT__sum) 
                                                                              << 9U) 
                                                                             | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_66__DOT__sum) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_65__DOT__sum) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_64__DOT__sum) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_63__DOT__sum) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_62__DOT__sum) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_61__DOT__sum) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_37__DOT__sum) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_16__DOT__sum) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__mulDataModule__DOT__c22__DOT__sum))))))))))))))))))));
    __Vtemp_h2a892c25__0[1U] = (((IData)((((QData)((IData)(
                                                           (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_113__DOT__sum) 
                                                             << 0x10U) 
                                                            | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_112__DOT__sum) 
                                                                << 0xfU) 
                                                               | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_111__DOT__sum) 
                                                                   << 0xeU) 
                                                                  | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_110__DOT__sum) 
                                                                      << 0xdU) 
                                                                     | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_109__DOT__sum) 
                                                                         << 0xcU) 
                                                                        | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_108__DOT__sum) 
                                                                            << 0xbU) 
                                                                           | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_107__DOT__sum) 
                                                                               << 0xaU) 
                                                                              | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_106__DOT__sum) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_105__DOT__sum) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_104__DOT__sum) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_103__DOT__sum) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_102__DOT__sum) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_101__DOT__sum) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_41__DOT__sum) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_100__DOT__sum) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_99__DOT__sum) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__mulDataModule__DOT__c22_98__DOT__sum))))))))))))))))))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_97__DOT__sum) 
                                                              << 0xfU) 
                                                             | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_96__DOT__sum) 
                                                                 << 0xeU) 
                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_95__DOT__sum) 
                                                                    << 0xdU) 
                                                                   | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_94__DOT__sum) 
                                                                       << 0xcU) 
                                                                      | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_93__DOT__sum) 
                                                                          << 0xbU) 
                                                                         | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_40__DOT__sum) 
                                                                             << 0xaU) 
                                                                            | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_92__DOT__sum) 
                                                                                << 9U) 
                                                                               | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_91__DOT__sum) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_90__DOT__sum) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_89__DOT__sum) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_39__DOT__sum) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_88__DOT__sum) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_38__DOT__sum) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_37__DOT__sum) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_36__DOT__sum) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__mulDataModule__DOT__c32_35__DOT__sum)))))))))))))))))))) 
                                 << 1U) | (IData)((
                                                   (((QData)((IData)(
                                                                     (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_34__DOT__sum) 
                                                                       << 0x10U) 
                                                                      | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_33__DOT__sum) 
                                                                          << 0xfU) 
                                                                         | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_32__DOT__sum) 
                                                                             << 0xeU) 
                                                                            | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_87__DOT__sum) 
                                                                                << 0xdU) 
                                                                               | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_86__DOT__sum) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_85__DOT__sum) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_84__DOT__sum) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_83__DOT__sum) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_82__DOT__sum) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_81__DOT__sum) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_80__DOT__sum) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_79__DOT__sum) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_78__DOT__sum) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_77__DOT__sum) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_76__DOT__sum) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_75__DOT__sum) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__mulDataModule__DOT__c22_74__DOT__sum))))))))))))))))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_73__DOT__sum) 
                                                                        << 0xfU) 
                                                                       | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_72__DOT__sum) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_71__DOT__sum) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_70__DOT__sum) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_69__DOT__sum) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_68__DOT__sum) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_67__DOT__sum) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_66__DOT__sum) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_65__DOT__sum) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_64__DOT__sum) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_63__DOT__sum) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_62__DOT__sum) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_61__DOT__sum) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_37__DOT__sum) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_16__DOT__sum) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__mulDataModule__DOT__c22__DOT__sum))))))))))))))))))) 
                                                   >> 0x20U)));
    __Vtemp_h2a892c25__0[2U] = (((IData)((((QData)((IData)(
                                                           (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_113__DOT__sum) 
                                                             << 0x10U) 
                                                            | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_112__DOT__sum) 
                                                                << 0xfU) 
                                                               | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_111__DOT__sum) 
                                                                   << 0xeU) 
                                                                  | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_110__DOT__sum) 
                                                                      << 0xdU) 
                                                                     | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_109__DOT__sum) 
                                                                         << 0xcU) 
                                                                        | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_108__DOT__sum) 
                                                                            << 0xbU) 
                                                                           | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_107__DOT__sum) 
                                                                               << 0xaU) 
                                                                              | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_106__DOT__sum) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_105__DOT__sum) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_104__DOT__sum) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_103__DOT__sum) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_102__DOT__sum) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_101__DOT__sum) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_41__DOT__sum) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_100__DOT__sum) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_99__DOT__sum) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__mulDataModule__DOT__c22_98__DOT__sum))))))))))))))))))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_97__DOT__sum) 
                                                              << 0xfU) 
                                                             | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_96__DOT__sum) 
                                                                 << 0xeU) 
                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_95__DOT__sum) 
                                                                    << 0xdU) 
                                                                   | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_94__DOT__sum) 
                                                                       << 0xcU) 
                                                                      | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_93__DOT__sum) 
                                                                          << 0xbU) 
                                                                         | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_40__DOT__sum) 
                                                                             << 0xaU) 
                                                                            | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_92__DOT__sum) 
                                                                                << 9U) 
                                                                               | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_91__DOT__sum) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_90__DOT__sum) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_89__DOT__sum) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_39__DOT__sum) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_88__DOT__sum) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_38__DOT__sum) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_37__DOT__sum) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_36__DOT__sum) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__mulDataModule__DOT__c32_35__DOT__sum)))))))))))))))))))) 
                                 >> 0x1fU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_113__DOT__sum) 
                                                                           << 0x10U) 
                                                                          | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_112__DOT__sum) 
                                                                              << 0xfU) 
                                                                             | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_111__DOT__sum) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_110__DOT__sum) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_109__DOT__sum) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_108__DOT__sum) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_107__DOT__sum) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_106__DOT__sum) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_105__DOT__sum) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_104__DOT__sum) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_103__DOT__sum) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_102__DOT__sum) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_101__DOT__sum) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_41__DOT__sum) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_100__DOT__sum) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_99__DOT__sum) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__mulDataModule__DOT__c22_98__DOT__sum))))))))))))))))))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_97__DOT__sum) 
                                                                            << 0xfU) 
                                                                           | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_96__DOT__sum) 
                                                                               << 0xeU) 
                                                                              | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_95__DOT__sum) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_94__DOT__sum) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_93__DOT__sum) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_40__DOT__sum) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_92__DOT__sum) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_91__DOT__sum) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_90__DOT__sum) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_89__DOT__sum) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_39__DOT__sum) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c22_88__DOT__sum) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_38__DOT__sum) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_37__DOT__sum) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__mulDataModule__DOT__c32_36__DOT__sum) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__mulDataModule__DOT__c32_35__DOT__sum))))))))))))))))))) 
                                                       >> 0x20U)) 
                                              << 1U));
    vlSelf->__PVT__mulDataModule__DOT__sum[0U] = __Vtemp_h2a892c25__0[0U];
    vlSelf->__PVT__mulDataModule__DOT__sum[1U] = __Vtemp_h2a892c25__0[1U];
    vlSelf->__PVT__mulDataModule__DOT__sum[2U] = __Vtemp_h2a892c25__0[2U];
    VL_ADD_W(3, __Vtemp_hd3624bf3__0, vlSelf->__PVT__mulDataModule__DOT__sum, vlSelf->__PVT__mulDataModule__DOT__carry_1);
    vlSelf->__PVT__mulDataModule_io_result[0U] = __Vtemp_hd3624bf3__0[0U];
    vlSelf->__PVT__mulDataModule_io_result[1U] = __Vtemp_hd3624bf3__0[1U];
    vlSelf->__PVT__mulDataModule_io_result[2U] = (3U 
                                                  & __Vtemp_hd3624bf3__0[2U]);
}
