// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtop::_settle__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__2\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rd;
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
        = vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rdx;
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1 
        = vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs1;
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2 
        = vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs2;
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
        = ((1U & (IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1))
            ? vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2
            : 0ULL);
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt = 0ULL;
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd)) 
                   + (0xfU & (IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx))) 
                  + (0xfU & (IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2))) 
                 >> 4U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
                    + (IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx)) 
                   + (IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2)));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffffffff7ULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 3U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffffff0ULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | (IData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 4U))) + (0xfU 
                                                & (IData)(
                                                          (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                           >> 4U)))) 
                  + (0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 4U)))) >> 4U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 4U)) + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                >> 4U))) 
                   + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 4U))));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffffffff7fULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 7U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffffffff0fULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 4U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 8U))) + (0xfU 
                                                & (IData)(
                                                          (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                           >> 8U)))) 
                  + (0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 8U)))) >> 4U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 8U)) + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                >> 8U))) 
                   + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 8U))));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffffff7ffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0xbU));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffff0ffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 8U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0xcU))) + (0xfU 
                                                  & (IData)(
                                                            (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                             >> 0xcU)))) 
                  + (0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0xcU)))) >> 4U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0xcU)) + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                  >> 0xcU))) 
                   + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0xcU))));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffffff7fffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0xfU));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffffff0fffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0xcU));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x10U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x10U)))) 
                  + (0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x10U)))) >> 4U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x10U)) + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x10U))) 
                   + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x10U))));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffff7ffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x13U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffff0ffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x10U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x14U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x14U)))) 
                  + (0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x14U)))) >> 4U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x14U)) + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x14U))) 
                   + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x14U))));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffff7fffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x17U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffff0fffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x14U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x18U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x18U)))) 
                  + (0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x18U)))) >> 4U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x18U)) + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x18U))) 
                   + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x18U))));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffff7ffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x1bU));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffff0ffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x18U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x1cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x1cU)))) 
                  + (0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x1cU)))) >> 4U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x1cU)) + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x1cU))) 
                   + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x1cU))));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffff7fffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x1fU));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffff0fffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x1cU));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x20U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x20U)))) 
                  + (0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x20U)))) >> 4U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x20U)) + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x20U))) 
                   + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x20U))));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffff7ffffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x23U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffff0ffffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x20U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x24U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x24U)))) 
                  + (0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x24U)))) >> 4U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x24U)) + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x24U))) 
                   + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x24U))));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffff7fffffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x27U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffff0fffffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x24U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x28U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x28U)))) 
                  + (0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x28U)))) >> 4U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x28U)) + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x28U))) 
                   + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x28U))));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffff7ffffffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x2bU));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffff0ffffffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x28U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x2cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x2cU)))) 
                  + (0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x2cU)))) >> 4U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x2cU)) + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x2cU))) 
                   + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x2cU))));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffff7fffffffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x2fU));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffff0fffffffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x2cU));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x30U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x30U)))) 
                  + (0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x30U)))) >> 4U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x30U)) + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x30U))) 
                   + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x30U))));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfff7ffffffffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x33U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfff0ffffffffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x30U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x34U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x34U)))) 
                  + (0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x34U)))) >> 4U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x34U)) + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x34U))) 
                   + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x34U))));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xff7fffffffffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x37U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xff0fffffffffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x34U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x38U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x38U)))) 
                  + (0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x38U)))) >> 4U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x38U)) + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x38U))) 
                   + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x38U))));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xf7ffffffffffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x3bU));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xf0ffffffffffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x38U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x3cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x3cU)))) 
                  + (0xfU & (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x3cU)))) >> 4U));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x3cU)) + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x3cU))) 
                   + (IData)((vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x3cU))));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0x7fffffffffffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x3fU));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffffffULL & vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x3cU));
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
        = (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
           << 1U);
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1 
        = (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1 
           >> 1U);
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2 
        = (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2 
           << 1U);
    vlTOPp->top__DOT__cpu__DOT__pcpi_int_ready = ((IData)(vlTOPp->top__DOT__pcpi_ready) 
                                                  | (IData)(vlTOPp->top__DOT__cpu__DOT__pcpi_mul_ready));
    vlTOPp->top__DOT__cpu__DOT__cpuregs_rs1 = ((0U 
                                                != (IData)(vlTOPp->top__DOT__cpu__DOT__decoded_rs1))
                                                ? vlTOPp->top__DOT__cpu__DOT__cpuregs
                                               [vlTOPp->top__DOT__cpu__DOT__decoded_rs1]
                                                : 0U);
    vlTOPp->top__DOT__cpu__DOT__pcpi_int_wr = 0U;
    if (vlTOPp->top__DOT__pcpi_ready) {
        vlTOPp->top__DOT__cpu__DOT__pcpi_int_wr = vlTOPp->top__DOT__pcpi_wr;
    } else {
        if (vlTOPp->top__DOT__cpu__DOT__pcpi_mul_ready) {
            vlTOPp->top__DOT__cpu__DOT__pcpi_int_wr 
                = vlTOPp->top__DOT__cpu__DOT__pcpi_mul_wr;
        }
    }
    vlTOPp->top__DOT__cpu__DOT__pcpi_int_rd = 0U;
    if (vlTOPp->top__DOT__pcpi_ready) {
        vlTOPp->top__DOT__cpu__DOT__pcpi_int_rd = vlTOPp->top__DOT__pcpi_rd;
    } else {
        if (vlTOPp->top__DOT__cpu__DOT__pcpi_mul_ready) {
            vlTOPp->top__DOT__cpu__DOT__pcpi_int_rd 
                = vlTOPp->top__DOT__cpu__DOT__pcpi_mul_rd;
        }
    }
    vlTOPp->top__DOT__cpu__DOT__cpuregs_write = 0U;
    if ((0x40U == (IData)(vlTOPp->top__DOT__cpu__DOT__cpu_state))) {
        if (vlTOPp->top__DOT__cpu__DOT__latched_branch) {
            vlTOPp->top__DOT__cpu__DOT__cpuregs_write = 1U;
        } else {
            if (((IData)(vlTOPp->top__DOT__cpu__DOT__latched_store) 
                 & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__latched_branch)))) {
                vlTOPp->top__DOT__cpu__DOT__cpuregs_write = 1U;
            }
        }
    }
    vlTOPp->top__DOT__cpu__DOT__cpuregs_rs2 = ((0U 
                                                != (IData)(vlTOPp->top__DOT__cpu__DOT__decoded_rs2))
                                                ? vlTOPp->top__DOT__cpu__DOT__cpuregs
                                               [vlTOPp->top__DOT__cpu__DOT__decoded_rs2]
                                                : 0U);
    vlTOPp->top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_rdcycle) 
           | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_rdcycleh) 
              | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_rdinstr) 
                 | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_rdinstrh))));
    vlTOPp->top__DOT__cpu__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlTOPp->top__DOT__cpu__DOT__cpu_state))) {
        if (vlTOPp->top__DOT__cpu__DOT__latched_branch) {
            vlTOPp->top__DOT__cpu__DOT__cpuregs_wrdata 
                = (vlTOPp->top__DOT__cpu__DOT__reg_pc 
                   + ((IData)(vlTOPp->top__DOT__cpu__DOT__latched_compr)
                       ? 2U : 4U));
        } else {
            if (((IData)(vlTOPp->top__DOT__cpu__DOT__latched_store) 
                 & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__latched_branch)))) {
                vlTOPp->top__DOT__cpu__DOT__cpuregs_wrdata 
                    = ((IData)(vlTOPp->top__DOT__cpu__DOT__latched_stalu)
                        ? vlTOPp->top__DOT__cpu__DOT__alu_out_q
                        : vlTOPp->top__DOT__cpu__DOT__reg_out);
            }
        }
    }
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_any_mulh 
        = ((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh) 
           | ((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu) 
              | (IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu)));
    vlTOPp->top__DOT__cpu__DOT__instr_trap = (1U & 
                                              (~ (((IData)(vlTOPp->top__DOT__cpu__DOT__instr_lui) 
                                                   | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_auipc) 
                                                      | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_jal) 
                                                         | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_jalr) 
                                                            | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_beq) 
                                                               | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_bne) 
                                                                  | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_blt) 
                                                                     | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_bge) 
                                                                        | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_bltu) 
                                                                           | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_bgeu) 
                                                                              | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_lb) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_lh) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_lw) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_lbu) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_lhu) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_sb) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_sh) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_sw) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_addi) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_slti) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_sltiu) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_xori) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_ori) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_andi) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_slli) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_srli) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_srai) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_add) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_sub) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_sll) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_slt) 
                                                                                | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_sltu)))))))))))))))))))))))))))))))) 
                                                  | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_xor) 
                                                     | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_srl) 
                                                        | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_sra) 
                                                           | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_or) 
                                                              | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_and) 
                                                                 | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_rdcycle) 
                                                                    | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_rdcycleh) 
                                                                       | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_rdinstr) 
                                                                          | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_rdinstrh) 
                                                                             | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_fence) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_getq) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_setq) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__compressed_instr) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_maskirq) 
                                                                                | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_waitirq) 
                                                                                | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_timer)))))))))))))))))));
    if ((0U == (IData)(vlTOPp->top__DOT__cpu__DOT__mem_wordsize))) {
        vlTOPp->top__DOT__cpu__DOT__mem_la_wdata = vlTOPp->top__DOT__cpu__DOT__reg_op2;
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__cpu__DOT__mem_wordsize))) {
            vlTOPp->top__DOT__cpu__DOT__mem_la_wdata 
                = ((0xffff0000U & (vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                   << 0x10U)) | (0xffffU 
                                                 & vlTOPp->top__DOT__cpu__DOT__reg_op2));
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__cpu__DOT__mem_wordsize))) {
                vlTOPp->top__DOT__cpu__DOT__mem_la_wdata 
                    = ((0xff000000U & (vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                       << 0x18U)) | 
                       ((0xff0000U & (vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                      << 0x10U)) | 
                        ((0xff00U & (vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                     << 8U)) | (0xffU 
                                                & vlTOPp->top__DOT__cpu__DOT__reg_op2))));
            }
        }
    }
    vlTOPp->top__DOT__cpu__DOT__next_pc = (((IData)(vlTOPp->top__DOT__cpu__DOT__latched_store) 
                                            & (IData)(vlTOPp->top__DOT__cpu__DOT__latched_branch))
                                            ? (0xfffffffeU 
                                               & vlTOPp->top__DOT__cpu__DOT__reg_out)
                                            : vlTOPp->top__DOT__cpu__DOT__reg_next_pc);
    if ((0U == (IData)(vlTOPp->top__DOT__cpu__DOT__mem_wordsize))) {
        vlTOPp->top__DOT__cpu__DOT__mem_la_wstrb = 0xfU;
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__cpu__DOT__mem_wordsize))) {
            vlTOPp->top__DOT__cpu__DOT__mem_la_wstrb 
                = ((2U & vlTOPp->top__DOT__cpu__DOT__reg_op1)
                    ? 0xcU : 3U);
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__cpu__DOT__mem_wordsize))) {
                vlTOPp->top__DOT__cpu__DOT__mem_la_wstrb 
                    = (0xfU & ((IData)(1U) << (3U & vlTOPp->top__DOT__cpu__DOT__reg_op1)));
            }
        }
    }
    vlTOPp->top__DOT__my_accel__DOT__p0 = (0xffffU 
                                           & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,4, 
                                                                          (0xfU 
                                                                           & vlTOPp->top__DOT__cpu__DOT__reg_op1))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,4, 
                                                                          (0xfU 
                                                                           & vlTOPp->top__DOT__cpu__DOT__reg_op2)))));
    vlTOPp->top__DOT__my_accel__DOT__p1 = (0xffffU 
                                           & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,4, 
                                                                          (0xfU 
                                                                           & (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                                              >> 4U)))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,4, 
                                                                          (0xfU 
                                                                           & (vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                                                              >> 4U))))));
    vlTOPp->top__DOT__my_accel__DOT__p2 = (0xffffU 
                                           & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,4, 
                                                                          (0xfU 
                                                                           & (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                                              >> 8U)))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,4, 
                                                                          (0xfU 
                                                                           & (vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                                                              >> 8U))))));
    vlTOPp->top__DOT__my_accel__DOT__p3 = (0xffffU 
                                           & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,4, 
                                                                          (0xfU 
                                                                           & (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                                              >> 0xcU)))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,4, 
                                                                          (0xfU 
                                                                           & (vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                                                              >> 0xcU))))));
    vlTOPp->top__DOT__my_accel__DOT__p4 = (0xffffU 
                                           & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,4, 
                                                                          (0xfU 
                                                                           & (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                                              >> 0x10U)))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,4, 
                                                                          (0xfU 
                                                                           & (vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                                                              >> 0x10U))))));
    vlTOPp->top__DOT__my_accel__DOT__p5 = (0xffffU 
                                           & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,4, 
                                                                          (0xfU 
                                                                           & (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                                              >> 0x14U)))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,4, 
                                                                          (0xfU 
                                                                           & (vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                                                              >> 0x14U))))));
    vlTOPp->top__DOT__my_accel__DOT__p6 = (0xffffU 
                                           & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,4, 
                                                                          (0xfU 
                                                                           & (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                                              >> 0x18U)))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,4, 
                                                                          (0xfU 
                                                                           & (vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                                                              >> 0x18U))))));
    vlTOPp->top__DOT__my_accel__DOT__p7 = (0xffffU 
                                           & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,4, 
                                                                          (0xfU 
                                                                           & (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                                              >> 0x1cU)))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,4, 
                                                                          (0xfU 
                                                                           & (vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                                                              >> 0x1cU))))));
    vlTOPp->top__DOT__cpu__DOT__mem_la_write = (((IData)(vlTOPp->resetn) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlTOPp->top__DOT__cpu__DOT__mem_state))))) 
                                                & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_wdata));
    if ((0U == (IData)(vlTOPp->top__DOT__cpu__DOT__mem_wordsize))) {
        vlTOPp->top__DOT__cpu__DOT__mem_rdata_word 
            = vlTOPp->top__DOT__mem_rdata;
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__cpu__DOT__mem_wordsize))) {
            if ((2U & vlTOPp->top__DOT__cpu__DOT__reg_op1)) {
                if ((2U & vlTOPp->top__DOT__cpu__DOT__reg_op1)) {
                    vlTOPp->top__DOT__cpu__DOT__mem_rdata_word 
                        = (0xffffU & (vlTOPp->top__DOT__mem_rdata 
                                      >> 0x10U));
                }
            } else {
                vlTOPp->top__DOT__cpu__DOT__mem_rdata_word 
                    = (0xffffU & vlTOPp->top__DOT__mem_rdata);
            }
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__cpu__DOT__mem_wordsize))) {
                vlTOPp->top__DOT__cpu__DOT__mem_rdata_word 
                    = ((2U & vlTOPp->top__DOT__cpu__DOT__reg_op1)
                        ? ((1U & vlTOPp->top__DOT__cpu__DOT__reg_op1)
                            ? (0xffU & (vlTOPp->top__DOT__mem_rdata 
                                        >> 0x18U)) : 
                           (0xffU & (vlTOPp->top__DOT__mem_rdata 
                                     >> 0x10U))) : 
                       ((1U & vlTOPp->top__DOT__cpu__DOT__reg_op1)
                         ? (0xffU & (vlTOPp->top__DOT__mem_rdata 
                                     >> 8U)) : (0xffU 
                                                & vlTOPp->top__DOT__mem_rdata)));
            }
        }
    }
    vlTOPp->top__DOT__cpu__DOT__mem_la_read = ((IData)(vlTOPp->resetn) 
                                               & ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlTOPp->top__DOT__cpu__DOT__mem_state)))) 
                                                  & (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
                                                      | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch)) 
                                                     | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rdata))));
    vlTOPp->top__DOT__cpu__DOT__mem_xfer = ((IData)(vlTOPp->top__DOT__mem_valid) 
                                            & (IData)(vlTOPp->top__DOT__mem_ready));
    vlTOPp->top__DOT__cpu__DOT__alu_eq = (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                          == vlTOPp->top__DOT__cpu__DOT__reg_op2);
    vlTOPp->top__DOT__cpu__DOT__alu_lts = VL_LTS_III(1,32,32, vlTOPp->top__DOT__cpu__DOT__reg_op1, vlTOPp->top__DOT__cpu__DOT__reg_op2);
    vlTOPp->top__DOT__cpu__DOT__alu_ltu = (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                           < vlTOPp->top__DOT__cpu__DOT__reg_op2);
    vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlTOPp->top__DOT__cpu__DOT__mem_xfer)
            ? vlTOPp->top__DOT__mem_rdata : vlTOPp->top__DOT__cpu__DOT__mem_rdata_q);
    vlTOPp->top__DOT__cpu__DOT__mem_done = ((IData)(vlTOPp->resetn) 
                                            & ((((IData)(vlTOPp->top__DOT__cpu__DOT__mem_xfer) 
                                                 & (0U 
                                                    != (IData)(vlTOPp->top__DOT__cpu__DOT__mem_state))) 
                                                & (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
                                                    | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rdata)) 
                                                   | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_wdata))) 
                                               | ((3U 
                                                   == (IData)(vlTOPp->top__DOT__cpu__DOT__mem_state)) 
                                                  & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst))));
    vlTOPp->top__DOT__cpu__DOT__alu_out_0 = 0U;
    if (vlTOPp->top__DOT__cpu__DOT__instr_beq) {
        vlTOPp->top__DOT__cpu__DOT__alu_out_0 = vlTOPp->top__DOT__cpu__DOT__alu_eq;
    } else {
        if (vlTOPp->top__DOT__cpu__DOT__instr_bne) {
            vlTOPp->top__DOT__cpu__DOT__alu_out_0 = 
                (1U & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__alu_eq)));
        } else {
            if (vlTOPp->top__DOT__cpu__DOT__instr_bge) {
                vlTOPp->top__DOT__cpu__DOT__alu_out_0 
                    = (1U & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__alu_lts)));
            } else {
                if (vlTOPp->top__DOT__cpu__DOT__instr_bgeu) {
                    vlTOPp->top__DOT__cpu__DOT__alu_out_0 
                        = (1U & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__alu_ltu)));
                } else {
                    if (vlTOPp->top__DOT__cpu__DOT__is_slti_blt_slt) {
                        vlTOPp->top__DOT__cpu__DOT__alu_out_0 
                            = vlTOPp->top__DOT__cpu__DOT__alu_lts;
                    } else {
                        if (vlTOPp->top__DOT__cpu__DOT__is_sltiu_bltu_sltu) {
                            vlTOPp->top__DOT__cpu__DOT__alu_out_0 
                                = vlTOPp->top__DOT__cpu__DOT__alu_ltu;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__cpu__DOT__alu_out = 0U;
    if (vlTOPp->top__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlTOPp->top__DOT__cpu__DOT__alu_out = ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_sub)
                                                ? (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                   - vlTOPp->top__DOT__cpu__DOT__reg_op2)
                                                : (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                   + vlTOPp->top__DOT__cpu__DOT__reg_op2));
    } else {
        if (vlTOPp->top__DOT__cpu__DOT__is_compare) {
            vlTOPp->top__DOT__cpu__DOT__alu_out = vlTOPp->top__DOT__cpu__DOT__alu_out_0;
        } else {
            if (((IData)(vlTOPp->top__DOT__cpu__DOT__instr_xori) 
                 | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_xor))) {
                vlTOPp->top__DOT__cpu__DOT__alu_out 
                    = (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                       ^ vlTOPp->top__DOT__cpu__DOT__reg_op2);
            } else {
                if (((IData)(vlTOPp->top__DOT__cpu__DOT__instr_ori) 
                     | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_or))) {
                    vlTOPp->top__DOT__cpu__DOT__alu_out 
                        = (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                           | vlTOPp->top__DOT__cpu__DOT__reg_op2);
                } else {
                    if (((IData)(vlTOPp->top__DOT__cpu__DOT__instr_andi) 
                         | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_and))) {
                        vlTOPp->top__DOT__cpu__DOT__alu_out 
                            = (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                               & vlTOPp->top__DOT__cpu__DOT__reg_op2);
                    }
                }
            }
        }
    }
}

