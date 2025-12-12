// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========
WData/*127:0*/ Vtop::__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[256][4];

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
    vlTOPp->top__DOT__cpu__DOT__dbg_insn_opcode = vlTOPp->top__DOT__cpu__DOT__q_insn_opcode;
    if (vlTOPp->top__DOT__cpu__DOT__dbg_next) {
        vlTOPp->top__DOT__cpu__DOT__dbg_insn_opcode 
            = ((IData)(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger_q)
                ? vlTOPp->top__DOT__cpu__DOT__cached_insn_opcode
                : ((3U == (3U & vlTOPp->top__DOT__cpu__DOT__next_insn_opcode))
                    ? vlTOPp->top__DOT__cpu__DOT__next_insn_opcode
                    : (0xffffU & vlTOPp->top__DOT__cpu__DOT__next_insn_opcode)));
    }
    vlTOPp->top__DOT__cpu__DOT__dbg_insn_rs1 = vlTOPp->top__DOT__cpu__DOT__q_insn_rs1;
    if (vlTOPp->top__DOT__cpu__DOT__dbg_next) {
        vlTOPp->top__DOT__cpu__DOT__dbg_insn_rs1 = 
            ((IData)(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger_q)
              ? (IData)(vlTOPp->top__DOT__cpu__DOT__cached_insn_rs1)
              : (IData)(vlTOPp->top__DOT__cpu__DOT__decoded_rs1));
    }
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
    vlTOPp->__Vtableidx1 = vlTOPp->top__DOT__cpu__DOT__cpu_state;
    vlTOPp->top__DOT__cpu__DOT__dbg_ascii_state[0U] 
        = vlTOPp->__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][0U];
    vlTOPp->top__DOT__cpu__DOT__dbg_ascii_state[1U] 
        = vlTOPp->__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][1U];
    vlTOPp->top__DOT__cpu__DOT__dbg_ascii_state[2U] 
        = vlTOPp->__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][2U];
    vlTOPp->top__DOT__cpu__DOT__dbg_ascii_state[3U] 
        = vlTOPp->__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][3U];
    vlTOPp->top__DOT__cpu__DOT__clear_prefetched_high_word 
        = vlTOPp->top__DOT__cpu__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__prefetched_high_word)))) {
        vlTOPp->top__DOT__cpu__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlTOPp->top__DOT__cpu__DOT__latched_branch) 
                | (0U != (IData)(vlTOPp->top__DOT__cpu__DOT__irq_state))) 
               | (~ (IData)(vlTOPp->resetn))))) {
        vlTOPp->top__DOT__cpu__DOT__clear_prefetched_high_word = 0U;
    }
    vlTOPp->top__DOT__my_accel__DOT__b_raw[0U] = (0xfU 
                                                  & vlTOPp->top__DOT__cpu__DOT__reg_op2);
    vlTOPp->top__DOT__my_accel__DOT__b_raw[1U] = (0xfU 
                                                  & (vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                                     >> 4U));
    vlTOPp->top__DOT__my_accel__DOT__b_raw[2U] = (0xfU 
                                                  & (vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                                     >> 8U));
    vlTOPp->top__DOT__my_accel__DOT__b_raw[3U] = (0xfU 
                                                  & (vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                                     >> 0xcU));
    vlTOPp->top__DOT__my_accel__DOT__b_raw[4U] = (0xfU 
                                                  & (vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                                     >> 0x10U));
    vlTOPp->top__DOT__my_accel__DOT__b_raw[5U] = (0xfU 
                                                  & (vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                                     >> 0x14U));
    vlTOPp->top__DOT__my_accel__DOT__b_raw[6U] = (0xfU 
                                                  & (vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                                     >> 0x18U));
    vlTOPp->top__DOT__my_accel__DOT__b_raw[7U] = (0xfU 
                                                  & (vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                                     >> 0x1cU));
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
    vlTOPp->top__DOT__cpu__DOT__dbg_insn_rs2 = vlTOPp->top__DOT__cpu__DOT__q_insn_rs2;
    if (vlTOPp->top__DOT__cpu__DOT__dbg_next) {
        vlTOPp->top__DOT__cpu__DOT__dbg_insn_rs2 = 
            ((IData)(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger_q)
              ? (IData)(vlTOPp->top__DOT__cpu__DOT__cached_insn_rs2)
              : (IData)(vlTOPp->top__DOT__cpu__DOT__decoded_rs2));
    }
    vlTOPp->top__DOT__cpu__DOT__dbg_insn_rd = vlTOPp->top__DOT__cpu__DOT__q_insn_rd;
    if (vlTOPp->top__DOT__cpu__DOT__dbg_next) {
        vlTOPp->top__DOT__cpu__DOT__dbg_insn_rd = ((IData)(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger_q)
                                                    ? (IData)(vlTOPp->top__DOT__cpu__DOT__cached_insn_rd)
                                                    : (IData)(vlTOPp->top__DOT__cpu__DOT__decoded_rd));
    }
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
    vlTOPp->top__DOT__cpu__DOT__dbg_insn_imm = vlTOPp->top__DOT__cpu__DOT__q_insn_imm;
    if (vlTOPp->top__DOT__cpu__DOT__dbg_next) {
        vlTOPp->top__DOT__cpu__DOT__dbg_insn_imm = 
            ((IData)(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger_q)
              ? vlTOPp->top__DOT__cpu__DOT__cached_insn_imm
              : vlTOPp->top__DOT__cpu__DOT__decoded_imm);
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
    vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0ULL;
    if (vlTOPp->top__DOT__cpu__DOT__instr_lui) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x6c7569ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_auipc) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x6175697063ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_jal) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x6a616cULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_jalr) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x6a616c72ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_beq) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x626571ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_bne) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x626e65ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_blt) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x626c74ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_bge) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x626765ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_bltu) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x626c7475ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_bgeu) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x62676575ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_lb) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x6c62ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_lh) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x6c68ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_lw) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x6c77ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_lbu) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x6c6275ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_lhu) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x6c6875ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_sb) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x7362ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_sh) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x7368ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_sw) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x7377ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_addi) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x61646469ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_slti) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x736c7469ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_sltiu) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x736c746975ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_xori) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x786f7269ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_ori) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x6f7269ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_andi) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x616e6469ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_slli) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x736c6c69ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_srli) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x73726c69ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_srai) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x73726169ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_add) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x616464ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_sub) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x737562ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_sll) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x736c6cULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_slt) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x736c74ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_sltu) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x736c7475ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_xor) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x786f72ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_srl) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x73726cULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_sra) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x737261ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_or) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x6f72ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_and) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x616e64ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_rdcycle) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x72646379636c65ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_rdcycleh) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_rdinstr) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x7264696e737472ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_rdinstrh) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_fence) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x66656e6365ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_getq) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x67657471ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_setq) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x73657471ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__compressed_instr) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x726574697271ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_maskirq) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x6d61736b697271ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_waitirq) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x77616974697271ULL;
    }
    if (vlTOPp->top__DOT__cpu__DOT__instr_timer) {
        vlTOPp->top__DOT__cpu__DOT__new_ascii_instr = 0x74696d6572ULL;
    }
    vlTOPp->top__DOT__cpu__DOT__launch_next_insn = 
        ((0x40U == (IData)(vlTOPp->top__DOT__cpu__DOT__cpu_state)) 
         & (IData)(vlTOPp->top__DOT__cpu__DOT__decoder_trigger));
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
    vlTOPp->top__DOT__my_accel__DOT__a_raw[0U] = (0xfU 
                                                  & vlTOPp->top__DOT__cpu__DOT__reg_op1);
    vlTOPp->top__DOT__my_accel__DOT__a_raw[1U] = (0xfU 
                                                  & (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                     >> 4U));
    vlTOPp->top__DOT__my_accel__DOT__a_raw[2U] = (0xfU 
                                                  & (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                     >> 8U));
    vlTOPp->top__DOT__my_accel__DOT__a_raw[3U] = (0xfU 
                                                  & (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                     >> 0xcU));
    vlTOPp->top__DOT__my_accel__DOT__a_raw[4U] = (0xfU 
                                                  & (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                     >> 0x10U));
    vlTOPp->top__DOT__my_accel__DOT__a_raw[5U] = (0xfU 
                                                  & (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                     >> 0x14U));
    vlTOPp->top__DOT__my_accel__DOT__a_raw[6U] = (0xfU 
                                                  & (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                     >> 0x18U));
    vlTOPp->top__DOT__my_accel__DOT__a_raw[7U] = (0xfU 
                                                  & (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                     >> 0x1cU));
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__fp4 
        = vlTOPp->top__DOT__my_accel__DOT__b_raw[0U];
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__Vfuncout 
        = ((8U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__fp4))
            ? ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__fp4))
                        ? 0xfe8U : 0xff0U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__fp4))
                                               ? 0xff4U
                                               : 0xff8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__fp4))
                        ? 0xffcU : 0xffeU) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__fp4))
                                               ? 0xfffU
                                               : 0U)))
            : ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__fp4))
                        ? 0x18U : 0x10U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__fp4))
                                             ? 0xcU
                                             : 8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__fp4))
                        ? 4U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__fp4))
                                       ? 1U : 0U))));
    vlTOPp->top__DOT__my_accel__DOT__b_val[0U] = vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__Vfuncout;
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__fp4 
        = vlTOPp->top__DOT__my_accel__DOT__b_raw[1U];
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__Vfuncout 
        = ((8U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__fp4))
            ? ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__fp4))
                        ? 0xfe8U : 0xff0U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__fp4))
                                               ? 0xff4U
                                               : 0xff8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__fp4))
                        ? 0xffcU : 0xffeU) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__fp4))
                                               ? 0xfffU
                                               : 0U)))
            : ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__fp4))
                        ? 0x18U : 0x10U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__fp4))
                                             ? 0xcU
                                             : 8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__fp4))
                        ? 4U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__fp4))
                                       ? 1U : 0U))));
    vlTOPp->top__DOT__my_accel__DOT__b_val[1U] = vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__Vfuncout;
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__fp4 
        = vlTOPp->top__DOT__my_accel__DOT__b_raw[2U];
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__Vfuncout 
        = ((8U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__fp4))
            ? ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__fp4))
                        ? 0xfe8U : 0xff0U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__fp4))
                                               ? 0xff4U
                                               : 0xff8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__fp4))
                        ? 0xffcU : 0xffeU) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__fp4))
                                               ? 0xfffU
                                               : 0U)))
            : ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__fp4))
                        ? 0x18U : 0x10U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__fp4))
                                             ? 0xcU
                                             : 8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__fp4))
                        ? 4U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__fp4))
                                       ? 1U : 0U))));
    vlTOPp->top__DOT__my_accel__DOT__b_val[2U] = vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__Vfuncout;
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__fp4 
        = vlTOPp->top__DOT__my_accel__DOT__b_raw[3U];
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__Vfuncout 
        = ((8U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__fp4))
            ? ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__fp4))
                        ? 0xfe8U : 0xff0U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__fp4))
                                               ? 0xff4U
                                               : 0xff8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__fp4))
                        ? 0xffcU : 0xffeU) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__fp4))
                                               ? 0xfffU
                                               : 0U)))
            : ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__fp4))
                        ? 0x18U : 0x10U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__fp4))
                                             ? 0xcU
                                             : 8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__fp4))
                        ? 4U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__fp4))
                                       ? 1U : 0U))));
    vlTOPp->top__DOT__my_accel__DOT__b_val[3U] = vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__Vfuncout;
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__fp4 
        = vlTOPp->top__DOT__my_accel__DOT__b_raw[4U];
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__Vfuncout 
        = ((8U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__fp4))
            ? ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__fp4))
                        ? 0xfe8U : 0xff0U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__fp4))
                                               ? 0xff4U
                                               : 0xff8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__fp4))
                        ? 0xffcU : 0xffeU) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__fp4))
                                               ? 0xfffU
                                               : 0U)))
            : ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__fp4))
                        ? 0x18U : 0x10U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__fp4))
                                             ? 0xcU
                                             : 8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__fp4))
                        ? 4U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__fp4))
                                       ? 1U : 0U))));
    vlTOPp->top__DOT__my_accel__DOT__b_val[4U] = vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__Vfuncout;
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__fp4 
        = vlTOPp->top__DOT__my_accel__DOT__b_raw[5U];
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__Vfuncout 
        = ((8U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__fp4))
            ? ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__fp4))
                        ? 0xfe8U : 0xff0U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__fp4))
                                               ? 0xff4U
                                               : 0xff8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__fp4))
                        ? 0xffcU : 0xffeU) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__fp4))
                                               ? 0xfffU
                                               : 0U)))
            : ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__fp4))
                        ? 0x18U : 0x10U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__fp4))
                                             ? 0xcU
                                             : 8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__fp4))
                        ? 4U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__fp4))
                                       ? 1U : 0U))));
    vlTOPp->top__DOT__my_accel__DOT__b_val[5U] = vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__Vfuncout;
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__fp4 
        = vlTOPp->top__DOT__my_accel__DOT__b_raw[6U];
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__Vfuncout 
        = ((8U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__fp4))
            ? ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__fp4))
                        ? 0xfe8U : 0xff0U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__fp4))
                                               ? 0xff4U
                                               : 0xff8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__fp4))
                        ? 0xffcU : 0xffeU) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__fp4))
                                               ? 0xfffU
                                               : 0U)))
            : ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__fp4))
                        ? 0x18U : 0x10U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__fp4))
                                             ? 0xcU
                                             : 8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__fp4))
                        ? 4U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__fp4))
                                       ? 1U : 0U))));
    vlTOPp->top__DOT__my_accel__DOT__b_val[6U] = vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__Vfuncout;
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__fp4 
        = vlTOPp->top__DOT__my_accel__DOT__b_raw[7U];
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__Vfuncout 
        = ((8U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__fp4))
            ? ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__fp4))
                        ? 0xfe8U : 0xff0U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__fp4))
                                               ? 0xff4U
                                               : 0xff8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__fp4))
                        ? 0xffcU : 0xffeU) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__fp4))
                                               ? 0xfffU
                                               : 0U)))
            : ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__fp4))
                        ? 0x18U : 0x10U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__fp4))
                                             ? 0xcU
                                             : 8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__fp4))
                        ? 4U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__fp4))
                                       ? 1U : 0U))));
    vlTOPp->top__DOT__my_accel__DOT__b_val[7U] = vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__Vfuncout;
    vlTOPp->top__DOT__cpu__DOT__dbg_ascii_instr = vlTOPp->top__DOT__cpu__DOT__q_ascii_instr;
    if (vlTOPp->top__DOT__cpu__DOT__dbg_next) {
        vlTOPp->top__DOT__cpu__DOT__dbg_ascii_instr 
            = ((IData)(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger_q)
                ? vlTOPp->top__DOT__cpu__DOT__cached_ascii_instr
                : vlTOPp->top__DOT__cpu__DOT__new_ascii_instr);
    }
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
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__fp4 
        = vlTOPp->top__DOT__my_accel__DOT__a_raw[0U];
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__Vfuncout 
        = ((8U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__fp4))
            ? ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__fp4))
                        ? 0xfe8U : 0xff0U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__fp4))
                                               ? 0xff4U
                                               : 0xff8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__fp4))
                        ? 0xffcU : 0xffeU) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__fp4))
                                               ? 0xfffU
                                               : 0U)))
            : ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__fp4))
                        ? 0x18U : 0x10U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__fp4))
                                             ? 0xcU
                                             : 8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__fp4))
                        ? 4U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__fp4))
                                       ? 1U : 0U))));
    vlTOPp->top__DOT__my_accel__DOT__a_val[0U] = vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__Vfuncout;
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__fp4 
        = vlTOPp->top__DOT__my_accel__DOT__a_raw[1U];
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__Vfuncout 
        = ((8U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__fp4))
            ? ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__fp4))
                        ? 0xfe8U : 0xff0U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__fp4))
                                               ? 0xff4U
                                               : 0xff8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__fp4))
                        ? 0xffcU : 0xffeU) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__fp4))
                                               ? 0xfffU
                                               : 0U)))
            : ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__fp4))
                        ? 0x18U : 0x10U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__fp4))
                                             ? 0xcU
                                             : 8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__fp4))
                        ? 4U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__fp4))
                                       ? 1U : 0U))));
    vlTOPp->top__DOT__my_accel__DOT__a_val[1U] = vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__Vfuncout;
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__fp4 
        = vlTOPp->top__DOT__my_accel__DOT__a_raw[2U];
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__Vfuncout 
        = ((8U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__fp4))
            ? ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__fp4))
                        ? 0xfe8U : 0xff0U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__fp4))
                                               ? 0xff4U
                                               : 0xff8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__fp4))
                        ? 0xffcU : 0xffeU) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__fp4))
                                               ? 0xfffU
                                               : 0U)))
            : ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__fp4))
                        ? 0x18U : 0x10U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__fp4))
                                             ? 0xcU
                                             : 8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__fp4))
                        ? 4U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__fp4))
                                       ? 1U : 0U))));
    vlTOPp->top__DOT__my_accel__DOT__a_val[2U] = vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__Vfuncout;
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__fp4 
        = vlTOPp->top__DOT__my_accel__DOT__a_raw[3U];
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__Vfuncout 
        = ((8U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__fp4))
            ? ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__fp4))
                        ? 0xfe8U : 0xff0U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__fp4))
                                               ? 0xff4U
                                               : 0xff8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__fp4))
                        ? 0xffcU : 0xffeU) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__fp4))
                                               ? 0xfffU
                                               : 0U)))
            : ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__fp4))
                        ? 0x18U : 0x10U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__fp4))
                                             ? 0xcU
                                             : 8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__fp4))
                        ? 4U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__fp4))
                                       ? 1U : 0U))));
    vlTOPp->top__DOT__my_accel__DOT__a_val[3U] = vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__Vfuncout;
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__fp4 
        = vlTOPp->top__DOT__my_accel__DOT__a_raw[4U];
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__Vfuncout 
        = ((8U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__fp4))
            ? ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__fp4))
                        ? 0xfe8U : 0xff0U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__fp4))
                                               ? 0xff4U
                                               : 0xff8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__fp4))
                        ? 0xffcU : 0xffeU) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__fp4))
                                               ? 0xfffU
                                               : 0U)))
            : ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__fp4))
                        ? 0x18U : 0x10U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__fp4))
                                             ? 0xcU
                                             : 8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__fp4))
                        ? 4U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__fp4))
                                       ? 1U : 0U))));
    vlTOPp->top__DOT__my_accel__DOT__a_val[4U] = vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__Vfuncout;
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__fp4 
        = vlTOPp->top__DOT__my_accel__DOT__a_raw[5U];
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__Vfuncout 
        = ((8U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__fp4))
            ? ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__fp4))
                        ? 0xfe8U : 0xff0U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__fp4))
                                               ? 0xff4U
                                               : 0xff8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__fp4))
                        ? 0xffcU : 0xffeU) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__fp4))
                                               ? 0xfffU
                                               : 0U)))
            : ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__fp4))
                        ? 0x18U : 0x10U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__fp4))
                                             ? 0xcU
                                             : 8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__fp4))
                        ? 4U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__fp4))
                                       ? 1U : 0U))));
    vlTOPp->top__DOT__my_accel__DOT__a_val[5U] = vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__Vfuncout;
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__fp4 
        = vlTOPp->top__DOT__my_accel__DOT__a_raw[6U];
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__Vfuncout 
        = ((8U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__fp4))
            ? ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__fp4))
                        ? 0xfe8U : 0xff0U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__fp4))
                                               ? 0xff4U
                                               : 0xff8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__fp4))
                        ? 0xffcU : 0xffeU) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__fp4))
                                               ? 0xfffU
                                               : 0U)))
            : ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__fp4))
                        ? 0x18U : 0x10U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__fp4))
                                             ? 0xcU
                                             : 8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__fp4))
                        ? 4U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__fp4))
                                       ? 1U : 0U))));
    vlTOPp->top__DOT__my_accel__DOT__a_val[6U] = vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__Vfuncout;
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__fp4 
        = vlTOPp->top__DOT__my_accel__DOT__a_raw[7U];
    vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__Vfuncout 
        = ((8U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__fp4))
            ? ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__fp4))
                        ? 0xfe8U : 0xff0U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__fp4))
                                               ? 0xff4U
                                               : 0xff8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__fp4))
                        ? 0xffcU : 0xffeU) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__fp4))
                                               ? 0xfffU
                                               : 0U)))
            : ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__fp4))
                ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__fp4))
                        ? 0x18U : 0x10U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__fp4))
                                             ? 0xcU
                                             : 8U))
                : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__fp4))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__fp4))
                        ? 4U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__fp4))
                                       ? 1U : 0U))));
    vlTOPp->top__DOT__my_accel__DOT__a_val[7U] = vlTOPp->__Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__Vfuncout;
    vlTOPp->top__DOT__my_accel__DOT__prod[0U] = (0xffffffU 
                                                 & VL_MULS_III(24,24,24, 
                                                               (0xffffffU 
                                                                & VL_EXTENDS_II(24,12, 
                                                                                vlTOPp->top__DOT__my_accel__DOT__a_val
                                                                                [0U])), 
                                                               (0xffffffU 
                                                                & VL_EXTENDS_II(24,12, 
                                                                                vlTOPp->top__DOT__my_accel__DOT__b_val
                                                                                [0U]))));
    vlTOPp->top__DOT__my_accel__DOT__prod[1U] = (0xffffffU 
                                                 & VL_MULS_III(24,24,24, 
                                                               (0xffffffU 
                                                                & VL_EXTENDS_II(24,12, 
                                                                                vlTOPp->top__DOT__my_accel__DOT__a_val
                                                                                [1U])), 
                                                               (0xffffffU 
                                                                & VL_EXTENDS_II(24,12, 
                                                                                vlTOPp->top__DOT__my_accel__DOT__b_val
                                                                                [1U]))));
    vlTOPp->top__DOT__my_accel__DOT__prod[2U] = (0xffffffU 
                                                 & VL_MULS_III(24,24,24, 
                                                               (0xffffffU 
                                                                & VL_EXTENDS_II(24,12, 
                                                                                vlTOPp->top__DOT__my_accel__DOT__a_val
                                                                                [2U])), 
                                                               (0xffffffU 
                                                                & VL_EXTENDS_II(24,12, 
                                                                                vlTOPp->top__DOT__my_accel__DOT__b_val
                                                                                [2U]))));
    vlTOPp->top__DOT__my_accel__DOT__prod[3U] = (0xffffffU 
                                                 & VL_MULS_III(24,24,24, 
                                                               (0xffffffU 
                                                                & VL_EXTENDS_II(24,12, 
                                                                                vlTOPp->top__DOT__my_accel__DOT__a_val
                                                                                [3U])), 
                                                               (0xffffffU 
                                                                & VL_EXTENDS_II(24,12, 
                                                                                vlTOPp->top__DOT__my_accel__DOT__b_val
                                                                                [3U]))));
    vlTOPp->top__DOT__my_accel__DOT__prod[4U] = (0xffffffU 
                                                 & VL_MULS_III(24,24,24, 
                                                               (0xffffffU 
                                                                & VL_EXTENDS_II(24,12, 
                                                                                vlTOPp->top__DOT__my_accel__DOT__a_val
                                                                                [4U])), 
                                                               (0xffffffU 
                                                                & VL_EXTENDS_II(24,12, 
                                                                                vlTOPp->top__DOT__my_accel__DOT__b_val
                                                                                [4U]))));
    vlTOPp->top__DOT__my_accel__DOT__prod[5U] = (0xffffffU 
                                                 & VL_MULS_III(24,24,24, 
                                                               (0xffffffU 
                                                                & VL_EXTENDS_II(24,12, 
                                                                                vlTOPp->top__DOT__my_accel__DOT__a_val
                                                                                [5U])), 
                                                               (0xffffffU 
                                                                & VL_EXTENDS_II(24,12, 
                                                                                vlTOPp->top__DOT__my_accel__DOT__b_val
                                                                                [5U]))));
    vlTOPp->top__DOT__my_accel__DOT__prod[6U] = (0xffffffU 
                                                 & VL_MULS_III(24,24,24, 
                                                               (0xffffffU 
                                                                & VL_EXTENDS_II(24,12, 
                                                                                vlTOPp->top__DOT__my_accel__DOT__a_val
                                                                                [6U])), 
                                                               (0xffffffU 
                                                                & VL_EXTENDS_II(24,12, 
                                                                                vlTOPp->top__DOT__my_accel__DOT__b_val
                                                                                [6U]))));
    vlTOPp->top__DOT__my_accel__DOT__prod[7U] = (0xffffffU 
                                                 & VL_MULS_III(24,24,24, 
                                                               (0xffffffU 
                                                                & VL_EXTENDS_II(24,12, 
                                                                                vlTOPp->top__DOT__my_accel__DOT__a_val
                                                                                [7U])), 
                                                               (0xffffffU 
                                                                & VL_EXTENDS_II(24,12, 
                                                                                vlTOPp->top__DOT__my_accel__DOT__b_val
                                                                                [7U]))));
}

