// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->top__DOT__mem_valid));
            tracep->chgBit(oldp+1,(vlTOPp->top__DOT__mem_instr));
            tracep->chgBit(oldp+2,(vlTOPp->top__DOT__mem_ready));
            tracep->chgIData(oldp+3,(vlTOPp->top__DOT__mem_addr),32);
            tracep->chgIData(oldp+4,(vlTOPp->top__DOT__mem_wdata),32);
            tracep->chgCData(oldp+5,(vlTOPp->top__DOT__mem_wstrb),4);
            tracep->chgIData(oldp+6,(vlTOPp->top__DOT__mem_rdata),32);
            tracep->chgBit(oldp+7,(vlTOPp->top__DOT__trap_signal));
            tracep->chgBit(oldp+8,(vlTOPp->top__DOT__pcpi_valid));
            tracep->chgIData(oldp+9,(vlTOPp->top__DOT__pcpi_insn),32);
            tracep->chgIData(oldp+10,(vlTOPp->top__DOT__cpu__DOT__reg_op1),32);
            tracep->chgIData(oldp+11,(vlTOPp->top__DOT__cpu__DOT__reg_op2),32);
            tracep->chgBit(oldp+12,(vlTOPp->top__DOT__pcpi_wr));
            tracep->chgIData(oldp+13,(vlTOPp->top__DOT__pcpi_rd),32);
            tracep->chgBit(oldp+14,(vlTOPp->top__DOT__pcpi_ready));
            tracep->chgIData(oldp+15,((((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch) 
                                        | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst))
                                        ? (0xfffffffcU 
                                           & vlTOPp->top__DOT__cpu__DOT__next_pc)
                                        : (0xfffffffcU 
                                           & vlTOPp->top__DOT__cpu__DOT__reg_op1))),32);
            tracep->chgIData(oldp+16,(vlTOPp->top__DOT__cpu__DOT__mem_la_wdata),32);
            tracep->chgCData(oldp+17,(vlTOPp->top__DOT__cpu__DOT__mem_la_wstrb),4);
            tracep->chgIData(oldp+18,(vlTOPp->top__DOT__cpu__DOT__eoi),32);
            tracep->chgBit(oldp+19,(vlTOPp->top__DOT__cpu__DOT__trace_valid));
            tracep->chgQData(oldp+20,(vlTOPp->top__DOT__cpu__DOT__trace_data),36);
            tracep->chgQData(oldp+22,(vlTOPp->top__DOT__cpu__DOT__count_cycle),64);
            tracep->chgQData(oldp+24,(vlTOPp->top__DOT__cpu__DOT__count_instr),64);
            tracep->chgIData(oldp+26,(vlTOPp->top__DOT__cpu__DOT__reg_pc),32);
            tracep->chgIData(oldp+27,(vlTOPp->top__DOT__cpu__DOT__reg_next_pc),32);
            tracep->chgIData(oldp+28,(vlTOPp->top__DOT__cpu__DOT__reg_out),32);
            tracep->chgCData(oldp+29,(vlTOPp->top__DOT__cpu__DOT__reg_sh),5);
            tracep->chgIData(oldp+30,(vlTOPp->top__DOT__cpu__DOT__next_insn_opcode),32);
            tracep->chgIData(oldp+31,(vlTOPp->top__DOT__cpu__DOT__dbg_insn_opcode),32);
            tracep->chgIData(oldp+32,(vlTOPp->top__DOT__cpu__DOT__dbg_insn_addr),32);
            tracep->chgIData(oldp+33,(vlTOPp->top__DOT__cpu__DOT__next_pc),32);
            tracep->chgBit(oldp+34,(vlTOPp->top__DOT__cpu__DOT__irq_delay));
            tracep->chgBit(oldp+35,(vlTOPp->top__DOT__cpu__DOT__irq_active));
            tracep->chgIData(oldp+36,(vlTOPp->top__DOT__cpu__DOT__irq_mask),32);
            tracep->chgIData(oldp+37,(vlTOPp->top__DOT__cpu__DOT__irq_pending),32);
            tracep->chgIData(oldp+38,(vlTOPp->top__DOT__cpu__DOT__timer),32);
            tracep->chgIData(oldp+39,(vlTOPp->top__DOT__cpu__DOT__cpuregs[0]),32);
            tracep->chgIData(oldp+40,(vlTOPp->top__DOT__cpu__DOT__cpuregs[1]),32);
            tracep->chgIData(oldp+41,(vlTOPp->top__DOT__cpu__DOT__cpuregs[2]),32);
            tracep->chgIData(oldp+42,(vlTOPp->top__DOT__cpu__DOT__cpuregs[3]),32);
            tracep->chgIData(oldp+43,(vlTOPp->top__DOT__cpu__DOT__cpuregs[4]),32);
            tracep->chgIData(oldp+44,(vlTOPp->top__DOT__cpu__DOT__cpuregs[5]),32);
            tracep->chgIData(oldp+45,(vlTOPp->top__DOT__cpu__DOT__cpuregs[6]),32);
            tracep->chgIData(oldp+46,(vlTOPp->top__DOT__cpu__DOT__cpuregs[7]),32);
            tracep->chgIData(oldp+47,(vlTOPp->top__DOT__cpu__DOT__cpuregs[8]),32);
            tracep->chgIData(oldp+48,(vlTOPp->top__DOT__cpu__DOT__cpuregs[9]),32);
            tracep->chgIData(oldp+49,(vlTOPp->top__DOT__cpu__DOT__cpuregs[10]),32);
            tracep->chgIData(oldp+50,(vlTOPp->top__DOT__cpu__DOT__cpuregs[11]),32);
            tracep->chgIData(oldp+51,(vlTOPp->top__DOT__cpu__DOT__cpuregs[12]),32);
            tracep->chgIData(oldp+52,(vlTOPp->top__DOT__cpu__DOT__cpuregs[13]),32);
            tracep->chgIData(oldp+53,(vlTOPp->top__DOT__cpu__DOT__cpuregs[14]),32);
            tracep->chgIData(oldp+54,(vlTOPp->top__DOT__cpu__DOT__cpuregs[15]),32);
            tracep->chgIData(oldp+55,(vlTOPp->top__DOT__cpu__DOT__cpuregs[16]),32);
            tracep->chgIData(oldp+56,(vlTOPp->top__DOT__cpu__DOT__cpuregs[17]),32);
            tracep->chgIData(oldp+57,(vlTOPp->top__DOT__cpu__DOT__cpuregs[18]),32);
            tracep->chgIData(oldp+58,(vlTOPp->top__DOT__cpu__DOT__cpuregs[19]),32);
            tracep->chgIData(oldp+59,(vlTOPp->top__DOT__cpu__DOT__cpuregs[20]),32);
            tracep->chgIData(oldp+60,(vlTOPp->top__DOT__cpu__DOT__cpuregs[21]),32);
            tracep->chgIData(oldp+61,(vlTOPp->top__DOT__cpu__DOT__cpuregs[22]),32);
            tracep->chgIData(oldp+62,(vlTOPp->top__DOT__cpu__DOT__cpuregs[23]),32);
            tracep->chgIData(oldp+63,(vlTOPp->top__DOT__cpu__DOT__cpuregs[24]),32);
            tracep->chgIData(oldp+64,(vlTOPp->top__DOT__cpu__DOT__cpuregs[25]),32);
            tracep->chgIData(oldp+65,(vlTOPp->top__DOT__cpu__DOT__cpuregs[26]),32);
            tracep->chgIData(oldp+66,(vlTOPp->top__DOT__cpu__DOT__cpuregs[27]),32);
            tracep->chgIData(oldp+67,(vlTOPp->top__DOT__cpu__DOT__cpuregs[28]),32);
            tracep->chgIData(oldp+68,(vlTOPp->top__DOT__cpu__DOT__cpuregs[29]),32);
            tracep->chgIData(oldp+69,(vlTOPp->top__DOT__cpu__DOT__cpuregs[30]),32);
            tracep->chgIData(oldp+70,(vlTOPp->top__DOT__cpu__DOT__cpuregs[31]),32);
            tracep->chgBit(oldp+71,(vlTOPp->top__DOT__cpu__DOT__pcpi_mul_wr));
            tracep->chgIData(oldp+72,(vlTOPp->top__DOT__cpu__DOT__pcpi_mul_rd),32);
            tracep->chgBit(oldp+73,(vlTOPp->top__DOT__cpu__DOT__pcpi_mul_wait));
            tracep->chgBit(oldp+74,(vlTOPp->top__DOT__cpu__DOT__pcpi_mul_ready));
            tracep->chgBit(oldp+75,(vlTOPp->top__DOT__cpu__DOT__pcpi_int_wr));
            tracep->chgIData(oldp+76,(vlTOPp->top__DOT__cpu__DOT__pcpi_int_rd),32);
            tracep->chgBit(oldp+77,(vlTOPp->top__DOT__cpu__DOT__pcpi_mul_wait));
            tracep->chgBit(oldp+78,(vlTOPp->top__DOT__cpu__DOT__pcpi_int_ready));
            tracep->chgCData(oldp+79,(vlTOPp->top__DOT__cpu__DOT__mem_state),2);
            tracep->chgCData(oldp+80,(vlTOPp->top__DOT__cpu__DOT__mem_wordsize),2);
            tracep->chgIData(oldp+81,(vlTOPp->top__DOT__cpu__DOT__mem_rdata_word),32);
            tracep->chgIData(oldp+82,(vlTOPp->top__DOT__cpu__DOT__mem_rdata_q),32);
            tracep->chgBit(oldp+83,(vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch));
            tracep->chgBit(oldp+84,(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst));
            tracep->chgBit(oldp+85,(vlTOPp->top__DOT__cpu__DOT__mem_do_rdata));
            tracep->chgBit(oldp+86,(vlTOPp->top__DOT__cpu__DOT__mem_do_wdata));
            tracep->chgBit(oldp+87,(vlTOPp->top__DOT__cpu__DOT__mem_xfer));
            tracep->chgBit(oldp+88,(vlTOPp->top__DOT__cpu__DOT__mem_la_secondword));
            tracep->chgBit(oldp+89,(vlTOPp->top__DOT__cpu__DOT__mem_la_firstword_reg));
            tracep->chgBit(oldp+90,(vlTOPp->top__DOT__cpu__DOT__last_mem_valid));
            tracep->chgBit(oldp+91,(vlTOPp->top__DOT__cpu__DOT__prefetched_high_word));
            tracep->chgIData(oldp+92,(vlTOPp->top__DOT__cpu__DOT__mem_rdata_latched_noshuffle),32);
            tracep->chgBit(oldp+93,(((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_prefetch) 
                                     | ((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rinst) 
                                        | ((IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_rdata) 
                                           | (IData)(vlTOPp->top__DOT__cpu__DOT__mem_do_wdata))))));
            tracep->chgBit(oldp+94,(vlTOPp->top__DOT__cpu__DOT__instr_lui));
            tracep->chgBit(oldp+95,(vlTOPp->top__DOT__cpu__DOT__instr_auipc));
            tracep->chgBit(oldp+96,(vlTOPp->top__DOT__cpu__DOT__instr_jal));
            tracep->chgBit(oldp+97,(vlTOPp->top__DOT__cpu__DOT__instr_jalr));
            tracep->chgBit(oldp+98,(vlTOPp->top__DOT__cpu__DOT__instr_beq));
            tracep->chgBit(oldp+99,(vlTOPp->top__DOT__cpu__DOT__instr_bne));
            tracep->chgBit(oldp+100,(vlTOPp->top__DOT__cpu__DOT__instr_blt));
            tracep->chgBit(oldp+101,(vlTOPp->top__DOT__cpu__DOT__instr_bge));
            tracep->chgBit(oldp+102,(vlTOPp->top__DOT__cpu__DOT__instr_bltu));
            tracep->chgBit(oldp+103,(vlTOPp->top__DOT__cpu__DOT__instr_bgeu));
            tracep->chgBit(oldp+104,(vlTOPp->top__DOT__cpu__DOT__instr_lb));
            tracep->chgBit(oldp+105,(vlTOPp->top__DOT__cpu__DOT__instr_lh));
            tracep->chgBit(oldp+106,(vlTOPp->top__DOT__cpu__DOT__instr_lw));
            tracep->chgBit(oldp+107,(vlTOPp->top__DOT__cpu__DOT__instr_lbu));
            tracep->chgBit(oldp+108,(vlTOPp->top__DOT__cpu__DOT__instr_lhu));
            tracep->chgBit(oldp+109,(vlTOPp->top__DOT__cpu__DOT__instr_sb));
            tracep->chgBit(oldp+110,(vlTOPp->top__DOT__cpu__DOT__instr_sh));
            tracep->chgBit(oldp+111,(vlTOPp->top__DOT__cpu__DOT__instr_sw));
            tracep->chgBit(oldp+112,(vlTOPp->top__DOT__cpu__DOT__instr_addi));
            tracep->chgBit(oldp+113,(vlTOPp->top__DOT__cpu__DOT__instr_slti));
            tracep->chgBit(oldp+114,(vlTOPp->top__DOT__cpu__DOT__instr_sltiu));
            tracep->chgBit(oldp+115,(vlTOPp->top__DOT__cpu__DOT__instr_xori));
            tracep->chgBit(oldp+116,(vlTOPp->top__DOT__cpu__DOT__instr_ori));
            tracep->chgBit(oldp+117,(vlTOPp->top__DOT__cpu__DOT__instr_andi));
            tracep->chgBit(oldp+118,(vlTOPp->top__DOT__cpu__DOT__instr_slli));
            tracep->chgBit(oldp+119,(vlTOPp->top__DOT__cpu__DOT__instr_srli));
            tracep->chgBit(oldp+120,(vlTOPp->top__DOT__cpu__DOT__instr_srai));
            tracep->chgBit(oldp+121,(vlTOPp->top__DOT__cpu__DOT__instr_add));
            tracep->chgBit(oldp+122,(vlTOPp->top__DOT__cpu__DOT__instr_sub));
            tracep->chgBit(oldp+123,(vlTOPp->top__DOT__cpu__DOT__instr_sll));
            tracep->chgBit(oldp+124,(vlTOPp->top__DOT__cpu__DOT__instr_slt));
            tracep->chgBit(oldp+125,(vlTOPp->top__DOT__cpu__DOT__instr_sltu));
            tracep->chgBit(oldp+126,(vlTOPp->top__DOT__cpu__DOT__instr_xor));
            tracep->chgBit(oldp+127,(vlTOPp->top__DOT__cpu__DOT__instr_srl));
            tracep->chgBit(oldp+128,(vlTOPp->top__DOT__cpu__DOT__instr_sra));
            tracep->chgBit(oldp+129,(vlTOPp->top__DOT__cpu__DOT__instr_or));
            tracep->chgBit(oldp+130,(vlTOPp->top__DOT__cpu__DOT__instr_and));
            tracep->chgBit(oldp+131,(vlTOPp->top__DOT__cpu__DOT__instr_rdcycle));
            tracep->chgBit(oldp+132,(vlTOPp->top__DOT__cpu__DOT__instr_rdcycleh));
            tracep->chgBit(oldp+133,(vlTOPp->top__DOT__cpu__DOT__instr_rdinstr));
            tracep->chgBit(oldp+134,(vlTOPp->top__DOT__cpu__DOT__instr_rdinstrh));
            tracep->chgBit(oldp+135,(vlTOPp->top__DOT__cpu__DOT__instr_ecall_ebreak));
            tracep->chgBit(oldp+136,(vlTOPp->top__DOT__cpu__DOT__instr_fence));
            tracep->chgBit(oldp+137,(vlTOPp->top__DOT__cpu__DOT__instr_getq));
            tracep->chgBit(oldp+138,(vlTOPp->top__DOT__cpu__DOT__instr_setq));
            tracep->chgBit(oldp+139,(vlTOPp->top__DOT__cpu__DOT__compressed_instr));
            tracep->chgBit(oldp+140,(vlTOPp->top__DOT__cpu__DOT__instr_maskirq));
            tracep->chgBit(oldp+141,(vlTOPp->top__DOT__cpu__DOT__instr_waitirq));
            tracep->chgBit(oldp+142,(vlTOPp->top__DOT__cpu__DOT__instr_timer));
            tracep->chgBit(oldp+143,(vlTOPp->top__DOT__cpu__DOT__instr_trap));
            tracep->chgCData(oldp+144,(vlTOPp->top__DOT__cpu__DOT__decoded_rd),5);
            tracep->chgCData(oldp+145,(vlTOPp->top__DOT__cpu__DOT__decoded_rs1),5);
            tracep->chgCData(oldp+146,(vlTOPp->top__DOT__cpu__DOT__decoded_rs2),5);
            tracep->chgIData(oldp+147,(vlTOPp->top__DOT__cpu__DOT__decoded_imm),32);
            tracep->chgIData(oldp+148,(vlTOPp->top__DOT__cpu__DOT__decoded_imm_j),32);
            tracep->chgBit(oldp+149,(vlTOPp->top__DOT__cpu__DOT__decoder_trigger));
            tracep->chgBit(oldp+150,(vlTOPp->top__DOT__cpu__DOT__decoder_trigger_q));
            tracep->chgBit(oldp+151,(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger));
            tracep->chgBit(oldp+152,(vlTOPp->top__DOT__cpu__DOT__decoder_pseudo_trigger_q));
            tracep->chgBit(oldp+153,(vlTOPp->top__DOT__cpu__DOT__is_lui_auipc_jal));
            tracep->chgBit(oldp+154,(vlTOPp->top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu));
            tracep->chgBit(oldp+155,(vlTOPp->top__DOT__cpu__DOT__is_slli_srli_srai));
            tracep->chgBit(oldp+156,(vlTOPp->top__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
            tracep->chgBit(oldp+157,(vlTOPp->top__DOT__cpu__DOT__is_sb_sh_sw));
            tracep->chgBit(oldp+158,(vlTOPp->top__DOT__cpu__DOT__is_sll_srl_sra));
            tracep->chgBit(oldp+159,(vlTOPp->top__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
            tracep->chgBit(oldp+160,(vlTOPp->top__DOT__cpu__DOT__is_slti_blt_slt));
            tracep->chgBit(oldp+161,(vlTOPp->top__DOT__cpu__DOT__is_sltiu_bltu_sltu));
            tracep->chgBit(oldp+162,(vlTOPp->top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu));
            tracep->chgBit(oldp+163,(vlTOPp->top__DOT__cpu__DOT__is_lbu_lhu_lw));
            tracep->chgBit(oldp+164,(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_imm));
            tracep->chgBit(oldp+165,(vlTOPp->top__DOT__cpu__DOT__is_alu_reg_reg));
            tracep->chgBit(oldp+166,(vlTOPp->top__DOT__cpu__DOT__is_compare));
            tracep->chgBit(oldp+167,(vlTOPp->top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
            tracep->chgQData(oldp+168,(vlTOPp->top__DOT__cpu__DOT__new_ascii_instr),64);
            tracep->chgQData(oldp+170,(vlTOPp->top__DOT__cpu__DOT__dbg_ascii_instr),64);
            tracep->chgIData(oldp+172,(vlTOPp->top__DOT__cpu__DOT__dbg_insn_imm),32);
            tracep->chgCData(oldp+173,(vlTOPp->top__DOT__cpu__DOT__dbg_insn_rs1),5);
            tracep->chgCData(oldp+174,(vlTOPp->top__DOT__cpu__DOT__dbg_insn_rs2),5);
            tracep->chgCData(oldp+175,(vlTOPp->top__DOT__cpu__DOT__dbg_insn_rd),5);
            tracep->chgIData(oldp+176,(vlTOPp->top__DOT__cpu__DOT__dbg_rs1val),32);
            tracep->chgIData(oldp+177,(vlTOPp->top__DOT__cpu__DOT__dbg_rs2val),32);
            tracep->chgBit(oldp+178,(vlTOPp->top__DOT__cpu__DOT__dbg_rs1val_valid));
            tracep->chgBit(oldp+179,(vlTOPp->top__DOT__cpu__DOT__dbg_rs2val_valid));
            tracep->chgQData(oldp+180,(vlTOPp->top__DOT__cpu__DOT__q_ascii_instr),64);
            tracep->chgIData(oldp+182,(vlTOPp->top__DOT__cpu__DOT__q_insn_imm),32);
            tracep->chgIData(oldp+183,(vlTOPp->top__DOT__cpu__DOT__q_insn_opcode),32);
            tracep->chgCData(oldp+184,(vlTOPp->top__DOT__cpu__DOT__q_insn_rs1),5);
            tracep->chgCData(oldp+185,(vlTOPp->top__DOT__cpu__DOT__q_insn_rs2),5);
            tracep->chgCData(oldp+186,(vlTOPp->top__DOT__cpu__DOT__q_insn_rd),5);
            tracep->chgBit(oldp+187,(vlTOPp->top__DOT__cpu__DOT__dbg_next));
            tracep->chgBit(oldp+188,(vlTOPp->top__DOT__cpu__DOT__launch_next_insn));
            tracep->chgBit(oldp+189,(vlTOPp->top__DOT__cpu__DOT__dbg_valid_insn));
            tracep->chgQData(oldp+190,(vlTOPp->top__DOT__cpu__DOT__cached_ascii_instr),64);
            tracep->chgIData(oldp+192,(vlTOPp->top__DOT__cpu__DOT__cached_insn_imm),32);
            tracep->chgIData(oldp+193,(vlTOPp->top__DOT__cpu__DOT__cached_insn_opcode),32);
            tracep->chgCData(oldp+194,(vlTOPp->top__DOT__cpu__DOT__cached_insn_rs1),5);
            tracep->chgCData(oldp+195,(vlTOPp->top__DOT__cpu__DOT__cached_insn_rs2),5);
            tracep->chgCData(oldp+196,(vlTOPp->top__DOT__cpu__DOT__cached_insn_rd),5);
            tracep->chgCData(oldp+197,(vlTOPp->top__DOT__cpu__DOT__cpu_state),8);
            tracep->chgCData(oldp+198,(vlTOPp->top__DOT__cpu__DOT__irq_state),2);
            tracep->chgWData(oldp+199,(vlTOPp->top__DOT__cpu__DOT__dbg_ascii_state),128);
            tracep->chgBit(oldp+203,(vlTOPp->top__DOT__cpu__DOT__set_mem_do_rinst));
            tracep->chgBit(oldp+204,(vlTOPp->top__DOT__cpu__DOT__set_mem_do_rdata));
            tracep->chgBit(oldp+205,(vlTOPp->top__DOT__cpu__DOT__set_mem_do_wdata));
            tracep->chgBit(oldp+206,(vlTOPp->top__DOT__cpu__DOT__latched_store));
            tracep->chgBit(oldp+207,(vlTOPp->top__DOT__cpu__DOT__latched_stalu));
            tracep->chgBit(oldp+208,(vlTOPp->top__DOT__cpu__DOT__latched_branch));
            tracep->chgBit(oldp+209,(vlTOPp->top__DOT__cpu__DOT__latched_compr));
            tracep->chgBit(oldp+210,(vlTOPp->top__DOT__cpu__DOT__latched_trace));
            tracep->chgBit(oldp+211,(vlTOPp->top__DOT__cpu__DOT__latched_is_lu));
            tracep->chgBit(oldp+212,(vlTOPp->top__DOT__cpu__DOT__latched_is_lh));
            tracep->chgBit(oldp+213,(vlTOPp->top__DOT__cpu__DOT__latched_is_lb));
            tracep->chgCData(oldp+214,(vlTOPp->top__DOT__cpu__DOT__latched_rd),5);
            tracep->chgIData(oldp+215,(vlTOPp->top__DOT__cpu__DOT__current_pc),32);
            tracep->chgCData(oldp+216,(vlTOPp->top__DOT__cpu__DOT__pcpi_timeout_counter),4);
            tracep->chgBit(oldp+217,(vlTOPp->top__DOT__cpu__DOT__pcpi_timeout));
            tracep->chgIData(oldp+218,(vlTOPp->top__DOT__cpu__DOT__next_irq_pending),32);
            tracep->chgBit(oldp+219,(vlTOPp->top__DOT__cpu__DOT__do_waitirq));
            tracep->chgIData(oldp+220,(vlTOPp->top__DOT__cpu__DOT__alu_out),32);
            tracep->chgIData(oldp+221,(vlTOPp->top__DOT__cpu__DOT__alu_out_q),32);
            tracep->chgBit(oldp+222,(vlTOPp->top__DOT__cpu__DOT__alu_out_0));
            tracep->chgBit(oldp+223,(vlTOPp->top__DOT__cpu__DOT__alu_out_0_q));
            tracep->chgBit(oldp+224,(vlTOPp->top__DOT__cpu__DOT__alu_wait));
            tracep->chgBit(oldp+225,(vlTOPp->top__DOT__cpu__DOT__alu_wait_2));
            tracep->chgIData(oldp+226,(((IData)(vlTOPp->top__DOT__cpu__DOT__instr_sub)
                                         ? (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                            - vlTOPp->top__DOT__cpu__DOT__reg_op2)
                                         : (vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                            + vlTOPp->top__DOT__cpu__DOT__reg_op2))),32);
            tracep->chgIData(oldp+227,((vlTOPp->top__DOT__cpu__DOT__reg_op1 
                                        << (0x1fU & vlTOPp->top__DOT__cpu__DOT__reg_op2))),32);
            tracep->chgIData(oldp+228,((IData)((0x1ffffffffULL 
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
            tracep->chgBit(oldp+229,(vlTOPp->top__DOT__cpu__DOT__alu_eq));
            tracep->chgBit(oldp+230,(vlTOPp->top__DOT__cpu__DOT__alu_ltu));
            tracep->chgBit(oldp+231,(vlTOPp->top__DOT__cpu__DOT__alu_lts));
            tracep->chgBit(oldp+232,(vlTOPp->top__DOT__cpu__DOT__clear_prefetched_high_word_q));
            tracep->chgBit(oldp+233,(vlTOPp->top__DOT__cpu__DOT__cpuregs_write));
            tracep->chgIData(oldp+234,(vlTOPp->top__DOT__cpu__DOT__cpuregs_wrdata),32);
            tracep->chgIData(oldp+235,(vlTOPp->top__DOT__cpu__DOT__cpuregs_rs1),32);
            tracep->chgIData(oldp+236,(vlTOPp->top__DOT__cpu__DOT__cpuregs_rs2),32);
            tracep->chgBit(oldp+237,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mul));
            tracep->chgBit(oldp+238,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh));
            tracep->chgBit(oldp+239,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu));
            tracep->chgBit(oldp+240,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu));
            tracep->chgBit(oldp+241,(((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mul) 
                                      | ((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh) 
                                         | ((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu) 
                                            | (IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu))))));
            tracep->chgBit(oldp+242,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_any_mulh));
            tracep->chgBit(oldp+243,(((IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh) 
                                      | (IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu))));
            tracep->chgBit(oldp+244,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__pcpi_wait_q));
            tracep->chgBit(oldp+245,(((IData)(vlTOPp->top__DOT__cpu__DOT__pcpi_mul_wait) 
                                      & (~ (IData)(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__pcpi_wait_q)))));
            tracep->chgQData(oldp+246,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs1),64);
            tracep->chgQData(oldp+248,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs2),64);
            tracep->chgQData(oldp+250,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rd),64);
            tracep->chgQData(oldp+252,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rdx),64);
            tracep->chgQData(oldp+254,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1),64);
            tracep->chgQData(oldp+256,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2),64);
            tracep->chgQData(oldp+258,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2),64);
            tracep->chgQData(oldp+260,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd),64);
            tracep->chgQData(oldp+262,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx),64);
            tracep->chgQData(oldp+264,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt),64);
            tracep->chgCData(oldp+266,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter),7);
            tracep->chgBit(oldp+267,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_waiting));
            tracep->chgBit(oldp+268,(vlTOPp->top__DOT__cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_finish));
            tracep->chgBit(oldp+269,((0xbU == (0x7fU 
                                               & vlTOPp->top__DOT__pcpi_insn))));
            tracep->chgCData(oldp+270,(vlTOPp->top__DOT__my_accel__DOT__a_raw[0]),4);
            tracep->chgCData(oldp+271,(vlTOPp->top__DOT__my_accel__DOT__a_raw[1]),4);
            tracep->chgCData(oldp+272,(vlTOPp->top__DOT__my_accel__DOT__a_raw[2]),4);
            tracep->chgCData(oldp+273,(vlTOPp->top__DOT__my_accel__DOT__a_raw[3]),4);
            tracep->chgCData(oldp+274,(vlTOPp->top__DOT__my_accel__DOT__a_raw[4]),4);
            tracep->chgCData(oldp+275,(vlTOPp->top__DOT__my_accel__DOT__a_raw[5]),4);
            tracep->chgCData(oldp+276,(vlTOPp->top__DOT__my_accel__DOT__a_raw[6]),4);
            tracep->chgCData(oldp+277,(vlTOPp->top__DOT__my_accel__DOT__a_raw[7]),4);
            tracep->chgCData(oldp+278,(vlTOPp->top__DOT__my_accel__DOT__b_raw[0]),4);
            tracep->chgCData(oldp+279,(vlTOPp->top__DOT__my_accel__DOT__b_raw[1]),4);
            tracep->chgCData(oldp+280,(vlTOPp->top__DOT__my_accel__DOT__b_raw[2]),4);
            tracep->chgCData(oldp+281,(vlTOPp->top__DOT__my_accel__DOT__b_raw[3]),4);
            tracep->chgCData(oldp+282,(vlTOPp->top__DOT__my_accel__DOT__b_raw[4]),4);
            tracep->chgCData(oldp+283,(vlTOPp->top__DOT__my_accel__DOT__b_raw[5]),4);
            tracep->chgCData(oldp+284,(vlTOPp->top__DOT__my_accel__DOT__b_raw[6]),4);
            tracep->chgCData(oldp+285,(vlTOPp->top__DOT__my_accel__DOT__b_raw[7]),4);
            tracep->chgSData(oldp+286,(vlTOPp->top__DOT__my_accel__DOT__a_val[0]),12);
            tracep->chgSData(oldp+287,(vlTOPp->top__DOT__my_accel__DOT__a_val[1]),12);
            tracep->chgSData(oldp+288,(vlTOPp->top__DOT__my_accel__DOT__a_val[2]),12);
            tracep->chgSData(oldp+289,(vlTOPp->top__DOT__my_accel__DOT__a_val[3]),12);
            tracep->chgSData(oldp+290,(vlTOPp->top__DOT__my_accel__DOT__a_val[4]),12);
            tracep->chgSData(oldp+291,(vlTOPp->top__DOT__my_accel__DOT__a_val[5]),12);
            tracep->chgSData(oldp+292,(vlTOPp->top__DOT__my_accel__DOT__a_val[6]),12);
            tracep->chgSData(oldp+293,(vlTOPp->top__DOT__my_accel__DOT__a_val[7]),12);
            tracep->chgSData(oldp+294,(vlTOPp->top__DOT__my_accel__DOT__b_val[0]),12);
            tracep->chgSData(oldp+295,(vlTOPp->top__DOT__my_accel__DOT__b_val[1]),12);
            tracep->chgSData(oldp+296,(vlTOPp->top__DOT__my_accel__DOT__b_val[2]),12);
            tracep->chgSData(oldp+297,(vlTOPp->top__DOT__my_accel__DOT__b_val[3]),12);
            tracep->chgSData(oldp+298,(vlTOPp->top__DOT__my_accel__DOT__b_val[4]),12);
            tracep->chgSData(oldp+299,(vlTOPp->top__DOT__my_accel__DOT__b_val[5]),12);
            tracep->chgSData(oldp+300,(vlTOPp->top__DOT__my_accel__DOT__b_val[6]),12);
            tracep->chgSData(oldp+301,(vlTOPp->top__DOT__my_accel__DOT__b_val[7]),12);
            tracep->chgIData(oldp+302,(vlTOPp->top__DOT__my_accel__DOT__prod[0]),24);
            tracep->chgIData(oldp+303,(vlTOPp->top__DOT__my_accel__DOT__prod[1]),24);
            tracep->chgIData(oldp+304,(vlTOPp->top__DOT__my_accel__DOT__prod[2]),24);
            tracep->chgIData(oldp+305,(vlTOPp->top__DOT__my_accel__DOT__prod[3]),24);
            tracep->chgIData(oldp+306,(vlTOPp->top__DOT__my_accel__DOT__prod[4]),24);
            tracep->chgIData(oldp+307,(vlTOPp->top__DOT__my_accel__DOT__prod[5]),24);
            tracep->chgIData(oldp+308,(vlTOPp->top__DOT__my_accel__DOT__prod[6]),24);
            tracep->chgIData(oldp+309,(vlTOPp->top__DOT__my_accel__DOT__prod[7]),24);
            tracep->chgIData(oldp+310,((((((((VL_EXTENDS_II(32,24, 
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
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+311,(vlTOPp->top__DOT__cpu__DOT__mem_la_read));
            tracep->chgBit(oldp+312,(vlTOPp->top__DOT__cpu__DOT__mem_la_write));
            tracep->chgBit(oldp+313,(vlTOPp->top__DOT__cpu__DOT__clear_prefetched_high_word));
            tracep->chgBit(oldp+314,(vlTOPp->top__DOT__cpu__DOT__mem_done));
        }
        tracep->chgBit(oldp+315,(vlTOPp->clk));
        tracep->chgBit(oldp+316,(vlTOPp->resetn));
        tracep->chgIData(oldp+317,(vlTOPp->out_data),32);
        tracep->chgBit(oldp+318,(vlTOPp->out_valid));
    }
}

void Vtop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