void Vtop::_initial__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp5[5];
    // Body
    __Vtemp5[0U] = 0x2e686578U;
    __Vtemp5[1U] = 0x77617265U;
    __Vtemp5[2U] = 0x6669726dU;
    __Vtemp5[3U] = 0x2f73772fU;
    __Vtemp5[4U] = 0x2e2eU;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(5, __Vtemp5)
                 , vlTOPp->top__DOT__memory, 0, ~0ULL);
    VL_WRITEF("SYSTEM: RAM Loaded. First Word (Addr 0): %x\n",
              32,vlTOPp->top__DOT__memory[0U]);
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->_initial__TOP__3(vlSymsp);
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    resetn = VL_RAND_RESET_I(1);
    out_data = VL_RAND_RESET_I(32);
    out_valid = VL_RAND_RESET_I(1);
    top__DOT__mem_valid = VL_RAND_RESET_I(1);
    top__DOT__mem_ready = VL_RAND_RESET_I(1);
    top__DOT__mem_addr = VL_RAND_RESET_I(32);
    top__DOT__mem_wdata = VL_RAND_RESET_I(32);
    top__DOT__mem_wstrb = VL_RAND_RESET_I(4);
    top__DOT__mem_rdata = VL_RAND_RESET_I(32);
    top__DOT__trap_signal = VL_RAND_RESET_I(1);
    top__DOT__pcpi_valid = VL_RAND_RESET_I(1);
    top__DOT__pcpi_insn = VL_RAND_RESET_I(32);
    top__DOT__pcpi_wr = VL_RAND_RESET_I(1);
    top__DOT__pcpi_rd = VL_RAND_RESET_I(32);
    top__DOT__pcpi_ready = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
            top__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__cpu__DOT__mem_la_read = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__mem_la_write = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__mem_la_wdata = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__mem_la_wstrb = VL_RAND_RESET_I(4);
    top__DOT__cpu__DOT__count_cycle = VL_RAND_RESET_Q(64);
    top__DOT__cpu__DOT__count_instr = VL_RAND_RESET_Q(64);
    top__DOT__cpu__DOT__reg_pc = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__reg_next_pc = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__reg_op1 = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__reg_op2 = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__reg_out = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__reg_sh = VL_RAND_RESET_I(5);
    top__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__timer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            top__DOT__cpu__DOT__cpuregs[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__cpu__DOT__pcpi_mul_wr = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__pcpi_mul_rd = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__pcpi_mul_wait = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__pcpi_mul_ready = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__pcpi_int_wr = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__pcpi_int_rd = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__pcpi_int_ready = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__mem_state = VL_RAND_RESET_I(2);
    top__DOT__cpu__DOT__mem_wordsize = VL_RAND_RESET_I(2);
    top__DOT__cpu__DOT__mem_rdata_word = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__mem_rdata_q = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__mem_do_prefetch = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__mem_do_rinst = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__mem_do_rdata = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__mem_do_wdata = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__mem_xfer = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__mem_rdata_latched_noshuffle = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__mem_done = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_lui = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_auipc = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_jal = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_jalr = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_beq = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_bne = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_blt = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_bge = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_bltu = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_bgeu = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_lb = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_lh = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_lw = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_lbu = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_lhu = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_sb = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_sh = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_sw = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_addi = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_slti = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_sltiu = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_xori = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_ori = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_andi = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_slli = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_srli = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_srai = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_add = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_sub = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_sll = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_slt = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_sltu = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_xor = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_srl = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_sra = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_or = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_and = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_rdcycle = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_rdcycleh = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_rdinstr = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_rdinstrh = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_ecall_ebreak = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_fence = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_getq = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_setq = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_maskirq = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_waitirq = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_timer = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__instr_trap = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__decoded_rd = VL_RAND_RESET_I(5);
    top__DOT__cpu__DOT__decoded_rs1 = VL_RAND_RESET_I(5);
    top__DOT__cpu__DOT__decoded_rs2 = VL_RAND_RESET_I(5);
    top__DOT__cpu__DOT__decoded_imm = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__decoded_imm_j = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__decoder_trigger = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__decoder_pseudo_trigger = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__compressed_instr = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__is_lui_auipc_jal = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__is_slli_srli_srai = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__is_sb_sh_sw = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__is_sll_srl_sra = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__is_slti_blt_slt = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__is_sltiu_bltu_sltu = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__is_lbu_lhu_lw = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__is_alu_reg_imm = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__is_alu_reg_reg = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__is_compare = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__cpu_state = VL_RAND_RESET_I(8);
    top__DOT__cpu__DOT__set_mem_do_rinst = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__set_mem_do_rdata = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__set_mem_do_wdata = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__latched_store = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__latched_stalu = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__latched_branch = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__latched_compr = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__latched_is_lu = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__latched_is_lh = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__latched_is_lb = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__latched_rd = VL_RAND_RESET_I(5);
    top__DOT__cpu__DOT__current_pc = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__pcpi_timeout_counter = VL_RAND_RESET_I(4);
    top__DOT__cpu__DOT__pcpi_timeout = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__do_waitirq = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__alu_out = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__alu_out_q = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__alu_out_0 = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__alu_eq = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__alu_ltu = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__alu_lts = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__cpuregs_write = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__cpuregs_wrdata = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__cpuregs_rs1 = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__cpuregs_rs2 = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mul = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_any_mulh = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__pcpi_wait_q = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs1 = VL_RAND_RESET_Q(64);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs2 = VL_RAND_RESET_Q(64);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rd = VL_RAND_RESET_Q(64);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rdx = VL_RAND_RESET_Q(64);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1 = VL_RAND_RESET_Q(64);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2 = VL_RAND_RESET_Q(64);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 = VL_RAND_RESET_Q(64);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd = VL_RAND_RESET_Q(64);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx = VL_RAND_RESET_Q(64);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt = VL_RAND_RESET_Q(64);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter = VL_RAND_RESET_I(7);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_waiting = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_finish = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 = VL_RAND_RESET_I(4);
    top__DOT__my_accel__DOT__p0 = VL_RAND_RESET_I(16);
    top__DOT__my_accel__DOT__p1 = VL_RAND_RESET_I(16);
    top__DOT__my_accel__DOT__p2 = VL_RAND_RESET_I(16);
    top__DOT__my_accel__DOT__p3 = VL_RAND_RESET_I(16);
    top__DOT__my_accel__DOT__p4 = VL_RAND_RESET_I(16);
    top__DOT__my_accel__DOT__p5 = VL_RAND_RESET_I(16);
    top__DOT__my_accel__DOT__p6 = VL_RAND_RESET_I(16);
    top__DOT__my_accel__DOT__p7 = VL_RAND_RESET_I(16);
}