void Vtop::_initial__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp7[5];
    // Body
    __Vtemp7[0U] = 0x2e686578U;
    __Vtemp7[1U] = 0x77617265U;
    __Vtemp7[2U] = 0x6669726dU;
    __Vtemp7[3U] = 0x2f73772fU;
    __Vtemp7[4U] = 0x2e2eU;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(5, __Vtemp7)
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
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    resetn = VL_RAND_RESET_I(1);
    out_data = VL_RAND_RESET_I(32);
    out_valid = VL_RAND_RESET_I(1);
    top__DOT__mem_valid = VL_RAND_RESET_I(1);
    top__DOT__mem_instr = VL_RAND_RESET_I(1);
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
    top__DOT__cpu__DOT__eoi = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__trace_valid = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__trace_data = VL_RAND_RESET_Q(36);
    top__DOT__cpu__DOT__count_cycle = VL_RAND_RESET_Q(64);
    top__DOT__cpu__DOT__count_instr = VL_RAND_RESET_Q(64);
    top__DOT__cpu__DOT__reg_pc = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__reg_next_pc = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__reg_op1 = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__reg_op2 = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__reg_out = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__reg_sh = VL_RAND_RESET_I(5);
    top__DOT__cpu__DOT__next_insn_opcode = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__dbg_insn_opcode = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__dbg_insn_addr = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__irq_delay = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__irq_active = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__irq_mask = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__irq_pending = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__timer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            top__DOT__cpu__DOT__cpuregs[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__cpu__DOT__i = VL_RAND_RESET_I(32);
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
    top__DOT__cpu__DOT__mem_la_secondword = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__mem_la_firstword_reg = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__last_mem_valid = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__prefetched_high_word = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__clear_prefetched_high_word = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__mem_16bit_buffer = VL_RAND_RESET_I(16);
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
    top__DOT__cpu__DOT__decoder_trigger_q = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__decoder_pseudo_trigger = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__decoder_pseudo_trigger_q = VL_RAND_RESET_I(1);
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
    top__DOT__cpu__DOT__new_ascii_instr = VL_RAND_RESET_Q(64);
    top__DOT__cpu__DOT__dbg_ascii_instr = VL_RAND_RESET_Q(64);
    top__DOT__cpu__DOT__dbg_insn_imm = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__dbg_insn_rs1 = VL_RAND_RESET_I(5);
    top__DOT__cpu__DOT__dbg_insn_rs2 = VL_RAND_RESET_I(5);
    top__DOT__cpu__DOT__dbg_insn_rd = VL_RAND_RESET_I(5);
    top__DOT__cpu__DOT__dbg_rs1val = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__dbg_rs2val = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__dbg_rs1val_valid = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__dbg_rs2val_valid = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__q_ascii_instr = VL_RAND_RESET_Q(64);
    top__DOT__cpu__DOT__q_insn_imm = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__q_insn_opcode = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__q_insn_rs1 = VL_RAND_RESET_I(5);
    top__DOT__cpu__DOT__q_insn_rs2 = VL_RAND_RESET_I(5);
    top__DOT__cpu__DOT__q_insn_rd = VL_RAND_RESET_I(5);
    top__DOT__cpu__DOT__dbg_next = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__launch_next_insn = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__dbg_valid_insn = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__cached_ascii_instr = VL_RAND_RESET_Q(64);
    top__DOT__cpu__DOT__cached_insn_imm = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__cached_insn_opcode = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__cached_insn_rs1 = VL_RAND_RESET_I(5);
    top__DOT__cpu__DOT__cached_insn_rs2 = VL_RAND_RESET_I(5);
    top__DOT__cpu__DOT__cached_insn_rd = VL_RAND_RESET_I(5);
    top__DOT__cpu__DOT__cpu_state = VL_RAND_RESET_I(8);
    top__DOT__cpu__DOT__irq_state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, top__DOT__cpu__DOT__dbg_ascii_state);
    top__DOT__cpu__DOT__set_mem_do_rinst = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__set_mem_do_rdata = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__set_mem_do_wdata = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__latched_store = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__latched_stalu = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__latched_branch = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__latched_compr = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__latched_trace = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__latched_is_lu = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__latched_is_lh = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__latched_is_lb = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__latched_rd = VL_RAND_RESET_I(5);
    top__DOT__cpu__DOT__current_pc = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__pcpi_timeout_counter = VL_RAND_RESET_I(4);
    top__DOT__cpu__DOT__pcpi_timeout = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__next_irq_pending = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__do_waitirq = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__alu_out = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__alu_out_q = VL_RAND_RESET_I(32);
    top__DOT__cpu__DOT__alu_out_0 = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__alu_out_0_q = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__alu_wait = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__alu_wait_2 = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__alu_eq = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__alu_ltu = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__alu_lts = VL_RAND_RESET_I(1);
    top__DOT__cpu__DOT__clear_prefetched_high_word_q = VL_RAND_RESET_I(1);
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
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            top__DOT__my_accel__DOT__a_raw[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            top__DOT__my_accel__DOT__b_raw[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            top__DOT__my_accel__DOT__a_val[__Vi0] = VL_RAND_RESET_I(12);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            top__DOT__my_accel__DOT__b_val[__Vi0] = VL_RAND_RESET_I(12);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            top__DOT__my_accel__DOT__prod[__Vi0] = VL_RAND_RESET_I(24);
    }}
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__Vfuncout = VL_RAND_RESET_I(12);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__fp4 = VL_RAND_RESET_I(4);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__Vfuncout = VL_RAND_RESET_I(12);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__fp4 = VL_RAND_RESET_I(4);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__Vfuncout = VL_RAND_RESET_I(12);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__fp4 = VL_RAND_RESET_I(4);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__Vfuncout = VL_RAND_RESET_I(12);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__fp4 = VL_RAND_RESET_I(4);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__Vfuncout = VL_RAND_RESET_I(12);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__fp4 = VL_RAND_RESET_I(4);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__Vfuncout = VL_RAND_RESET_I(12);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__fp4 = VL_RAND_RESET_I(4);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__Vfuncout = VL_RAND_RESET_I(12);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__fp4 = VL_RAND_RESET_I(4);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__Vfuncout = VL_RAND_RESET_I(12);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__fp4 = VL_RAND_RESET_I(4);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__Vfuncout = VL_RAND_RESET_I(12);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__fp4 = VL_RAND_RESET_I(4);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__Vfuncout = VL_RAND_RESET_I(12);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__fp4 = VL_RAND_RESET_I(4);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__Vfuncout = VL_RAND_RESET_I(12);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__fp4 = VL_RAND_RESET_I(4);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__Vfuncout = VL_RAND_RESET_I(12);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__fp4 = VL_RAND_RESET_I(4);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__Vfuncout = VL_RAND_RESET_I(12);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__fp4 = VL_RAND_RESET_I(4);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__Vfuncout = VL_RAND_RESET_I(12);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__fp4 = VL_RAND_RESET_I(4);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__Vfuncout = VL_RAND_RESET_I(12);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__fp4 = VL_RAND_RESET_I(4);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__Vfuncout = VL_RAND_RESET_I(12);
    __Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__fp4 = VL_RAND_RESET_I(4);
    __Vtableidx1 = 0;
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[0],0x00000000);
    VL_CONST_W_2X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[1],0x0000006c,0x646d656d);
    VL_CONST_W_2X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[2],0x00000073,0x746d656d);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[3],0x00000000);
    VL_CONST_W_2X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[4],0x00000073,0x68696674);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[5],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[6],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[7],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[8],0x65786563);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[9],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[10],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[11],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[12],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[13],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[14],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[15],0x00000000);
    VL_CONST_W_2X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[16],0x00006c64,0x5f727332);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[17],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[18],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[19],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[20],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[21],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[22],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[23],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[24],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[25],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[26],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[27],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[28],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[29],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[30],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[31],0x00000000);
    VL_CONST_W_2X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[32],0x00006c64,0x5f727331);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[33],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[34],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[35],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[36],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[37],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[38],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[39],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[40],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[41],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[42],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[43],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[44],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[45],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[46],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[47],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[48],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[49],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[50],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[51],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[52],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[53],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[54],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[55],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[56],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[57],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[58],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[59],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[60],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[61],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[62],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[63],0x00000000);
    VL_CONST_W_2X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[64],0x00000066,0x65746368);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[65],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[66],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[67],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[68],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[69],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[70],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[71],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[72],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[73],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[74],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[75],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[76],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[77],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[78],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[79],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[80],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[81],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[82],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[83],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[84],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[85],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[86],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[87],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[88],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[89],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[90],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[91],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[92],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[93],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[94],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[95],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[96],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[97],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[98],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[99],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[100],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[101],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[102],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[103],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[104],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[105],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[106],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[107],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[108],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[109],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[110],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[111],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[112],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[113],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[114],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[115],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[116],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[117],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[118],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[119],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[120],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[121],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[122],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[123],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[124],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[125],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[126],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[127],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[128],0x74726170);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[129],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[130],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[131],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[132],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[133],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[134],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[135],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[136],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[137],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[138],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[139],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[140],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[141],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[142],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[143],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[144],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[145],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[146],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[147],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[148],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[149],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[150],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[151],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[152],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[153],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[154],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[155],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[156],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[157],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[158],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[159],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[160],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[161],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[162],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[163],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[164],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[165],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[166],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[167],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[168],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[169],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[170],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[171],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[172],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[173],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[174],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[175],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[176],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[177],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[178],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[179],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[180],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[181],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[182],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[183],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[184],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[185],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[186],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[187],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[188],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[189],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[190],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[191],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[192],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[193],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[194],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[195],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[196],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[197],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[198],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[199],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[200],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[201],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[202],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[203],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[204],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[205],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[206],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[207],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[208],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[209],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[210],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[211],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[212],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[213],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[214],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[215],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[216],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[217],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[218],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[219],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[220],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[221],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[222],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[223],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[224],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[225],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[226],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[227],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[228],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[229],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[230],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[231],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[232],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[233],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[234],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[235],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[236],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[237],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[238],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[239],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[240],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[241],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[242],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[243],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[244],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[245],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[246],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[247],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[248],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[249],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[250],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[251],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[252],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[253],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[254],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[255],0x00000000);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
