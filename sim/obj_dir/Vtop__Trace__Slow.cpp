// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtop::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtop::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtop::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+316,"clk", false,-1);
        tracep->declBit(c+317,"resetn", false,-1);
        tracep->declBus(c+318,"out_data", false,-1, 31,0);
        tracep->declBit(c+319,"out_valid", false,-1);
        tracep->declBit(c+316,"top clk", false,-1);
        tracep->declBit(c+317,"top resetn", false,-1);
        tracep->declBus(c+318,"top out_data", false,-1, 31,0);
        tracep->declBit(c+319,"top out_valid", false,-1);
        tracep->declBit(c+1,"top mem_valid", false,-1);
        tracep->declBit(c+2,"top mem_instr", false,-1);
        tracep->declBit(c+3,"top mem_ready", false,-1);
        tracep->declBus(c+4,"top mem_addr", false,-1, 31,0);
        tracep->declBus(c+5,"top mem_wdata", false,-1, 31,0);
        tracep->declBus(c+6,"top mem_wstrb", false,-1, 3,0);
        tracep->declBus(c+7,"top mem_rdata", false,-1, 31,0);
        tracep->declBit(c+8,"top trap_signal", false,-1);
        tracep->declBit(c+9,"top pcpi_valid", false,-1);
        tracep->declBus(c+10,"top pcpi_insn", false,-1, 31,0);
        tracep->declBus(c+11,"top pcpi_rs1", false,-1, 31,0);
        tracep->declBus(c+12,"top pcpi_rs2", false,-1, 31,0);
        tracep->declBit(c+13,"top pcpi_wr", false,-1);
        tracep->declBus(c+14,"top pcpi_rd", false,-1, 31,0);
        tracep->declBit(c+15,"top pcpi_ready", false,-1);
        tracep->declBit(c+320,"top pcpi_wait", false,-1);
        tracep->declBus(c+321,"top cpu ENABLE_COUNTERS", false,-1, 0,0);
        tracep->declBus(c+321,"top cpu ENABLE_COUNTERS64", false,-1, 0,0);
        tracep->declBus(c+321,"top cpu ENABLE_REGS_16_31", false,-1, 0,0);
        tracep->declBus(c+321,"top cpu ENABLE_REGS_DUALPORT", false,-1, 0,0);
        tracep->declBus(c+322,"top cpu LATCHED_MEM_RDATA", false,-1, 0,0);
        tracep->declBus(c+321,"top cpu TWO_STAGE_SHIFT", false,-1, 0,0);
        tracep->declBus(c+322,"top cpu BARREL_SHIFTER", false,-1, 0,0);
        tracep->declBus(c+322,"top cpu TWO_CYCLE_COMPARE", false,-1, 0,0);
        tracep->declBus(c+322,"top cpu TWO_CYCLE_ALU", false,-1, 0,0);
        tracep->declBus(c+322,"top cpu COMPRESSED_ISA", false,-1, 0,0);
        tracep->declBus(c+321,"top cpu CATCH_MISALIGN", false,-1, 0,0);
        tracep->declBus(c+321,"top cpu CATCH_ILLINSN", false,-1, 0,0);
        tracep->declBus(c+321,"top cpu ENABLE_PCPI", false,-1, 0,0);
        tracep->declBus(c+321,"top cpu ENABLE_MUL", false,-1, 0,0);
        tracep->declBus(c+322,"top cpu ENABLE_FAST_MUL", false,-1, 0,0);
        tracep->declBus(c+322,"top cpu ENABLE_DIV", false,-1, 0,0);
        tracep->declBus(c+322,"top cpu ENABLE_IRQ", false,-1, 0,0);
        tracep->declBus(c+321,"top cpu ENABLE_IRQ_QREGS", false,-1, 0,0);
        tracep->declBus(c+321,"top cpu ENABLE_IRQ_TIMER", false,-1, 0,0);
        tracep->declBus(c+322,"top cpu ENABLE_TRACE", false,-1, 0,0);
        tracep->declBus(c+322,"top cpu REGS_INIT_ZERO", false,-1, 0,0);
        tracep->declBus(c+323,"top cpu MASKED_IRQ", false,-1, 31,0);
        tracep->declBus(c+324,"top cpu LATCHED_IRQ", false,-1, 31,0);
        tracep->declBus(c+323,"top cpu PROGADDR_RESET", false,-1, 31,0);
        tracep->declBus(c+325,"top cpu PROGADDR_IRQ", false,-1, 31,0);
        tracep->declBus(c+324,"top cpu STACKADDR", false,-1, 31,0);
        tracep->declBit(c+316,"top cpu clk", false,-1);
        tracep->declBit(c+317,"top cpu resetn", false,-1);
        tracep->declBit(c+8,"top cpu trap", false,-1);
        tracep->declBit(c+1,"top cpu mem_valid", false,-1);
        tracep->declBit(c+2,"top cpu mem_instr", false,-1);
        tracep->declBit(c+3,"top cpu mem_ready", false,-1);
        tracep->declBus(c+4,"top cpu mem_addr", false,-1, 31,0);
        tracep->declBus(c+5,"top cpu mem_wdata", false,-1, 31,0);
        tracep->declBus(c+6,"top cpu mem_wstrb", false,-1, 3,0);
        tracep->declBus(c+7,"top cpu mem_rdata", false,-1, 31,0);
        tracep->declBit(c+312,"top cpu mem_la_read", false,-1);
        tracep->declBit(c+313,"top cpu mem_la_write", false,-1);
        tracep->declBus(c+16,"top cpu mem_la_addr", false,-1, 31,0);
        tracep->declBus(c+17,"top cpu mem_la_wdata", false,-1, 31,0);
        tracep->declBus(c+18,"top cpu mem_la_wstrb", false,-1, 3,0);
        tracep->declBit(c+9,"top cpu pcpi_valid", false,-1);
        tracep->declBus(c+10,"top cpu pcpi_insn", false,-1, 31,0);
        tracep->declBus(c+11,"top cpu pcpi_rs1", false,-1, 31,0);
        tracep->declBus(c+12,"top cpu pcpi_rs2", false,-1, 31,0);
        tracep->declBit(c+13,"top cpu pcpi_wr", false,-1);
        tracep->declBus(c+14,"top cpu pcpi_rd", false,-1, 31,0);
        tracep->declBit(c+320,"top cpu pcpi_wait", false,-1);
        tracep->declBit(c+15,"top cpu pcpi_ready", false,-1);
        tracep->declBus(c+323,"top cpu irq", false,-1, 31,0);
        tracep->declBus(c+19,"top cpu eoi", false,-1, 31,0);
        tracep->declBit(c+20,"top cpu trace_valid", false,-1);
        tracep->declQuad(c+21,"top cpu trace_data", false,-1, 35,0);
        tracep->declBus(c+326,"top cpu irq_timer", false,-1, 31,0);
        tracep->declBus(c+327,"top cpu irq_ebreak", false,-1, 31,0);
        tracep->declBus(c+328,"top cpu irq_buserror", false,-1, 31,0);
        tracep->declBus(c+329,"top cpu irqregs_offset", false,-1, 31,0);
        tracep->declBus(c+329,"top cpu regfile_size", false,-1, 31,0);
        tracep->declBus(c+330,"top cpu regindex_bits", false,-1, 31,0);
        tracep->declBus(c+321,"top cpu WITH_PCPI", false,-1, 0,0);
        tracep->declQuad(c+331,"top cpu TRACE_BRANCH", false,-1, 35,0);
        tracep->declQuad(c+333,"top cpu TRACE_ADDR", false,-1, 35,0);
        tracep->declQuad(c+335,"top cpu TRACE_IRQ", false,-1, 35,0);
        tracep->declQuad(c+23,"top cpu count_cycle", false,-1, 63,0);
        tracep->declQuad(c+25,"top cpu count_instr", false,-1, 63,0);
        tracep->declBus(c+27,"top cpu reg_pc", false,-1, 31,0);
        tracep->declBus(c+28,"top cpu reg_next_pc", false,-1, 31,0);
        tracep->declBus(c+11,"top cpu reg_op1", false,-1, 31,0);
        tracep->declBus(c+12,"top cpu reg_op2", false,-1, 31,0);
        tracep->declBus(c+29,"top cpu reg_out", false,-1, 31,0);
        tracep->declBus(c+30,"top cpu reg_sh", false,-1, 4,0);
        tracep->declBus(c+31,"top cpu next_insn_opcode", false,-1, 31,0);
        tracep->declBus(c+32,"top cpu dbg_insn_opcode", false,-1, 31,0);
        tracep->declBus(c+33,"top cpu dbg_insn_addr", false,-1, 31,0);
        tracep->declBit(c+1,"top cpu dbg_mem_valid", false,-1);
        tracep->declBit(c+2,"top cpu dbg_mem_instr", false,-1);
        tracep->declBit(c+3,"top cpu dbg_mem_ready", false,-1);
        tracep->declBus(c+4,"top cpu dbg_mem_addr", false,-1, 31,0);
        tracep->declBus(c+5,"top cpu dbg_mem_wdata", false,-1, 31,0);
        tracep->declBus(c+6,"top cpu dbg_mem_wstrb", false,-1, 3,0);
        tracep->declBus(c+7,"top cpu dbg_mem_rdata", false,-1, 31,0);
        tracep->declBus(c+34,"top cpu next_pc", false,-1, 31,0);
        tracep->declBit(c+35,"top cpu irq_delay", false,-1);
        tracep->declBit(c+36,"top cpu irq_active", false,-1);
        tracep->declBus(c+37,"top cpu irq_mask", false,-1, 31,0);
        tracep->declBus(c+38,"top cpu irq_pending", false,-1, 31,0);
        tracep->declBus(c+39,"top cpu timer", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+40+i*1,"top cpu cpuregs", true,(i+0), 31,0);}}
        tracep->declBus(c+337,"top cpu i", false,-1, 31,0);
        tracep->declBit(c+72,"top cpu pcpi_mul_wr", false,-1);
        tracep->declBus(c+73,"top cpu pcpi_mul_rd", false,-1, 31,0);
        tracep->declBit(c+74,"top cpu pcpi_mul_wait", false,-1);
        tracep->declBit(c+75,"top cpu pcpi_mul_ready", false,-1);
        tracep->declBit(c+320,"top cpu pcpi_div_wr", false,-1);
        tracep->declBus(c+323,"top cpu pcpi_div_rd", false,-1, 31,0);
        tracep->declBit(c+320,"top cpu pcpi_div_wait", false,-1);
        tracep->declBit(c+320,"top cpu pcpi_div_ready", false,-1);
        tracep->declBit(c+76,"top cpu pcpi_int_wr", false,-1);
        tracep->declBus(c+77,"top cpu pcpi_int_rd", false,-1, 31,0);
        tracep->declBit(c+78,"top cpu pcpi_int_wait", false,-1);
        tracep->declBit(c+79,"top cpu pcpi_int_ready", false,-1);
        tracep->declBus(c+80,"top cpu mem_state", false,-1, 1,0);
        tracep->declBus(c+81,"top cpu mem_wordsize", false,-1, 1,0);
        tracep->declBus(c+82,"top cpu mem_rdata_word", false,-1, 31,0);
        tracep->declBus(c+83,"top cpu mem_rdata_q", false,-1, 31,0);
        tracep->declBit(c+84,"top cpu mem_do_prefetch", false,-1);
        tracep->declBit(c+85,"top cpu mem_do_rinst", false,-1);
        tracep->declBit(c+86,"top cpu mem_do_rdata", false,-1);
        tracep->declBit(c+87,"top cpu mem_do_wdata", false,-1);
        tracep->declBit(c+88,"top cpu mem_xfer", false,-1);
        tracep->declBit(c+89,"top cpu mem_la_secondword", false,-1);
        tracep->declBit(c+90,"top cpu mem_la_firstword_reg", false,-1);
        tracep->declBit(c+91,"top cpu last_mem_valid", false,-1);
        tracep->declBit(c+320,"top cpu mem_la_firstword", false,-1);
        tracep->declBit(c+320,"top cpu mem_la_firstword_xfer", false,-1);
        tracep->declBit(c+92,"top cpu prefetched_high_word", false,-1);
        tracep->declBit(c+314,"top cpu clear_prefetched_high_word", false,-1);
        tracep->declBus(c+338,"top cpu mem_16bit_buffer", false,-1, 15,0);
        tracep->declBus(c+93,"top cpu mem_rdata_latched_noshuffle", false,-1, 31,0);
        tracep->declBus(c+93,"top cpu mem_rdata_latched", false,-1, 31,0);
        tracep->declBit(c+320,"top cpu mem_la_use_prefetched_high_word", false,-1);
        tracep->declBit(c+94,"top cpu mem_busy", false,-1);
        tracep->declBit(c+315,"top cpu mem_done", false,-1);
        tracep->declBit(c+95,"top cpu instr_lui", false,-1);
        tracep->declBit(c+96,"top cpu instr_auipc", false,-1);
        tracep->declBit(c+97,"top cpu instr_jal", false,-1);
        tracep->declBit(c+98,"top cpu instr_jalr", false,-1);
        tracep->declBit(c+99,"top cpu instr_beq", false,-1);
        tracep->declBit(c+100,"top cpu instr_bne", false,-1);
        tracep->declBit(c+101,"top cpu instr_blt", false,-1);
        tracep->declBit(c+102,"top cpu instr_bge", false,-1);
        tracep->declBit(c+103,"top cpu instr_bltu", false,-1);
        tracep->declBit(c+104,"top cpu instr_bgeu", false,-1);
        tracep->declBit(c+105,"top cpu instr_lb", false,-1);
        tracep->declBit(c+106,"top cpu instr_lh", false,-1);
        tracep->declBit(c+107,"top cpu instr_lw", false,-1);
        tracep->declBit(c+108,"top cpu instr_lbu", false,-1);
        tracep->declBit(c+109,"top cpu instr_lhu", false,-1);
        tracep->declBit(c+110,"top cpu instr_sb", false,-1);
        tracep->declBit(c+111,"top cpu instr_sh", false,-1);
        tracep->declBit(c+112,"top cpu instr_sw", false,-1);
        tracep->declBit(c+113,"top cpu instr_addi", false,-1);
        tracep->declBit(c+114,"top cpu instr_slti", false,-1);
        tracep->declBit(c+115,"top cpu instr_sltiu", false,-1);
        tracep->declBit(c+116,"top cpu instr_xori", false,-1);
        tracep->declBit(c+117,"top cpu instr_ori", false,-1);
        tracep->declBit(c+118,"top cpu instr_andi", false,-1);
        tracep->declBit(c+119,"top cpu instr_slli", false,-1);
        tracep->declBit(c+120,"top cpu instr_srli", false,-1);
        tracep->declBit(c+121,"top cpu instr_srai", false,-1);
        tracep->declBit(c+122,"top cpu instr_add", false,-1);
        tracep->declBit(c+123,"top cpu instr_sub", false,-1);
        tracep->declBit(c+124,"top cpu instr_sll", false,-1);
        tracep->declBit(c+125,"top cpu instr_slt", false,-1);
        tracep->declBit(c+126,"top cpu instr_sltu", false,-1);
        tracep->declBit(c+127,"top cpu instr_xor", false,-1);
        tracep->declBit(c+128,"top cpu instr_srl", false,-1);
        tracep->declBit(c+129,"top cpu instr_sra", false,-1);
        tracep->declBit(c+130,"top cpu instr_or", false,-1);
        tracep->declBit(c+131,"top cpu instr_and", false,-1);
        tracep->declBit(c+132,"top cpu instr_rdcycle", false,-1);
        tracep->declBit(c+133,"top cpu instr_rdcycleh", false,-1);
        tracep->declBit(c+134,"top cpu instr_rdinstr", false,-1);
        tracep->declBit(c+135,"top cpu instr_rdinstrh", false,-1);
        tracep->declBit(c+136,"top cpu instr_ecall_ebreak", false,-1);
        tracep->declBit(c+137,"top cpu instr_fence", false,-1);
        tracep->declBit(c+138,"top cpu instr_getq", false,-1);
        tracep->declBit(c+139,"top cpu instr_setq", false,-1);
        tracep->declBit(c+140,"top cpu instr_retirq", false,-1);
        tracep->declBit(c+141,"top cpu instr_maskirq", false,-1);
        tracep->declBit(c+142,"top cpu instr_waitirq", false,-1);
        tracep->declBit(c+143,"top cpu instr_timer", false,-1);
        tracep->declBit(c+144,"top cpu instr_trap", false,-1);
        tracep->declBus(c+145,"top cpu decoded_rd", false,-1, 4,0);
        tracep->declBus(c+146,"top cpu decoded_rs1", false,-1, 4,0);
        tracep->declBus(c+147,"top cpu decoded_rs2", false,-1, 4,0);
        tracep->declBus(c+148,"top cpu decoded_imm", false,-1, 31,0);
        tracep->declBus(c+149,"top cpu decoded_imm_j", false,-1, 31,0);
        tracep->declBit(c+150,"top cpu decoder_trigger", false,-1);
        tracep->declBit(c+151,"top cpu decoder_trigger_q", false,-1);
        tracep->declBit(c+152,"top cpu decoder_pseudo_trigger", false,-1);
        tracep->declBit(c+153,"top cpu decoder_pseudo_trigger_q", false,-1);
        tracep->declBit(c+140,"top cpu compressed_instr", false,-1);
        tracep->declBit(c+154,"top cpu is_lui_auipc_jal", false,-1);
        tracep->declBit(c+155,"top cpu is_lb_lh_lw_lbu_lhu", false,-1);
        tracep->declBit(c+156,"top cpu is_slli_srli_srai", false,-1);
        tracep->declBit(c+157,"top cpu is_jalr_addi_slti_sltiu_xori_ori_andi", false,-1);
        tracep->declBit(c+158,"top cpu is_sb_sh_sw", false,-1);
        tracep->declBit(c+159,"top cpu is_sll_srl_sra", false,-1);
        tracep->declBit(c+160,"top cpu is_lui_auipc_jal_jalr_addi_add_sub", false,-1);
        tracep->declBit(c+161,"top cpu is_slti_blt_slt", false,-1);
        tracep->declBit(c+162,"top cpu is_sltiu_bltu_sltu", false,-1);
        tracep->declBit(c+163,"top cpu is_beq_bne_blt_bge_bltu_bgeu", false,-1);
        tracep->declBit(c+164,"top cpu is_lbu_lhu_lw", false,-1);
        tracep->declBit(c+165,"top cpu is_alu_reg_imm", false,-1);
        tracep->declBit(c+166,"top cpu is_alu_reg_reg", false,-1);
        tracep->declBit(c+167,"top cpu is_compare", false,-1);
        tracep->declBit(c+168,"top cpu is_rdcycle_rdcycleh_rdinstr_rdinstrh", false,-1);
        tracep->declQuad(c+169,"top cpu new_ascii_instr", false,-1, 63,0);
        tracep->declQuad(c+171,"top cpu dbg_ascii_instr", false,-1, 63,0);
        tracep->declBus(c+173,"top cpu dbg_insn_imm", false,-1, 31,0);
        tracep->declBus(c+174,"top cpu dbg_insn_rs1", false,-1, 4,0);
        tracep->declBus(c+175,"top cpu dbg_insn_rs2", false,-1, 4,0);
        tracep->declBus(c+176,"top cpu dbg_insn_rd", false,-1, 4,0);
        tracep->declBus(c+177,"top cpu dbg_rs1val", false,-1, 31,0);
        tracep->declBus(c+178,"top cpu dbg_rs2val", false,-1, 31,0);
        tracep->declBit(c+179,"top cpu dbg_rs1val_valid", false,-1);
        tracep->declBit(c+180,"top cpu dbg_rs2val_valid", false,-1);
        tracep->declQuad(c+181,"top cpu q_ascii_instr", false,-1, 63,0);
        tracep->declBus(c+183,"top cpu q_insn_imm", false,-1, 31,0);
        tracep->declBus(c+184,"top cpu q_insn_opcode", false,-1, 31,0);
        tracep->declBus(c+185,"top cpu q_insn_rs1", false,-1, 4,0);
        tracep->declBus(c+186,"top cpu q_insn_rs2", false,-1, 4,0);
        tracep->declBus(c+187,"top cpu q_insn_rd", false,-1, 4,0);
        tracep->declBit(c+188,"top cpu dbg_next", false,-1);
        tracep->declBit(c+189,"top cpu launch_next_insn", false,-1);
        tracep->declBit(c+190,"top cpu dbg_valid_insn", false,-1);
        tracep->declQuad(c+191,"top cpu cached_ascii_instr", false,-1, 63,0);
        tracep->declBus(c+193,"top cpu cached_insn_imm", false,-1, 31,0);
        tracep->declBus(c+194,"top cpu cached_insn_opcode", false,-1, 31,0);
        tracep->declBus(c+195,"top cpu cached_insn_rs1", false,-1, 4,0);
        tracep->declBus(c+196,"top cpu cached_insn_rs2", false,-1, 4,0);
        tracep->declBus(c+197,"top cpu cached_insn_rd", false,-1, 4,0);
        tracep->declBus(c+339,"top cpu cpu_state_trap", false,-1, 7,0);
        tracep->declBus(c+340,"top cpu cpu_state_fetch", false,-1, 7,0);
        tracep->declBus(c+341,"top cpu cpu_state_ld_rs1", false,-1, 7,0);
        tracep->declBus(c+342,"top cpu cpu_state_ld_rs2", false,-1, 7,0);
        tracep->declBus(c+343,"top cpu cpu_state_exec", false,-1, 7,0);
        tracep->declBus(c+344,"top cpu cpu_state_shift", false,-1, 7,0);
        tracep->declBus(c+345,"top cpu cpu_state_stmem", false,-1, 7,0);
        tracep->declBus(c+346,"top cpu cpu_state_ldmem", false,-1, 7,0);
        tracep->declBus(c+198,"top cpu cpu_state", false,-1, 7,0);
        tracep->declBus(c+199,"top cpu irq_state", false,-1, 1,0);
        tracep->declArray(c+200,"top cpu dbg_ascii_state", false,-1, 127,0);
        tracep->declBit(c+204,"top cpu set_mem_do_rinst", false,-1);
        tracep->declBit(c+205,"top cpu set_mem_do_rdata", false,-1);
        tracep->declBit(c+206,"top cpu set_mem_do_wdata", false,-1);
        tracep->declBit(c+207,"top cpu latched_store", false,-1);
        tracep->declBit(c+208,"top cpu latched_stalu", false,-1);
        tracep->declBit(c+209,"top cpu latched_branch", false,-1);
        tracep->declBit(c+210,"top cpu latched_compr", false,-1);
        tracep->declBit(c+211,"top cpu latched_trace", false,-1);
        tracep->declBit(c+212,"top cpu latched_is_lu", false,-1);
        tracep->declBit(c+213,"top cpu latched_is_lh", false,-1);
        tracep->declBit(c+214,"top cpu latched_is_lb", false,-1);
        tracep->declBus(c+215,"top cpu latched_rd", false,-1, 4,0);
        tracep->declBus(c+216,"top cpu current_pc", false,-1, 31,0);
        tracep->declBus(c+217,"top cpu pcpi_timeout_counter", false,-1, 3,0);
        tracep->declBit(c+218,"top cpu pcpi_timeout", false,-1);
        tracep->declBus(c+219,"top cpu next_irq_pending", false,-1, 31,0);
        tracep->declBit(c+220,"top cpu do_waitirq", false,-1);
        tracep->declBus(c+221,"top cpu alu_out", false,-1, 31,0);
        tracep->declBus(c+222,"top cpu alu_out_q", false,-1, 31,0);
        tracep->declBit(c+223,"top cpu alu_out_0", false,-1);
        tracep->declBit(c+224,"top cpu alu_out_0_q", false,-1);
        tracep->declBit(c+225,"top cpu alu_wait", false,-1);
        tracep->declBit(c+226,"top cpu alu_wait_2", false,-1);
        tracep->declBus(c+227,"top cpu alu_add_sub", false,-1, 31,0);
        tracep->declBus(c+228,"top cpu alu_shl", false,-1, 31,0);
        tracep->declBus(c+229,"top cpu alu_shr", false,-1, 31,0);
        tracep->declBit(c+230,"top cpu alu_eq", false,-1);
        tracep->declBit(c+231,"top cpu alu_ltu", false,-1);
        tracep->declBit(c+232,"top cpu alu_lts", false,-1);
        tracep->declBit(c+233,"top cpu clear_prefetched_high_word_q", false,-1);
        tracep->declBit(c+234,"top cpu cpuregs_write", false,-1);
        tracep->declBus(c+235,"top cpu cpuregs_wrdata", false,-1, 31,0);
        tracep->declBus(c+236,"top cpu cpuregs_rs1", false,-1, 31,0);
        tracep->declBus(c+237,"top cpu cpuregs_rs2", false,-1, 31,0);
        tracep->declBus(c+347,"top cpu decoded_rs", false,-1, 4,0);
        tracep->declBus(c+348,"top cpu genblk2 pcpi_mul STEPS_AT_ONCE", false,-1, 31,0);
        tracep->declBus(c+349,"top cpu genblk2 pcpi_mul CARRY_CHAIN", false,-1, 31,0);
        tracep->declBit(c+316,"top cpu genblk2 pcpi_mul clk", false,-1);
        tracep->declBit(c+317,"top cpu genblk2 pcpi_mul resetn", false,-1);
        tracep->declBit(c+9,"top cpu genblk2 pcpi_mul pcpi_valid", false,-1);
        tracep->declBus(c+10,"top cpu genblk2 pcpi_mul pcpi_insn", false,-1, 31,0);
        tracep->declBus(c+11,"top cpu genblk2 pcpi_mul pcpi_rs1", false,-1, 31,0);
        tracep->declBus(c+12,"top cpu genblk2 pcpi_mul pcpi_rs2", false,-1, 31,0);
        tracep->declBit(c+72,"top cpu genblk2 pcpi_mul pcpi_wr", false,-1);
        tracep->declBus(c+73,"top cpu genblk2 pcpi_mul pcpi_rd", false,-1, 31,0);
        tracep->declBit(c+74,"top cpu genblk2 pcpi_mul pcpi_wait", false,-1);
        tracep->declBit(c+75,"top cpu genblk2 pcpi_mul pcpi_ready", false,-1);
        tracep->declBit(c+238,"top cpu genblk2 pcpi_mul instr_mul", false,-1);
        tracep->declBit(c+239,"top cpu genblk2 pcpi_mul instr_mulh", false,-1);
        tracep->declBit(c+240,"top cpu genblk2 pcpi_mul instr_mulhsu", false,-1);
        tracep->declBit(c+241,"top cpu genblk2 pcpi_mul instr_mulhu", false,-1);
        tracep->declBit(c+242,"top cpu genblk2 pcpi_mul instr_any_mul", false,-1);
        tracep->declBit(c+243,"top cpu genblk2 pcpi_mul instr_any_mulh", false,-1);
        tracep->declBit(c+244,"top cpu genblk2 pcpi_mul instr_rs1_signed", false,-1);
        tracep->declBit(c+239,"top cpu genblk2 pcpi_mul instr_rs2_signed", false,-1);
        tracep->declBit(c+245,"top cpu genblk2 pcpi_mul pcpi_wait_q", false,-1);
        tracep->declBit(c+246,"top cpu genblk2 pcpi_mul mul_start", false,-1);
        tracep->declQuad(c+247,"top cpu genblk2 pcpi_mul rs1", false,-1, 63,0);
        tracep->declQuad(c+249,"top cpu genblk2 pcpi_mul rs2", false,-1, 63,0);
        tracep->declQuad(c+251,"top cpu genblk2 pcpi_mul rd", false,-1, 63,0);
        tracep->declQuad(c+253,"top cpu genblk2 pcpi_mul rdx", false,-1, 63,0);
        tracep->declQuad(c+255,"top cpu genblk2 pcpi_mul next_rs1", false,-1, 63,0);
        tracep->declQuad(c+257,"top cpu genblk2 pcpi_mul next_rs2", false,-1, 63,0);
        tracep->declQuad(c+259,"top cpu genblk2 pcpi_mul this_rs2", false,-1, 63,0);
        tracep->declQuad(c+261,"top cpu genblk2 pcpi_mul next_rd", false,-1, 63,0);
        tracep->declQuad(c+263,"top cpu genblk2 pcpi_mul next_rdx", false,-1, 63,0);
        tracep->declQuad(c+265,"top cpu genblk2 pcpi_mul next_rdt", false,-1, 63,0);
        tracep->declBus(c+267,"top cpu genblk2 pcpi_mul mul_counter", false,-1, 6,0);
        tracep->declBit(c+268,"top cpu genblk2 pcpi_mul mul_waiting", false,-1);
        tracep->declBit(c+269,"top cpu genblk2 pcpi_mul mul_finish", false,-1);
        tracep->declBus(c+327,"top cpu genblk2 pcpi_mul i", false,-1, 31,0);
        tracep->declBus(c+350,"top cpu genblk2 pcpi_mul j", false,-1, 31,0);
        tracep->declBit(c+316,"top my_accel clk", false,-1);
        tracep->declBit(c+317,"top my_accel resetn", false,-1);
        tracep->declBit(c+9,"top my_accel pcpi_valid", false,-1);
        tracep->declBus(c+10,"top my_accel pcpi_insn", false,-1, 31,0);
        tracep->declBus(c+11,"top my_accel pcpi_rs1", false,-1, 31,0);
        tracep->declBus(c+12,"top my_accel pcpi_rs2", false,-1, 31,0);
        tracep->declBit(c+13,"top my_accel pcpi_wr", false,-1);
        tracep->declBus(c+14,"top my_accel pcpi_rd", false,-1, 31,0);
        tracep->declBit(c+15,"top my_accel pcpi_ready", false,-1);
        tracep->declBit(c+320,"top my_accel pcpi_wait", false,-1);
        tracep->declBit(c+270,"top my_accel is_my_instruction", false,-1);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+271+i*1,"top my_accel a_raw", true,(i+0), 3,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+279+i*1,"top my_accel b_raw", true,(i+0), 3,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+287+i*1,"top my_accel a_val", true,(i+0), 11,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+295+i*1,"top my_accel b_val", true,(i+0), 11,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+303+i*1,"top my_accel prod", true,(i+0), 23,0);}}
        tracep->declBus(c+311,"top my_accel dot_product", false,-1, 31,0);
    }
}

