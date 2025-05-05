// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vservant_sim.h for the primary calling header

#ifndef _VSERVANT_SIM_SERVANT__PI1_H_
#define _VSERVANT_SIM_SERVANT__PI1_H_  // guard

#include "verilated_heavy.h"
#include "Vservant_sim__Dpi.h"

//==========

class Vservant_sim__Syms;
class Vservant_sim_VerilatedVcd;
class Vservant_sim_servant_ram__pi2;


//----------

VL_MODULE(Vservant_sim_servant__pi1) {
  public:
    // CELLS
    Vservant_sim_servant_ram__pi2* ram;
    
    // PORTS
    VL_IN8(__PVT__wb_clk,0,0);
    VL_IN8(__PVT__wb_rst,0,0);
    VL_OUT8(__PVT__q,0,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__timer_irq;
        CData/*0:0*/ __PVT__wb_mem_stb;
        CData/*0:0*/ __PVT__wb_gpio_rdt;
        CData/*0:0*/ __PVT__wb_ext_stb;
        CData/*0:0*/ __PVT__wb_ext_ack;
        CData/*1:0*/ __PVT__rf_rdata;
        CData/*1:0*/ __PVT__rf_ram__DOT__rdata;
        CData/*0:0*/ __PVT__rf_ram__DOT__regzero;
        CData/*0:0*/ __PVT__cpu__DOT__wb_ibus_ack;
        CData/*3:0*/ __PVT__cpu__DOT__wb_dbus_sel;
        CData/*0:0*/ __PVT__cpu__DOT__wb_dbus_stb;
        CData/*0:0*/ __PVT__cpu__DOT__wb_dbus_ack;
        CData/*0:0*/ __PVT__cpu__DOT__rf_wreq;
        CData/*0:0*/ __PVT__cpu__DOT__rf_rreq;
        CData/*0:0*/ __PVT__cpu__DOT__wen0;
        CData/*0:0*/ __PVT__cpu__DOT__wdata0;
        CData/*0:0*/ __PVT__cpu__DOT__rdata1;
        CData/*0:0*/ __PVT__cpu__DOT__mux__DOT__sig_en;
        CData/*0:0*/ __PVT__cpu__DOT__mux__DOT__halt_en;
        CData/*0:0*/ __PVT__cpu__DOT__mux__DOT__sim_ack;
        CData/*0:0*/ __PVT__cpu__DOT__rf_ram_if__DOT__rgnt;
        CData/*4:0*/ __PVT__cpu__DOT__rf_ram_if__DOT__rcnt;
        CData/*0:0*/ __PVT__cpu__DOT__rf_ram_if__DOT__rtrig1;
        CData/*1:0*/ __PVT__cpu__DOT__rf_ram_if__DOT__wdata0_r;
        CData/*2:0*/ __PVT__cpu__DOT__rf_ram_if__DOT__wdata1_r;
        CData/*0:0*/ __PVT__cpu__DOT__rf_ram_if__DOT__wen0_r;
        CData/*0:0*/ __PVT__cpu__DOT__rf_ram_if__DOT__wen1_r;
        CData/*1:0*/ __PVT__cpu__DOT__rf_ram_if__DOT__rdata0;
        CData/*0:0*/ __PVT__cpu__DOT__rf_ram_if__DOT__rdata1;
        CData/*0:0*/ __PVT__cpu__DOT__rf_ram_if__DOT__rgate;
        CData/*0:0*/ __PVT__cpu__DOT__rf_ram_if__DOT__rreq_r;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__ctrl_pc_en;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__jump;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__imm;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__trap;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__init;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__cnt_en;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__cnt0;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__cnt1;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__cnt2;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__cnt3;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__cnt_done;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__bufreg_en;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__bufreg_q;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__bufreg2_q;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__alu_cmp;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__op_b;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__mem_misalign;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__new_irq;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__wb_ibus_cyc;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__state__DOT__init_done;
        CData/*2:0*/ __PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__state__DOT__ibus_cyc;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__state__DOT__take_branch;
        CData/*3:0*/ __PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__state__DOT__gen_csr__DOT__misalign_trap_sync_r;
        CData/*4:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode;
        CData/*2:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__op20;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__op21;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__op22;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__op26;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__imm25;
    };
    struct {
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__co_two_stage_op;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__co_dbus_en;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_utype;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__co_e_op;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_sub;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mie_en;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_imm_en;
        CData/*1:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig;
        CData/*3:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl;
        CData/*3:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_en;
        CData/*2:0*/ __PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm31;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm7;
        CData/*5:0*/ __PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25;
        CData/*4:0*/ __PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20;
        CData/*4:0*/ __PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__immdec__DOT__signbit;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__bufreg__DOT__q;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb;
        CData/*5:0*/ __PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat_shamt;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__alu__DOT__result_add;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__alu__DOT__add_b;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mie_mtie;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause31;
        CData/*3:0*/ __PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq_r;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__update_rd;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LUI;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__AUIPC;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__JAL;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__JALR;
    };
    struct {
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BEQ;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BNE;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BLT;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BGE;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BLTU;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BGEU;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LB;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LH;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LW;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LBU;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LHU;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SB;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SH;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SW;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ADDI;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLTI;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLTIU;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__XORI;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ORI;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ANDI;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLLI;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRLI;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRAI;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ADD;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SUB;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLL;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLT;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLTU;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__XOR;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRL;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRA;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__OR;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__AND;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__FENCE;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ECALL;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__EBREAK;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRW;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRS;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRC;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRWI;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRSI;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRCI;
        CData/*0:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__OTHER;
        SData/*9:0*/ __PVT__rf_waddr;
        SData/*9:0*/ __PVT__rf_raddr;
        SData/*8:0*/ __PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20;
        IData/*31:0*/ __PVT__wb_mem_adr;
        IData/*31:0*/ __PVT__timer__DOT__mtime;
        IData/*31:0*/ __PVT__timer__DOT__mtimecmp;
        WData/*1023:0*/ __PVT__cpu__DOT__mux__DOT__genblk1__DOT__signature_file[32];
        IData/*31:0*/ __PVT__cpu__DOT__mux__DOT__genblk1__DOT__f;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__wb_ibus_adr;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_csr;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mstatus;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mie;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mcause;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mscratch;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mtvec;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mepc;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mtval;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x1;
    };
    struct {
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x2;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x3;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x4;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x5;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x6;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x7;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x8;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x9;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x10;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x11;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x12;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x13;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x14;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x15;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x16;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x17;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x18;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x19;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x20;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x21;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x22;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x23;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x24;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x25;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x26;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x27;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x28;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x29;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x30;
        IData/*31:0*/ __PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x31;
        CData/*1:0*/ __PVT__rf_ram__DOT__memory[576];
    };
    
    // LOCAL VARIABLES
    CData/*1:0*/ rf_ram__DOT____Vlvbound1;
    CData/*0:0*/ __Vdly__wb_ext_ack;
    CData/*0:0*/ __Vdlyvset__rf_ram__DOT__memory__v0;
    CData/*0:0*/ __Vdly__cpu__DOT__mux__DOT__sim_ack;
    CData/*1:0*/ __Vdly__cpu__DOT__rf_ram_if__DOT__wdata0_r;
    CData/*2:0*/ __Vdly__cpu__DOT__rf_ram_if__DOT__wdata1_r;
    CData/*4:0*/ __Vdly__cpu__DOT__rf_ram_if__DOT__rcnt;
    CData/*2:0*/ __Vdly__cpu__DOT__cpu__DOT__state__DOT__o_cnt;
    CData/*3:0*/ __Vdly__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb;
    CData/*5:0*/ __Vdly__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25;
    CData/*0:0*/ __Vdly__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie;
    CData/*3:0*/ __Vdly__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0;
    SData/*8:0*/ __Vdly__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20;
    IData/*31:0*/ __Vdly__timer__DOT__mtime;
    IData/*31:0*/ __Vdly__cpu__DOT__cpu__DOT__bufreg__DOT__data;
    IData/*31:0*/ __Vdly__cpu__DOT__cpu__DOT__bufreg2__DOT__dat;
    IData/*31:0*/ __Vdly__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
    IData/*31:0*/ __Vdly__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_csr;
    
    // INTERNAL VARIABLES
  private:
    Vservant_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vservant_sim_servant__pi1);  ///< Copying not allowed
  public:
    Vservant_sim_servant__pi1(const char* name = "TOP");
    ~Vservant_sim_servant__pi1();
    
    // INTERNAL METHODS
    void __Vconfigure(Vservant_sim__Syms* symsp, bool first);
    static void _combo__TOP__servant_sim__dut__6(Vservant_sim__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__servant_sim__dut__1(Vservant_sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__servant_sim__dut__2(Vservant_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__servant_sim__dut__3(Vservant_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__servant_sim__dut__4(Vservant_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__servant_sim__dut__5(Vservant_sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
