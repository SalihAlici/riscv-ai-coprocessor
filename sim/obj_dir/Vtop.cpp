// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.v", 4, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.v", 4, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__top__DOT__mem_ready;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__memory__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__memory__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__memory__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__v2;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__memory__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__v3;
    CData/*1:0*/ __Vdly__top__DOT__cpu__DOT__mem_state;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cpuregs__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cpuregs__v0;
    CData/*0:0*/ __Vdly__top__DOT__trap_signal;
    CData/*4:0*/ __Vdly__top__DOT__cpu__DOT__reg_sh;
    CData/*0:0*/ __Vdly__top__DOT__cpu__DOT__decoder_trigger;
    CData/*0:0*/ __Vdly__top__DOT__cpu__DOT__decoder_pseudo_trigger;
    CData/*0:0*/ __Vdly__top__DOT__cpu__DOT__mem_do_rinst;
    CData/*1:0*/ __Vdly__top__DOT__cpu__DOT__mem_wordsize;
    CData/*0:0*/ __Vdly__top__DOT__cpu__DOT__latched_is_lu;
    CData/*0:0*/ __Vdly__top__DOT__cpu__DOT__latched_is_lh;
    CData/*0:0*/ __Vdly__top__DOT__cpu__DOT__latched_is_lb;
    CData/*0:0*/ __Vdly__top__DOT__cpu__DOT__mem_do_prefetch;
    CData/*7:0*/ __Vdly__top__DOT__cpu__DOT__cpu_state;
    CData/*0:0*/ __Vdly__top__DOT__pcpi_valid;
    CData/*0:0*/ __Vdly__top__DOT__cpu__DOT__mem_do_rdata;
    CData/*0:0*/ __Vdly__top__DOT__cpu__DOT__mem_do_wdata;
    CData/*3:0*/ __Vdly__top__DOT__cpu__DOT__pcpi_timeout_counter;
    CData/*6:0*/ __Vdly__top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__memory__v0;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__memory__v1;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__memory__v2;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__memory__v3;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__cpuregs__v0;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__reg_out;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__reg_pc;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__reg_op1;
    QData/*63:0*/ __Vdly__top__DOT__cpu__DOT__count_cycle;
    QData/*63:0*/ __Vdly__top__DOT__cpu__DOT__count_instr;
    // Body
    __Vdly__top__DOT__cpu__DOT__mem_state = vlTOPp->top__DOT__cpu__DOT__mem_state;
    __Vdly__top__DOT__mem_ready = vlTOPp->top__DOT__mem_ready;
    __Vdlyvset__top__DOT__memory__v0 = 0U;
    __Vdlyvset__top__DOT__memory__v1 = 0U;
    __Vdlyvset__top__DOT__memory__v2 = 0U;
    __Vdlyvset__top__DOT__memory__v3 = 0U;
    __Vdly__top__DOT__cpu__DOT__pcpi_timeout_counter 
        = vlTOPp->top__DOT__cpu__DOT__pcpi_timeout_counter;
    __Vdly__top__DOT__pcpi_valid = vlTOPp->top__DOT__pcpi_valid;
    __Vdly__top__DOT__cpu__DOT__count_instr = vlTOPp->top__DOT__cpu__DOT__count_instr;
    __Vdly__top__DOT__cpu__DOT__latched_is_lb = vlTOPp->top__DOT__cpu__DOT__latched_is_lb;
    __Vdly__top__DOT__cpu__DOT__latched_is_lh = vlTOPp->top__DOT__cpu__DOT__latched_is_lh;
    __Vdly__top__DOT__cpu__DOT__latched_is_lu = vlTOPp->top__DOT__cpu__DOT__latched_is_lu;
    __Vdly__top__DOT__cpu__DOT__decoder_pseudo_trigger 
        = vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger;
    __Vdly__top__DOT__cpu__DOT__count_cycle = vlTOPp->top__DOT__cpu__DOT__count_cycle;
    __Vdly__top__DOT__cpu__DOT__reg_sh = vlTOPp->top__DOT__cpu__DOT__reg_sh;
    __Vdly__top__DOT__trap_signal = vlTOPp->top__DOT__trap_signal;
    __Vdly__top__DOT__cpu__DOT__decoder_trigger = vlTOPp->top__DOT__cpu__DOT__decoder_trigger;
    __Vdly__top__DOT__cpu__DOT__mem_do_prefetch = vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch;
    __Vdly__top__DOT__cpu__DOT__reg_pc = vlTOPp->top__DOT__cpu__DOT__reg_pc;
    __Vdly__top__DOT__cpu__DOT__mem_do_wdata = vlTOPp->top__DOT__cpu__DOT__mem_do_wdata;
    __Vdly__top__DOT__cpu__DOT__mem_wordsize = vlTOPp->top__DOT__cpu__DOT__mem_wordsize;
    __Vdly__top__DOT__cpu__DOT__mem_do_rdata = vlTOPp->top__DOT__cpu__DOT__mem_do_rdata;
    __Vdly__top__DOT__cpu__DOT__mem_do_rinst = vlTOPp->top__DOT__cpu__DOT__mem_do_rinst;
    __Vdly__top__DOT__cpu__DOT__reg_out = vlTOPp->top__DOT__cpu__DOT__reg_out;
    __Vdly__top__DOT__cpu__DOT__cpu_state = vlTOPp->top__DOT__cpu__DOT__cpu_state;
    __Vdlyvset__top__DOT__cpu__DOT__cpuregs__v0 = 0U;
    __Vdly__top__DOT__cpu__DOT__reg_op1 = vlTOPp->top__DOT__cpu__DOT__reg_op1;
    __Vdly__top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter 
        = vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter;
    if (VL_UNLIKELY(vlTOPp->top__DOT__trap_signal)) {
        VL_WRITEF("!!! CRITICAL ERROR: CPU TRAP (HALTED) !!!\n");
        VL_WRITEF("Last Address: %x\n",32,vlTOPp->top__DOT__mem_addr);
        VL_FINISH_MT("top.v", 67, "");
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done))) {
        vlTOPp->top__DOT__cpu__DOT__decoded_rs1 = (0x1fU 
                                                   & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
                                                      >> 0xfU));
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__cpu__DOT__instr_setq = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__cpu__DOT__instr_getq = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__cpu__DOT__instr_maskirq = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__cpu__DOT__instr_timer = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done))) {
        vlTOPp->top__DOT__cpu__DOT__instr_waitirq = 0U;
    }
    vlTOPp->top__DOT__pcpi_wr = 0U;
    if ((((IData)(vlTOPp->resetn) & (IData)(vlTOPp->top__DOT__pcpi_valid)) 
         & (0xbU == (0x7fU & vlTOPp->top__DOT__pcpi_insn)))) {
        vlTOPp->top__DOT__pcpi_wr = 1U;
    }
    vlTOPp->top__DOT__pcpi_ready = 0U;
    if ((((IData)(vlTOPp->resetn) & (IData)(vlTOPp->top__DOT__pcpi_valid)) 
         & (0xbU == (0x7fU & vlTOPp->top__DOT__pcpi_insn)))) {
        vlTOPp->top__DOT__pcpi_ready = 1U;
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__cpu__DOT__instr_fence = (
                                                   (0xfU 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->top__DOT__cpu__DOT__mem_rdata_q)) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (7U 
                                                                  & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                                     >> 0xcU))))));
    }
    if ((1U & (~ (IData)(vlTOPp->resetn)))) {
        vlTOPp->top__DOT__cpu__DOT__instr_fence = 0U;
    }
    if ((((IData)(vlTOPp->resetn) & (IData)(vlTOPp->top__DOT__pcpi_valid)) 
         & (0xbU == (0x7fU & vlTOPp->top__DOT__pcpi_insn)))) {
        vlTOPp->top__DOT__pcpi_rd = (((((((VL_EXTENDS_II(32,24, 
                                                         vlTOPp->top__DOT__my_accel__DOT__prod
                                                         [0U]) 
                                           + VL_EXTENDS_II(32,24, 
                                                           vlTOPp->top__DOT__my_accel__DOT__prod
                                                           [1U])) 
                                          + VL_EXTENDS_II(32,24, 
                                                          vlTOPp->top__DOT__my_accel__DOT__prod
                                                          [2U])) 
                                         + VL_EXTENDS_II(32,24, 
                                                         vlTOPp->top__DOT__my_accel__DOT__prod
                                                         [3U])) 
                                        + VL_EXTENDS_II(32,24, 
                                                        vlTOPp->top__DOT__my_accel__DOT__prod
                                                        [4U])) 
                                       + VL_EXTENDS_II(32,24, 
                                                       vlTOPp->top__DOT__my_accel__DOT__prod
                                                       [5U])) 
                                      + VL_EXTENDS_II(32,24, 
                                                      vlTOPp->top__DOT__my_accel__DOT__prod
                                                      [6U])) 
                                     + VL_EXTENDS_II(32,24, 
                                                     vlTOPp->top__DOT__my_accel__DOT__prod
                                                     [7U]));
    }
    if ((((IData)(vlTOPp->resetn) & (IData)(vlTOPp->top__DOT__cpu__DOT__cpuregs_write)) 
         & (0U != (IData)(vlTOPp->top__DOT__cpu__DOT__latched_rd)))) {
        __Vdlyvval__top__DOT__cpu__DOT__cpuregs__v0 
            = vlTOPp->top__DOT__cpu__DOT__cpuregs_wrdata;
        __Vdlyvset__top__DOT__cpu__DOT__cpuregs__v0 = 1U;
        __Vdlyvdim0__top__DOT__cpu__DOT__cpuregs__v0 
            = vlTOPp->top__DOT__cpu__DOT__latched_rd;
    }
    vlTOPp->top__DOT__cpu__DOT__pcpi_mul_wr = 0U;
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_finish) 
         & (IData)(vlTOPp->resetn))) {
        vlTOPp->top__DOT__cpu__DOT__pcpi_mul_wr = 1U;
    }
    vlTOPp->top__DOT__cpu__DOT__pcpi_mul_ready = 0U;
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_finish) 
         & (IData)(vlTOPp->resetn))) {
        vlTOPp->top__DOT__cpu__DOT__pcpi_mul_ready = 1U;
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_finish) 
         & (IData)(vlTOPp->resetn))) {
        vlTOPp->top__DOT__cpu__DOT__pcpi_mul_rd = (IData)(
                                                          ((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_any_mulh)
                                                            ? 
                                                           (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rd 
                                                            >> 0x20U)
                                                            : vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rd));
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cpuregs__v0) {
        vlTOPp->top__DOT__cpu__DOT__cpuregs[__Vdlyvdim0__top__DOT__cpu__DOT__cpuregs__v0] 
            = __Vdlyvval__top__DOT__cpu__DOT__cpuregs__v0;
    }
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_finish = 0U;
    if (vlTOPp->resetn) {
        if (vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_waiting) {
            vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs1 
                = (((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh) 
                    | (IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu))
                    ? VL_EXTENDS_QI(64,32, vlTOPp->top__DOT__cpu__DOT__reg_op1)
                    : (QData)((IData)(vlTOPp->top__DOT__cpu__DOT__reg_op1)));
            vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs2 
                = ((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh)
                    ? VL_EXTENDS_QI(64,32, vlTOPp->top__DOT__cpu__DOT__reg_op2)
                    : (QData)((IData)(vlTOPp->top__DOT__cpu__DOT__reg_op2)));
            vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rd = 0ULL;
            vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rdx = 0ULL;
            __Vdly__top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter 
                = ((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_any_mulh)
                    ? 0x3eU : 0x1eU);
            vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_waiting 
                = (1U & (~ ((IData)(vlTOPp->top__DOT__cpu__DOT__pcpi_mul_wait) 
                            & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__pcpi_wait_q)))));
        } else {
            __Vdly__top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter 
                = (0x7fU & ((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter) 
                            - (IData)(1U)));
            vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rd 
                = vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd;
            vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rdx 
                = vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx;
            vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs1 
                = vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1;
            vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs2 
                = vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2;
            if ((0x40U & (IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter))) {
                vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_finish = 1U;
                vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_waiting = 1U;
            }
        }
    } else {
        vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_waiting = 1U;
    }
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter 
        = __Vdly__top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter;
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
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__pcpi_wait_q 
        = vlTOPp->top__DOT__cpu__DOT__pcpi_mul_wait;
    __Vdly__top__DOT__trap_signal = 0U;
    __Vdly__top__DOT__cpu__DOT__reg_sh = 0U;
    __Vdly__top__DOT__cpu__DOT__reg_out = 0U;
    vlTOPp->top__DOT__cpu__DOT__set_mem_do_rinst = 0U;
    vlTOPp->top__DOT__cpu__DOT__set_mem_do_rdata = 0U;
    vlTOPp->top__DOT__cpu__DOT__set_mem_do_wdata = 0U;
    __Vdly__top__DOT__cpu__DOT__count_cycle = ((IData)(vlTOPp->resetn)
                                                ? (1ULL 
                                                   + vlTOPp->top__DOT__cpu__DOT__count_cycle)
                                                : 0ULL);
    __Vdly__top__DOT__cpu__DOT__decoder_trigger = ((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
                                                   & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done));
    __Vdly__top__DOT__cpu__DOT__decoder_pseudo_trigger = 0U;
    if (vlTOPp->resetn) {
        if (((((((((0x80U == (IData)(vlTOPp->top__DOT__cpu__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlTOPp->top__DOT__cpu__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlTOPp->top__DOT__cpu__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlTOPp->top__DOT__cpu__DOT__cpu_state))) 
                | (8U == (IData)(vlTOPp->top__DOT__cpu__DOT__cpu_state))) 
               | (4U == (IData)(vlTOPp->top__DOT__cpu__DOT__cpu_state))) 
              | (2U == (IData)(vlTOPp->top__DOT__cpu__DOT__cpu_state))) 
             | (1U == (IData)(vlTOPp->top__DOT__cpu__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlTOPp->top__DOT__cpu__DOT__cpu_state))) {
                __Vdly__top__DOT__trap_signal = 1U;
            } else {
                if ((0x40U == (IData)(vlTOPp->top__DOT__cpu__DOT__cpu_state))) {
                    __Vdly__top__DOT__cpu__DOT__mem_do_rinst 
                        = (1U & ((~ (IData)(vlTOPp->top__DOT__cpu__DOT__decoder_trigger)) 
                                 & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__do_waitirq))));
                    __Vdly__top__DOT__cpu__DOT__mem_wordsize = 0U;
                    __Vdly__top__DOT__cpu__DOT__latched_is_lu = 0U;
                    __Vdly__top__DOT__cpu__DOT__latched_is_lh = 0U;
                    __Vdly__top__DOT__cpu__DOT__latched_is_lb = 0U;
                    vlTOPp->top__DOT__cpu__DOT__latched_rd 
                        = vlTOPp->top__DOT__cpu__DOT__decoded_rd;
                    vlTOPp->top__DOT__cpu__DOT__latched_compr 
                        = vlTOPp->top__DOT__cpu__DOT__compressed_instr;
                    vlTOPp->top__DOT__cpu__DOT__current_pc 
                        = vlTOPp->top__DOT__cpu__DOT__reg_next_pc;
                    if (vlTOPp->top__DOT__cpu__DOT__latched_branch) {
                        vlTOPp->top__DOT__cpu__DOT__current_pc 
                            = ((IData)(vlTOPp->top__DOT__cpu__DOT__latched_store)
                                ? (0xfffffffeU & ((IData)(vlTOPp->top__DOT__cpu__DOT__latched_stalu)
                                                   ? vlTOPp->top__DOT__cpu__DOT__alu_out_q
                                                   : vlTOPp->top__DOT__cpu__DOT__reg_out))
                                : vlTOPp->top__DOT__cpu__DOT__reg_next_pc);
                    }
                    __Vdly__top__DOT__cpu__DOT__reg_pc 
                        = vlTOPp->top__DOT__cpu__DOT__current_pc;
                    vlTOPp->top__DOT__cpu__DOT__reg_next_pc 
                        = vlTOPp->top__DOT__cpu__DOT__current_pc;
                    vlTOPp->top__DOT__cpu__DOT__latched_store = 0U;
                    vlTOPp->top__DOT__cpu__DOT__latched_stalu = 0U;
                    vlTOPp->top__DOT__cpu__DOT__latched_branch = 0U;
                    if (vlTOPp->top__DOT__cpu__DOT__decoder_trigger) {
                        __Vdly__top__DOT__cpu__DOT__count_instr 
                            = (1ULL + vlTOPp->top__DOT__cpu__DOT__count_instr);
                        vlTOPp->top__DOT__cpu__DOT__reg_next_pc 
                            = (vlTOPp->top__DOT__cpu__DOT__current_pc 
                               + ((IData)(vlTOPp->top__DOT__cpu__DOT__compressed_instr)
                                   ? 2U : 4U));
                        if (vlTOPp->top__DOT__cpu__DOT__instr_jal) {
                            __Vdly__top__DOT__cpu__DOT__mem_do_rinst = 1U;
                            vlTOPp->top__DOT__cpu__DOT__reg_next_pc 
                                = (vlTOPp->top__DOT__cpu__DOT__current_pc 
                                   + vlTOPp->top__DOT__cpu__DOT__decoded_imm_j);
                            vlTOPp->top__DOT__cpu__DOT__latched_branch = 1U;
                        } else {
                            __Vdly__top__DOT__cpu__DOT__mem_do_rinst = 0U;
                            __Vdly__top__DOT__cpu__DOT__mem_do_prefetch 
                                = (1U & ((~ (IData)(vlTOPp->top__DOT__cpu__DOT__instr_jalr)) 
                                         & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__compressed_instr))));
                            __Vdly__top__DOT__cpu__DOT__cpu_state = 0x20U;
                        }
                    }
                } else {
                    if ((0x20U == (IData)(vlTOPp->top__DOT__cpu__DOT__cpu_state))) {
                        __Vdly__top__DOT__cpu__DOT__reg_op1 = 0U;
                        vlTOPp->top__DOT__cpu__DOT__reg_op2 = 0U;
                        if ((((IData)(vlTOPp->top__DOT__cpu__DOT__instr_trap) 
                              | (IData)(vlTOPp->top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                             | (IData)(vlTOPp->top__DOT__cpu__DOT__is_lui_auipc_jal))) {
                            if (vlTOPp->top__DOT__cpu__DOT__instr_trap) {
                                __Vdly__top__DOT__cpu__DOT__reg_op1 
                                    = vlTOPp->top__DOT__cpu__DOT__cpuregs_rs1;
                                __Vdly__top__DOT__pcpi_valid = 1U;
                                __Vdly__top__DOT__cpu__DOT__reg_sh 
                                    = (0x1fU & vlTOPp->top__DOT__cpu__DOT__cpuregs_rs2);
                                vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                    = vlTOPp->top__DOT__cpu__DOT__cpuregs_rs2;
                                if (vlTOPp->top__DOT__cpu__DOT__pcpi_int_ready) {
                                    __Vdly__top__DOT__cpu__DOT__mem_do_rinst = 1U;
                                    __Vdly__top__DOT__pcpi_valid = 0U;
                                    __Vdly__top__DOT__cpu__DOT__reg_out 
                                        = vlTOPp->top__DOT__cpu__DOT__pcpi_int_rd;
                                    vlTOPp->top__DOT__cpu__DOT__latched_store 
                                        = vlTOPp->top__DOT__cpu__DOT__pcpi_int_wr;
                                    __Vdly__top__DOT__cpu__DOT__cpu_state = 0x40U;
                                } else {
                                    if (((IData)(vlTOPp->top__DOT__cpu__DOT__pcpi_timeout) 
                                         | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_ecall_ebreak))) {
                                        __Vdly__top__DOT__pcpi_valid = 0U;
                                        __Vdly__top__DOT__cpu__DOT__cpu_state = 0x80U;
                                    }
                                }
                            } else {
                                if (vlTOPp->top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                                    if (vlTOPp->top__DOT__cpu__DOT__instr_rdcycle) {
                                        __Vdly__top__DOT__cpu__DOT__reg_out 
                                            = (IData)(vlTOPp->top__DOT__cpu__DOT__count_cycle);
                                    } else {
                                        if (vlTOPp->top__DOT__cpu__DOT__instr_rdcycleh) {
                                            __Vdly__top__DOT__cpu__DOT__reg_out 
                                                = (IData)(
                                                          (vlTOPp->top__DOT__cpu__DOT__count_cycle 
                                                           >> 0x20U));
                                        } else {
                                            if (vlTOPp->top__DOT__cpu__DOT__instr_rdinstr) {
                                                __Vdly__top__DOT__cpu__DOT__reg_out 
                                                    = (IData)(vlTOPp->top__DOT__cpu__DOT__count_instr);
                                            } else {
                                                if (vlTOPp->top__DOT__cpu__DOT__instr_rdinstrh) {
                                                    __Vdly__top__DOT__cpu__DOT__reg_out 
                                                        = (IData)(
                                                                  (vlTOPp->top__DOT__cpu__DOT__count_instr 
                                                                   >> 0x20U));
                                                }
                                            }
                                        }
                                    }
                                    vlTOPp->top__DOT__cpu__DOT__latched_store = 1U;
                                    __Vdly__top__DOT__cpu__DOT__cpu_state = 0x40U;
                                } else {
                                    if (vlTOPp->top__DOT__cpu__DOT__is_lui_auipc_jal) {
                                        __Vdly__top__DOT__cpu__DOT__reg_op1 
                                            = ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_lui)
                                                ? 0U
                                                : vlTOPp->top__DOT__cpu__DOT__reg_pc);
                                        vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                            = vlTOPp->top__DOT__cpu__DOT__decoded_imm;
                                        __Vdly__top__DOT__cpu__DOT__mem_do_rinst 
                                            = vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch;
                                        __Vdly__top__DOT__cpu__DOT__cpu_state = 8U;
                                    } else {
                                        vlTOPp->top__DOT__cpu__DOT__latched_store = 1U;
                                        __Vdly__top__DOT__cpu__DOT__reg_out 
                                            = vlTOPp->top__DOT__cpu__DOT__timer;
                                        __Vdly__top__DOT__cpu__DOT__cpu_state = 0x40U;
                                        vlTOPp->top__DOT__cpu__DOT__timer 
                                            = vlTOPp->top__DOT__cpu__DOT__cpuregs_rs1;
                                    }
                                }
                            }
                        } else {
                            if (((IData)(vlTOPp->top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
                                 & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__instr_trap)))) {
                                __Vdly__top__DOT__cpu__DOT__reg_op1 
                                    = vlTOPp->top__DOT__cpu__DOT__cpuregs_rs1;
                                __Vdly__top__DOT__cpu__DOT__cpu_state = 1U;
                                __Vdly__top__DOT__cpu__DOT__mem_do_rinst = 1U;
                            } else {
                                if (vlTOPp->top__DOT__cpu__DOT__is_slli_srli_srai) {
                                    __Vdly__top__DOT__cpu__DOT__reg_op1 
                                        = vlTOPp->top__DOT__cpu__DOT__cpuregs_rs1;
                                    __Vdly__top__DOT__cpu__DOT__reg_sh 
                                        = vlTOPp->top__DOT__cpu__DOT__decoded_rs2;
                                    __Vdly__top__DOT__cpu__DOT__cpu_state = 4U;
                                } else {
                                    if (vlTOPp->top__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                                        __Vdly__top__DOT__cpu__DOT__reg_op1 
                                            = vlTOPp->top__DOT__cpu__DOT__cpuregs_rs1;
                                        vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                            = vlTOPp->top__DOT__cpu__DOT__decoded_imm;
                                        __Vdly__top__DOT__cpu__DOT__mem_do_rinst 
                                            = vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch;
                                        __Vdly__top__DOT__cpu__DOT__cpu_state = 8U;
                                    } else {
                                        __Vdly__top__DOT__cpu__DOT__reg_op1 
                                            = vlTOPp->top__DOT__cpu__DOT__cpuregs_rs1;
                                        __Vdly__top__DOT__cpu__DOT__reg_sh 
                                            = (0x1fU 
                                               & vlTOPp->top__DOT__cpu__DOT__cpuregs_rs2);
                                        vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                            = vlTOPp->top__DOT__cpu__DOT__cpuregs_rs2;
                                        if (vlTOPp->top__DOT__cpu__DOT__is_sb_sh_sw) {
                                            __Vdly__top__DOT__cpu__DOT__cpu_state = 2U;
                                            __Vdly__top__DOT__cpu__DOT__mem_do_rinst = 1U;
                                        } else {
                                            if (vlTOPp->top__DOT__cpu__DOT__is_sll_srl_sra) {
                                                __Vdly__top__DOT__cpu__DOT__cpu_state = 4U;
                                            } else {
                                                __Vdly__top__DOT__cpu__DOT__mem_do_rinst 
                                                    = vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch;
                                                __Vdly__top__DOT__cpu__DOT__cpu_state = 8U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x10U == (IData)(vlTOPp->top__DOT__cpu__DOT__cpu_state))) {
                            __Vdly__top__DOT__cpu__DOT__reg_sh 
                                = (0x1fU & vlTOPp->top__DOT__cpu__DOT__cpuregs_rs2);
                            vlTOPp->top__DOT__cpu__DOT__reg_op2 
                                = vlTOPp->top__DOT__cpu__DOT__cpuregs_rs2;
                            if (vlTOPp->top__DOT__cpu__DOT__instr_trap) {
                                __Vdly__top__DOT__pcpi_valid = 1U;
                                if (vlTOPp->top__DOT__cpu__DOT__pcpi_int_ready) {
                                    __Vdly__top__DOT__cpu__DOT__mem_do_rinst = 1U;
                                    __Vdly__top__DOT__pcpi_valid = 0U;
                                    __Vdly__top__DOT__cpu__DOT__reg_out 
                                        = vlTOPp->top__DOT__cpu__DOT__pcpi_int_rd;
                                    vlTOPp->top__DOT__cpu__DOT__latched_store 
                                        = vlTOPp->top__DOT__cpu__DOT__pcpi_int_wr;
                                    __Vdly__top__DOT__cpu__DOT__cpu_state = 0x40U;
                                } else {
                                    if (((IData)(vlTOPp->top__DOT__cpu__DOT__pcpi_timeout) 
                                         | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_ecall_ebreak))) {
                                        __Vdly__top__DOT__pcpi_valid = 0U;
                                        __Vdly__top__DOT__cpu__DOT__cpu_state = 0x80U;
                                    }
                                }
                            } else {
                                if (vlTOPp->top__DOT__cpu__DOT__is_sb_sh_sw) {
                                    __Vdly__top__DOT__cpu__DOT__cpu_state = 2U;
                                    __Vdly__top__DOT__cpu__DOT__mem_do_rinst = 1U;
                                } else {
                                    if (vlTOPp->top__DOT__cpu__DOT__is_sll_srl_sra) {
                                        __Vdly__top__DOT__cpu__DOT__cpu_state = 4U;
                                    } else {
                                        __Vdly__top__DOT__cpu__DOT__mem_do_rinst 
                                            = vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch;
                                        __Vdly__top__DOT__cpu__DOT__cpu_state = 8U;
                                    }
                                }
                            }
                        } else {
                            if ((8U == (IData)(vlTOPp->top__DOT__cpu__DOT__cpu_state))) {
                                __Vdly__top__DOT__cpu__DOT__reg_out 
                                    = (vlTOPp->top__DOT__cpu__DOT__reg_pc 
                                       + vlTOPp->top__DOT__cpu__DOT__decoded_imm);
                                if (vlTOPp->top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                                    vlTOPp->top__DOT__cpu__DOT__latched_rd = 0U;
                                    vlTOPp->top__DOT__cpu__DOT__latched_store 
                                        = vlTOPp->top__DOT__cpu__DOT__alu_out_0;
                                    vlTOPp->top__DOT__cpu__DOT__latched_branch 
                                        = vlTOPp->top__DOT__cpu__DOT__alu_out_0;
                                    if (vlTOPp->top__DOT__cpu__DOT__mem_done) {
                                        __Vdly__top__DOT__cpu__DOT__cpu_state = 0x40U;
                                    }
                                    if (vlTOPp->top__DOT__cpu__DOT__alu_out_0) {
                                        vlTOPp->top__DOT__cpu__DOT__set_mem_do_rinst = 1U;
                                        __Vdly__top__DOT__cpu__DOT__decoder_trigger = 0U;
                                    }
                                } else {
                                    vlTOPp->top__DOT__cpu__DOT__latched_branch 
                                        = vlTOPp->top__DOT__cpu__DOT__instr_jalr;
                                    vlTOPp->top__DOT__cpu__DOT__latched_store = 1U;
                                    vlTOPp->top__DOT__cpu__DOT__latched_stalu = 1U;
                                    __Vdly__top__DOT__cpu__DOT__cpu_state = 0x40U;
                                }
                            } else {
                                if ((4U == (IData)(vlTOPp->top__DOT__cpu__DOT__cpu_state))) {
                                    vlTOPp->top__DOT__cpu__DOT__latched_store = 1U;
                                    if ((0U == (IData)(vlTOPp->top__DOT__cpu__DOT__reg_sh))) {
                                        __Vdly__top__DOT__cpu__DOT__reg_out 
                                            = vlTOPp->top__DOT__cpu__DOT__reg_op1;
                                        __Vdly__top__DOT__cpu__DOT__mem_do_rinst 
                                            = vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch;
                                        __Vdly__top__DOT__cpu__DOT__cpu_state = 0x40U;
                                    } else {
                                        if ((4U <= (IData)(vlTOPp->top__DOT__cpu__DOT__reg_sh))) {
                                            if (((IData)(vlTOPp->top__DOT__cpu__DOT__instr_slli) 
                                                 | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_sll))) {
                                                __Vdly__top__DOT__cpu__DOT__reg_op1 
                                                    = 
                                                    (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                     << 4U);
                                            } else {
                                                if (
                                                    ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_srli) 
                                                     | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_srl))) {
                                                    __Vdly__top__DOT__cpu__DOT__reg_op1 
                                                        = 
                                                        (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                         >> 4U);
                                                } else {
                                                    if (
                                                        ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_srai) 
                                                         | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_sra))) {
                                                        __Vdly__top__DOT__cpu__DOT__reg_op1 
                                                            = 
                                                            VL_SHIFTRS_III(32,32,32, vlTOPp->top__DOT__cpu__DOT__reg_op1, 4U);
                                                    }
                                                }
                                            }
                                            __Vdly__top__DOT__cpu__DOT__reg_sh 
                                                = (0x1fU 
                                                   & ((IData)(vlTOPp->top__DOT__cpu__DOT__reg_sh) 
                                                      - (IData)(4U)));
                                        } else {
                                            if (((IData)(vlTOPp->top__DOT__cpu__DOT__instr_slli) 
                                                 | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_sll))) {
                                                __Vdly__top__DOT__cpu__DOT__reg_op1 
                                                    = 
                                                    (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                     << 1U);
                                            } else {
                                                if (
                                                    ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_srli) 
                                                     | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_srl))) {
                                                    __Vdly__top__DOT__cpu__DOT__reg_op1 
                                                        = 
                                                        (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                         >> 1U);
                                                } else {
                                                    if (
                                                        ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_srai) 
                                                         | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_sra))) {
                                                        __Vdly__top__DOT__cpu__DOT__reg_op1 
                                                            = 
                                                            VL_SHIFTRS_III(32,32,32, vlTOPp->top__DOT__cpu__DOT__reg_op1, 1U);
                                                    }
                                                }
                                            }
                                            __Vdly__top__DOT__cpu__DOT__reg_sh 
                                                = (0x1fU 
                                                   & ((IData)(vlTOPp->top__DOT__cpu__DOT__reg_sh) 
                                                      - (IData)(1U)));
                                        }
                                    }
                                } else {
                                    if ((2U == (IData)(vlTOPp->top__DOT__cpu__DOT__cpu_state))) {
                                        if ((1U & (
                                                   (~ (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch)) 
                                                   | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_wdata)))) {
                                                __Vdly__top__DOT__cpu__DOT__reg_op1 
                                                    = 
                                                    (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                     + vlTOPp->top__DOT__cpu__DOT__decoded_imm);
                                                vlTOPp->top__DOT__cpu__DOT__set_mem_do_wdata = 1U;
                                                if (vlTOPp->top__DOT__cpu__DOT__instr_sb) {
                                                    __Vdly__top__DOT__cpu__DOT__mem_wordsize = 2U;
                                                } else {
                                                    if (vlTOPp->top__DOT__cpu__DOT__instr_sh) {
                                                        __Vdly__top__DOT__cpu__DOT__mem_wordsize = 1U;
                                                    } else {
                                                        if (vlTOPp->top__DOT__cpu__DOT__instr_sw) {
                                                            __Vdly__top__DOT__cpu__DOT__mem_wordsize = 0U;
                                                        }
                                                    }
                                                }
                                            }
                                            if (((~ (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch)) 
                                                 & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done))) {
                                                __Vdly__top__DOT__cpu__DOT__cpu_state = 0x40U;
                                                __Vdly__top__DOT__cpu__DOT__decoder_trigger = 1U;
                                                __Vdly__top__DOT__cpu__DOT__decoder_pseudo_trigger = 1U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__cpu__DOT__latched_store = 1U;
                                        if ((1U & (
                                                   (~ (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch)) 
                                                   | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done)))) {
                                            if (((~ (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch)) 
                                                 & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done))) {
                                                if (vlTOPp->top__DOT__cpu__DOT__latched_is_lu) {
                                                    __Vdly__top__DOT__cpu__DOT__reg_out 
                                                        = vlTOPp->top__DOT__cpu__DOT__mem_rdata_word;
                                                } else {
                                                    if (vlTOPp->top__DOT__cpu__DOT__latched_is_lh) {
                                                        __Vdly__top__DOT__cpu__DOT__reg_out 
                                                            = 
                                                            VL_EXTENDS_II(32,16, 
                                                                          (0xffffU 
                                                                           & vlTOPp->top__DOT__cpu__DOT__mem_rdata_word));
                                                    } else {
                                                        if (vlTOPp->top__DOT__cpu__DOT__latched_is_lb) {
                                                            __Vdly__top__DOT__cpu__DOT__reg_out 
                                                                = 
                                                                VL_EXTENDS_II(32,8, 
                                                                              (0xffU 
                                                                               & vlTOPp->top__DOT__cpu__DOT__mem_rdata_word));
                                                        }
                                                    }
                                                }
                                                __Vdly__top__DOT__cpu__DOT__decoder_trigger = 1U;
                                                __Vdly__top__DOT__cpu__DOT__decoder_pseudo_trigger = 1U;
                                                __Vdly__top__DOT__cpu__DOT__cpu_state = 0x40U;
                                            }
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rdata)))) {
                                                __Vdly__top__DOT__cpu__DOT__reg_op1 
                                                    = 
                                                    (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                     + vlTOPp->top__DOT__cpu__DOT__decoded_imm);
                                                vlTOPp->top__DOT__cpu__DOT__set_mem_do_rdata = 1U;
                                                if (
                                                    ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_lb) 
                                                     | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_lbu))) {
                                                    __Vdly__top__DOT__cpu__DOT__mem_wordsize = 2U;
                                                } else {
                                                    if (
                                                        ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_lh) 
                                                         | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_lhu))) {
                                                        __Vdly__top__DOT__cpu__DOT__mem_wordsize = 1U;
                                                    } else {
                                                        if (vlTOPp->top__DOT__cpu__DOT__instr_lw) {
                                                            __Vdly__top__DOT__cpu__DOT__mem_wordsize = 0U;
                                                        }
                                                    }
                                                }
                                                __Vdly__top__DOT__cpu__DOT__latched_is_lu 
                                                    = vlTOPp->top__DOT__cpu__DOT__is_lbu_lhu_lw;
                                                __Vdly__top__DOT__cpu__DOT__latched_is_lh 
                                                    = vlTOPp->top__DOT__cpu__DOT__instr_lh;
                                                __Vdly__top__DOT__cpu__DOT__latched_is_lb 
                                                    = vlTOPp->top__DOT__cpu__DOT__instr_lb;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        __Vdly__top__DOT__cpu__DOT__count_instr = 0ULL;
        vlTOPp->top__DOT__cpu__DOT__timer = 0U;
        __Vdly__top__DOT__cpu__DOT__reg_pc = 0U;
        vlTOPp->top__DOT__cpu__DOT__reg_next_pc = 0U;
        vlTOPp->top__DOT__cpu__DOT__latched_store = 0U;
        vlTOPp->top__DOT__cpu__DOT__latched_stalu = 0U;
        vlTOPp->top__DOT__cpu__DOT__latched_branch = 0U;
        __Vdly__top__DOT__cpu__DOT__latched_is_lu = 0U;
        __Vdly__top__DOT__cpu__DOT__latched_is_lh = 0U;
        __Vdly__top__DOT__cpu__DOT__latched_is_lb = 0U;
        __Vdly__top__DOT__pcpi_valid = 0U;
        __Vdly__top__DOT__cpu__DOT__cpu_state = 0x40U;
    }
    if (((IData)(vlTOPp->resetn) & ((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rdata) 
                                    | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlTOPp->top__DOT__cpu__DOT__mem_wordsize)) 
             & (0U != (3U & vlTOPp->top__DOT__cpu__DOT__reg_op1)))) {
            __Vdly__top__DOT__cpu__DOT__cpu_state = 0x80U;
        }
        if (((1U == (IData)(vlTOPp->top__DOT__cpu__DOT__mem_wordsize)) 
             & vlTOPp->top__DOT__cpu__DOT__reg_op1)) {
            __Vdly__top__DOT__cpu__DOT__cpu_state = 0x80U;
        }
    }
    if ((((IData)(vlTOPp->resetn) & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst)) 
         & (0U != (3U & vlTOPp->top__DOT__cpu__DOT__reg_pc)))) {
        __Vdly__top__DOT__cpu__DOT__cpu_state = 0x80U;
    }
    if ((1U & ((~ (IData)(vlTOPp->resetn)) | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done)))) {
        __Vdly__top__DOT__cpu__DOT__mem_do_prefetch = 0U;
        __Vdly__top__DOT__cpu__DOT__mem_do_rinst = 0U;
        __Vdly__top__DOT__cpu__DOT__mem_do_rdata = 0U;
        __Vdly__top__DOT__cpu__DOT__mem_do_wdata = 0U;
    }
    if (vlTOPp->top__DOT__cpu__DOT__set_mem_do_rinst) {
        __Vdly__top__DOT__cpu__DOT__mem_do_rinst = 1U;
    }
    if (vlTOPp->top__DOT__cpu__DOT__set_mem_do_rdata) {
        __Vdly__top__DOT__cpu__DOT__mem_do_rdata = 1U;
    }
    if (vlTOPp->top__DOT__cpu__DOT__set_mem_do_wdata) {
        __Vdly__top__DOT__cpu__DOT__mem_do_wdata = 1U;
    }
    vlTOPp->top__DOT__cpu__DOT__current_pc = 0U;
    vlTOPp->top__DOT__cpu__DOT__reg_sh = __Vdly__top__DOT__cpu__DOT__reg_sh;
    vlTOPp->top__DOT__cpu__DOT__count_cycle = __Vdly__top__DOT__cpu__DOT__count_cycle;
    vlTOPp->top__DOT__cpu__DOT__latched_is_lu = __Vdly__top__DOT__cpu__DOT__latched_is_lu;
    vlTOPp->top__DOT__cpu__DOT__latched_is_lh = __Vdly__top__DOT__cpu__DOT__latched_is_lh;
    vlTOPp->top__DOT__cpu__DOT__latched_is_lb = __Vdly__top__DOT__cpu__DOT__latched_is_lb;
    vlTOPp->top__DOT__cpu__DOT__count_instr = __Vdly__top__DOT__cpu__DOT__count_instr;
    vlTOPp->top__DOT__cpu__DOT__cpuregs_rs1 = ((0U 
                                                != (IData)(vlTOPp->top__DOT__cpu__DOT__decoded_rs1))
                                                ? vlTOPp->top__DOT__cpu__DOT__cpuregs
                                               [vlTOPp->top__DOT__cpu__DOT__decoded_rs1]
                                                : 0U);
    vlTOPp->top__DOT__cpu__DOT__pcpi_int_ready = ((IData)(vlTOPp->top__DOT__pcpi_ready) 
                                                  | (IData)(vlTOPp->top__DOT__cpu__DOT__pcpi_mul_ready));
    vlTOPp->top__DOT__cpu__DOT__pcpi_int_rd = 0U;
    if (vlTOPp->top__DOT__pcpi_ready) {
        vlTOPp->top__DOT__cpu__DOT__pcpi_int_rd = vlTOPp->top__DOT__pcpi_rd;
    } else {
        if (vlTOPp->top__DOT__cpu__DOT__pcpi_mul_ready) {
            vlTOPp->top__DOT__cpu__DOT__pcpi_int_rd 
                = vlTOPp->top__DOT__cpu__DOT__pcpi_mul_rd;
        }
    }
    vlTOPp->top__DOT__cpu__DOT__pcpi_int_wr = 0U;
    if (vlTOPp->top__DOT__pcpi_ready) {
        vlTOPp->top__DOT__cpu__DOT__pcpi_int_wr = vlTOPp->top__DOT__pcpi_wr;
    } else {
        if (vlTOPp->top__DOT__cpu__DOT__pcpi_mul_ready) {
            vlTOPp->top__DOT__cpu__DOT__pcpi_int_wr 
                = vlTOPp->top__DOT__cpu__DOT__pcpi_mul_wr;
        }
    }
    vlTOPp->top__DOT__cpu__DOT__reg_pc = __Vdly__top__DOT__cpu__DOT__reg_pc;
    vlTOPp->top__DOT__cpu__DOT__mem_wordsize = __Vdly__top__DOT__cpu__DOT__mem_wordsize;
    vlTOPp->top__DOT__cpu__DOT__reg_out = __Vdly__top__DOT__cpu__DOT__reg_out;
    vlTOPp->top__DOT__cpu__DOT__cpu_state = __Vdly__top__DOT__cpu__DOT__cpu_state;
    vlTOPp->top__DOT__cpu__DOT__do_waitirq = 0U;
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
    vlTOPp->top__DOT__cpu__DOT__alu_out_q = vlTOPp->top__DOT__cpu__DOT__alu_out;
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done))) {
        vlTOPp->top__DOT__cpu__DOT__decoded_rd = (0x1fU 
                                                  & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
                                                     >> 7U));
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done))) {
        vlTOPp->top__DOT__cpu__DOT__decoded_rs2 = (0x1fU 
                                                   & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
                                                      >> 0x14U));
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done))) {
        vlTOPp->top__DOT__cpu__DOT__compressed_instr = 0U;
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
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__cpu__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x7fU & vlTOPp->top__DOT__cpu__DOT__mem_rdata_q)) 
                & (~ (IData)((0U != (0x7ffU & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                               >> 0x15U)))))) 
               & (~ (IData)((0U != (0x1fffU & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                               >> 7U))))));
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__cpu__DOT__instr_rdcycle = 
            (((0x73U == (0x7fU & vlTOPp->top__DOT__cpu__DOT__mem_rdata_q)) 
              & (0xc0002U == (0xfffffU & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                          >> 0xcU)))) 
             | ((0x73U == (0x7fU & vlTOPp->top__DOT__cpu__DOT__mem_rdata_q)) 
                & (0xc0102U == (0xfffffU & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                            >> 0xcU)))));
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__cpu__DOT__instr_rdcycleh 
            = (((0x73U == (0x7fU & vlTOPp->top__DOT__cpu__DOT__mem_rdata_q)) 
                & (0xc8002U == (0xfffffU & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                            >> 0xcU)))) 
               | ((0x73U == (0x7fU & vlTOPp->top__DOT__cpu__DOT__mem_rdata_q)) 
                  & (0xc8102U == (0xfffffU & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                              >> 0xcU)))));
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__cpu__DOT__instr_rdinstr = 
            ((0x73U == (0x7fU & vlTOPp->top__DOT__cpu__DOT__mem_rdata_q)) 
             & (0xc0202U == (0xfffffU & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                         >> 0xcU))));
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__cpu__DOT__instr_rdinstrh 
            = ((0x73U == (0x7fU & vlTOPp->top__DOT__cpu__DOT__mem_rdata_q)) 
               & (0xc8202U == (0xfffffU & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                           >> 0xcU))));
    }
    if ((((IData)(vlTOPp->resetn) & (IData)(vlTOPp->top__DOT__pcpi_valid)) 
         & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__pcpi_mul_wait)))) {
        if ((0U != (IData)(vlTOPp->top__DOT__cpu__DOT__pcpi_timeout_counter))) {
            __Vdly__top__DOT__cpu__DOT__pcpi_timeout_counter 
                = (0xfU & ((IData)(vlTOPp->top__DOT__cpu__DOT__pcpi_timeout_counter) 
                           - (IData)(1U)));
        }
    } else {
        __Vdly__top__DOT__cpu__DOT__pcpi_timeout_counter = 0xfU;
    }
    vlTOPp->top__DOT__cpu__DOT__pcpi_timeout = (1U 
                                                & (~ (IData)(
                                                             (0U 
                                                              != (IData)(vlTOPp->top__DOT__cpu__DOT__pcpi_timeout_counter)))));
    if ((1U & (~ (IData)(vlTOPp->resetn)))) {
        vlTOPp->top__DOT__cpu__DOT__pcpi_timeout = 0U;
    }
    vlTOPp->top__DOT__cpu__DOT__is_lbu_lhu_lw = ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_lbu) 
                                                 | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_lhu) 
                                                    | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_lw)));
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
    vlTOPp->top__DOT__cpu__DOT__pcpi_timeout_counter 
        = __Vdly__top__DOT__cpu__DOT__pcpi_timeout_counter;
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
    vlTOPp->top__DOT__cpu__DOT__pcpi_mul_wait = ((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mul) 
                                                 | ((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh) 
                                                    | ((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu) 
                                                       | (IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu))));
    vlTOPp->top__DOT__cpu__DOT__is_lui_auipc_jal = 
        ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_lui) 
         | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_auipc) 
            | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_jal)));
    vlTOPp->top__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_lui) 
           | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_auipc) 
              | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_jal) 
                 | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_jalr) 
                    | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_addi) 
                       | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_add) 
                          | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_sub)))))));
    vlTOPp->top__DOT__cpu__DOT__is_slti_blt_slt = ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_slti) 
                                                   | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_blt) 
                                                      | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_slt)));
    vlTOPp->top__DOT__cpu__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_sltiu) 
           | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_bltu) 
              | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_sltu)));
    vlTOPp->top__DOT__cpu__DOT__is_compare = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                              | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_slti) 
                                                 | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_slt) 
                                                    | ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_sltiu) 
                                                       | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_sltu)))));
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__cpu__DOT__instr_beq = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                                 & (0U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                        >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_bne = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                                 & (1U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                        >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_blt = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                                 & (4U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                        >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_bge = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                                 & (5U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                        >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_bltu = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                                  & (6U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_bgeu = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                                  & (7U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_lb = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
                                                & (0U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                       >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_lh = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
                                                & (1U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                       >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_lw = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
                                                & (2U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                       >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_lbu = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
                                                 & (4U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                        >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_lhu = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
                                                 & (5U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                        >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_sb = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_sb_sh_sw) 
                                                & (0U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                       >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_sh = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_sb_sh_sw) 
                                                & (1U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                       >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_sw = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_sb_sh_sw) 
                                                & (2U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                       >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_addi = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_imm) 
                                                  & (0U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_slti = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_imm) 
                                                  & (2U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_sltiu = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_imm) 
                                                   & (3U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                          >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_xori = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_imm) 
                                                  & (4U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_ori = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_imm) 
                                                 & (6U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                        >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_andi = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_imm) 
                                                  & (7U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0xcU))));
        vlTOPp->top__DOT__cpu__DOT__instr_slli = (((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_imm) 
                                                   & (1U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                          >> 0xcU)))) 
                                                  & (0U 
                                                     == 
                                                     (0x7fU 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0x19U))));
        vlTOPp->top__DOT__cpu__DOT__instr_srli = (((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_imm) 
                                                   & (5U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                          >> 0xcU)))) 
                                                  & (0U 
                                                     == 
                                                     (0x7fU 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0x19U))));
        vlTOPp->top__DOT__cpu__DOT__instr_srai = (((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_imm) 
                                                   & (5U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                          >> 0xcU)))) 
                                                  & (0x20U 
                                                     == 
                                                     (0x7fU 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0x19U))));
        vlTOPp->top__DOT__cpu__DOT__is_slli_srli_srai 
            = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_imm) 
               & (((1U == (7U & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                 >> 0xcU))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                   >> 0x19U)))) 
                  | (((5U == (7U & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                    >> 0xcU))) & (0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                      >> 0x19U)))) 
                     | ((5U == (7U & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                      >> 0xcU))) & 
                        (0x20U == (0x7fU & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                            >> 0x19U)))))));
        vlTOPp->top__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_jalr) 
               | ((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                   >> 0xcU))) | ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                      >> 0xcU))) 
                                                 | ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0xcU))) 
                                                    | ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                            >> 0xcU))) 
                                                       | ((6U 
                                                           == 
                                                           (7U 
                                                            & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                               >> 0xcU))) 
                                                          | (7U 
                                                             == 
                                                             (7U 
                                                              & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                                 >> 0xcU))))))))));
        vlTOPp->top__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlTOPp->top__DOT__cpu__DOT__is_compare = 0U;
        vlTOPp->top__DOT__cpu__DOT__decoded_imm = ((IData)(vlTOPp->top__DOT__cpu__DOT__instr_jal)
                                                    ? vlTOPp->top__DOT__cpu__DOT__decoded_imm_j
                                                    : 
                                                   (((IData)(vlTOPp->top__DOT__cpu__DOT__instr_lui) 
                                                     | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_auipc))
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlTOPp->top__DOT__cpu__DOT__mem_rdata_q)
                                                     : 
                                                    (((IData)(vlTOPp->top__DOT__cpu__DOT__instr_jalr) 
                                                      | ((IData)(vlTOPp->top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
                                                         | (IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_imm)))
                                                      ? 
                                                     VL_EXTENDS_II(32,12, 
                                                                   (0xfffU 
                                                                    & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                                       >> 0x14U)))
                                                      : 
                                                     ((IData)(vlTOPp->top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                                                       ? 
                                                      VL_EXTENDS_II(32,13, 
                                                                    ((0x1000U 
                                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                                         >> 0x13U)) 
                                                                     | ((0x800U 
                                                                         & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                                            << 4U)) 
                                                                        | ((0x7e0U 
                                                                            & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                                               >> 0x14U)) 
                                                                           | (0x1eU 
                                                                              & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                                                >> 7U))))))
                                                       : 
                                                      ((IData)(vlTOPp->top__DOT__cpu__DOT__is_sb_sh_sw)
                                                        ? 
                                                       VL_EXTENDS_II(32,12, 
                                                                     ((0xfe0U 
                                                                       & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                                          >> 0x14U)) 
                                                                      | (0x1fU 
                                                                         & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                                            >> 7U))))
                                                        : 0U)))));
    }
    if ((1U & (~ (IData)(vlTOPp->resetn)))) {
        vlTOPp->top__DOT__cpu__DOT__is_compare = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_beq = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_bne = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_blt = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_bge = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_bltu = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_bgeu = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_addi = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_slti = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_sltiu = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_xori = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_ori = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_andi = 0U;
    }
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mul = 0U;
    if (((((IData)(vlTOPp->resetn) & (IData)(vlTOPp->top__DOT__pcpi_valid)) 
          & (0x33U == (0x7fU & vlTOPp->top__DOT__pcpi_insn))) 
         & (1U == (0x7fU & (vlTOPp->top__DOT__pcpi_insn 
                            >> 0x19U))))) {
        if ((0U == (7U & (vlTOPp->top__DOT__pcpi_insn 
                          >> 0xcU)))) {
            vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mul = 1U;
        }
    }
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu = 0U;
    if (((((IData)(vlTOPp->resetn) & (IData)(vlTOPp->top__DOT__pcpi_valid)) 
          & (0x33U == (0x7fU & vlTOPp->top__DOT__pcpi_insn))) 
         & (1U == (0x7fU & (vlTOPp->top__DOT__pcpi_insn 
                            >> 0x19U))))) {
        if ((0U != (7U & (vlTOPp->top__DOT__pcpi_insn 
                          >> 0xcU)))) {
            if ((1U != (7U & (vlTOPp->top__DOT__pcpi_insn 
                              >> 0xcU)))) {
                if ((2U != (7U & (vlTOPp->top__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    if ((3U == (7U & (vlTOPp->top__DOT__pcpi_insn 
                                      >> 0xcU)))) {
                        vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh = 0U;
    if (((((IData)(vlTOPp->resetn) & (IData)(vlTOPp->top__DOT__pcpi_valid)) 
          & (0x33U == (0x7fU & vlTOPp->top__DOT__pcpi_insn))) 
         & (1U == (0x7fU & (vlTOPp->top__DOT__pcpi_insn 
                            >> 0x19U))))) {
        if ((0U != (7U & (vlTOPp->top__DOT__pcpi_insn 
                          >> 0xcU)))) {
            if ((1U == (7U & (vlTOPp->top__DOT__pcpi_insn 
                              >> 0xcU)))) {
                vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh = 1U;
            }
        }
    }
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu = 0U;
    if (((((IData)(vlTOPp->resetn) & (IData)(vlTOPp->top__DOT__pcpi_valid)) 
          & (0x33U == (0x7fU & vlTOPp->top__DOT__pcpi_insn))) 
         & (1U == (0x7fU & (vlTOPp->top__DOT__pcpi_insn 
                            >> 0x19U))))) {
        if ((0U != (7U & (vlTOPp->top__DOT__pcpi_insn 
                          >> 0xcU)))) {
            if ((1U != (7U & (vlTOPp->top__DOT__pcpi_insn 
                              >> 0xcU)))) {
                if ((2U == (7U & (vlTOPp->top__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu = 1U;
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done))) {
        vlTOPp->top__DOT__cpu__DOT__is_alu_reg_imm 
            = (0x13U == (0x7fU & vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done))) {
        vlTOPp->top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x7fU & vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done))) {
        vlTOPp->top__DOT__cpu__DOT__is_sb_sh_sw = (0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done))) {
        vlTOPp->top__DOT__cpu__DOT__decoded_imm_j = 
            ((0xfffffU & vlTOPp->top__DOT__cpu__DOT__decoded_imm_j) 
             | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                            (0x1ffffeU 
                                             & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
                                                >> 0xbU)))));
        vlTOPp->top__DOT__cpu__DOT__decoded_imm_j = 
            ((0xfffff801U & vlTOPp->top__DOT__cpu__DOT__decoded_imm_j) 
             | (0x7feU & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
                                                   >> 0xbU))) 
                          >> 9U)));
        vlTOPp->top__DOT__cpu__DOT__decoded_imm_j = 
            ((0xfffff7ffU & vlTOPp->top__DOT__cpu__DOT__decoded_imm_j) 
             | (0x800U & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
                                                   >> 0xbU))) 
                          << 2U)));
        vlTOPp->top__DOT__cpu__DOT__decoded_imm_j = 
            ((0xfff00fffU & vlTOPp->top__DOT__cpu__DOT__decoded_imm_j) 
             | (0xff000U & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
                                                     >> 0xbU))) 
                            << 0xbU)));
        vlTOPp->top__DOT__cpu__DOT__decoded_imm_j = 
            ((0xfffffffeU & vlTOPp->top__DOT__cpu__DOT__decoded_imm_j) 
             | (1U & VL_EXTENDS_II(1,21, (0x1ffffeU 
                                          & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
                                             >> 0xbU)))));
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done))) {
        vlTOPp->top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x7fU & vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle));
    }
    if ((1U & (~ (IData)(vlTOPp->resetn)))) {
        vlTOPp->top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done))) {
        vlTOPp->top__DOT__cpu__DOT__instr_auipc = (0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done))) {
        vlTOPp->top__DOT__cpu__DOT__instr_lui = (0x37U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done))) {
        vlTOPp->top__DOT__cpu__DOT__instr_jal = (0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done))) {
        vlTOPp->top__DOT__cpu__DOT__instr_jalr = ((0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle)) 
                                                  & (0U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
                                                         >> 0xcU))));
    }
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__cpu__DOT__instr_add = (((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_reg) 
                                                  & (0U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0xcU)))) 
                                                 & (0U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                        >> 0x19U))));
        vlTOPp->top__DOT__cpu__DOT__instr_sub = (((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_reg) 
                                                  & (0U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0xcU)))) 
                                                 & (0x20U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                        >> 0x19U))));
        vlTOPp->top__DOT__cpu__DOT__instr_sll = (((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_reg) 
                                                  & (1U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0xcU)))) 
                                                 & (0U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                        >> 0x19U))));
        vlTOPp->top__DOT__cpu__DOT__instr_slt = (((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_reg) 
                                                  & (2U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0xcU)))) 
                                                 & (0U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                        >> 0x19U))));
        vlTOPp->top__DOT__cpu__DOT__instr_sltu = (((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_reg) 
                                                   & (3U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                          >> 0xcU)))) 
                                                  & (0U 
                                                     == 
                                                     (0x7fU 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0x19U))));
        vlTOPp->top__DOT__cpu__DOT__instr_xor = (((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_reg) 
                                                  & (4U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0xcU)))) 
                                                 & (0U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                        >> 0x19U))));
        vlTOPp->top__DOT__cpu__DOT__instr_srl = (((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_reg) 
                                                  & (5U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0xcU)))) 
                                                 & (0U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                        >> 0x19U))));
        vlTOPp->top__DOT__cpu__DOT__instr_sra = (((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_reg) 
                                                  & (5U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0xcU)))) 
                                                 & (0x20U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                        >> 0x19U))));
        vlTOPp->top__DOT__cpu__DOT__instr_or = (((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_reg) 
                                                 & (6U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                        >> 0xcU)))) 
                                                & (0U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                       >> 0x19U))));
        vlTOPp->top__DOT__cpu__DOT__instr_and = (((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_reg) 
                                                  & (7U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0xcU)))) 
                                                 & (0U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                        >> 0x19U))));
        vlTOPp->top__DOT__cpu__DOT__is_sll_srl_sra 
            = ((IData)(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (((1U == (7U & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                 >> 0xcU))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                   >> 0x19U)))) 
                  | (((5U == (7U & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                    >> 0xcU))) & (0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                                      >> 0x19U)))) 
                     | ((5U == (7U & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                      >> 0xcU))) & 
                        (0x20U == (0x7fU & (vlTOPp->top__DOT__cpu__DOT__mem_rdata_q 
                                            >> 0x19U)))))));
    }
    if ((1U & (~ (IData)(vlTOPp->resetn)))) {
        vlTOPp->top__DOT__cpu__DOT__instr_add = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_sub = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_sll = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_slt = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_sltu = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_xor = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_srl = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_sra = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_or = 0U;
        vlTOPp->top__DOT__cpu__DOT__instr_and = 0U;
    }
    vlTOPp->top__DOT__pcpi_valid = __Vdly__top__DOT__pcpi_valid;
    vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_any_mulh 
        = ((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh) 
           | ((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu) 
              | (IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu)));
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__pcpi_insn = vlTOPp->top__DOT__cpu__DOT__mem_rdata_q;
    }
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
    if (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_done))) {
        vlTOPp->top__DOT__cpu__DOT__is_alu_reg_reg 
            = (0x33U == (0x7fU & vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle));
    }
    vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger 
        = __Vdly__top__DOT__cpu__DOT__decoder_pseudo_trigger;
    vlTOPp->top__DOT__cpu__DOT__decoder_trigger = __Vdly__top__DOT__cpu__DOT__decoder_trigger;
    if (vlTOPp->top__DOT__cpu__DOT__mem_xfer) {
        vlTOPp->top__DOT__cpu__DOT__mem_rdata_q = vlTOPp->top__DOT__mem_rdata;
    }
    __Vdly__top__DOT__mem_ready = 0U;
    vlTOPp->out_valid = 0U;
    if ((((IData)(vlTOPp->resetn) & (IData)(vlTOPp->top__DOT__mem_valid)) 
         & (~ (IData)(vlTOPp->top__DOT__mem_ready)))) {
        if ((0x10000000U == vlTOPp->top__DOT__mem_addr)) {
            vlTOPp->out_data = vlTOPp->top__DOT__mem_wdata;
            vlTOPp->out_valid = 1U;
            __Vdly__top__DOT__mem_ready = 1U;
        } else {
            if ((0x4000U > vlTOPp->top__DOT__mem_addr)) {
                __Vdly__top__DOT__mem_ready = 1U;
                vlTOPp->top__DOT__mem_rdata = vlTOPp->top__DOT__memory
                    [(0xfffU & (vlTOPp->top__DOT__mem_addr 
                                >> 2U))];
                if ((1U & (IData)(vlTOPp->top__DOT__mem_wstrb))) {
                    __Vdlyvval__top__DOT__memory__v0 
                        = (0xffU & vlTOPp->top__DOT__mem_wdata);
                    __Vdlyvset__top__DOT__memory__v0 = 1U;
                    __Vdlyvlsb__top__DOT__memory__v0 = 0U;
                    __Vdlyvdim0__top__DOT__memory__v0 
                        = (0xfffU & (vlTOPp->top__DOT__mem_addr 
                                     >> 2U));
                }
                if ((2U & (IData)(vlTOPp->top__DOT__mem_wstrb))) {
                    __Vdlyvval__top__DOT__memory__v1 
                        = (0xffU & (vlTOPp->top__DOT__mem_wdata 
                                    >> 8U));
                    __Vdlyvset__top__DOT__memory__v1 = 1U;
                    __Vdlyvlsb__top__DOT__memory__v1 = 8U;
                    __Vdlyvdim0__top__DOT__memory__v1 
                        = (0xfffU & (vlTOPp->top__DOT__mem_addr 
                                     >> 2U));
                }
                if ((4U & (IData)(vlTOPp->top__DOT__mem_wstrb))) {
                    __Vdlyvval__top__DOT__memory__v2 
                        = (0xffU & (vlTOPp->top__DOT__mem_wdata 
                                    >> 0x10U));
                    __Vdlyvset__top__DOT__memory__v2 = 1U;
                    __Vdlyvlsb__top__DOT__memory__v2 = 0x10U;
                    __Vdlyvdim0__top__DOT__memory__v2 
                        = (0xfffU & (vlTOPp->top__DOT__mem_addr 
                                     >> 2U));
                }
                if ((8U & (IData)(vlTOPp->top__DOT__mem_wstrb))) {
                    __Vdlyvval__top__DOT__memory__v3 
                        = (0xffU & (vlTOPp->top__DOT__mem_wdata 
                                    >> 0x18U));
                    __Vdlyvset__top__DOT__memory__v3 = 1U;
                    __Vdlyvlsb__top__DOT__memory__v3 = 0x18U;
                    __Vdlyvdim0__top__DOT__memory__v3 
                        = (0xfffU & (vlTOPp->top__DOT__mem_addr 
                                     >> 2U));
                }
            }
        }
    }
    if (__Vdlyvset__top__DOT__memory__v0) {
        vlTOPp->top__DOT__memory[__Vdlyvdim0__top__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__memory__v0))) 
                & vlTOPp->top__DOT__memory[__Vdlyvdim0__top__DOT__memory__v0]) 
               | ((IData)(__Vdlyvval__top__DOT__memory__v0) 
                  << (IData)(__Vdlyvlsb__top__DOT__memory__v0)));
    }
    if (__Vdlyvset__top__DOT__memory__v1) {
        vlTOPp->top__DOT__memory[__Vdlyvdim0__top__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__memory__v1))) 
                & vlTOPp->top__DOT__memory[__Vdlyvdim0__top__DOT__memory__v1]) 
               | ((IData)(__Vdlyvval__top__DOT__memory__v1) 
                  << (IData)(__Vdlyvlsb__top__DOT__memory__v1)));
    }
    if (__Vdlyvset__top__DOT__memory__v2) {
        vlTOPp->top__DOT__memory[__Vdlyvdim0__top__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__memory__v2))) 
                & vlTOPp->top__DOT__memory[__Vdlyvdim0__top__DOT__memory__v2]) 
               | ((IData)(__Vdlyvval__top__DOT__memory__v2) 
                  << (IData)(__Vdlyvlsb__top__DOT__memory__v2)));
    }
    if (__Vdlyvset__top__DOT__memory__v3) {
        vlTOPp->top__DOT__memory[__Vdlyvdim0__top__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__memory__v3))) 
                & vlTOPp->top__DOT__memory[__Vdlyvdim0__top__DOT__memory__v3]) 
               | ((IData)(__Vdlyvval__top__DOT__memory__v3) 
                  << (IData)(__Vdlyvlsb__top__DOT__memory__v3)));
    }
    if ((1U & (~ ((~ (IData)(vlTOPp->resetn)) | (IData)(vlTOPp->top__DOT__trap_signal))))) {
        if (vlTOPp->top__DOT__cpu__DOT__mem_la_write) {
            vlTOPp->top__DOT__mem_wdata = vlTOPp->top__DOT__cpu__DOT__mem_la_wdata;
        }
    }
    if ((1U & ((~ (IData)(vlTOPp->resetn)) | (IData)(vlTOPp->top__DOT__trap_signal)))) {
        if ((1U & (~ (IData)(vlTOPp->resetn)))) {
            __Vdly__top__DOT__cpu__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlTOPp->resetn)) | (IData)(vlTOPp->top__DOT__mem_ready)))) {
            vlTOPp->top__DOT__mem_valid = 0U;
        }
    } else {
        if (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_la_read) 
             | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_la_write))) {
            vlTOPp->top__DOT__mem_wstrb = ((IData)(vlTOPp->top__DOT__cpu__DOT__mem_la_wstrb) 
                                           & (- (IData)((IData)(vlTOPp->top__DOT__cpu__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlTOPp->top__DOT__cpu__DOT__mem_state))) {
            if ((((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch) 
                  | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst)) 
                 | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rdata))) {
                vlTOPp->top__DOT__mem_valid = 1U;
                vlTOPp->top__DOT__mem_wstrb = 0U;
                __Vdly__top__DOT__cpu__DOT__mem_state = 1U;
            }
            if (vlTOPp->top__DOT__cpu__DOT__mem_do_wdata) {
                vlTOPp->top__DOT__mem_valid = 1U;
                __Vdly__top__DOT__cpu__DOT__mem_state = 2U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->top__DOT__cpu__DOT__mem_state))) {
                if (vlTOPp->top__DOT__cpu__DOT__mem_xfer) {
                    vlTOPp->top__DOT__mem_valid = 0U;
                    __Vdly__top__DOT__cpu__DOT__mem_state 
                        = (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
                            | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rdata))
                            ? 0U : 3U);
                }
            } else {
                if ((2U == (IData)(vlTOPp->top__DOT__cpu__DOT__mem_state))) {
                    if (vlTOPp->top__DOT__cpu__DOT__mem_xfer) {
                        vlTOPp->top__DOT__mem_valid = 0U;
                        __Vdly__top__DOT__cpu__DOT__mem_state = 0U;
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->top__DOT__cpu__DOT__mem_state))) {
                        if (vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) {
                            __Vdly__top__DOT__cpu__DOT__mem_state = 0U;
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlTOPp->resetn)) | (IData)(vlTOPp->top__DOT__trap_signal))))) {
        if (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_la_read) 
             | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_la_write))) {
            vlTOPp->top__DOT__mem_addr = (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch) 
                                           | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst))
                                           ? (0xfffffffcU 
                                              & vlTOPp->top__DOT__cpu__DOT__next_pc)
                                           : (0xfffffffcU 
                                              & vlTOPp->top__DOT__cpu__DOT__reg_op1));
        }
    }
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
    vlTOPp->top__DOT__cpu__DOT__mem_do_wdata = __Vdly__top__DOT__cpu__DOT__mem_do_wdata;
    vlTOPp->top__DOT__cpu__DOT__mem_do_rdata = __Vdly__top__DOT__cpu__DOT__mem_do_rdata;
    vlTOPp->top__DOT__cpu__DOT__mem_state = __Vdly__top__DOT__cpu__DOT__mem_state;
    vlTOPp->top__DOT__mem_ready = __Vdly__top__DOT__mem_ready;
    vlTOPp->top__DOT__trap_signal = __Vdly__top__DOT__trap_signal;
    vlTOPp->top__DOT__cpu__DOT__next_pc = (((IData)(vlTOPp->top__DOT__cpu__DOT__latched_store) 
                                            & (IData)(vlTOPp->top__DOT__cpu__DOT__latched_branch))
                                            ? (0xfffffffeU 
                                               & vlTOPp->top__DOT__cpu__DOT__reg_out)
                                            : vlTOPp->top__DOT__cpu__DOT__reg_next_pc);
    vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch = __Vdly__top__DOT__cpu__DOT__mem_do_prefetch;
    vlTOPp->top__DOT__cpu__DOT__mem_do_rinst = __Vdly__top__DOT__cpu__DOT__mem_do_rinst;
    vlTOPp->top__DOT__cpu__DOT__reg_op1 = __Vdly__top__DOT__cpu__DOT__reg_op1;
    vlTOPp->top__DOT__cpu__DOT__mem_xfer = ((IData)(vlTOPp->top__DOT__mem_valid) 
                                            & (IData)(vlTOPp->top__DOT__mem_ready));
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
    vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlTOPp->top__DOT__cpu__DOT__mem_xfer)
            ? vlTOPp->top__DOT__mem_rdata : vlTOPp->top__DOT__cpu__DOT__mem_rdata_q);
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

VL_INLINE_OPT void Vtop::_combo__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__cpu__DOT__mem_la_write = (((IData)(vlTOPp->resetn) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlTOPp->top__DOT__cpu__DOT__mem_state))))) 
                                                & (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_wdata));
    vlTOPp->top__DOT__cpu__DOT__mem_la_read = ((IData)(vlTOPp->resetn) 
                                               & ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlTOPp->top__DOT__cpu__DOT__mem_state)))) 
                                                  & (((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
                                                      | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch)) 
                                                     | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rdata))));
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
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((resetn & 0xfeU))) {
        Verilated::overWidthError("resetn");}
}
#endif  // VL_DEBUG