void Vtop::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtop::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtop::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->top__DOT__mem_valid));
        tracep->fullBit(oldp+2,(vlTOPp->top__DOT__mem_instr));
        tracep->fullBit(oldp+3,(vlTOPp->top__DOT__mem_ready));
        tracep->fullIData(oldp+4,(vlTOPp->top__DOT__mem_addr),32);
        tracep->fullIData(oldp+5,(vlTOPp->top__DOT__mem_wdata),32);
        tracep->fullCData(oldp+6,(vlTOPp->top__DOT__mem_wstrb),4);
        tracep->fullIData(oldp+7,(vlTOPp->top__DOT__mem_rdata),32);
        tracep->fullBit(oldp+8,(vlTOPp->top__DOT__trap_signal));
        tracep->fullBit(oldp+9,(vlTOPp->top__DOT__pcpi_valid));
        tracep->fullIData(oldp+10,(vlTOPp->top__DOT__pcpi_insn),32);
        tracep->fullIData(oldp+11,(vlTOPp->top__DOT__cpu__DOT__reg_op1),32);
        tracep->fullIData(oldp+12,(vlTOPp->top__DOT__cpu__DOT__reg_op2),32);
        tracep->fullBit(oldp+13,(vlTOPp->top__DOT__pcpi_wr));
        tracep->fullIData(oldp+14,(vlTOPp->top__DOT__pcpi_rd),32);
        tracep->fullBit(oldp+15,(vlTOPp->top__DOT__pcpi_ready));
        tracep->fullIData(oldp+16,((((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch) 
                                     | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst))
                                     ? (0xfffffffcU 
                                        & vlTOPp->top__DOT__cpu__DOT__next_pc)
                                     : (0xfffffffcU 
                                        & vlTOPp->top__DOT__cpu__DOT__reg_op1))),32);
        tracep->fullIData(oldp+17,(vlTOPp->top__DOT__cpu__DOT__mem_la_wdata),32);
        tracep->fullCData(oldp+18,(vlTOPp->top__DOT__cpu__DOT__mem_la_wstrb),4);
        tracep->fullIData(oldp+19,(vlTOPp->top__DOT__cpu__DOT__eoi),32);
        tracep->fullBit(oldp+20,(vlTOPp->top__DOT__cpu__DOT__trace_valid));
        tracep->fullQData(oldp+21,(vlTOPp->top__DOT__cpu__DOT__trace_data),36);
        tracep->fullQData(oldp+23,(vlTOPp->top__DOT__cpu__DOT__count_cycle),64);
        tracep->fullQData(oldp+25,(vlTOPp->top__DOT__cpu__DOT__count_instr),64);
        tracep->fullIData(oldp+27,(vlTOPp->top__DOT__cpu__DOT__reg_pc),32);
        tracep->fullIData(oldp+28,(vlTOPp->top__DOT__cpu__DOT__reg_next_pc),32);
        tracep->fullIData(oldp+29,(vlTOPp->top__DOT__cpu__DOT__reg_out),32);
        tracep->fullCData(oldp+30,(vlTOPp->top__DOT__cpu__DOT__reg_sh),5);
        tracep->fullIData(oldp+31,(vlTOPp->top__DOT__cpu__DOT__next_insn_opcode),32);
        tracep->fullIData(oldp+32,(vlTOPp->top__DOT__cpu__DOT__dbg_insn_opcode),32);
        tracep->fullIData(oldp+33,(vlTOPp->top__DOT__cpu__DOT__dbg_insn_addr),32);
        tracep->fullIData(oldp+34,(vlTOPp->top__DOT__cpu__DOT__next_pc),32);
        tracep->fullBit(oldp+35,(vlTOPp->top__DOT__cpu__DOT__irq_delay));
        tracep->fullBit(oldp+36,(vlTOPp->top__DOT__cpu__DOT__irq_active));
        tracep->fullIData(oldp+37,(vlTOPp->top__DOT__cpu__DOT__irq_mask),32);
        tracep->fullIData(oldp+38,(vlTOPp->top__DOT__cpu__DOT__irq_pending),32);
        tracep->fullIData(oldp+39,(vlTOPp->top__DOT__cpu__DOT__timer),32);
        tracep->fullIData(oldp+40,(vlTOPp->top__DOT__cpu__DOT__cpuregs[0]),32);
        tracep->fullIData(oldp+41,(vlTOPp->top__DOT__cpu__DOT__cpuregs[1]),32);
        tracep->fullIData(oldp+42,(vlTOPp->top__DOT__cpu__DOT__cpuregs[2]),32);
        tracep->fullIData(oldp+43,(vlTOPp->top__DOT__cpu__DOT__cpuregs[3]),32);
        tracep->fullIData(oldp+44,(vlTOPp->top__DOT__cpu__DOT__cpuregs[4]),32);
        tracep->fullIData(oldp+45,(vlTOPp->top__DOT__cpu__DOT__cpuregs[5]),32);
        tracep->fullIData(oldp+46,(vlTOPp->top__DOT__cpu__DOT__cpuregs[6]),32);
        tracep->fullIData(oldp+47,(vlTOPp->top__DOT__cpu__DOT__cpuregs[7]),32);
        tracep->fullIData(oldp+48,(vlTOPp->top__DOT__cpu__DOT__cpuregs[8]),32);
        tracep->fullIData(oldp+49,(vlTOPp->top__DOT__cpu__DOT__cpuregs[9]),32);
        tracep->fullIData(oldp+50,(vlTOPp->top__DOT__cpu__DOT__cpuregs[10]),32);
        tracep->fullIData(oldp+51,(vlTOPp->top__DOT__cpu__DOT__cpuregs[11]),32);
        tracep->fullIData(oldp+52,(vlTOPp->top__DOT__cpu__DOT__cpuregs[12]),32);
        tracep->fullIData(oldp+53,(vlTOPp->top__DOT__cpu__DOT__cpuregs[13]),32);
        tracep->fullIData(oldp+54,(vlTOPp->top__DOT__cpu__DOT__cpuregs[14]),32);
        tracep->fullIData(oldp+55,(vlTOPp->top__DOT__cpu__DOT__cpuregs[15]),32);
        tracep->fullIData(oldp+56,(vlTOPp->top__DOT__cpu__DOT__cpuregs[16]),32);
        tracep->fullIData(oldp+57,(vlTOPp->top__DOT__cpu__DOT__cpuregs[17]),32);
        tracep->fullIData(oldp+58,(vlTOPp->top__DOT__cpu__DOT__cpuregs[18]),32);
        tracep->fullIData(oldp+59,(vlTOPp->top__DOT__cpu__DOT__cpuregs[19]),32);
        tracep->fullIData(oldp+60,(vlTOPp->top__DOT__cpu__DOT__cpuregs[20]),32);
        tracep->fullIData(oldp+61,(vlTOPp->top__DOT__cpu__DOT__cpuregs[21]),32);
        tracep->fullIData(oldp+62,(vlTOPp->top__DOT__cpu__DOT__cpuregs[22]),32);
        tracep->fullIData(oldp+63,(vlTOPp->top__DOT__cpu__DOT__cpuregs[23]),32);
        tracep->fullIData(oldp+64,(vlTOPp->top__DOT__cpu__DOT__cpuregs[24]),32);
        tracep->fullIData(oldp+65,(vlTOPp->top__DOT__cpu__DOT__cpuregs[25]),32);
        tracep->fullIData(oldp+66,(vlTOPp->top__DOT__cpu__DOT__cpuregs[26]),32);
        tracep->fullIData(oldp+67,(vlTOPp->top__DOT__cpu__DOT__cpuregs[27]),32);
        tracep->fullIData(oldp+68,(vlTOPp->top__DOT__cpu__DOT__cpuregs[28]),32);
        tracep->fullIData(oldp+69,(vlTOPp->top__DOT__cpu__DOT__cpuregs[29]),32);
        tracep->fullIData(oldp+70,(vlTOPp->top__DOT__cpu__DOT__cpuregs[30]),32);
        tracep->fullIData(oldp+71,(vlTOPp->top__DOT__cpu__DOT__cpuregs[31]),32);
        tracep->fullBit(oldp+72,(vlTOPp->top__DOT__cpu__DOT__pcpi_mul_wr));
        tracep->fullIData(oldp+73,(vlTOPp->top__DOT__cpu__DOT__pcpi_mul_rd),32);
        tracep->fullBit(oldp+74,(vlTOPp->top__DOT__cpu__DOT__pcpi_mul_wait));
        tracep->fullBit(oldp+75,(vlTOPp->top__DOT__cpu__DOT__pcpi_mul_ready));
        tracep->fullBit(oldp+76,(vlTOPp->top__DOT__cpu__DOT__pcpi_int_wr));
        tracep->fullIData(oldp+77,(vlTOPp->top__DOT__cpu__DOT__pcpi_int_rd),32);
        tracep->fullBit(oldp+78,(vlTOPp->top__DOT__cpu__DOT__pcpi_mul_wait));
        tracep->fullBit(oldp+79,(vlTOPp->top__DOT__cpu__DOT__pcpi_int_ready));
        tracep->fullCData(oldp+80,(vlTOPp->top__DOT__cpu__DOT__mem_state),2);
        tracep->fullCData(oldp+81,(vlTOPp->top__DOT__cpu__DOT__mem_wordsize),2);
        tracep->fullIData(oldp+82,(vlTOPp->top__DOT__cpu__DOT__mem_rdata_word),32);
        tracep->fullIData(oldp+83,(vlTOPp->top__DOT__cpu__DOT__mem_rdata_q),32);
        tracep->fullBit(oldp+84,(vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch));
        tracep->fullBit(oldp+85,(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst));
        tracep->fullBit(oldp+86,(vlTOPp->top__DOT__cpu__DOT__mem_do_rdata));
        tracep->fullBit(oldp+87,(vlTOPp->top__DOT__cpu__DOT__mem_do_wdata));
        tracep->fullBit(oldp+88,(vlTOPp->top__DOT__cpu__DOT__mem_xfer));
        tracep->fullBit(oldp+89,(vlTOPp->top__DOT__cpu__DOT__mem_la_secondword));
        tracep->fullBit(oldp+90,(vlTOPp->top__DOT__cpu__DOT__mem_la_firstword_reg));
        tracep->fullBit(oldp+91,(vlTOPp->top__DOT__cpu__DOT__last_mem_valid));
        tracep->fullBit(oldp+92,(vlTOPp->top__DOT__cpu__DOT__prefetched_high_word));
        tracep->fullIData(oldp+93,(vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle),32);
        tracep->fullBit(oldp+94,(((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch) 
                                  | ((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
                                     | ((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rdata) 
                                        | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_wdata))))));
        tracep->fullBit(oldp+95,(vlTOPp->top__DOT__cpu__DOT__instr_lui));
        tracep->fullBit(oldp+96,(vlTOPp->top__DOT__cpu__DOT__instr_auipc));
        tracep->fullBit(oldp+97,(vlTOPp->top__DOT__cpu__DOT__instr_jal));
        tracep->fullBit(oldp+98,(vlTOPp->top__DOT__cpu__DOT__instr_jalr));
        tracep->fullBit(oldp+99,(vlTOPp->top__DOT__cpu__DOT__instr_beq));
        tracep->fullBit(oldp+100,(vlTOPp->top__DOT__cpu__DOT__instr_bne));
        tracep->fullBit(oldp+101,(vlTOPp->top__DOT__cpu__DOT__instr_blt));
        tracep->fullBit(oldp+102,(vlTOPp->top__DOT__cpu__DOT__instr_bge));
        tracep->fullBit(oldp+103,(vlTOPp->top__DOT__cpu__DOT__instr_bltu));
        tracep->fullBit(oldp+104,(vlTOPp->top__DOT__cpu__DOT__instr_bgeu));
        tracep->fullBit(oldp+105,(vlTOPp->top__DOT__cpu__DOT__instr_lb));
        tracep->fullBit(oldp+106,(vlTOPp->top__DOT__cpu__DOT__instr_lh));
        tracep->fullBit(oldp+107,(vlTOPp->top__DOT__cpu__DOT__instr_lw));
        tracep->fullBit(oldp+108,(vlTOPp->top__DOT__cpu__DOT__instr_lbu));
        tracep->fullBit(oldp+109,(vlTOPp->top__DOT__cpu__DOT__instr_lhu));
        tracep->fullBit(oldp+110,(vlTOPp->top__DOT__cpu__DOT__instr_sb));
        tracep->fullBit(oldp+111,(vlTOPp->top__DOT__cpu__DOT__instr_sh));
        tracep->fullBit(oldp+112,(vlTOPp->top__DOT__cpu__DOT__instr_sw));
        tracep->fullBit(oldp+113,(vlTOPp->top__DOT__cpu__DOT__instr_addi));
        tracep->fullBit(oldp+114,(vlTOPp->top__DOT__cpu__DOT__instr_slti));
        tracep->fullBit(oldp+115,(vlTOPp->top__DOT__cpu__DOT__instr_sltiu));
        tracep->fullBit(oldp+116,(vlTOPp->top__DOT__cpu__DOT__instr_xori));
        tracep->fullBit(oldp+117,(vlTOPp->top__DOT__cpu__DOT__instr_ori));
        tracep->fullBit(oldp+118,(vlTOPp->top__DOT__cpu__DOT__instr_andi));
        tracep->fullBit(oldp+119,(vlTOPp->top__DOT__cpu__DOT__instr_slli));
        tracep->fullBit(oldp+120,(vlTOPp->top__DOT__cpu__DOT__instr_srli));
        tracep->fullBit(oldp+121,(vlTOPp->top__DOT__cpu__DOT__instr_srai));
        tracep->fullBit(oldp+122,(vlTOPp->top__DOT__cpu__DOT__instr_add));
        tracep->fullBit(oldp+123,(vlTOPp->top__DOT__cpu__DOT__instr_sub));
        tracep->fullBit(oldp+124,(vlTOPp->top__DOT__cpu__DOT__instr_sll));
        tracep->fullBit(oldp+125,(vlTOPp->top__DOT__cpu__DOT__instr_slt));
        tracep->fullBit(oldp+126,(vlTOPp->top__DOT__cpu__DOT__instr_sltu));
        tracep->fullBit(oldp+127,(vlTOPp->top__DOT__cpu__DOT__instr_xor));
        tracep->fullBit(oldp+128,(vlTOPp->top__DOT__cpu__DOT__instr_srl));
        tracep->fullBit(oldp+129,(vlTOPp->top__DOT__cpu__DOT__instr_sra));
        tracep->fullBit(oldp+130,(vlTOPp->top__DOT__cpu__DOT__instr_or));
        tracep->fullBit(oldp+131,(vlTOPp->top__DOT__cpu__DOT__instr_and));
        tracep->fullBit(oldp+132,(vlTOPp->top__DOT__cpu__DOT__instr_rdcycle));
        tracep->fullBit(oldp+133,(vlTOPp->top__DOT__cpu__DOT__instr_rdcycleh));
        tracep->fullBit(oldp+134,(vlTOPp->top__DOT__cpu__DOT__instr_rdinstr));
        tracep->fullBit(oldp+135,(vlTOPp->top__DOT__cpu__DOT__instr_rdinstrh));
        tracep->fullBit(oldp+136,(vlTOPp->top__DOT__cpu__DOT__instr_ecall_ebreak));
        tracep->fullBit(oldp+137,(vlTOPp->top__DOT__cpu__DOT__instr_fence));
        tracep->fullBit(oldp+138,(vlTOPp->top__DOT__cpu__DOT__instr_getq));
        tracep->fullBit(oldp+139,(vlTOPp->top__DOT__cpu__DOT__instr_setq));
        tracep->fullBit(oldp+140,(vlTOPp->top__DOT__cpu__DOT__compressed_instr));
        tracep->fullBit(oldp+141,(vlTOPp->top__DOT__cpu__DOT__instr_maskirq));
        tracep->fullBit(oldp+142,(vlTOPp->top__DOT__cpu__DOT__instr_waitirq));
        tracep->fullBit(oldp+143,(vlTOPp->top__DOT__cpu__DOT__instr_timer));
        tracep->fullBit(oldp+144,(vlTOPp->top__DOT__cpu__DOT__instr_trap));
        tracep->fullCData(oldp+145,(vlTOPp->top__DOT__cpu__DOT__decoded_rd),5);
        tracep->fullCData(oldp+146,(vlTOPp->top__DOT__cpu__DOT__decoded_rs1),5);
        tracep->fullCData(oldp+147,(vlTOPp->top__DOT__cpu__DOT__decoded_rs2),5);
        tracep->fullIData(oldp+148,(vlTOPp->top__DOT__cpu__DOT__decoded_imm),32);
        tracep->fullIData(oldp+149,(vlTOPp->top__DOT__cpu__DOT__decoded_imm_j),32);
        tracep->fullBit(oldp+150,(vlTOPp->top__DOT__cpu__DOT__decoder_trigger));
        tracep->fullBit(oldp+151,(vlTOPp->top__DOT__cpu__DOT__decoder_trigger_q));
        tracep->fullBit(oldp+152,(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger));
        tracep->fullBit(oldp+153,(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger_q));
        tracep->fullBit(oldp+154,(vlTOPp->top__DOT__cpu__DOT__is_lui_auipc_jal));
        tracep->fullBit(oldp+155,(vlTOPp->top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu));
        tracep->fullBit(oldp+156,(vlTOPp->top__DOT__cpu__DOT__is_slli_srli_srai));
        tracep->fullBit(oldp+157,(vlTOPp->top__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
        tracep->fullBit(oldp+158,(vlTOPp->top__DOT__cpu__DOT__is_sb_sh_sw));
        tracep->fullBit(oldp+159,(vlTOPp->top__DOT__cpu__DOT__is_sll_srl_sra));
        tracep->fullBit(oldp+160,(vlTOPp->top__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
        tracep->fullBit(oldp+161,(vlTOPp->top__DOT__cpu__DOT__is_slti_blt_slt));
        tracep->fullBit(oldp+162,(vlTOPp->top__DOT__cpu__DOT__is_sltiu_bltu_sltu));
        tracep->fullBit(oldp+163,(vlTOPp->top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu));
        tracep->fullBit(oldp+164,(vlTOPp->top__DOT__cpu__DOT__is_lbu_lhu_lw));
        tracep->fullBit(oldp+165,(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_imm));
        tracep->fullBit(oldp+166,(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_reg));
        tracep->fullBit(oldp+167,(vlTOPp->top__DOT__cpu__DOT__is_compare));
        tracep->fullBit(oldp+168,(vlTOPp->top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
        tracep->fullQData(oldp+169,(vlTOPp->top__DOT__cpu__DOT__new_ascii_instr),64);
        tracep->fullQData(oldp+171,(vlTOPp->top__DOT__cpu__DOT__dbg_ascii_instr),64);
        tracep->fullIData(oldp+173,(vlTOPp->top__DOT__cpu__DOT__dbg_insn_imm),32);
        tracep->fullCData(oldp+174,(vlTOPp->top__DOT__cpu__DOT__dbg_insn_rs1),5);
        tracep->fullCData(oldp+175,(vlTOPp->top__DOT__cpu__DOT__dbg_insn_rs2),5);
        tracep->fullCData(oldp+176,(vlTOPp->top__DOT__cpu__DOT__dbg_insn_rd),5);
        tracep->fullIData(oldp+177,(vlTOPp->top__DOT__cpu__DOT__dbg_rs1val),32);
        tracep->fullIData(oldp+178,(vlTOPp->top__DOT__cpu__DOT__dbg_rs2val),32);
        tracep->fullBit(oldp+179,(vlTOPp->top__DOT__cpu__DOT__dbg_rs1val_valid));
        tracep->fullBit(oldp+180,(vlTOPp->top__DOT__cpu__DOT__dbg_rs2val_valid));
        tracep->fullQData(oldp+181,(vlTOPp->top__DOT__cpu__DOT__q_ascii_instr),64);
        tracep->fullIData(oldp+183,(vlTOPp->top__DOT__cpu__DOT__q_insn_imm),32);
        tracep->fullIData(oldp+184,(vlTOPp->top__DOT__cpu__DOT__q_insn_opcode),32);
        tracep->fullCData(oldp+185,(vlTOPp->top__DOT__cpu__DOT__q_insn_rs1),5);
        tracep->fullCData(oldp+186,(vlTOPp->top__DOT__cpu__DOT__q_insn_rs2),5);
        tracep->fullCData(oldp+187,(vlTOPp->top__DOT__cpu__DOT__q_insn_rd),5);
        tracep->fullBit(oldp+188,(vlTOPp->top__DOT__cpu__DOT__dbg_next));
        tracep->fullBit(oldp+189,(vlTOPp->top__DOT__cpu__DOT__launch_next_insn));
        tracep->fullBit(oldp+190,(vlTOPp->top__DOT__cpu__DOT__dbg_valid_insn));
        tracep->fullQData(oldp+191,(vlTOPp->top__DOT__cpu__DOT__cached_ascii_instr),64);
        tracep->fullIData(oldp+193,(vlTOPp->top__DOT__cpu__DOT__cached_insn_imm),32);
        tracep->fullIData(oldp+194,(vlTOPp->top__DOT__cpu__DOT__cached_insn_opcode),32);
        tracep->fullCData(oldp+195,(vlTOPp->top__DOT__cpu__DOT__cached_insn_rs1),5);
        tracep->fullCData(oldp+196,(vlTOPp->top__DOT__cpu__DOT__cached_insn_rs2),5);
        tracep->fullCData(oldp+197,(vlTOPp->top__DOT__cpu__DOT__cached_insn_rd),5);
        tracep->fullCData(oldp+198,(vlTOPp->top__DOT__cpu__DOT__cpu_state),8);
        tracep->fullCData(oldp+199,(vlTOPp->top__DOT__cpu__DOT__irq_state),2);
        tracep->fullWData(oldp+200,(vlTOPp->top__DOT__cpu__DOT__dbg_ascii_state),128);
        tracep->fullBit(oldp+204,(vlTOPp->top__DOT__cpu__DOT__set_mem_do_rinst));
        tracep->fullBit(oldp+205,(vlTOPp->top__DOT__cpu__DOT__set_mem_do_rdata));
        tracep->fullBit(oldp+206,(vlTOPp->top__DOT__cpu__DOT__set_mem_do_wdata));
        tracep->fullBit(oldp+207,(vlTOPp->top__DOT__cpu__DOT__latched_store));
        tracep->fullBit(oldp+208,(vlTOPp->top__DOT__cpu__DOT__latched_stalu));
        tracep->fullBit(oldp+209,(vlTOPp->top__DOT__cpu__DOT__latched_branch));
        tracep->fullBit(oldp+210,(vlTOPp->top__DOT__cpu__DOT__latched_compr));
        tracep->fullBit(oldp+211,(vlTOPp->top__DOT__cpu__DOT__latched_trace));
        tracep->fullBit(oldp+212,(vlTOPp->top__DOT__cpu__DOT__latched_is_lu));
        tracep->fullBit(oldp+213,(vlTOPp->top__DOT__cpu__DOT__latched_is_lh));
        tracep->fullBit(oldp+214,(vlTOPp->top__DOT__cpu__DOT__latched_is_lb));
        tracep->fullCData(oldp+215,(vlTOPp->top__DOT__cpu__DOT__latched_rd),5);
        tracep->fullIData(oldp+216,(vlTOPp->top__DOT__cpu__DOT__current_pc),32);
        tracep->fullCData(oldp+217,(vlTOPp->top__DOT__cpu__DOT__pcpi_timeout_counter),4);
        tracep->fullBit(oldp+218,(vlTOPp->top__DOT__cpu__DOT__pcpi_timeout));
        tracep->fullIData(oldp+219,(vlTOPp->top__DOT__cpu__DOT__next_irq_pending),32);
        tracep->fullBit(oldp+220,(vlTOPp->top__DOT__cpu__DOT__do_waitirq));
        tracep->fullIData(oldp+221,(vlTOPp->top__DOT__cpu__DOT__alu_out),32);
        tracep->fullIData(oldp+222,(vlTOPp->top__DOT__cpu__DOT__alu_out_q),32);
        tracep->fullBit(oldp+223,(vlTOPp->top__DOT__cpu__DOT__alu_out_0));
        tracep->fullBit(oldp+224,(vlTOPp->top__DOT__cpu__DOT__alu_out_0_q));
        tracep->fullBit(oldp+225,(vlTOPp->top__DOT__cpu__DOT__alu_wait));
        tracep->fullBit(oldp+226,(vlTOPp->top__DOT__cpu__DOT__alu_wait_2));
        tracep->fullIData(oldp+227,(((IData)(vlTOPp->top__DOT__cpu__DOT__instr_sub)
                                      ? (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                         - vlTOPp->top__DOT__cpu__DOT__reg_op2)
                                      : (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                         + vlTOPp->top__DOT__cpu__DOT__reg_op2))),32);
        tracep->fullIData(oldp+228,((vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                     << (0x1fU & vlTOPp->top__DOT__cpu__DOT__reg_op2))),32);
        tracep->fullIData(oldp+229,((IData)((0x1ffffffffULL 
                                             & VL_SHIFTRS_QQI(33,33,5, 
                                                              (((QData)((IData)(
                                                                                (((IData)(vlTOPp->top__DOT__cpu__DOT__instr_sra) 
                                                                                | (IData)(vlTOPp->top__DOT__cpu__DOT__instr_srai)) 
                                                                                & (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                                                                >> 0x1fU)))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlTOPp->top__DOT__cpu__DOT__reg_op1))), 
                                                              (0x1fU 
                                                               & vlTOPp->top__DOT__cpu__DOT__reg_op2))))),32);
        tracep->fullBit(oldp+230,(vlTOPp->top__DOT__cpu__DOT__alu_eq));
        tracep->fullBit(oldp+231,(vlTOPp->top__DOT__cpu__DOT__alu_ltu));
        tracep->fullBit(oldp+232,(vlTOPp->top__DOT__cpu__DOT__alu_lts));
        tracep->fullBit(oldp+233,(vlTOPp->top__DOT__cpu__DOT__clear_prefetched_high_word_q));
        tracep->fullBit(oldp+234,(vlTOPp->top__DOT__cpu__DOT__cpuregs_write));
        tracep->fullIData(oldp+235,(vlTOPp->top__DOT__cpu__DOT__cpuregs_wrdata),32);
        tracep->fullIData(oldp+236,(vlTOPp->top__DOT__cpu__DOT__cpuregs_rs1),32);
        tracep->fullIData(oldp+237,(vlTOPp->top__DOT__cpu__DOT__cpuregs_rs2),32);
        tracep->fullBit(oldp+238,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mul));
        tracep->fullBit(oldp+239,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh));
        tracep->fullBit(oldp+240,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu));
        tracep->fullBit(oldp+241,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu));
        tracep->fullBit(oldp+242,(((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mul) 
                                   | ((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh) 
                                      | ((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu) 
                                         | (IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu))))));
        tracep->fullBit(oldp+243,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_any_mulh));
        tracep->fullBit(oldp+244,(((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh) 
                                   | (IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu))));
        tracep->fullBit(oldp+245,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__pcpi_wait_q));
        tracep->fullBit(oldp+246,(((IData)(vlTOPp->top__DOT__cpu__DOT__pcpi_mul_wait) 
                                   & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__pcpi_wait_q)))));
        tracep->fullQData(oldp+247,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs1),64);
        tracep->fullQData(oldp+249,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs2),64);
        tracep->fullQData(oldp+251,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rd),64);
        tracep->fullQData(oldp+253,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rdx),64);
        tracep->fullQData(oldp+255,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1),64);
        tracep->fullQData(oldp+257,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2),64);
        tracep->fullQData(oldp+259,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2),64);
        tracep->fullQData(oldp+261,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd),64);
        tracep->fullQData(oldp+263,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx),64);
        tracep->fullQData(oldp+265,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt),64);
        tracep->fullCData(oldp+267,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter),7);
        tracep->fullBit(oldp+268,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_waiting));
        tracep->fullBit(oldp+269,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_finish));
        tracep->fullBit(oldp+270,((0xbU == (0x7fU & vlTOPp->top__DOT__pcpi_insn))));
        tracep->fullCData(oldp+271,(vlTOPp->top__DOT__my_accel__DOT__a_raw[0]),4);
        tracep->fullCData(oldp+272,(vlTOPp->top__DOT__my_accel__DOT__a_raw[1]),4);
        tracep->fullCData(oldp+273,(vlTOPp->top__DOT__my_accel__DOT__a_raw[2]),4);
        tracep->fullCData(oldp+274,(vlTOPp->top__DOT__my_accel__DOT__a_raw[3]),4);
        tracep->fullCData(oldp+275,(vlTOPp->top__DOT__my_accel__DOT__a_raw[4]),4);
        tracep->fullCData(oldp+276,(vlTOPp->top__DOT__my_accel__DOT__a_raw[5]),4);
        tracep->fullCData(oldp+277,(vlTOPp->top__DOT__my_accel__DOT__a_raw[6]),4);
        tracep->fullCData(oldp+278,(vlTOPp->top__DOT__my_accel__DOT__a_raw[7]),4);
        tracep->fullCData(oldp+279,(vlTOPp->top__DOT__my_accel__DOT__b_raw[0]),4);
        tracep->fullCData(oldp+280,(vlTOPp->top__DOT__my_accel__DOT__b_raw[1]),4);
        tracep->fullCData(oldp+281,(vlTOPp->top__DOT__my_accel__DOT__b_raw[2]),4);
        tracep->fullCData(oldp+282,(vlTOPp->top__DOT__my_accel__DOT__b_raw[3]),4);
        tracep->fullCData(oldp+283,(vlTOPp->top__DOT__my_accel__DOT__b_raw[4]),4);
        tracep->fullCData(oldp+284,(vlTOPp->top__DOT__my_accel__DOT__b_raw[5]),4);
        tracep->fullCData(oldp+285,(vlTOPp->top__DOT__my_accel__DOT__b_raw[6]),4);
        tracep->fullCData(oldp+286,(vlTOPp->top__DOT__my_accel__DOT__b_raw[7]),4);
        tracep->fullSData(oldp+287,(vlTOPp->top__DOT__my_accel__DOT__a_val[0]),12);
        tracep->fullSData(oldp+288,(vlTOPp->top__DOT__my_accel__DOT__a_val[1]),12);
        tracep->fullSData(oldp+289,(vlTOPp->top__DOT__my_accel__DOT__a_val[2]),12);
        tracep->fullSData(oldp+290,(vlTOPp->top__DOT__my_accel__DOT__a_val[3]),12);
        tracep->fullSData(oldp+291,(vlTOPp->top__DOT__my_accel__DOT__a_val[4]),12);
        tracep->fullSData(oldp+292,(vlTOPp->top__DOT__my_accel__DOT__a_val[5]),12);
        tracep->fullSData(oldp+293,(vlTOPp->top__DOT__my_accel__DOT__a_val[6]),12);
        tracep->fullSData(oldp+294,(vlTOPp->top__DOT__my_accel__DOT__a_val[7]),12);
        tracep->fullSData(oldp+295,(vlTOPp->top__DOT__my_accel__DOT__b_val[0]),12);
        tracep->fullSData(oldp+296,(vlTOPp->top__DOT__my_accel__DOT__b_val[1]),12);
        tracep->fullSData(oldp+297,(vlTOPp->top__DOT__my_accel__DOT__b_val[2]),12);
        tracep->fullSData(oldp+298,(vlTOPp->top__DOT__my_accel__DOT__b_val[3]),12);
        tracep->fullSData(oldp+299,(vlTOPp->top__DOT__my_accel__DOT__b_val[4]),12);
        tracep->fullSData(oldp+300,(vlTOPp->top__DOT__my_accel__DOT__b_val[5]),12);
        tracep->fullSData(oldp+301,(vlTOPp->top__DOT__my_accel__DOT__b_val[6]),12);
        tracep->fullSData(oldp+302,(vlTOPp->top__DOT__my_accel__DOT__b_val[7]),12);
        tracep->fullIData(oldp+303,(vlTOPp->top__DOT__my_accel__DOT__prod[0]),24);
        tracep->fullIData(oldp+304,(vlTOPp->top__DOT__my_accel__DOT__prod[1]),24);
        tracep->fullIData(oldp+305,(vlTOPp->top__DOT__my_accel__DOT__prod[2]),24);
        tracep->fullIData(oldp+306,(vlTOPp->top__DOT__my_accel__DOT__prod[3]),24);
        tracep->fullIData(oldp+307,(vlTOPp->top__DOT__my_accel__DOT__prod[4]),24);
        tracep->fullIData(oldp+308,(vlTOPp->top__DOT__my_accel__DOT__prod[5]),24);
        tracep->fullIData(oldp+309,(vlTOPp->top__DOT__my_accel__DOT__prod[6]),24);
        tracep->fullIData(oldp+310,(vlTOPp->top__DOT__my_accel__DOT__prod[7]),24);
        tracep->fullIData(oldp+311,((((((((VL_EXTENDS_II(32,24, 
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
                                                     [7U]))),32);
        tracep->fullBit(oldp+312,(vlTOPp->top__DOT__cpu__DOT__mem_la_read));
        tracep->fullBit(oldp+313,(vlTOPp->top__DOT__cpu__DOT__mem_la_write));
        tracep->fullBit(oldp+314,(vlTOPp->top__DOT__cpu__DOT__clear_prefetched_high_word));
        tracep->fullBit(oldp+315,(vlTOPp->top__DOT__cpu__DOT__mem_done));
        tracep->fullBit(oldp+316,(vlTOPp->clk));
        tracep->fullBit(oldp+317,(vlTOPp->resetn));
        tracep->fullIData(oldp+318,(vlTOPp->out_data),32);
        tracep->fullBit(oldp+319,(vlTOPp->out_valid));
        tracep->fullBit(oldp+320,(0U));
        tracep->fullBit(oldp+321,(1U));
        tracep->fullBit(oldp+322,(0U));
        tracep->fullIData(oldp+323,(0U),32);
        tracep->fullIData(oldp+324,(0xffffffffU),32);
        tracep->fullIData(oldp+325,(0x10U),32);
        tracep->fullIData(oldp+326,(0U),32);
        tracep->fullIData(oldp+327,(1U),32);
        tracep->fullIData(oldp+328,(2U),32);
        tracep->fullIData(oldp+329,(0x20U),32);
        tracep->fullIData(oldp+330,(5U),32);
        tracep->fullQData(oldp+331,(0x100000000ULL),36);
        tracep->fullQData(oldp+333,(0x200000000ULL),36);
        tracep->fullQData(oldp+335,(0x800000000ULL),36);
        tracep->fullIData(oldp+337,(vlTOPp->top__DOT__cpu__DOT__i),32);
        tracep->fullSData(oldp+338,(vlTOPp->top__DOT__cpu__DOT__mem_16bit_buffer),16);
        tracep->fullCData(oldp+339,(0x80U),8);
        tracep->fullCData(oldp+340,(0x40U),8);
        tracep->fullCData(oldp+341,(0x20U),8);
        tracep->fullCData(oldp+342,(0x10U),8);
        tracep->fullCData(oldp+343,(8U),8);
        tracep->fullCData(oldp+344,(4U),8);
        tracep->fullCData(oldp+345,(2U),8);
        tracep->fullCData(oldp+346,(1U),8);
        tracep->fullCData(oldp+347,(0U),5);
        tracep->fullIData(oldp+348,(1U),32);
        tracep->fullIData(oldp+349,(4U),32);
        tracep->fullIData(oldp+350,(0x40U),32);
    }
}
