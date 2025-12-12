// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(resetn,0,0);
    VL_OUT8(out_valid,0,0);
    VL_OUT(out_data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__mem_valid;
        CData/*0:0*/ top__DOT__mem_instr;
        CData/*0:0*/ top__DOT__mem_ready;
        CData/*3:0*/ top__DOT__mem_wstrb;
        CData/*0:0*/ top__DOT__trap_signal;
        CData/*0:0*/ top__DOT__pcpi_valid;
        CData/*0:0*/ top__DOT__pcpi_wr;
        CData/*0:0*/ top__DOT__pcpi_ready;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_la_read;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_la_write;
        CData/*3:0*/ top__DOT__cpu__DOT__mem_la_wstrb;
        CData/*0:0*/ top__DOT__cpu__DOT__trace_valid;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_sh;
        CData/*0:0*/ top__DOT__cpu__DOT__irq_delay;
        CData/*0:0*/ top__DOT__cpu__DOT__irq_active;
        CData/*0:0*/ top__DOT__cpu__DOT__pcpi_mul_wr;
        CData/*0:0*/ top__DOT__cpu__DOT__pcpi_mul_wait;
        CData/*0:0*/ top__DOT__cpu__DOT__pcpi_mul_ready;
        CData/*0:0*/ top__DOT__cpu__DOT__pcpi_int_wr;
        CData/*0:0*/ top__DOT__cpu__DOT__pcpi_int_ready;
        CData/*1:0*/ top__DOT__cpu__DOT__mem_state;
        CData/*1:0*/ top__DOT__cpu__DOT__mem_wordsize;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_do_prefetch;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_do_rinst;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_do_rdata;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_do_wdata;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_xfer;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_la_secondword;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_la_firstword_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__last_mem_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__prefetched_high_word;
        CData/*0:0*/ top__DOT__cpu__DOT__clear_prefetched_high_word;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_done;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_lui;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_auipc;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_jal;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_jalr;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_beq;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_bne;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_blt;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_bge;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_bltu;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_bgeu;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_lb;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_lh;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_lw;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_lbu;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_lhu;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_sb;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_sh;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_sw;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_addi;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_slti;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_sltiu;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_xori;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_ori;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_andi;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_slli;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_srli;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_srai;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_add;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_sub;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_sll;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_slt;
    };
    struct {
        CData/*0:0*/ top__DOT__cpu__DOT__instr_sltu;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_xor;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_srl;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_sra;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_or;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_and;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_rdcycle;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_rdcycleh;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_rdinstr;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_rdinstrh;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_ecall_ebreak;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_fence;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_getq;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_setq;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_maskirq;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_waitirq;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_timer;
        CData/*0:0*/ top__DOT__cpu__DOT__instr_trap;
        CData/*4:0*/ top__DOT__cpu__DOT__decoded_rd;
        CData/*4:0*/ top__DOT__cpu__DOT__decoded_rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__decoded_rs2;
        CData/*0:0*/ top__DOT__cpu__DOT__decoder_trigger;
        CData/*0:0*/ top__DOT__cpu__DOT__decoder_trigger_q;
        CData/*0:0*/ top__DOT__cpu__DOT__decoder_pseudo_trigger;
        CData/*0:0*/ top__DOT__cpu__DOT__decoder_pseudo_trigger_q;
        CData/*0:0*/ top__DOT__cpu__DOT__compressed_instr;
        CData/*0:0*/ top__DOT__cpu__DOT__is_lui_auipc_jal;
        CData/*0:0*/ top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu;
        CData/*0:0*/ top__DOT__cpu__DOT__is_slli_srli_srai;
        CData/*0:0*/ top__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi;
        CData/*0:0*/ top__DOT__cpu__DOT__is_sb_sh_sw;
        CData/*0:0*/ top__DOT__cpu__DOT__is_sll_srl_sra;
        CData/*0:0*/ top__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub;
        CData/*0:0*/ top__DOT__cpu__DOT__is_slti_blt_slt;
        CData/*0:0*/ top__DOT__cpu__DOT__is_sltiu_bltu_sltu;
        CData/*0:0*/ top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu;
        CData/*0:0*/ top__DOT__cpu__DOT__is_lbu_lhu_lw;
        CData/*0:0*/ top__DOT__cpu__DOT__is_alu_reg_imm;
        CData/*0:0*/ top__DOT__cpu__DOT__is_alu_reg_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__is_compare;
        CData/*0:0*/ top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh;
        CData/*4:0*/ top__DOT__cpu__DOT__dbg_insn_rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__dbg_insn_rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__dbg_insn_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__dbg_rs1val_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__dbg_rs2val_valid;
        CData/*4:0*/ top__DOT__cpu__DOT__q_insn_rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__q_insn_rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__q_insn_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__dbg_next;
        CData/*0:0*/ top__DOT__cpu__DOT__launch_next_insn;
        CData/*0:0*/ top__DOT__cpu__DOT__dbg_valid_insn;
        CData/*4:0*/ top__DOT__cpu__DOT__cached_insn_rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__cached_insn_rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__cached_insn_rd;
        CData/*7:0*/ top__DOT__cpu__DOT__cpu_state;
        CData/*1:0*/ top__DOT__cpu__DOT__irq_state;
        CData/*0:0*/ top__DOT__cpu__DOT__set_mem_do_rinst;
        CData/*0:0*/ top__DOT__cpu__DOT__set_mem_do_rdata;
        CData/*0:0*/ top__DOT__cpu__DOT__set_mem_do_wdata;
        CData/*0:0*/ top__DOT__cpu__DOT__latched_store;
        CData/*0:0*/ top__DOT__cpu__DOT__latched_stalu;
        CData/*0:0*/ top__DOT__cpu__DOT__latched_branch;
        CData/*0:0*/ top__DOT__cpu__DOT__latched_compr;
    };
    struct {
        CData/*0:0*/ top__DOT__cpu__DOT__latched_trace;
        CData/*0:0*/ top__DOT__cpu__DOT__latched_is_lu;
        CData/*0:0*/ top__DOT__cpu__DOT__latched_is_lh;
        CData/*0:0*/ top__DOT__cpu__DOT__latched_is_lb;
        CData/*4:0*/ top__DOT__cpu__DOT__latched_rd;
        CData/*3:0*/ top__DOT__cpu__DOT__pcpi_timeout_counter;
        CData/*0:0*/ top__DOT__cpu__DOT__pcpi_timeout;
        CData/*0:0*/ top__DOT__cpu__DOT__do_waitirq;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_out_0;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_out_0_q;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_wait;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_wait_2;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_eq;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_ltu;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_lts;
        CData/*0:0*/ top__DOT__cpu__DOT__clear_prefetched_high_word_q;
        CData/*0:0*/ top__DOT__cpu__DOT__cpuregs_write;
        CData/*0:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mul;
        CData/*0:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh;
        CData/*0:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu;
        CData/*0:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu;
        CData/*0:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_any_mulh;
        CData/*0:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__pcpi_wait_q;
        CData/*6:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter;
        CData/*0:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_waiting;
        CData/*0:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_finish;
        SData/*15:0*/ top__DOT__cpu__DOT__mem_16bit_buffer;
        IData/*31:0*/ top__DOT__mem_addr;
        IData/*31:0*/ top__DOT__mem_wdata;
        IData/*31:0*/ top__DOT__mem_rdata;
        IData/*31:0*/ top__DOT__pcpi_insn;
        IData/*31:0*/ top__DOT__pcpi_rd;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_la_wdata;
        IData/*31:0*/ top__DOT__cpu__DOT__eoi;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_op1;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_op2;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_out;
        IData/*31:0*/ top__DOT__cpu__DOT__next_insn_opcode;
        IData/*31:0*/ top__DOT__cpu__DOT__dbg_insn_opcode;
        IData/*31:0*/ top__DOT__cpu__DOT__dbg_insn_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__irq_mask;
        IData/*31:0*/ top__DOT__cpu__DOT__irq_pending;
        IData/*31:0*/ top__DOT__cpu__DOT__timer;
        IData/*31:0*/ top__DOT__cpu__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__pcpi_mul_rd;
        IData/*31:0*/ top__DOT__cpu__DOT__pcpi_int_rd;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_rdata_word;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_rdata_q;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_rdata_latched_noshuffle;
        IData/*31:0*/ top__DOT__cpu__DOT__decoded_imm;
        IData/*31:0*/ top__DOT__cpu__DOT__decoded_imm_j;
        IData/*31:0*/ top__DOT__cpu__DOT__dbg_insn_imm;
        IData/*31:0*/ top__DOT__cpu__DOT__dbg_rs1val;
        IData/*31:0*/ top__DOT__cpu__DOT__dbg_rs2val;
        IData/*31:0*/ top__DOT__cpu__DOT__q_insn_imm;
        IData/*31:0*/ top__DOT__cpu__DOT__q_insn_opcode;
        IData/*31:0*/ top__DOT__cpu__DOT__cached_insn_imm;
        IData/*31:0*/ top__DOT__cpu__DOT__cached_insn_opcode;
        WData/*127:0*/ top__DOT__cpu__DOT__dbg_ascii_state[4];
        IData/*31:0*/ top__DOT__cpu__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__next_irq_pending;
    };
    struct {
        IData/*31:0*/ top__DOT__cpu__DOT__alu_out;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_out_q;
        IData/*31:0*/ top__DOT__cpu__DOT__cpuregs_wrdata;
        IData/*31:0*/ top__DOT__cpu__DOT__cpuregs_rs1;
        IData/*31:0*/ top__DOT__cpu__DOT__cpuregs_rs2;
        QData/*35:0*/ top__DOT__cpu__DOT__trace_data;
        QData/*63:0*/ top__DOT__cpu__DOT__count_cycle;
        QData/*63:0*/ top__DOT__cpu__DOT__count_instr;
        QData/*63:0*/ top__DOT__cpu__DOT__new_ascii_instr;
        QData/*63:0*/ top__DOT__cpu__DOT__dbg_ascii_instr;
        QData/*63:0*/ top__DOT__cpu__DOT__q_ascii_instr;
        QData/*63:0*/ top__DOT__cpu__DOT__cached_ascii_instr;
        QData/*63:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs1;
        QData/*63:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs2;
        QData/*63:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rd;
        QData/*63:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rdx;
        QData/*63:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1;
        QData/*63:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2;
        QData/*63:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2;
        QData/*63:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd;
        QData/*63:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx;
        QData/*63:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt;
        IData/*31:0*/ top__DOT__memory[4096];
        IData/*31:0*/ top__DOT__cpu__DOT__cpuregs[32];
        CData/*3:0*/ top__DOT__my_accel__DOT__a_raw[8];
        CData/*3:0*/ top__DOT__my_accel__DOT__b_raw[8];
        SData/*11:0*/ top__DOT__my_accel__DOT__a_val[8];
        SData/*11:0*/ top__DOT__my_accel__DOT__b_val[8];
        IData/*23:0*/ top__DOT__my_accel__DOT__prod[8];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1;
    CData/*3:0*/ top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2;
    CData/*3:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__fp4;
    CData/*3:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__fp4;
    CData/*3:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__fp4;
    CData/*3:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__fp4;
    CData/*3:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__fp4;
    CData/*3:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__fp4;
    CData/*3:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__fp4;
    CData/*3:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__fp4;
    CData/*3:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__fp4;
    CData/*3:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__fp4;
    CData/*3:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__fp4;
    CData/*3:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__fp4;
    CData/*3:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__fp4;
    CData/*3:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__fp4;
    CData/*3:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__fp4;
    CData/*3:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__fp4;
    CData/*7:0*/ __Vtableidx1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*11:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__13__Vfuncout;
    SData/*11:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__14__Vfuncout;
    SData/*11:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__15__Vfuncout;
    SData/*11:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__16__Vfuncout;
    SData/*11:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__17__Vfuncout;
    SData/*11:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__18__Vfuncout;
    SData/*11:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__19__Vfuncout;
    SData/*11:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__20__Vfuncout;
    SData/*11:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__21__Vfuncout;
    SData/*11:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__22__Vfuncout;
    SData/*11:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__23__Vfuncout;
    SData/*11:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__24__Vfuncout;
    SData/*11:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__25__Vfuncout;
    SData/*11:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__26__Vfuncout;
    SData/*11:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__27__Vfuncout;
    SData/*11:0*/ __Vfunc_top__DOT__my_accel__DOT__fp4_decode__28__Vfuncout;
    CData/*0:0*/ __Vm_traceActivity[3];
    static WData/*127:0*/ __Vtable1_top__DOT__cpu__DOT__dbg_ascii_state[256][4];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__3(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
