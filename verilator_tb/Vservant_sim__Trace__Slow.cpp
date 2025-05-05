// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vservant_sim__Syms.h"


//======================

void Vservant_sim::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vservant_sim::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vservant_sim__Syms* __restrict vlSymsp = static_cast<Vservant_sim__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vservant_sim::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vservant_sim::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vservant_sim__Syms* __restrict vlSymsp = static_cast<Vservant_sim__Syms*>(userp);
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vservant_sim::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vservant_sim__Syms* __restrict vlSymsp = static_cast<Vservant_sim__Syms*>(userp);
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+369,"wb_clk", false,-1);
        tracep->declBit(c+370,"wb_rst", false,-1);
        tracep->declBus(c+371,"pc_adr", false,-1, 31,0);
        tracep->declBit(c+372,"pc_vld", false,-1);
        tracep->declBit(c+373,"q", false,-1);
        tracep->declBit(c+369,"servant_sim wb_clk", false,-1);
        tracep->declBit(c+370,"servant_sim wb_rst", false,-1);
        tracep->declBus(c+360,"servant_sim pc_adr", false,-1, 31,0);
        tracep->declBit(c+66,"servant_sim pc_vld", false,-1);
        tracep->declBit(c+67,"servant_sim q", false,-1);
        tracep->declBus(c+377,"servant_sim memfile", false,-1, 0,0);
        tracep->declBus(c+378,"servant_sim width", false,-1, 31,0);
        tracep->declBus(c+379,"servant_sim compressed", false,-1, 31,0);
        tracep->declBus(c+379,"servant_sim align", false,-1, 31,0);
        tracep->declArray(c+1,"servant_sim firmware_file", false,-1, 1023,0);
        tracep->declBit(c+369,"servant_sim dut wb_clk", false,-1);
        tracep->declBit(c+370,"servant_sim dut wb_rst", false,-1);
        tracep->declBit(c+67,"servant_sim dut q", false,-1);
        tracep->declBus(c+377,"servant_sim dut memfile", false,-1, 0,0);
        tracep->declBus(c+380,"servant_sim dut memsize", false,-1, 31,0);
        tracep->declBus(c+381,"servant_sim dut reset_strategy", false,-1, 31,0);
        tracep->declBus(c+378,"servant_sim dut width", false,-1, 31,0);
        tracep->declBus(c+378,"servant_sim dut sim", false,-1, 31,0);
        tracep->declBus(c+382,"servant_sim dut debug", false,-1, 0,0);
        tracep->declBus(c+383,"servant_sim dut with_csr", false,-1, 31,0);
        tracep->declBus(c+377,"servant_sim dut compress", false,-1, 0,0);
        tracep->declBus(c+377,"servant_sim dut align", false,-1, 0,0);
        tracep->declBus(c+377,"servant_sim dut with_mdu", false,-1, 0,0);
        tracep->declBus(c+384,"servant_sim dut aw", false,-1, 31,0);
        tracep->declBus(c+385,"servant_sim dut csr_regs", false,-1, 31,0);
        tracep->declBus(c+386,"servant_sim dut rf_width", false,-1, 31,0);
        tracep->declBus(c+387,"servant_sim dut rf_l2d", false,-1, 31,0);
        tracep->declBit(c+68,"servant_sim dut timer_irq", false,-1);
        tracep->declBus(c+360,"servant_sim dut wb_mem_adr", false,-1, 31,0);
        tracep->declBus(c+69,"servant_sim dut wb_mem_dat", false,-1, 31,0);
        tracep->declBus(c+70,"servant_sim dut wb_mem_sel", false,-1, 3,0);
        tracep->declBit(c+374,"servant_sim dut wb_mem_we", false,-1);
        tracep->declBit(c+361,"servant_sim dut wb_mem_stb", false,-1);
        tracep->declBus(c+71,"servant_sim dut wb_mem_rdt", false,-1, 31,0);
        tracep->declBit(c+66,"servant_sim dut wb_mem_ack", false,-1);
        tracep->declBit(c+72,"servant_sim dut wb_gpio_dat", false,-1);
        tracep->declBit(c+73,"servant_sim dut wb_gpio_we", false,-1);
        tracep->declBit(c+74,"servant_sim dut wb_gpio_stb", false,-1);
        tracep->declBit(c+75,"servant_sim dut wb_gpio_rdt", false,-1);
        tracep->declBus(c+69,"servant_sim dut wb_timer_dat", false,-1, 31,0);
        tracep->declBit(c+73,"servant_sim dut wb_timer_we", false,-1);
        tracep->declBit(c+76,"servant_sim dut wb_timer_stb", false,-1);
        tracep->declBus(c+77,"servant_sim dut wb_timer_rdt", false,-1, 31,0);
        tracep->declBus(c+78,"servant_sim dut wb_ext_adr", false,-1, 31,0);
        tracep->declBus(c+69,"servant_sim dut wb_ext_dat", false,-1, 31,0);
        tracep->declBus(c+70,"servant_sim dut wb_ext_sel", false,-1, 3,0);
        tracep->declBit(c+73,"servant_sim dut wb_ext_we", false,-1);
        tracep->declBit(c+79,"servant_sim dut wb_ext_stb", false,-1);
        tracep->declBus(c+80,"servant_sim dut wb_ext_rdt", false,-1, 31,0);
        tracep->declBit(c+81,"servant_sim dut wb_ext_ack", false,-1);
        tracep->declBus(c+82,"servant_sim dut rf_waddr", false,-1, 9,0);
        tracep->declBus(c+83,"servant_sim dut rf_wdata", false,-1, 1,0);
        tracep->declBit(c+84,"servant_sim dut rf_wen", false,-1);
        tracep->declBus(c+85,"servant_sim dut rf_raddr", false,-1, 9,0);
        tracep->declBit(c+86,"servant_sim dut rf_ren", false,-1);
        tracep->declBus(c+87,"servant_sim dut rf_rdata", false,-1, 1,0);
        tracep->declBit(c+369,"servant_sim dut servant_mux i_clk", false,-1);
        tracep->declBit(c+370,"servant_sim dut servant_mux i_rst", false,-1);
        tracep->declBus(c+78,"servant_sim dut servant_mux i_wb_cpu_adr", false,-1, 31,0);
        tracep->declBus(c+69,"servant_sim dut servant_mux i_wb_cpu_dat", false,-1, 31,0);
        tracep->declBus(c+70,"servant_sim dut servant_mux i_wb_cpu_sel", false,-1, 3,0);
        tracep->declBit(c+73,"servant_sim dut servant_mux i_wb_cpu_we", false,-1);
        tracep->declBit(c+79,"servant_sim dut servant_mux i_wb_cpu_cyc", false,-1);
        tracep->declBus(c+80,"servant_sim dut servant_mux o_wb_cpu_rdt", false,-1, 31,0);
        tracep->declBit(c+81,"servant_sim dut servant_mux o_wb_cpu_ack", false,-1);
        tracep->declBit(c+72,"servant_sim dut servant_mux o_wb_gpio_dat", false,-1);
        tracep->declBit(c+73,"servant_sim dut servant_mux o_wb_gpio_we", false,-1);
        tracep->declBit(c+74,"servant_sim dut servant_mux o_wb_gpio_cyc", false,-1);
        tracep->declBit(c+75,"servant_sim dut servant_mux i_wb_gpio_rdt", false,-1);
        tracep->declBus(c+69,"servant_sim dut servant_mux o_wb_timer_dat", false,-1, 31,0);
        tracep->declBit(c+73,"servant_sim dut servant_mux o_wb_timer_we", false,-1);
        tracep->declBit(c+76,"servant_sim dut servant_mux o_wb_timer_cyc", false,-1);
        tracep->declBus(c+77,"servant_sim dut servant_mux i_wb_timer_rdt", false,-1, 31,0);
        tracep->declBus(c+379,"servant_sim dut servant_mux sim", false,-1, 31,0);
        tracep->declBus(c+88,"servant_sim dut servant_mux s", false,-1, 1,0);
        tracep->declBus(c+388,"servant_sim dut timer WIDTH", false,-1, 31,0);
        tracep->declBus(c+381,"servant_sim dut timer RESET_STRATEGY", false,-1, 31,0);
        tracep->declBus(c+379,"servant_sim dut timer DIVIDER", false,-1, 31,0);
        tracep->declBit(c+369,"servant_sim dut timer i_clk", false,-1);
        tracep->declBit(c+370,"servant_sim dut timer i_rst", false,-1);
        tracep->declBit(c+68,"servant_sim dut timer o_irq", false,-1);
        tracep->declBus(c+69,"servant_sim dut timer i_wb_dat", false,-1, 31,0);
        tracep->declBit(c+73,"servant_sim dut timer i_wb_we", false,-1);
        tracep->declBit(c+76,"servant_sim dut timer i_wb_cyc", false,-1);
        tracep->declBus(c+77,"servant_sim dut timer o_wb_dat", false,-1, 31,0);
        tracep->declBus(c+389,"servant_sim dut timer HIGH", false,-1, 31,0);
        tracep->declBus(c+77,"servant_sim dut timer mtime", false,-1, 31,0);
        tracep->declBus(c+89,"servant_sim dut timer mtimecmp", false,-1, 31,0);
        tracep->declBus(c+77,"servant_sim dut timer mtimeslice", false,-1, 31,0);
        tracep->declBit(c+369,"servant_sim dut gpio i_wb_clk", false,-1);
        tracep->declBit(c+72,"servant_sim dut gpio i_wb_dat", false,-1);
        tracep->declBit(c+73,"servant_sim dut gpio i_wb_we", false,-1);
        tracep->declBit(c+74,"servant_sim dut gpio i_wb_cyc", false,-1);
        tracep->declBit(c+75,"servant_sim dut gpio o_wb_rdt", false,-1);
        tracep->declBit(c+67,"servant_sim dut gpio o_gpio", false,-1);
        tracep->declBus(c+386,"servant_sim dut rf_ram width", false,-1, 31,0);
        tracep->declBus(c+385,"servant_sim dut rf_ram csr_regs", false,-1, 31,0);
        tracep->declBus(c+390,"servant_sim dut rf_ram depth", false,-1, 31,0);
        tracep->declBit(c+369,"servant_sim dut rf_ram i_clk", false,-1);
        tracep->declBus(c+82,"servant_sim dut rf_ram i_waddr", false,-1, 9,0);
        tracep->declBus(c+83,"servant_sim dut rf_ram i_wdata", false,-1, 1,0);
        tracep->declBit(c+84,"servant_sim dut rf_ram i_wen", false,-1);
        tracep->declBus(c+85,"servant_sim dut rf_ram i_raddr", false,-1, 9,0);
        tracep->declBit(c+86,"servant_sim dut rf_ram i_ren", false,-1);
        tracep->declBus(c+87,"servant_sim dut rf_ram o_rdata", false,-1, 1,0);
        tracep->declBus(c+90,"servant_sim dut rf_ram rdata", false,-1, 1,0);
        tracep->declBit(c+91,"servant_sim dut rf_ram regzero", false,-1);
        tracep->declBus(c+378,"servant_sim dut cpu width", false,-1, 31,0);
        tracep->declBus(c+391,"servant_sim dut cpu reset_pc", false,-1, 31,0);
        tracep->declBus(c+381,"servant_sim dut cpu reset_strategy", false,-1, 31,0);
        tracep->declBus(c+386,"servant_sim dut cpu rf_width", false,-1, 31,0);
        tracep->declBus(c+382,"servant_sim dut cpu sim", false,-1, 0,0);
        tracep->declBus(c+382,"servant_sim dut cpu debug", false,-1, 0,0);
        tracep->declBus(c+377,"servant_sim dut cpu with_c", false,-1, 0,0);
        tracep->declBus(c+382,"servant_sim dut cpu with_csr", false,-1, 0,0);
        tracep->declBus(c+377,"servant_sim dut cpu with_mdu", false,-1, 0,0);
        tracep->declBus(c+379,"servant_sim dut cpu B", false,-1, 31,0);
        tracep->declBus(c+392,"servant_sim dut cpu regs", false,-1, 31,0);
        tracep->declBus(c+387,"servant_sim dut cpu rf_l2d", false,-1, 31,0);
        tracep->declBit(c+369,"servant_sim dut cpu i_clk", false,-1);
        tracep->declBit(c+370,"servant_sim dut cpu i_rst", false,-1);
        tracep->declBit(c+68,"servant_sim dut cpu i_timer_irq", false,-1);
        tracep->declBus(c+360,"servant_sim dut cpu o_wb_mem_adr", false,-1, 31,0);
        tracep->declBus(c+69,"servant_sim dut cpu o_wb_mem_dat", false,-1, 31,0);
        tracep->declBus(c+70,"servant_sim dut cpu o_wb_mem_sel", false,-1, 3,0);
        tracep->declBit(c+374,"servant_sim dut cpu o_wb_mem_we", false,-1);
        tracep->declBit(c+361,"servant_sim dut cpu o_wb_mem_stb", false,-1);
        tracep->declBus(c+71,"servant_sim dut cpu i_wb_mem_rdt", false,-1, 31,0);
        tracep->declBit(c+66,"servant_sim dut cpu i_wb_mem_ack", false,-1);
        tracep->declBus(c+78,"servant_sim dut cpu o_wb_ext_adr", false,-1, 31,0);
        tracep->declBus(c+69,"servant_sim dut cpu o_wb_ext_dat", false,-1, 31,0);
        tracep->declBus(c+70,"servant_sim dut cpu o_wb_ext_sel", false,-1, 3,0);
        tracep->declBit(c+73,"servant_sim dut cpu o_wb_ext_we", false,-1);
        tracep->declBit(c+79,"servant_sim dut cpu o_wb_ext_stb", false,-1);
        tracep->declBus(c+80,"servant_sim dut cpu i_wb_ext_rdt", false,-1, 31,0);
        tracep->declBit(c+81,"servant_sim dut cpu i_wb_ext_ack", false,-1);
        tracep->declBus(c+82,"servant_sim dut cpu o_rf_waddr", false,-1, 9,0);
        tracep->declBus(c+83,"servant_sim dut cpu o_rf_wdata", false,-1, 1,0);
        tracep->declBit(c+84,"servant_sim dut cpu o_rf_wen", false,-1);
        tracep->declBus(c+85,"servant_sim dut cpu o_rf_raddr", false,-1, 9,0);
        tracep->declBus(c+87,"servant_sim dut cpu i_rf_rdata", false,-1, 1,0);
        tracep->declBit(c+86,"servant_sim dut cpu o_rf_ren", false,-1);
        tracep->declBus(c+92,"servant_sim dut cpu wb_ibus_adr", false,-1, 31,0);
        tracep->declBit(c+362,"servant_sim dut cpu wb_ibus_stb", false,-1);
        tracep->declBus(c+71,"servant_sim dut cpu wb_ibus_rdt", false,-1, 31,0);
        tracep->declBit(c+363,"servant_sim dut cpu wb_ibus_ack", false,-1);
        tracep->declBus(c+78,"servant_sim dut cpu wb_dbus_adr", false,-1, 31,0);
        tracep->declBus(c+69,"servant_sim dut cpu wb_dbus_dat", false,-1, 31,0);
        tracep->declBus(c+70,"servant_sim dut cpu wb_dbus_sel", false,-1, 3,0);
        tracep->declBit(c+73,"servant_sim dut cpu wb_dbus_we", false,-1);
        tracep->declBit(c+93,"servant_sim dut cpu wb_dbus_stb", false,-1);
        tracep->declBus(c+94,"servant_sim dut cpu wb_dbus_rdt", false,-1, 31,0);
        tracep->declBit(c+364,"servant_sim dut cpu wb_dbus_ack", false,-1);
        tracep->declBus(c+78,"servant_sim dut cpu wb_dmem_adr", false,-1, 31,0);
        tracep->declBus(c+69,"servant_sim dut cpu wb_dmem_dat", false,-1, 31,0);
        tracep->declBus(c+70,"servant_sim dut cpu wb_dmem_sel", false,-1, 3,0);
        tracep->declBit(c+73,"servant_sim dut cpu wb_dmem_we", false,-1);
        tracep->declBit(c+95,"servant_sim dut cpu wb_dmem_stb", false,-1);
        tracep->declBus(c+71,"servant_sim dut cpu wb_dmem_rdt", false,-1, 31,0);
        tracep->declBit(c+375,"servant_sim dut cpu wb_dmem_ack", false,-1);
        tracep->declBit(c+365,"servant_sim dut cpu rf_wreq", false,-1);
        tracep->declBit(c+366,"servant_sim dut cpu rf_rreq", false,-1);
        tracep->declBus(c+96,"servant_sim dut cpu wreg0", false,-1, 5,0);
        tracep->declBus(c+97,"servant_sim dut cpu wreg1", false,-1, 5,0);
        tracep->declBit(c+98,"servant_sim dut cpu wen0", false,-1);
        tracep->declBit(c+99,"servant_sim dut cpu wen1", false,-1);
        tracep->declBus(c+100,"servant_sim dut cpu wdata0", false,-1, 0,0);
        tracep->declBus(c+101,"servant_sim dut cpu wdata1", false,-1, 0,0);
        tracep->declBus(c+102,"servant_sim dut cpu rreg0", false,-1, 5,0);
        tracep->declBus(c+103,"servant_sim dut cpu rreg1", false,-1, 5,0);
        tracep->declBit(c+376,"servant_sim dut cpu rf_ready", false,-1);
        tracep->declBus(c+104,"servant_sim dut cpu rdata0", false,-1, 0,0);
        tracep->declBus(c+105,"servant_sim dut cpu rdata1", false,-1, 0,0);
        tracep->declBus(c+106,"servant_sim dut cpu mdu_rs1", false,-1, 31,0);
        tracep->declBus(c+69,"servant_sim dut cpu mdu_rs2", false,-1, 31,0);
        tracep->declBus(c+107,"servant_sim dut cpu mdu_op", false,-1, 2,0);
        tracep->declBit(c+393,"servant_sim dut cpu mdu_valid", false,-1);
        tracep->declBus(c+391,"servant_sim dut cpu mdu_rd", false,-1, 31,0);
        tracep->declBit(c+393,"servant_sim dut cpu mdu_ready", false,-1);
        tracep->declBus(c+382,"servant_sim dut cpu mux sim", false,-1, 0,0);
        tracep->declBus(c+394,"servant_sim dut cpu mux sim_sig_adr", false,-1, 31,0);
        tracep->declBus(c+395,"servant_sim dut cpu mux sim_halt_adr", false,-1, 31,0);
        tracep->declBit(c+369,"servant_sim dut cpu mux i_clk", false,-1);
        tracep->declBit(c+370,"servant_sim dut cpu mux i_rst", false,-1);
        tracep->declBus(c+78,"servant_sim dut cpu mux i_wb_cpu_adr", false,-1, 31,0);
        tracep->declBus(c+69,"servant_sim dut cpu mux i_wb_cpu_dat", false,-1, 31,0);
        tracep->declBus(c+70,"servant_sim dut cpu mux i_wb_cpu_sel", false,-1, 3,0);
        tracep->declBit(c+73,"servant_sim dut cpu mux i_wb_cpu_we", false,-1);
        tracep->declBit(c+93,"servant_sim dut cpu mux i_wb_cpu_stb", false,-1);
        tracep->declBus(c+94,"servant_sim dut cpu mux o_wb_cpu_rdt", false,-1, 31,0);
        tracep->declBit(c+364,"servant_sim dut cpu mux o_wb_cpu_ack", false,-1);
        tracep->declBus(c+78,"servant_sim dut cpu mux o_wb_mem_adr", false,-1, 31,0);
        tracep->declBus(c+69,"servant_sim dut cpu mux o_wb_mem_dat", false,-1, 31,0);
        tracep->declBus(c+70,"servant_sim dut cpu mux o_wb_mem_sel", false,-1, 3,0);
        tracep->declBit(c+73,"servant_sim dut cpu mux o_wb_mem_we", false,-1);
        tracep->declBit(c+95,"servant_sim dut cpu mux o_wb_mem_stb", false,-1);
        tracep->declBus(c+71,"servant_sim dut cpu mux i_wb_mem_rdt", false,-1, 31,0);
        tracep->declBit(c+375,"servant_sim dut cpu mux i_wb_mem_ack", false,-1);
        tracep->declBus(c+78,"servant_sim dut cpu mux o_wb_ext_adr", false,-1, 31,0);
        tracep->declBus(c+69,"servant_sim dut cpu mux o_wb_ext_dat", false,-1, 31,0);
        tracep->declBus(c+70,"servant_sim dut cpu mux o_wb_ext_sel", false,-1, 3,0);
        tracep->declBit(c+73,"servant_sim dut cpu mux o_wb_ext_we", false,-1);
        tracep->declBit(c+79,"servant_sim dut cpu mux o_wb_ext_stb", false,-1);
        tracep->declBus(c+80,"servant_sim dut cpu mux i_wb_ext_rdt", false,-1, 31,0);
        tracep->declBit(c+81,"servant_sim dut cpu mux i_wb_ext_ack", false,-1);
        tracep->declBit(c+108,"servant_sim dut cpu mux sig_en", false,-1);
        tracep->declBit(c+109,"servant_sim dut cpu mux halt_en", false,-1);
        tracep->declBit(c+110,"servant_sim dut cpu mux sim_ack", false,-1);
        tracep->declBit(c+111,"servant_sim dut cpu mux ext", false,-1);
        tracep->declArray(c+33,"servant_sim dut cpu mux genblk1 signature_file", false,-1, 1023,0);
        tracep->declBus(c+65,"servant_sim dut cpu mux genblk1 f", false,-1, 31,0);
        tracep->declBus(c+78,"servant_sim dut cpu arbiter i_wb_cpu_dbus_adr", false,-1, 31,0);
        tracep->declBus(c+69,"servant_sim dut cpu arbiter i_wb_cpu_dbus_dat", false,-1, 31,0);
        tracep->declBus(c+70,"servant_sim dut cpu arbiter i_wb_cpu_dbus_sel", false,-1, 3,0);
        tracep->declBit(c+73,"servant_sim dut cpu arbiter i_wb_cpu_dbus_we", false,-1);
        tracep->declBit(c+95,"servant_sim dut cpu arbiter i_wb_cpu_dbus_stb", false,-1);
        tracep->declBus(c+71,"servant_sim dut cpu arbiter o_wb_cpu_dbus_rdt", false,-1, 31,0);
        tracep->declBit(c+375,"servant_sim dut cpu arbiter o_wb_cpu_dbus_ack", false,-1);
        tracep->declBus(c+92,"servant_sim dut cpu arbiter i_wb_cpu_ibus_adr", false,-1, 31,0);
        tracep->declBit(c+362,"servant_sim dut cpu arbiter i_wb_cpu_ibus_stb", false,-1);
        tracep->declBus(c+71,"servant_sim dut cpu arbiter o_wb_cpu_ibus_rdt", false,-1, 31,0);
        tracep->declBit(c+363,"servant_sim dut cpu arbiter o_wb_cpu_ibus_ack", false,-1);
        tracep->declBus(c+360,"servant_sim dut cpu arbiter o_wb_mem_adr", false,-1, 31,0);
        tracep->declBus(c+69,"servant_sim dut cpu arbiter o_wb_mem_dat", false,-1, 31,0);
        tracep->declBus(c+70,"servant_sim dut cpu arbiter o_wb_mem_sel", false,-1, 3,0);
        tracep->declBit(c+374,"servant_sim dut cpu arbiter o_wb_mem_we", false,-1);
        tracep->declBit(c+361,"servant_sim dut cpu arbiter o_wb_mem_stb", false,-1);
        tracep->declBus(c+71,"servant_sim dut cpu arbiter i_wb_mem_rdt", false,-1, 31,0);
        tracep->declBit(c+66,"servant_sim dut cpu arbiter i_wb_mem_ack", false,-1);
        tracep->declBus(c+386,"servant_sim dut cpu rf_ram_if width", false,-1, 31,0);
        tracep->declBus(c+378,"servant_sim dut cpu rf_ram_if W", false,-1, 31,0);
        tracep->declBus(c+381,"servant_sim dut cpu rf_ram_if reset_strategy", false,-1, 31,0);
        tracep->declBus(c+385,"servant_sim dut cpu rf_ram_if csr_regs", false,-1, 31,0);
        tracep->declBus(c+379,"servant_sim dut cpu rf_ram_if B", false,-1, 31,0);
        tracep->declBus(c+396,"servant_sim dut cpu rf_ram_if raw", false,-1, 31,0);
        tracep->declBus(c+378,"servant_sim dut cpu rf_ram_if l2w", false,-1, 31,0);
        tracep->declBus(c+387,"servant_sim dut cpu rf_ram_if aw", false,-1, 31,0);
        tracep->declBit(c+369,"servant_sim dut cpu rf_ram_if i_clk", false,-1);
        tracep->declBit(c+370,"servant_sim dut cpu rf_ram_if i_rst", false,-1);
        tracep->declBit(c+365,"servant_sim dut cpu rf_ram_if i_wreq", false,-1);
        tracep->declBit(c+366,"servant_sim dut cpu rf_ram_if i_rreq", false,-1);
        tracep->declBit(c+376,"servant_sim dut cpu rf_ram_if o_ready", false,-1);
        tracep->declBus(c+96,"servant_sim dut cpu rf_ram_if i_wreg0", false,-1, 5,0);
        tracep->declBus(c+97,"servant_sim dut cpu rf_ram_if i_wreg1", false,-1, 5,0);
        tracep->declBit(c+98,"servant_sim dut cpu rf_ram_if i_wen0", false,-1);
        tracep->declBit(c+99,"servant_sim dut cpu rf_ram_if i_wen1", false,-1);
        tracep->declBus(c+100,"servant_sim dut cpu rf_ram_if i_wdata0", false,-1, 0,0);
        tracep->declBus(c+101,"servant_sim dut cpu rf_ram_if i_wdata1", false,-1, 0,0);
        tracep->declBus(c+102,"servant_sim dut cpu rf_ram_if i_rreg0", false,-1, 5,0);
        tracep->declBus(c+103,"servant_sim dut cpu rf_ram_if i_rreg1", false,-1, 5,0);
        tracep->declBus(c+104,"servant_sim dut cpu rf_ram_if o_rdata0", false,-1, 0,0);
        tracep->declBus(c+105,"servant_sim dut cpu rf_ram_if o_rdata1", false,-1, 0,0);
        tracep->declBus(c+82,"servant_sim dut cpu rf_ram_if o_waddr", false,-1, 9,0);
        tracep->declBus(c+83,"servant_sim dut cpu rf_ram_if o_wdata", false,-1, 1,0);
        tracep->declBit(c+84,"servant_sim dut cpu rf_ram_if o_wen", false,-1);
        tracep->declBus(c+85,"servant_sim dut cpu rf_ram_if o_raddr", false,-1, 9,0);
        tracep->declBit(c+86,"servant_sim dut cpu rf_ram_if o_ren", false,-1);
        tracep->declBus(c+87,"servant_sim dut cpu rf_ram_if i_rdata", false,-1, 1,0);
        tracep->declBus(c+386,"servant_sim dut cpu rf_ram_if ratio", false,-1, 31,0);
        tracep->declBus(c+397,"servant_sim dut cpu rf_ram_if CMSB", false,-1, 31,0);
        tracep->declBus(c+378,"servant_sim dut cpu rf_ram_if l2r", false,-1, 31,0);
        tracep->declBit(c+112,"servant_sim dut cpu rf_ram_if rgnt", false,-1);
        tracep->declBus(c+113,"servant_sim dut cpu rf_ram_if rcnt", false,-1, 4,0);
        tracep->declBit(c+114,"servant_sim dut cpu rf_ram_if rtrig1", false,-1);
        tracep->declBus(c+115,"servant_sim dut cpu rf_ram_if wcnt", false,-1, 4,0);
        tracep->declBus(c+116,"servant_sim dut cpu rf_ram_if wdata0_r", false,-1, 1,0);
        tracep->declBus(c+117,"servant_sim dut cpu rf_ram_if wdata1_r", false,-1, 2,0);
        tracep->declBit(c+118,"servant_sim dut cpu rf_ram_if wen0_r", false,-1);
        tracep->declBit(c+119,"servant_sim dut cpu rf_ram_if wen1_r", false,-1);
        tracep->declBit(c+114,"servant_sim dut cpu rf_ram_if wtrig0", false,-1);
        tracep->declBit(c+120,"servant_sim dut cpu rf_ram_if wtrig1", false,-1);
        tracep->declBus(c+121,"servant_sim dut cpu rf_ram_if wreg", false,-1, 5,0);
        tracep->declBit(c+122,"servant_sim dut cpu rf_ram_if rtrig0", false,-1);
        tracep->declBus(c+123,"servant_sim dut cpu rf_ram_if rreg", false,-1, 5,0);
        tracep->declBus(c+124,"servant_sim dut cpu rf_ram_if rdata0", false,-1, 1,0);
        tracep->declBus(c+125,"servant_sim dut cpu rf_ram_if rdata1", false,-1, 0,0);
        tracep->declBit(c+86,"servant_sim dut cpu rf_ram_if rgate", false,-1);
        tracep->declBit(c+126,"servant_sim dut cpu rf_ram_if rreq_r", false,-1);
        tracep->declBus(c+378,"servant_sim dut cpu cpu WITH_CSR", false,-1, 31,0);
        tracep->declBus(c+378,"servant_sim dut cpu cpu W", false,-1, 31,0);
        tracep->declBus(c+379,"servant_sim dut cpu cpu B", false,-1, 31,0);
        tracep->declBus(c+382,"servant_sim dut cpu cpu PRE_REGISTER", false,-1, 0,0);
        tracep->declBus(c+381,"servant_sim dut cpu cpu RESET_STRATEGY", false,-1, 31,0);
        tracep->declBus(c+391,"servant_sim dut cpu cpu RESET_PC", false,-1, 31,0);
        tracep->declBus(c+382,"servant_sim dut cpu cpu DEBUG", false,-1, 0,0);
        tracep->declBus(c+377,"servant_sim dut cpu cpu MDU", false,-1, 0,0);
        tracep->declBus(c+377,"servant_sim dut cpu cpu COMPRESSED", false,-1, 0,0);
        tracep->declBus(c+377,"servant_sim dut cpu cpu ALIGN", false,-1, 0,0);
        tracep->declBit(c+369,"servant_sim dut cpu cpu clk", false,-1);
        tracep->declBit(c+370,"servant_sim dut cpu cpu i_rst", false,-1);
        tracep->declBit(c+68,"servant_sim dut cpu cpu i_timer_irq", false,-1);
        tracep->declBit(c+366,"servant_sim dut cpu cpu o_rf_rreq", false,-1);
        tracep->declBit(c+365,"servant_sim dut cpu cpu o_rf_wreq", false,-1);
        tracep->declBit(c+376,"servant_sim dut cpu cpu i_rf_ready", false,-1);
        tracep->declBus(c+96,"servant_sim dut cpu cpu o_wreg0", false,-1, 5,0);
        tracep->declBus(c+97,"servant_sim dut cpu cpu o_wreg1", false,-1, 5,0);
        tracep->declBit(c+98,"servant_sim dut cpu cpu o_wen0", false,-1);
        tracep->declBit(c+99,"servant_sim dut cpu cpu o_wen1", false,-1);
        tracep->declBus(c+100,"servant_sim dut cpu cpu o_wdata0", false,-1, 0,0);
        tracep->declBus(c+101,"servant_sim dut cpu cpu o_wdata1", false,-1, 0,0);
        tracep->declBus(c+102,"servant_sim dut cpu cpu o_rreg0", false,-1, 5,0);
        tracep->declBus(c+103,"servant_sim dut cpu cpu o_rreg1", false,-1, 5,0);
        tracep->declBus(c+104,"servant_sim dut cpu cpu i_rdata0", false,-1, 0,0);
        tracep->declBus(c+105,"servant_sim dut cpu cpu i_rdata1", false,-1, 0,0);
        tracep->declBus(c+92,"servant_sim dut cpu cpu o_ibus_adr", false,-1, 31,0);
        tracep->declBit(c+362,"servant_sim dut cpu cpu o_ibus_cyc", false,-1);
        tracep->declBus(c+71,"servant_sim dut cpu cpu i_ibus_rdt", false,-1, 31,0);
        tracep->declBit(c+363,"servant_sim dut cpu cpu i_ibus_ack", false,-1);
        tracep->declBus(c+78,"servant_sim dut cpu cpu o_dbus_adr", false,-1, 31,0);
        tracep->declBus(c+69,"servant_sim dut cpu cpu o_dbus_dat", false,-1, 31,0);
        tracep->declBus(c+70,"servant_sim dut cpu cpu o_dbus_sel", false,-1, 3,0);
        tracep->declBit(c+73,"servant_sim dut cpu cpu o_dbus_we", false,-1);
        tracep->declBit(c+93,"servant_sim dut cpu cpu o_dbus_cyc", false,-1);
        tracep->declBus(c+94,"servant_sim dut cpu cpu i_dbus_rdt", false,-1, 31,0);
        tracep->declBit(c+364,"servant_sim dut cpu cpu i_dbus_ack", false,-1);
        tracep->declBus(c+107,"servant_sim dut cpu cpu o_ext_funct3", false,-1, 2,0);
        tracep->declBit(c+393,"servant_sim dut cpu cpu i_ext_ready", false,-1);
        tracep->declBus(c+391,"servant_sim dut cpu cpu i_ext_rd", false,-1, 31,0);
        tracep->declBus(c+106,"servant_sim dut cpu cpu o_ext_rs1", false,-1, 31,0);
        tracep->declBus(c+69,"servant_sim dut cpu cpu o_ext_rs2", false,-1, 31,0);
        tracep->declBit(c+393,"servant_sim dut cpu cpu o_mdu_valid", false,-1);
        tracep->declBus(c+127,"servant_sim dut cpu cpu rd_addr", false,-1, 4,0);
        tracep->declBus(c+128,"servant_sim dut cpu cpu rs1_addr", false,-1, 4,0);
        tracep->declBus(c+129,"servant_sim dut cpu cpu rs2_addr", false,-1, 4,0);
        tracep->declBus(c+130,"servant_sim dut cpu cpu immdec_ctrl", false,-1, 3,0);
        tracep->declBus(c+131,"servant_sim dut cpu cpu immdec_en", false,-1, 3,0);
        tracep->declBit(c+132,"servant_sim dut cpu cpu sh_right", false,-1);
        tracep->declBit(c+133,"servant_sim dut cpu cpu bne_or_bge", false,-1);
        tracep->declBit(c+134,"servant_sim dut cpu cpu cond_branch", false,-1);
        tracep->declBit(c+135,"servant_sim dut cpu cpu two_stage_op", false,-1);
        tracep->declBit(c+136,"servant_sim dut cpu cpu e_op", false,-1);
        tracep->declBit(c+137,"servant_sim dut cpu cpu ebreak", false,-1);
        tracep->declBit(c+138,"servant_sim dut cpu cpu branch_op", false,-1);
        tracep->declBit(c+139,"servant_sim dut cpu cpu shift_op", false,-1);
        tracep->declBit(c+140,"servant_sim dut cpu cpu slt_or_branch", false,-1);
        tracep->declBit(c+141,"servant_sim dut cpu cpu rd_op", false,-1);
        tracep->declBit(c+393,"servant_sim dut cpu cpu mdu_op", false,-1);
        tracep->declBit(c+142,"servant_sim dut cpu cpu rd_alu_en", false,-1);
        tracep->declBit(c+143,"servant_sim dut cpu cpu rd_csr_en", false,-1);
        tracep->declBit(c+144,"servant_sim dut cpu cpu rd_mem_en", false,-1);
        tracep->declBus(c+145,"servant_sim dut cpu cpu ctrl_rd", false,-1, 0,0);
        tracep->declBus(c+146,"servant_sim dut cpu cpu alu_rd", false,-1, 0,0);
        tracep->declBus(c+147,"servant_sim dut cpu cpu mem_rd", false,-1, 0,0);
        tracep->declBus(c+148,"servant_sim dut cpu cpu csr_rd", false,-1, 0,0);
        tracep->declBit(c+138,"servant_sim dut cpu cpu mtval_pc", false,-1);
        tracep->declBit(c+149,"servant_sim dut cpu cpu ctrl_pc_en", false,-1);
        tracep->declBit(c+150,"servant_sim dut cpu cpu jump", false,-1);
        tracep->declBit(c+151,"servant_sim dut cpu cpu jal_or_jalr", false,-1);
        tracep->declBit(c+152,"servant_sim dut cpu cpu utype", false,-1);
        tracep->declBit(c+153,"servant_sim dut cpu cpu mret", false,-1);
        tracep->declBus(c+154,"servant_sim dut cpu cpu imm", false,-1, 0,0);
        tracep->declBit(c+155,"servant_sim dut cpu cpu trap", false,-1);
        tracep->declBit(c+156,"servant_sim dut cpu cpu pc_rel", false,-1);
        tracep->declBit(c+393,"servant_sim dut cpu cpu iscomp", false,-1);
        tracep->declBit(c+157,"servant_sim dut cpu cpu init", false,-1);
        tracep->declBit(c+158,"servant_sim dut cpu cpu cnt_en", false,-1);
        tracep->declBit(c+159,"servant_sim dut cpu cpu cnt0to3", false,-1);
        tracep->declBit(c+160,"servant_sim dut cpu cpu cnt12to31", false,-1);
        tracep->declBit(c+161,"servant_sim dut cpu cpu cnt0", false,-1);
        tracep->declBit(c+162,"servant_sim dut cpu cpu cnt1", false,-1);
        tracep->declBit(c+163,"servant_sim dut cpu cpu cnt2", false,-1);
        tracep->declBit(c+164,"servant_sim dut cpu cpu cnt3", false,-1);
        tracep->declBit(c+165,"servant_sim dut cpu cpu cnt7", false,-1);
        tracep->declBit(c+166,"servant_sim dut cpu cpu cnt11", false,-1);
        tracep->declBit(c+167,"servant_sim dut cpu cpu cnt12", false,-1);
        tracep->declBit(c+168,"servant_sim dut cpu cpu cnt_done", false,-1);
        tracep->declBit(c+169,"servant_sim dut cpu cpu bufreg_en", false,-1);
        tracep->declBit(c+170,"servant_sim dut cpu cpu bufreg_sh_signed", false,-1);
        tracep->declBit(c+171,"servant_sim dut cpu cpu bufreg_rs1_en", false,-1);
        tracep->declBit(c+172,"servant_sim dut cpu cpu bufreg_imm_en", false,-1);
        tracep->declBit(c+173,"servant_sim dut cpu cpu bufreg_clr_lsb", false,-1);
        tracep->declBus(c+174,"servant_sim dut cpu cpu bufreg_q", false,-1, 0,0);
        tracep->declBus(c+175,"servant_sim dut cpu cpu bufreg2_q", false,-1, 0,0);
        tracep->declBus(c+94,"servant_sim dut cpu cpu dbus_rdt", false,-1, 31,0);
        tracep->declBit(c+364,"servant_sim dut cpu cpu dbus_ack", false,-1);
        tracep->declBit(c+176,"servant_sim dut cpu cpu alu_sub", false,-1);
        tracep->declBus(c+177,"servant_sim dut cpu cpu alu_bool_op", false,-1, 1,0);
        tracep->declBit(c+178,"servant_sim dut cpu cpu alu_cmp_eq", false,-1);
        tracep->declBit(c+179,"servant_sim dut cpu cpu alu_cmp_sig", false,-1);
        tracep->declBit(c+180,"servant_sim dut cpu cpu alu_cmp", false,-1);
        tracep->declBus(c+181,"servant_sim dut cpu cpu alu_rd_sel", false,-1, 2,0);
        tracep->declBus(c+104,"servant_sim dut cpu cpu rs1", false,-1, 0,0);
        tracep->declBus(c+105,"servant_sim dut cpu cpu rs2", false,-1, 0,0);
        tracep->declBit(c+182,"servant_sim dut cpu cpu rd_en", false,-1);
        tracep->declBus(c+183,"servant_sim dut cpu cpu op_b", false,-1, 0,0);
        tracep->declBit(c+73,"servant_sim dut cpu cpu op_b_sel", false,-1);
        tracep->declBit(c+184,"servant_sim dut cpu cpu mem_signed", false,-1);
        tracep->declBit(c+185,"servant_sim dut cpu cpu mem_word", false,-1);
        tracep->declBit(c+133,"servant_sim dut cpu cpu mem_half", false,-1);
        tracep->declBus(c+186,"servant_sim dut cpu cpu mem_bytecnt", false,-1, 1,0);
        tracep->declBit(c+187,"servant_sim dut cpu cpu sh_done", false,-1);
        tracep->declBit(c+188,"servant_sim dut cpu cpu sh_done_r", false,-1);
        tracep->declBit(c+189,"servant_sim dut cpu cpu byte_valid", false,-1);
        tracep->declBit(c+190,"servant_sim dut cpu cpu mem_misalign", false,-1);
        tracep->declBus(c+191,"servant_sim dut cpu cpu bad_pc", false,-1, 0,0);
        tracep->declBit(c+192,"servant_sim dut cpu cpu csr_mstatus_en", false,-1);
        tracep->declBit(c+193,"servant_sim dut cpu cpu csr_mie_en", false,-1);
        tracep->declBit(c+194,"servant_sim dut cpu cpu csr_mcause_en", false,-1);
        tracep->declBus(c+177,"servant_sim dut cpu cpu csr_source", false,-1, 1,0);
        tracep->declBus(c+195,"servant_sim dut cpu cpu csr_imm", false,-1, 0,0);
        tracep->declBit(c+132,"servant_sim dut cpu cpu csr_d_sel", false,-1);
        tracep->declBit(c+196,"servant_sim dut cpu cpu csr_en", false,-1);
        tracep->declBus(c+197,"servant_sim dut cpu cpu csr_addr", false,-1, 1,0);
        tracep->declBus(c+105,"servant_sim dut cpu cpu csr_pc", false,-1, 0,0);
        tracep->declBit(c+198,"servant_sim dut cpu cpu csr_imm_en", false,-1);
        tracep->declBus(c+199,"servant_sim dut cpu cpu csr_in", false,-1, 0,0);
        tracep->declBus(c+200,"servant_sim dut cpu cpu rf_csr_out", false,-1, 0,0);
        tracep->declBit(c+201,"servant_sim dut cpu cpu dbus_en", false,-1);
        tracep->declBit(c+202,"servant_sim dut cpu cpu new_irq", false,-1);
        tracep->declBus(c+203,"servant_sim dut cpu cpu lsb", false,-1, 1,0);
        tracep->declBus(c+71,"servant_sim dut cpu cpu i_wb_rdt", false,-1, 31,0);
        tracep->declBus(c+92,"servant_sim dut cpu cpu wb_ibus_adr", false,-1, 31,0);
        tracep->declBit(c+362,"servant_sim dut cpu cpu wb_ibus_cyc", false,-1);
        tracep->declBus(c+71,"servant_sim dut cpu cpu wb_ibus_rdt", false,-1, 31,0);
        tracep->declBit(c+363,"servant_sim dut cpu cpu wb_ibus_ack", false,-1);
        tracep->declBus(c+381,"servant_sim dut cpu cpu state RESET_STRATEGY", false,-1, 31,0);
        tracep->declBus(c+382,"servant_sim dut cpu cpu state WITH_CSR", false,-1, 0,0);
        tracep->declBus(c+377,"servant_sim dut cpu cpu state ALIGN", false,-1, 0,0);
        tracep->declBus(c+377,"servant_sim dut cpu cpu state MDU", false,-1, 0,0);
        tracep->declBus(c+378,"servant_sim dut cpu cpu state W", false,-1, 31,0);
        tracep->declBit(c+369,"servant_sim dut cpu cpu state i_clk", false,-1);
        tracep->declBit(c+370,"servant_sim dut cpu cpu state i_rst", false,-1);
        tracep->declBit(c+202,"servant_sim dut cpu cpu state i_new_irq", false,-1);
        tracep->declBit(c+180,"servant_sim dut cpu cpu state i_alu_cmp", false,-1);
        tracep->declBit(c+157,"servant_sim dut cpu cpu state o_init", false,-1);
        tracep->declBit(c+158,"servant_sim dut cpu cpu state o_cnt_en", false,-1);
        tracep->declBit(c+159,"servant_sim dut cpu cpu state o_cnt0to3", false,-1);
        tracep->declBit(c+160,"servant_sim dut cpu cpu state o_cnt12to31", false,-1);
        tracep->declBit(c+161,"servant_sim dut cpu cpu state o_cnt0", false,-1);
        tracep->declBit(c+162,"servant_sim dut cpu cpu state o_cnt1", false,-1);
        tracep->declBit(c+163,"servant_sim dut cpu cpu state o_cnt2", false,-1);
        tracep->declBit(c+164,"servant_sim dut cpu cpu state o_cnt3", false,-1);
        tracep->declBit(c+165,"servant_sim dut cpu cpu state o_cnt7", false,-1);
        tracep->declBit(c+166,"servant_sim dut cpu cpu state o_cnt11", false,-1);
        tracep->declBit(c+167,"servant_sim dut cpu cpu state o_cnt12", false,-1);
        tracep->declBit(c+168,"servant_sim dut cpu cpu state o_cnt_done", false,-1);
        tracep->declBit(c+169,"servant_sim dut cpu cpu state o_bufreg_en", false,-1);
        tracep->declBit(c+149,"servant_sim dut cpu cpu state o_ctrl_pc_en", false,-1);
        tracep->declBit(c+150,"servant_sim dut cpu cpu state o_ctrl_jump", false,-1);
        tracep->declBit(c+155,"servant_sim dut cpu cpu state o_ctrl_trap", false,-1);
        tracep->declBit(c+204,"servant_sim dut cpu cpu state i_ctrl_misalign", false,-1);
        tracep->declBit(c+187,"servant_sim dut cpu cpu state i_sh_done", false,-1);
        tracep->declBit(c+188,"servant_sim dut cpu cpu state i_sh_done_r", false,-1);
        tracep->declBus(c+186,"servant_sim dut cpu cpu state o_mem_bytecnt", false,-1, 1,0);
        tracep->declBit(c+190,"servant_sim dut cpu cpu state i_mem_misalign", false,-1);
        tracep->declBit(c+133,"servant_sim dut cpu cpu state i_bne_or_bge", false,-1);
        tracep->declBit(c+134,"servant_sim dut cpu cpu state i_cond_branch", false,-1);
        tracep->declBit(c+201,"servant_sim dut cpu cpu state i_dbus_en", false,-1);
        tracep->declBit(c+135,"servant_sim dut cpu cpu state i_two_stage_op", false,-1);
        tracep->declBit(c+138,"servant_sim dut cpu cpu state i_branch_op", false,-1);
        tracep->declBit(c+139,"servant_sim dut cpu cpu state i_shift_op", false,-1);
        tracep->declBit(c+132,"servant_sim dut cpu cpu state i_sh_right", false,-1);
        tracep->declBit(c+140,"servant_sim dut cpu cpu state i_slt_or_branch", false,-1);
        tracep->declBit(c+136,"servant_sim dut cpu cpu state i_e_op", false,-1);
        tracep->declBit(c+141,"servant_sim dut cpu cpu state i_rd_op", false,-1);
        tracep->declBit(c+393,"servant_sim dut cpu cpu state i_mdu_op", false,-1);
        tracep->declBit(c+393,"servant_sim dut cpu cpu state o_mdu_valid", false,-1);
        tracep->declBit(c+393,"servant_sim dut cpu cpu state i_mdu_ready", false,-1);
        tracep->declBit(c+93,"servant_sim dut cpu cpu state o_dbus_cyc", false,-1);
        tracep->declBit(c+364,"servant_sim dut cpu cpu state i_dbus_ack", false,-1);
        tracep->declBit(c+362,"servant_sim dut cpu cpu state o_ibus_cyc", false,-1);
        tracep->declBit(c+363,"servant_sim dut cpu cpu state i_ibus_ack", false,-1);
        tracep->declBit(c+366,"servant_sim dut cpu cpu state o_rf_rreq", false,-1);
        tracep->declBit(c+365,"servant_sim dut cpu cpu state o_rf_wreq", false,-1);
        tracep->declBit(c+376,"servant_sim dut cpu cpu state i_rf_ready", false,-1);
        tracep->declBit(c+182,"servant_sim dut cpu cpu state o_rf_rd_en", false,-1);
        tracep->declBit(c+205,"servant_sim dut cpu cpu state stage_two_req", false,-1);
        tracep->declBit(c+206,"servant_sim dut cpu cpu state init_done", false,-1);
        tracep->declBit(c+207,"servant_sim dut cpu cpu state misalign_trap_sync", false,-1);
        tracep->declBus(c+208,"servant_sim dut cpu cpu state o_cnt", false,-1, 4,2);
        tracep->declBus(c+209,"servant_sim dut cpu cpu state cnt_r", false,-1, 3,0);
        tracep->declBit(c+210,"servant_sim dut cpu cpu state ibus_cyc", false,-1);
        tracep->declBit(c+211,"servant_sim dut cpu cpu state take_branch", false,-1);
        tracep->declBus(c+209,"servant_sim dut cpu cpu state gen_cnt_w_eq_1 cnt_lsb", false,-1, 3,0);
        tracep->declBit(c+207,"servant_sim dut cpu cpu state gen_csr misalign_trap_sync_r", false,-1);
        tracep->declBit(c+212,"servant_sim dut cpu cpu state gen_csr trap_pending", false,-1);
        tracep->declBus(c+382,"servant_sim dut cpu cpu decode PRE_REGISTER", false,-1, 0,0);
        tracep->declBus(c+377,"servant_sim dut cpu cpu decode MDU", false,-1, 0,0);
        tracep->declBit(c+369,"servant_sim dut cpu cpu decode clk", false,-1);
        tracep->declBus(c+213,"servant_sim dut cpu cpu decode i_wb_rdt", false,-1, 31,2);
        tracep->declBit(c+363,"servant_sim dut cpu cpu decode i_wb_en", false,-1);
        tracep->declBit(c+132,"servant_sim dut cpu cpu decode o_sh_right", false,-1);
        tracep->declBit(c+133,"servant_sim dut cpu cpu decode o_bne_or_bge", false,-1);
        tracep->declBit(c+134,"servant_sim dut cpu cpu decode o_cond_branch", false,-1);
        tracep->declBit(c+136,"servant_sim dut cpu cpu decode o_e_op", false,-1);
        tracep->declBit(c+137,"servant_sim dut cpu cpu decode o_ebreak", false,-1);
        tracep->declBit(c+138,"servant_sim dut cpu cpu decode o_branch_op", false,-1);
        tracep->declBit(c+139,"servant_sim dut cpu cpu decode o_shift_op", false,-1);
        tracep->declBit(c+140,"servant_sim dut cpu cpu decode o_slt_or_branch", false,-1);
        tracep->declBit(c+141,"servant_sim dut cpu cpu decode o_rd_op", false,-1);
        tracep->declBit(c+135,"servant_sim dut cpu cpu decode o_two_stage_op", false,-1);
        tracep->declBit(c+201,"servant_sim dut cpu cpu decode o_dbus_en", false,-1);
        tracep->declBit(c+393,"servant_sim dut cpu cpu decode o_mdu_op", false,-1);
        tracep->declBus(c+107,"servant_sim dut cpu cpu decode o_ext_funct3", false,-1, 2,0);
        tracep->declBit(c+171,"servant_sim dut cpu cpu decode o_bufreg_rs1_en", false,-1);
        tracep->declBit(c+172,"servant_sim dut cpu cpu decode o_bufreg_imm_en", false,-1);
        tracep->declBit(c+173,"servant_sim dut cpu cpu decode o_bufreg_clr_lsb", false,-1);
        tracep->declBit(c+170,"servant_sim dut cpu cpu decode o_bufreg_sh_signed", false,-1);
        tracep->declBit(c+151,"servant_sim dut cpu cpu decode o_ctrl_jal_or_jalr", false,-1);
        tracep->declBit(c+152,"servant_sim dut cpu cpu decode o_ctrl_utype", false,-1);
        tracep->declBit(c+156,"servant_sim dut cpu cpu decode o_ctrl_pc_rel", false,-1);
        tracep->declBit(c+153,"servant_sim dut cpu cpu decode o_ctrl_mret", false,-1);
        tracep->declBit(c+176,"servant_sim dut cpu cpu decode o_alu_sub", false,-1);
        tracep->declBus(c+177,"servant_sim dut cpu cpu decode o_alu_bool_op", false,-1, 1,0);
        tracep->declBit(c+178,"servant_sim dut cpu cpu decode o_alu_cmp_eq", false,-1);
        tracep->declBit(c+179,"servant_sim dut cpu cpu decode o_alu_cmp_sig", false,-1);
        tracep->declBus(c+181,"servant_sim dut cpu cpu decode o_alu_rd_sel", false,-1, 2,0);
        tracep->declBit(c+184,"servant_sim dut cpu cpu decode o_mem_signed", false,-1);
        tracep->declBit(c+185,"servant_sim dut cpu cpu decode o_mem_word", false,-1);
        tracep->declBit(c+133,"servant_sim dut cpu cpu decode o_mem_half", false,-1);
        tracep->declBit(c+73,"servant_sim dut cpu cpu decode o_mem_cmd", false,-1);
        tracep->declBit(c+196,"servant_sim dut cpu cpu decode o_csr_en", false,-1);
        tracep->declBus(c+197,"servant_sim dut cpu cpu decode o_csr_addr", false,-1, 1,0);
        tracep->declBit(c+192,"servant_sim dut cpu cpu decode o_csr_mstatus_en", false,-1);
        tracep->declBit(c+193,"servant_sim dut cpu cpu decode o_csr_mie_en", false,-1);
        tracep->declBit(c+194,"servant_sim dut cpu cpu decode o_csr_mcause_en", false,-1);
        tracep->declBus(c+177,"servant_sim dut cpu cpu decode o_csr_source", false,-1, 1,0);
        tracep->declBit(c+132,"servant_sim dut cpu cpu decode o_csr_d_sel", false,-1);
        tracep->declBit(c+198,"servant_sim dut cpu cpu decode o_csr_imm_en", false,-1);
        tracep->declBit(c+138,"servant_sim dut cpu cpu decode o_mtval_pc", false,-1);
        tracep->declBus(c+130,"servant_sim dut cpu cpu decode o_immdec_ctrl", false,-1, 3,0);
        tracep->declBus(c+131,"servant_sim dut cpu cpu decode o_immdec_en", false,-1, 3,0);
        tracep->declBit(c+73,"servant_sim dut cpu cpu decode o_op_b_source", false,-1);
        tracep->declBit(c+144,"servant_sim dut cpu cpu decode o_rd_mem_en", false,-1);
        tracep->declBit(c+143,"servant_sim dut cpu cpu decode o_rd_csr_en", false,-1);
        tracep->declBit(c+142,"servant_sim dut cpu cpu decode o_rd_alu_en", false,-1);
        tracep->declBus(c+214,"servant_sim dut cpu cpu decode opcode", false,-1, 4,0);
        tracep->declBus(c+107,"servant_sim dut cpu cpu decode funct3", false,-1, 2,0);
        tracep->declBit(c+137,"servant_sim dut cpu cpu decode op20", false,-1);
        tracep->declBit(c+215,"servant_sim dut cpu cpu decode op21", false,-1);
        tracep->declBit(c+216,"servant_sim dut cpu cpu decode op22", false,-1);
        tracep->declBit(c+217,"servant_sim dut cpu cpu decode op26", false,-1);
        tracep->declBit(c+218,"servant_sim dut cpu cpu decode imm25", false,-1);
        tracep->declBit(c+170,"servant_sim dut cpu cpu decode imm30", false,-1);
        tracep->declBit(c+393,"servant_sim dut cpu cpu decode co_mdu_op", false,-1);
        tracep->declBit(c+135,"servant_sim dut cpu cpu decode co_two_stage_op", false,-1);
        tracep->declBit(c+139,"servant_sim dut cpu cpu decode co_shift_op", false,-1);
        tracep->declBit(c+140,"servant_sim dut cpu cpu decode co_slt_or_branch", false,-1);
        tracep->declBit(c+138,"servant_sim dut cpu cpu decode co_branch_op", false,-1);
        tracep->declBit(c+201,"servant_sim dut cpu cpu decode co_dbus_en", false,-1);
        tracep->declBit(c+138,"servant_sim dut cpu cpu decode co_mtval_pc", false,-1);
        tracep->declBit(c+185,"servant_sim dut cpu cpu decode co_mem_word", false,-1);
        tracep->declBit(c+142,"servant_sim dut cpu cpu decode co_rd_alu_en", false,-1);
        tracep->declBit(c+144,"servant_sim dut cpu cpu decode co_rd_mem_en", false,-1);
        tracep->declBus(c+107,"servant_sim dut cpu cpu decode co_ext_funct3", false,-1, 2,0);
        tracep->declBit(c+171,"servant_sim dut cpu cpu decode co_bufreg_rs1_en", false,-1);
        tracep->declBit(c+172,"servant_sim dut cpu cpu decode co_bufreg_imm_en", false,-1);
        tracep->declBit(c+173,"servant_sim dut cpu cpu decode co_bufreg_clr_lsb", false,-1);
        tracep->declBit(c+134,"servant_sim dut cpu cpu decode co_cond_branch", false,-1);
        tracep->declBit(c+152,"servant_sim dut cpu cpu decode co_ctrl_utype", false,-1);
        tracep->declBit(c+151,"servant_sim dut cpu cpu decode co_ctrl_jal_or_jalr", false,-1);
        tracep->declBit(c+156,"servant_sim dut cpu cpu decode co_ctrl_pc_rel", false,-1);
        tracep->declBit(c+141,"servant_sim dut cpu cpu decode co_rd_op", false,-1);
        tracep->declBit(c+132,"servant_sim dut cpu cpu decode co_sh_right", false,-1);
        tracep->declBit(c+133,"servant_sim dut cpu cpu decode co_bne_or_bge", false,-1);
        tracep->declBit(c+143,"servant_sim dut cpu cpu decode csr_op", false,-1);
        tracep->declBit(c+137,"servant_sim dut cpu cpu decode co_ebreak", false,-1);
        tracep->declBit(c+153,"servant_sim dut cpu cpu decode co_ctrl_mret", false,-1);
        tracep->declBit(c+136,"servant_sim dut cpu cpu decode co_e_op", false,-1);
        tracep->declBit(c+170,"servant_sim dut cpu cpu decode co_bufreg_sh_signed", false,-1);
        tracep->declBit(c+176,"servant_sim dut cpu cpu decode co_alu_sub", false,-1);
        tracep->declBit(c+219,"servant_sim dut cpu cpu decode csr_valid", false,-1);
        tracep->declBit(c+143,"servant_sim dut cpu cpu decode co_rd_csr_en", false,-1);
        tracep->declBit(c+196,"servant_sim dut cpu cpu decode co_csr_en", false,-1);
        tracep->declBit(c+192,"servant_sim dut cpu cpu decode co_csr_mstatus_en", false,-1);
        tracep->declBit(c+193,"servant_sim dut cpu cpu decode co_csr_mie_en", false,-1);
        tracep->declBit(c+194,"servant_sim dut cpu cpu decode co_csr_mcause_en", false,-1);
        tracep->declBus(c+177,"servant_sim dut cpu cpu decode co_csr_source", false,-1, 1,0);
        tracep->declBit(c+132,"servant_sim dut cpu cpu decode co_csr_d_sel", false,-1);
        tracep->declBit(c+198,"servant_sim dut cpu cpu decode co_csr_imm_en", false,-1);
        tracep->declBus(c+197,"servant_sim dut cpu cpu decode co_csr_addr", false,-1, 1,0);
        tracep->declBit(c+178,"servant_sim dut cpu cpu decode co_alu_cmp_eq", false,-1);
        tracep->declBit(c+179,"servant_sim dut cpu cpu decode co_alu_cmp_sig", false,-1);
        tracep->declBit(c+73,"servant_sim dut cpu cpu decode co_mem_cmd", false,-1);
        tracep->declBit(c+184,"servant_sim dut cpu cpu decode co_mem_signed", false,-1);
        tracep->declBit(c+133,"servant_sim dut cpu cpu decode co_mem_half", false,-1);
        tracep->declBus(c+177,"servant_sim dut cpu cpu decode co_alu_bool_op", false,-1, 1,0);
        tracep->declBus(c+130,"servant_sim dut cpu cpu decode co_immdec_ctrl", false,-1, 3,0);
        tracep->declBus(c+131,"servant_sim dut cpu cpu decode co_immdec_en", false,-1, 3,0);
        tracep->declBus(c+181,"servant_sim dut cpu cpu decode co_alu_rd_sel", false,-1, 2,0);
        tracep->declBit(c+73,"servant_sim dut cpu cpu decode co_op_b_source", false,-1);
        tracep->declBus(c+378,"servant_sim dut cpu cpu immdec SHARED_RFADDR_IMM_REGS", false,-1, 31,0);
        tracep->declBit(c+369,"servant_sim dut cpu cpu immdec i_clk", false,-1);
        tracep->declBit(c+158,"servant_sim dut cpu cpu immdec i_cnt_en", false,-1);
        tracep->declBit(c+168,"servant_sim dut cpu cpu immdec i_cnt_done", false,-1);
        tracep->declBus(c+131,"servant_sim dut cpu cpu immdec i_immdec_en", false,-1, 3,0);
        tracep->declBit(c+198,"servant_sim dut cpu cpu immdec i_csr_imm_en", false,-1);
        tracep->declBus(c+130,"servant_sim dut cpu cpu immdec i_ctrl", false,-1, 3,0);
        tracep->declBus(c+127,"servant_sim dut cpu cpu immdec o_rd_addr", false,-1, 4,0);
        tracep->declBus(c+128,"servant_sim dut cpu cpu immdec o_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+129,"servant_sim dut cpu cpu immdec o_rs2_addr", false,-1, 4,0);
        tracep->declBit(c+195,"servant_sim dut cpu cpu immdec o_csr_imm", false,-1);
        tracep->declBit(c+154,"servant_sim dut cpu cpu immdec o_imm", false,-1);
        tracep->declBit(c+363,"servant_sim dut cpu cpu immdec i_wb_en", false,-1);
        tracep->declBus(c+220,"servant_sim dut cpu cpu immdec i_wb_rdt", false,-1, 31,7);
        tracep->declBit(c+221,"servant_sim dut cpu cpu immdec imm31", false,-1);
        tracep->declBus(c+222,"servant_sim dut cpu cpu immdec imm19_12_20", false,-1, 8,0);
        tracep->declBit(c+223,"servant_sim dut cpu cpu immdec imm7", false,-1);
        tracep->declBus(c+224,"servant_sim dut cpu cpu immdec imm30_25", false,-1, 5,0);
        tracep->declBus(c+129,"servant_sim dut cpu cpu immdec imm24_20", false,-1, 4,0);
        tracep->declBus(c+127,"servant_sim dut cpu cpu immdec imm11_7", false,-1, 4,0);
        tracep->declBit(c+225,"servant_sim dut cpu cpu immdec signbit", false,-1);
        tracep->declBus(c+377,"servant_sim dut cpu cpu bufreg MDU", false,-1, 0,0);
        tracep->declBus(c+378,"servant_sim dut cpu cpu bufreg W", false,-1, 31,0);
        tracep->declBus(c+379,"servant_sim dut cpu cpu bufreg B", false,-1, 31,0);
        tracep->declBit(c+369,"servant_sim dut cpu cpu bufreg i_clk", false,-1);
        tracep->declBit(c+161,"servant_sim dut cpu cpu bufreg i_cnt0", false,-1);
        tracep->declBit(c+162,"servant_sim dut cpu cpu bufreg i_cnt1", false,-1);
        tracep->declBit(c+169,"servant_sim dut cpu cpu bufreg i_en", false,-1);
        tracep->declBit(c+157,"servant_sim dut cpu cpu bufreg i_init", false,-1);
        tracep->declBit(c+393,"servant_sim dut cpu cpu bufreg i_mdu_op", false,-1);
        tracep->declBus(c+203,"servant_sim dut cpu cpu bufreg o_lsb", false,-1, 1,0);
        tracep->declBit(c+171,"servant_sim dut cpu cpu bufreg i_rs1_en", false,-1);
        tracep->declBit(c+172,"servant_sim dut cpu cpu bufreg i_imm_en", false,-1);
        tracep->declBit(c+173,"servant_sim dut cpu cpu bufreg i_clr_lsb", false,-1);
        tracep->declBit(c+170,"servant_sim dut cpu cpu bufreg i_sh_signed", false,-1);
        tracep->declBus(c+104,"servant_sim dut cpu cpu bufreg i_rs1", false,-1, 0,0);
        tracep->declBus(c+154,"servant_sim dut cpu cpu bufreg i_imm", false,-1, 0,0);
        tracep->declBus(c+174,"servant_sim dut cpu cpu bufreg o_q", false,-1, 0,0);
        tracep->declBus(c+78,"servant_sim dut cpu cpu bufreg o_dbus_adr", false,-1, 31,0);
        tracep->declBus(c+106,"servant_sim dut cpu cpu bufreg o_ext_rs1", false,-1, 31,0);
        tracep->declBit(c+226,"servant_sim dut cpu cpu bufreg c", false,-1);
        tracep->declBus(c+227,"servant_sim dut cpu cpu bufreg q", false,-1, 0,0);
        tracep->declBus(c+228,"servant_sim dut cpu cpu bufreg c_r", false,-1, 0,0);
        tracep->declBus(c+106,"servant_sim dut cpu cpu bufreg data", false,-1, 31,0);
        tracep->declBus(c+229,"servant_sim dut cpu cpu bufreg clr_lsb", false,-1, 0,0);
        tracep->declBus(c+203,"servant_sim dut cpu cpu bufreg lsb", false,-1, 1,0);
        tracep->declBit(c+369,"servant_sim dut cpu cpu bufreg2 i_clk", false,-1);
        tracep->declBit(c+158,"servant_sim dut cpu cpu bufreg2 i_en", false,-1);
        tracep->declBit(c+157,"servant_sim dut cpu cpu bufreg2 i_init", false,-1);
        tracep->declBit(c+168,"servant_sim dut cpu cpu bufreg2 i_cnt_done", false,-1);
        tracep->declBus(c+203,"servant_sim dut cpu cpu bufreg2 i_lsb", false,-1, 1,0);
        tracep->declBit(c+189,"servant_sim dut cpu cpu bufreg2 i_byte_valid", false,-1);
        tracep->declBit(c+187,"servant_sim dut cpu cpu bufreg2 o_sh_done", false,-1);
        tracep->declBit(c+188,"servant_sim dut cpu cpu bufreg2 o_sh_done_r", false,-1);
        tracep->declBit(c+73,"servant_sim dut cpu cpu bufreg2 i_op_b_sel", false,-1);
        tracep->declBit(c+139,"servant_sim dut cpu cpu bufreg2 i_shift_op", false,-1);
        tracep->declBit(c+105,"servant_sim dut cpu cpu bufreg2 i_rs2", false,-1);
        tracep->declBit(c+154,"servant_sim dut cpu cpu bufreg2 i_imm", false,-1);
        tracep->declBit(c+183,"servant_sim dut cpu cpu bufreg2 o_op_b", false,-1);
        tracep->declBit(c+175,"servant_sim dut cpu cpu bufreg2 o_q", false,-1);
        tracep->declBus(c+69,"servant_sim dut cpu cpu bufreg2 o_dat", false,-1, 31,0);
        tracep->declBit(c+364,"servant_sim dut cpu cpu bufreg2 i_load", false,-1);
        tracep->declBus(c+94,"servant_sim dut cpu cpu bufreg2 i_dat", false,-1, 31,0);
        tracep->declBus(c+69,"servant_sim dut cpu cpu bufreg2 dat", false,-1, 31,0);
        tracep->declBit(c+230,"servant_sim dut cpu cpu bufreg2 dat_en", false,-1);
        tracep->declBus(c+231,"servant_sim dut cpu cpu bufreg2 dat_shamt", false,-1, 5,0);
        tracep->declBus(c+381,"servant_sim dut cpu cpu ctrl RESET_STRATEGY", false,-1, 31,0);
        tracep->declBus(c+391,"servant_sim dut cpu cpu ctrl RESET_PC", false,-1, 31,0);
        tracep->declBus(c+378,"servant_sim dut cpu cpu ctrl WITH_CSR", false,-1, 31,0);
        tracep->declBus(c+378,"servant_sim dut cpu cpu ctrl W", false,-1, 31,0);
        tracep->declBus(c+379,"servant_sim dut cpu cpu ctrl B", false,-1, 31,0);
        tracep->declBit(c+369,"servant_sim dut cpu cpu ctrl clk", false,-1);
        tracep->declBit(c+370,"servant_sim dut cpu cpu ctrl i_rst", false,-1);
        tracep->declBit(c+149,"servant_sim dut cpu cpu ctrl i_pc_en", false,-1);
        tracep->declBit(c+160,"servant_sim dut cpu cpu ctrl i_cnt12to31", false,-1);
        tracep->declBit(c+161,"servant_sim dut cpu cpu ctrl i_cnt0", false,-1);
        tracep->declBit(c+162,"servant_sim dut cpu cpu ctrl i_cnt1", false,-1);
        tracep->declBit(c+163,"servant_sim dut cpu cpu ctrl i_cnt2", false,-1);
        tracep->declBit(c+150,"servant_sim dut cpu cpu ctrl i_jump", false,-1);
        tracep->declBit(c+151,"servant_sim dut cpu cpu ctrl i_jal_or_jalr", false,-1);
        tracep->declBit(c+152,"servant_sim dut cpu cpu ctrl i_utype", false,-1);
        tracep->declBit(c+156,"servant_sim dut cpu cpu ctrl i_pc_rel", false,-1);
        tracep->declBit(c+232,"servant_sim dut cpu cpu ctrl i_trap", false,-1);
        tracep->declBit(c+393,"servant_sim dut cpu cpu ctrl i_iscomp", false,-1);
        tracep->declBus(c+154,"servant_sim dut cpu cpu ctrl i_imm", false,-1, 0,0);
        tracep->declBus(c+174,"servant_sim dut cpu cpu ctrl i_buf", false,-1, 0,0);
        tracep->declBus(c+105,"servant_sim dut cpu cpu ctrl i_csr_pc", false,-1, 0,0);
        tracep->declBus(c+145,"servant_sim dut cpu cpu ctrl o_rd", false,-1, 0,0);
        tracep->declBus(c+191,"servant_sim dut cpu cpu ctrl o_bad_pc", false,-1, 0,0);
        tracep->declBus(c+92,"servant_sim dut cpu cpu ctrl o_ibus_adr", false,-1, 31,0);
        tracep->declBus(c+233,"servant_sim dut cpu cpu ctrl pc_plus_4", false,-1, 0,0);
        tracep->declBit(c+234,"servant_sim dut cpu cpu ctrl pc_plus_4_cy", false,-1);
        tracep->declBit(c+235,"servant_sim dut cpu cpu ctrl pc_plus_4_cy_r", false,-1);
        tracep->declBus(c+235,"servant_sim dut cpu cpu ctrl pc_plus_4_cy_r_w", false,-1, 0,0);
        tracep->declBus(c+236,"servant_sim dut cpu cpu ctrl pc_plus_offset", false,-1, 0,0);
        tracep->declBit(c+237,"servant_sim dut cpu cpu ctrl pc_plus_offset_cy", false,-1);
        tracep->declBit(c+238,"servant_sim dut cpu cpu ctrl pc_plus_offset_cy_r", false,-1);
        tracep->declBus(c+238,"servant_sim dut cpu cpu ctrl pc_plus_offset_cy_r_w", false,-1, 0,0);
        tracep->declBus(c+191,"servant_sim dut cpu cpu ctrl pc_plus_offset_aligned", false,-1, 0,0);
        tracep->declBus(c+239,"servant_sim dut cpu cpu ctrl plus_4", false,-1, 0,0);
        tracep->declBus(c+240,"servant_sim dut cpu cpu ctrl pc", false,-1, 0,0);
        tracep->declBus(c+241,"servant_sim dut cpu cpu ctrl new_pc", false,-1, 0,0);
        tracep->declBus(c+242,"servant_sim dut cpu cpu ctrl offset_a", false,-1, 0,0);
        tracep->declBus(c+243,"servant_sim dut cpu cpu ctrl offset_b", false,-1, 0,0);
        tracep->declBus(c+378,"servant_sim dut cpu cpu alu W", false,-1, 31,0);
        tracep->declBus(c+379,"servant_sim dut cpu cpu alu B", false,-1, 31,0);
        tracep->declBit(c+369,"servant_sim dut cpu cpu alu clk", false,-1);
        tracep->declBit(c+158,"servant_sim dut cpu cpu alu i_en", false,-1);
        tracep->declBit(c+161,"servant_sim dut cpu cpu alu i_cnt0", false,-1);
        tracep->declBit(c+180,"servant_sim dut cpu cpu alu o_cmp", false,-1);
        tracep->declBit(c+176,"servant_sim dut cpu cpu alu i_sub", false,-1);
        tracep->declBus(c+177,"servant_sim dut cpu cpu alu i_bool_op", false,-1, 1,0);
        tracep->declBit(c+178,"servant_sim dut cpu cpu alu i_cmp_eq", false,-1);
        tracep->declBit(c+179,"servant_sim dut cpu cpu alu i_cmp_sig", false,-1);
        tracep->declBus(c+181,"servant_sim dut cpu cpu alu i_rd_sel", false,-1, 2,0);
        tracep->declBus(c+104,"servant_sim dut cpu cpu alu i_rs1", false,-1, 0,0);
        tracep->declBus(c+183,"servant_sim dut cpu cpu alu i_op_b", false,-1, 0,0);
        tracep->declBus(c+174,"servant_sim dut cpu cpu alu i_buf", false,-1, 0,0);
        tracep->declBus(c+146,"servant_sim dut cpu cpu alu o_rd", false,-1, 0,0);
        tracep->declBus(c+244,"servant_sim dut cpu cpu alu result_add", false,-1, 0,0);
        tracep->declBus(c+245,"servant_sim dut cpu cpu alu result_slt", false,-1, 0,0);
        tracep->declBit(c+246,"servant_sim dut cpu cpu alu cmp_r", false,-1);
        tracep->declBit(c+247,"servant_sim dut cpu cpu alu add_cy", false,-1);
        tracep->declBus(c+248,"servant_sim dut cpu cpu alu add_cy_r", false,-1, 0,0);
        tracep->declBit(c+249,"servant_sim dut cpu cpu alu rs1_sx", false,-1);
        tracep->declBit(c+250,"servant_sim dut cpu cpu alu op_b_sx", false,-1);
        tracep->declBus(c+251,"servant_sim dut cpu cpu alu add_b", false,-1, 0,0);
        tracep->declBit(c+252,"servant_sim dut cpu cpu alu result_lt", false,-1);
        tracep->declBit(c+253,"servant_sim dut cpu cpu alu result_eq", false,-1);
        tracep->declBus(c+254,"servant_sim dut cpu cpu alu result_bool", false,-1, 0,0);
        tracep->declBus(c+378,"servant_sim dut cpu cpu rf_if WITH_CSR", false,-1, 31,0);
        tracep->declBus(c+378,"servant_sim dut cpu cpu rf_if W", false,-1, 31,0);
        tracep->declBus(c+379,"servant_sim dut cpu cpu rf_if B", false,-1, 31,0);
        tracep->declBit(c+158,"servant_sim dut cpu cpu rf_if i_cnt_en", false,-1);
        tracep->declBus(c+96,"servant_sim dut cpu cpu rf_if o_wreg0", false,-1, 5,0);
        tracep->declBus(c+97,"servant_sim dut cpu cpu rf_if o_wreg1", false,-1, 5,0);
        tracep->declBit(c+98,"servant_sim dut cpu cpu rf_if o_wen0", false,-1);
        tracep->declBit(c+99,"servant_sim dut cpu cpu rf_if o_wen1", false,-1);
        tracep->declBus(c+100,"servant_sim dut cpu cpu rf_if o_wdata0", false,-1, 0,0);
        tracep->declBus(c+101,"servant_sim dut cpu cpu rf_if o_wdata1", false,-1, 0,0);
        tracep->declBus(c+102,"servant_sim dut cpu cpu rf_if o_rreg0", false,-1, 5,0);
        tracep->declBus(c+103,"servant_sim dut cpu cpu rf_if o_rreg1", false,-1, 5,0);
        tracep->declBus(c+104,"servant_sim dut cpu cpu rf_if i_rdata0", false,-1, 0,0);
        tracep->declBus(c+105,"servant_sim dut cpu cpu rf_if i_rdata1", false,-1, 0,0);
        tracep->declBit(c+155,"servant_sim dut cpu cpu rf_if i_trap", false,-1);
        tracep->declBit(c+153,"servant_sim dut cpu cpu rf_if i_mret", false,-1);
        tracep->declBus(c+240,"servant_sim dut cpu cpu rf_if i_mepc", false,-1, 0,0);
        tracep->declBit(c+138,"servant_sim dut cpu cpu rf_if i_mtval_pc", false,-1);
        tracep->declBus(c+174,"servant_sim dut cpu cpu rf_if i_bufreg_q", false,-1, 0,0);
        tracep->declBus(c+191,"servant_sim dut cpu cpu rf_if i_bad_pc", false,-1, 0,0);
        tracep->declBus(c+105,"servant_sim dut cpu cpu rf_if o_csr_pc", false,-1, 0,0);
        tracep->declBit(c+196,"servant_sim dut cpu cpu rf_if i_csr_en", false,-1);
        tracep->declBus(c+197,"servant_sim dut cpu cpu rf_if i_csr_addr", false,-1, 1,0);
        tracep->declBus(c+199,"servant_sim dut cpu cpu rf_if i_csr", false,-1, 0,0);
        tracep->declBus(c+200,"servant_sim dut cpu cpu rf_if o_csr", false,-1, 0,0);
        tracep->declBit(c+182,"servant_sim dut cpu cpu rf_if i_rd_wen", false,-1);
        tracep->declBus(c+127,"servant_sim dut cpu cpu rf_if i_rd_waddr", false,-1, 4,0);
        tracep->declBus(c+145,"servant_sim dut cpu cpu rf_if i_ctrl_rd", false,-1, 0,0);
        tracep->declBus(c+146,"servant_sim dut cpu cpu rf_if i_alu_rd", false,-1, 0,0);
        tracep->declBit(c+142,"servant_sim dut cpu cpu rf_if i_rd_alu_en", false,-1);
        tracep->declBus(c+148,"servant_sim dut cpu cpu rf_if i_csr_rd", false,-1, 0,0);
        tracep->declBit(c+143,"servant_sim dut cpu cpu rf_if i_rd_csr_en", false,-1);
        tracep->declBus(c+147,"servant_sim dut cpu cpu rf_if i_mem_rd", false,-1, 0,0);
        tracep->declBit(c+144,"servant_sim dut cpu cpu rf_if i_rd_mem_en", false,-1);
        tracep->declBus(c+128,"servant_sim dut cpu cpu rf_if i_rs1_raddr", false,-1, 4,0);
        tracep->declBus(c+104,"servant_sim dut cpu cpu rf_if o_rs1", false,-1, 0,0);
        tracep->declBus(c+129,"servant_sim dut cpu cpu rf_if i_rs2_raddr", false,-1, 4,0);
        tracep->declBus(c+105,"servant_sim dut cpu cpu rf_if o_rs2", false,-1, 0,0);
        tracep->declBit(c+255,"servant_sim dut cpu cpu rf_if rd_wen", false,-1);
        tracep->declBus(c+256,"servant_sim dut cpu cpu rf_if gen_csr rd", false,-1, 0,0);
        tracep->declBus(c+257,"servant_sim dut cpu cpu rf_if gen_csr mtval", false,-1, 0,0);
        tracep->declBit(c+258,"servant_sim dut cpu cpu rf_if gen_csr sel_rs2", false,-1);
        tracep->declBus(c+382,"servant_sim dut cpu cpu mem_if WITH_CSR", false,-1, 0,0);
        tracep->declBus(c+378,"servant_sim dut cpu cpu mem_if W", false,-1, 31,0);
        tracep->declBus(c+379,"servant_sim dut cpu cpu mem_if B", false,-1, 31,0);
        tracep->declBit(c+369,"servant_sim dut cpu cpu mem_if i_clk", false,-1);
        tracep->declBus(c+186,"servant_sim dut cpu cpu mem_if i_bytecnt", false,-1, 1,0);
        tracep->declBus(c+203,"servant_sim dut cpu cpu mem_if i_lsb", false,-1, 1,0);
        tracep->declBit(c+189,"servant_sim dut cpu cpu mem_if o_byte_valid", false,-1);
        tracep->declBit(c+190,"servant_sim dut cpu cpu mem_if o_misalign", false,-1);
        tracep->declBit(c+184,"servant_sim dut cpu cpu mem_if i_signed", false,-1);
        tracep->declBit(c+185,"servant_sim dut cpu cpu mem_if i_word", false,-1);
        tracep->declBit(c+133,"servant_sim dut cpu cpu mem_if i_half", false,-1);
        tracep->declBit(c+393,"servant_sim dut cpu cpu mem_if i_mdu_op", false,-1);
        tracep->declBus(c+175,"servant_sim dut cpu cpu mem_if i_bufreg2_q", false,-1, 0,0);
        tracep->declBus(c+147,"servant_sim dut cpu cpu mem_if o_rd", false,-1, 0,0);
        tracep->declBus(c+70,"servant_sim dut cpu cpu mem_if o_wb_sel", false,-1, 3,0);
        tracep->declBit(c+259,"servant_sim dut cpu cpu mem_if signbit", false,-1);
        tracep->declBit(c+260,"servant_sim dut cpu cpu mem_if dat_valid", false,-1);
        tracep->declBus(c+381,"servant_sim dut cpu cpu gen_csr csr RESET_STRATEGY", false,-1, 31,0);
        tracep->declBus(c+378,"servant_sim dut cpu cpu gen_csr csr W", false,-1, 31,0);
        tracep->declBus(c+379,"servant_sim dut cpu cpu gen_csr csr B", false,-1, 31,0);
        tracep->declBit(c+369,"servant_sim dut cpu cpu gen_csr csr i_clk", false,-1);
        tracep->declBit(c+370,"servant_sim dut cpu cpu gen_csr csr i_rst", false,-1);
        tracep->declBit(c+363,"servant_sim dut cpu cpu gen_csr csr i_trig_irq", false,-1);
        tracep->declBit(c+158,"servant_sim dut cpu cpu gen_csr csr i_en", false,-1);
        tracep->declBit(c+159,"servant_sim dut cpu cpu gen_csr csr i_cnt0to3", false,-1);
        tracep->declBit(c+164,"servant_sim dut cpu cpu gen_csr csr i_cnt3", false,-1);
        tracep->declBit(c+165,"servant_sim dut cpu cpu gen_csr csr i_cnt7", false,-1);
        tracep->declBit(c+166,"servant_sim dut cpu cpu gen_csr csr i_cnt11", false,-1);
        tracep->declBit(c+167,"servant_sim dut cpu cpu gen_csr csr i_cnt12", false,-1);
        tracep->declBit(c+168,"servant_sim dut cpu cpu gen_csr csr i_cnt_done", false,-1);
        tracep->declBit(c+261,"servant_sim dut cpu cpu gen_csr csr i_mem_op", false,-1);
        tracep->declBit(c+68,"servant_sim dut cpu cpu gen_csr csr i_mtip", false,-1);
        tracep->declBit(c+155,"servant_sim dut cpu cpu gen_csr csr i_trap", false,-1);
        tracep->declBit(c+202,"servant_sim dut cpu cpu gen_csr csr o_new_irq", false,-1);
        tracep->declBit(c+136,"servant_sim dut cpu cpu gen_csr csr i_e_op", false,-1);
        tracep->declBit(c+137,"servant_sim dut cpu cpu gen_csr csr i_ebreak", false,-1);
        tracep->declBit(c+73,"servant_sim dut cpu cpu gen_csr csr i_mem_cmd", false,-1);
        tracep->declBit(c+192,"servant_sim dut cpu cpu gen_csr csr i_mstatus_en", false,-1);
        tracep->declBit(c+193,"servant_sim dut cpu cpu gen_csr csr i_mie_en", false,-1);
        tracep->declBit(c+194,"servant_sim dut cpu cpu gen_csr csr i_mcause_en", false,-1);
        tracep->declBus(c+177,"servant_sim dut cpu cpu gen_csr csr i_csr_source", false,-1, 1,0);
        tracep->declBit(c+153,"servant_sim dut cpu cpu gen_csr csr i_mret", false,-1);
        tracep->declBit(c+132,"servant_sim dut cpu cpu gen_csr csr i_csr_d_sel", false,-1);
        tracep->declBus(c+200,"servant_sim dut cpu cpu gen_csr csr i_rf_csr_out", false,-1, 0,0);
        tracep->declBus(c+199,"servant_sim dut cpu cpu gen_csr csr o_csr_in", false,-1, 0,0);
        tracep->declBus(c+195,"servant_sim dut cpu cpu gen_csr csr i_csr_imm", false,-1, 0,0);
        tracep->declBus(c+104,"servant_sim dut cpu cpu gen_csr csr i_rs1", false,-1, 0,0);
        tracep->declBus(c+148,"servant_sim dut cpu cpu gen_csr csr o_q", false,-1, 0,0);
        tracep->declBus(c+398,"servant_sim dut cpu cpu gen_csr csr CSR_SOURCE_CSR", false,-1, 1,0);
        tracep->declBus(c+399,"servant_sim dut cpu cpu gen_csr csr CSR_SOURCE_EXT", false,-1, 1,0);
        tracep->declBus(c+400,"servant_sim dut cpu cpu gen_csr csr CSR_SOURCE_SET", false,-1, 1,0);
        tracep->declBus(c+401,"servant_sim dut cpu cpu gen_csr csr CSR_SOURCE_CLR", false,-1, 1,0);
        tracep->declBit(c+262,"servant_sim dut cpu cpu gen_csr csr mstatus_mie", false,-1);
        tracep->declBit(c+263,"servant_sim dut cpu cpu gen_csr csr mstatus_mpie", false,-1);
        tracep->declBit(c+264,"servant_sim dut cpu cpu gen_csr csr mie_mtie", false,-1);
        tracep->declBit(c+265,"servant_sim dut cpu cpu gen_csr csr mcause31", false,-1);
        tracep->declBus(c+266,"servant_sim dut cpu cpu gen_csr csr mcause3_0", false,-1, 3,0);
        tracep->declBus(c+267,"servant_sim dut cpu cpu gen_csr csr mcause", false,-1, 0,0);
        tracep->declBus(c+199,"servant_sim dut cpu cpu gen_csr csr csr_in", false,-1, 0,0);
        tracep->declBus(c+148,"servant_sim dut cpu cpu gen_csr csr csr_out", false,-1, 0,0);
        tracep->declBit(c+268,"servant_sim dut cpu cpu gen_csr csr timer_irq_r", false,-1);
        tracep->declBus(c+269,"servant_sim dut cpu cpu gen_csr csr d", false,-1, 0,0);
        tracep->declBus(c+270,"servant_sim dut cpu cpu gen_csr csr mstatus", false,-1, 0,0);
        tracep->declBit(c+271,"servant_sim dut cpu cpu gen_csr csr timer_irq", false,-1);
        tracep->declBus(c+378,"servant_sim dut cpu cpu gen_debug debug W", false,-1, 31,0);
        tracep->declBus(c+391,"servant_sim dut cpu cpu gen_debug debug RESET_PC", false,-1, 31,0);
        tracep->declBus(c+379,"servant_sim dut cpu cpu gen_debug debug B", false,-1, 31,0);
        tracep->declBit(c+369,"servant_sim dut cpu cpu gen_debug debug i_clk", false,-1);
        tracep->declBit(c+370,"servant_sim dut cpu cpu gen_debug debug i_rst", false,-1);
        tracep->declBus(c+71,"servant_sim dut cpu cpu gen_debug debug i_ibus_rdt", false,-1, 31,0);
        tracep->declBit(c+363,"servant_sim dut cpu cpu gen_debug debug i_ibus_ack", false,-1);
        tracep->declBus(c+127,"servant_sim dut cpu cpu gen_debug debug i_rd_addr", false,-1, 4,0);
        tracep->declBit(c+158,"servant_sim dut cpu cpu gen_debug debug i_cnt_en", false,-1);
        tracep->declBus(c+199,"servant_sim dut cpu cpu gen_debug debug i_csr_in", false,-1, 0,0);
        tracep->declBit(c+192,"servant_sim dut cpu cpu gen_debug debug i_csr_mstatus_en", false,-1);
        tracep->declBit(c+193,"servant_sim dut cpu cpu gen_debug debug i_csr_mie_en", false,-1);
        tracep->declBit(c+194,"servant_sim dut cpu cpu gen_debug debug i_csr_mcause_en", false,-1);
        tracep->declBit(c+196,"servant_sim dut cpu cpu gen_debug debug i_csr_en", false,-1);
        tracep->declBus(c+197,"servant_sim dut cpu cpu gen_debug debug i_csr_addr", false,-1, 1,0);
        tracep->declBit(c+98,"servant_sim dut cpu cpu gen_debug debug i_wen0", false,-1);
        tracep->declBus(c+100,"servant_sim dut cpu cpu gen_debug debug i_wdata0", false,-1, 0,0);
        tracep->declBit(c+168,"servant_sim dut cpu cpu gen_debug debug i_cnt_done", false,-1);
        tracep->declBit(c+272,"servant_sim dut cpu cpu gen_debug debug update_rd", false,-1);
        tracep->declBus(c+273,"servant_sim dut cpu cpu gen_debug debug dbg_rd", false,-1, 31,0);
        tracep->declBus(c+274,"servant_sim dut cpu cpu gen_debug debug dbg_csr", false,-1, 31,0);
        tracep->declBus(c+275,"servant_sim dut cpu cpu gen_debug debug dbg_mstatus", false,-1, 31,0);
        tracep->declBus(c+276,"servant_sim dut cpu cpu gen_debug debug dbg_mie", false,-1, 31,0);
        tracep->declBus(c+277,"servant_sim dut cpu cpu gen_debug debug dbg_mcause", false,-1, 31,0);
        tracep->declBus(c+278,"servant_sim dut cpu cpu gen_debug debug dbg_mscratch", false,-1, 31,0);
        tracep->declBus(c+279,"servant_sim dut cpu cpu gen_debug debug dbg_mtvec", false,-1, 31,0);
        tracep->declBus(c+280,"servant_sim dut cpu cpu gen_debug debug dbg_mepc", false,-1, 31,0);
        tracep->declBus(c+281,"servant_sim dut cpu cpu gen_debug debug dbg_mtval", false,-1, 31,0);
        tracep->declBus(c+282,"servant_sim dut cpu cpu gen_debug debug x1", false,-1, 31,0);
        tracep->declBus(c+283,"servant_sim dut cpu cpu gen_debug debug x2", false,-1, 31,0);
        tracep->declBus(c+284,"servant_sim dut cpu cpu gen_debug debug x3", false,-1, 31,0);
        tracep->declBus(c+285,"servant_sim dut cpu cpu gen_debug debug x4", false,-1, 31,0);
        tracep->declBus(c+286,"servant_sim dut cpu cpu gen_debug debug x5", false,-1, 31,0);
        tracep->declBus(c+287,"servant_sim dut cpu cpu gen_debug debug x6", false,-1, 31,0);
        tracep->declBus(c+288,"servant_sim dut cpu cpu gen_debug debug x7", false,-1, 31,0);
        tracep->declBus(c+289,"servant_sim dut cpu cpu gen_debug debug x8", false,-1, 31,0);
        tracep->declBus(c+290,"servant_sim dut cpu cpu gen_debug debug x9", false,-1, 31,0);
        tracep->declBus(c+291,"servant_sim dut cpu cpu gen_debug debug x10", false,-1, 31,0);
        tracep->declBus(c+292,"servant_sim dut cpu cpu gen_debug debug x11", false,-1, 31,0);
        tracep->declBus(c+293,"servant_sim dut cpu cpu gen_debug debug x12", false,-1, 31,0);
        tracep->declBus(c+294,"servant_sim dut cpu cpu gen_debug debug x13", false,-1, 31,0);
        tracep->declBus(c+295,"servant_sim dut cpu cpu gen_debug debug x14", false,-1, 31,0);
        tracep->declBus(c+296,"servant_sim dut cpu cpu gen_debug debug x15", false,-1, 31,0);
        tracep->declBus(c+297,"servant_sim dut cpu cpu gen_debug debug x16", false,-1, 31,0);
        tracep->declBus(c+298,"servant_sim dut cpu cpu gen_debug debug x17", false,-1, 31,0);
        tracep->declBus(c+299,"servant_sim dut cpu cpu gen_debug debug x18", false,-1, 31,0);
        tracep->declBus(c+300,"servant_sim dut cpu cpu gen_debug debug x19", false,-1, 31,0);
        tracep->declBus(c+301,"servant_sim dut cpu cpu gen_debug debug x20", false,-1, 31,0);
        tracep->declBus(c+302,"servant_sim dut cpu cpu gen_debug debug x21", false,-1, 31,0);
        tracep->declBus(c+303,"servant_sim dut cpu cpu gen_debug debug x22", false,-1, 31,0);
        tracep->declBus(c+304,"servant_sim dut cpu cpu gen_debug debug x23", false,-1, 31,0);
        tracep->declBus(c+305,"servant_sim dut cpu cpu gen_debug debug x24", false,-1, 31,0);
        tracep->declBus(c+306,"servant_sim dut cpu cpu gen_debug debug x25", false,-1, 31,0);
        tracep->declBus(c+307,"servant_sim dut cpu cpu gen_debug debug x26", false,-1, 31,0);
        tracep->declBus(c+308,"servant_sim dut cpu cpu gen_debug debug x27", false,-1, 31,0);
        tracep->declBus(c+309,"servant_sim dut cpu cpu gen_debug debug x28", false,-1, 31,0);
        tracep->declBus(c+310,"servant_sim dut cpu cpu gen_debug debug x29", false,-1, 31,0);
        tracep->declBus(c+311,"servant_sim dut cpu cpu gen_debug debug x30", false,-1, 31,0);
        tracep->declBus(c+312,"servant_sim dut cpu cpu gen_debug debug x31", false,-1, 31,0);
        tracep->declBit(c+313,"servant_sim dut cpu cpu gen_debug debug LUI", false,-1);
        tracep->declBit(c+314,"servant_sim dut cpu cpu gen_debug debug AUIPC", false,-1);
        tracep->declBit(c+315,"servant_sim dut cpu cpu gen_debug debug JAL", false,-1);
        tracep->declBit(c+316,"servant_sim dut cpu cpu gen_debug debug JALR", false,-1);
        tracep->declBit(c+317,"servant_sim dut cpu cpu gen_debug debug BEQ", false,-1);
        tracep->declBit(c+318,"servant_sim dut cpu cpu gen_debug debug BNE", false,-1);
        tracep->declBit(c+319,"servant_sim dut cpu cpu gen_debug debug BLT", false,-1);
        tracep->declBit(c+320,"servant_sim dut cpu cpu gen_debug debug BGE", false,-1);
        tracep->declBit(c+321,"servant_sim dut cpu cpu gen_debug debug BLTU", false,-1);
        tracep->declBit(c+322,"servant_sim dut cpu cpu gen_debug debug BGEU", false,-1);
        tracep->declBit(c+323,"servant_sim dut cpu cpu gen_debug debug LB", false,-1);
        tracep->declBit(c+324,"servant_sim dut cpu cpu gen_debug debug LH", false,-1);
        tracep->declBit(c+325,"servant_sim dut cpu cpu gen_debug debug LW", false,-1);
        tracep->declBit(c+326,"servant_sim dut cpu cpu gen_debug debug LBU", false,-1);
        tracep->declBit(c+327,"servant_sim dut cpu cpu gen_debug debug LHU", false,-1);
        tracep->declBit(c+328,"servant_sim dut cpu cpu gen_debug debug SB", false,-1);
        tracep->declBit(c+329,"servant_sim dut cpu cpu gen_debug debug SH", false,-1);
        tracep->declBit(c+330,"servant_sim dut cpu cpu gen_debug debug SW", false,-1);
        tracep->declBit(c+331,"servant_sim dut cpu cpu gen_debug debug ADDI", false,-1);
        tracep->declBit(c+332,"servant_sim dut cpu cpu gen_debug debug SLTI", false,-1);
        tracep->declBit(c+333,"servant_sim dut cpu cpu gen_debug debug SLTIU", false,-1);
        tracep->declBit(c+334,"servant_sim dut cpu cpu gen_debug debug XORI", false,-1);
        tracep->declBit(c+335,"servant_sim dut cpu cpu gen_debug debug ORI", false,-1);
        tracep->declBit(c+336,"servant_sim dut cpu cpu gen_debug debug ANDI", false,-1);
        tracep->declBit(c+337,"servant_sim dut cpu cpu gen_debug debug SLLI", false,-1);
        tracep->declBit(c+338,"servant_sim dut cpu cpu gen_debug debug SRLI", false,-1);
        tracep->declBit(c+339,"servant_sim dut cpu cpu gen_debug debug SRAI", false,-1);
        tracep->declBit(c+340,"servant_sim dut cpu cpu gen_debug debug ADD", false,-1);
        tracep->declBit(c+341,"servant_sim dut cpu cpu gen_debug debug SUB", false,-1);
        tracep->declBit(c+342,"servant_sim dut cpu cpu gen_debug debug SLL", false,-1);
        tracep->declBit(c+343,"servant_sim dut cpu cpu gen_debug debug SLT", false,-1);
        tracep->declBit(c+344,"servant_sim dut cpu cpu gen_debug debug SLTU", false,-1);
        tracep->declBit(c+345,"servant_sim dut cpu cpu gen_debug debug XOR", false,-1);
        tracep->declBit(c+346,"servant_sim dut cpu cpu gen_debug debug SRL", false,-1);
        tracep->declBit(c+347,"servant_sim dut cpu cpu gen_debug debug SRA", false,-1);
        tracep->declBit(c+348,"servant_sim dut cpu cpu gen_debug debug OR", false,-1);
        tracep->declBit(c+349,"servant_sim dut cpu cpu gen_debug debug AND", false,-1);
        tracep->declBit(c+350,"servant_sim dut cpu cpu gen_debug debug FENCE", false,-1);
        tracep->declBit(c+351,"servant_sim dut cpu cpu gen_debug debug ECALL", false,-1);
        tracep->declBit(c+352,"servant_sim dut cpu cpu gen_debug debug EBREAK", false,-1);
        tracep->declBit(c+353,"servant_sim dut cpu cpu gen_debug debug CSRRW", false,-1);
        tracep->declBit(c+354,"servant_sim dut cpu cpu gen_debug debug CSRRS", false,-1);
        tracep->declBit(c+355,"servant_sim dut cpu cpu gen_debug debug CSRRC", false,-1);
        tracep->declBit(c+356,"servant_sim dut cpu cpu gen_debug debug CSRRWI", false,-1);
        tracep->declBit(c+357,"servant_sim dut cpu cpu gen_debug debug CSRRSI", false,-1);
        tracep->declBit(c+358,"servant_sim dut cpu cpu gen_debug debug CSRRCI", false,-1);
        tracep->declBit(c+359,"servant_sim dut cpu cpu gen_debug debug OTHER", false,-1);
        tracep->declBus(c+380,"servant_sim dut ram depth", false,-1, 31,0);
        tracep->declBus(c+384,"servant_sim dut ram aw", false,-1, 31,0);
        tracep->declBus(c+381,"servant_sim dut ram RESET_STRATEGY", false,-1, 31,0);
        tracep->declBus(c+377,"servant_sim dut ram memfile", false,-1, 0,0);
        tracep->declBit(c+369,"servant_sim dut ram i_wb_clk", false,-1);
        tracep->declBit(c+370,"servant_sim dut ram i_wb_rst", false,-1);
        tracep->declBus(c+367,"servant_sim dut ram i_wb_adr", false,-1, 14,2);
        tracep->declBus(c+69,"servant_sim dut ram i_wb_dat", false,-1, 31,0);
        tracep->declBus(c+70,"servant_sim dut ram i_wb_sel", false,-1, 3,0);
        tracep->declBit(c+374,"servant_sim dut ram i_wb_we", false,-1);
        tracep->declBit(c+361,"servant_sim dut ram i_wb_cyc", false,-1);
        tracep->declBus(c+71,"servant_sim dut ram o_wb_rdt", false,-1, 31,0);
        tracep->declBit(c+66,"servant_sim dut ram o_wb_ack", false,-1);
        tracep->declBus(c+368,"servant_sim dut ram we", false,-1, 3,0);
        tracep->declBus(c+367,"servant_sim dut ram addr", false,-1, 12,0);
    }
}

void Vservant_sim::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vservant_sim::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vservant_sim__Syms* __restrict vlSymsp = static_cast<Vservant_sim__Syms*>(userp);
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vservant_sim::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vservant_sim__Syms* __restrict vlSymsp = static_cast<Vservant_sim__Syms*>(userp);
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullWData(oldp+1,(vlSymsp->TOP__servant_sim.__PVT__firmware_file),1024);
        tracep->fullWData(oldp+33,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__genblk1__DOT__signature_file),1024);
        tracep->fullIData(oldp+65,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__genblk1__DOT__f),32);
        tracep->fullBit(oldp+66,(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack));
        tracep->fullBit(oldp+67,(vlSymsp->TOP__servant_sim__dut.__PVT__q));
        tracep->fullBit(oldp+68,(vlSymsp->TOP__servant_sim__dut.__PVT__timer_irq));
        tracep->fullIData(oldp+69,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat),32);
        tracep->fullCData(oldp+70,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_dbus_sel),4);
        tracep->fullIData(oldp+71,(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt),32);
        tracep->fullBit(oldp+72,((1U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat)));
        tracep->fullBit(oldp+73,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                        >> 3U))));
        tracep->fullBit(oldp+74,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ext_stb) 
                                  & (~ (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                        >> 0x1fU)))));
        tracep->fullBit(oldp+75,(vlSymsp->TOP__servant_sim__dut.__PVT__wb_gpio_rdt));
        tracep->fullBit(oldp+76,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ext_stb) 
                                  & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                     >> 0x1fU))));
        tracep->fullIData(oldp+77,(vlSymsp->TOP__servant_sim__dut.__PVT__timer__DOT__mtime),32);
        tracep->fullIData(oldp+78,((0xfffffffcU & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)),32);
        tracep->fullBit(oldp+79,(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ext_stb));
        tracep->fullIData(oldp+80,(((0x80000000U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)
                                     ? vlSymsp->TOP__servant_sim__dut.__PVT__timer__DOT__mtime
                                     : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_gpio_rdt))),32);
        tracep->fullBit(oldp+81,(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ext_ack));
        tracep->fullSData(oldp+82,(vlSymsp->TOP__servant_sim__dut.__PVT__rf_waddr),10);
        tracep->fullCData(oldp+83,((3U & ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))
                                           ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata1_r)
                                           : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata0_r)))),2);
        tracep->fullBit(oldp+84,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rtrig1) 
                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen0_r)) 
                                  | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen1_r)))));
        tracep->fullSData(oldp+85,(vlSymsp->TOP__servant_sim__dut.__PVT__rf_raddr),10);
        tracep->fullBit(oldp+86,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rgate));
        tracep->fullCData(oldp+87,(vlSymsp->TOP__servant_sim__dut.__PVT__rf_rdata),2);
        tracep->fullCData(oldp+88,((3U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                          >> 0x1eU))),2);
        tracep->fullIData(oldp+89,(vlSymsp->TOP__servant_sim__dut.__PVT__timer__DOT__mtimecmp),32);
        tracep->fullCData(oldp+90,(vlSymsp->TOP__servant_sim__dut.__PVT__rf_ram__DOT__rdata),2);
        tracep->fullBit(oldp+91,(vlSymsp->TOP__servant_sim__dut.__PVT__rf_ram__DOT__regzero));
        tracep->fullIData(oldp+92,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_adr),32);
        tracep->fullBit(oldp+93,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_dbus_stb));
        tracep->fullIData(oldp+94,(((0U != (3U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                  >> 0x1eU)))
                                     ? ((0x80000000U 
                                         & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)
                                         ? vlSymsp->TOP__servant_sim__dut.__PVT__timer__DOT__mtime
                                         : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_gpio_rdt))
                                     : vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)),32);
        tracep->fullBit(oldp+95,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_dbus_stb) 
                                   & (0U == (3U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                   >> 0x1eU)))) 
                                  & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__sig_en) 
                                        | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__halt_en))))));
        tracep->fullCData(oldp+96,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
                                     ? 0x23U : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))),6);
        tracep->fullCData(oldp+97,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
                                     ? 0x22U : (0x20U 
                                                | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr)))),6);
        tracep->fullBit(oldp+98,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wen0));
        tracep->fullBit(oldp+99,(((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb)) 
                                  & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
                                     | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en)))));
        tracep->fullBit(oldp+100,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wdata0));
        tracep->fullBit(oldp+101,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
                                          ? vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_adr
                                          : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in)))));
        tracep->fullCData(oldp+102,((0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                                              >> 4U))),6);
        tracep->fullCData(oldp+103,(((0x20U & ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2)) 
                                               << 5U)) 
                                     | ((0x1cU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20) 
                                                  & ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                                     << 2U))) 
                                        | (3U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
                                                   | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret) 
                                                      << 1U)) 
                                                  | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en))) 
                                                     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr))) 
                                                 | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                                    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20))))))),6);
        tracep->fullBit(oldp+104,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0))));
        tracep->fullBit(oldp+105,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1));
        tracep->fullIData(oldp+106,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data),32);
        tracep->fullCData(oldp+107,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3),3);
        tracep->fullBit(oldp+108,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__sig_en));
        tracep->fullBit(oldp+109,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__halt_en));
        tracep->fullBit(oldp+110,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__sim_ack));
        tracep->fullBit(oldp+111,((0U != (3U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                >> 0x1eU)))));
        tracep->fullBit(oldp+112,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rgnt));
        tracep->fullCData(oldp+113,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt),5);
        tracep->fullBit(oldp+114,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rtrig1));
        tracep->fullCData(oldp+115,((0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                              - (IData)(4U)))),5);
        tracep->fullCData(oldp+116,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata0_r),2);
        tracep->fullCData(oldp+117,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata1_r),3);
        tracep->fullBit(oldp+118,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen0_r));
        tracep->fullBit(oldp+119,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen1_r));
        tracep->fullBit(oldp+120,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))));
        tracep->fullCData(oldp+121,(((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))
                                      ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
                                          ? 0x22U : 
                                         (0x20U | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr)))
                                      : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
                                          ? 0x23U : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7)))),6);
        tracep->fullBit(oldp+122,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))));
        tracep->fullCData(oldp+123,(((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))
                                      ? ((0x20U & (
                                                   (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2)) 
                                                   << 5U)) 
                                         | ((0x1cU 
                                             & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20) 
                                                & ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                                   << 2U))) 
                                            | (3U & 
                                               ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
                                                  | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret) 
                                                     << 1U)) 
                                                 | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en))) 
                                                    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr))) 
                                                | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20))))))
                                      : (0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                                                  >> 4U)))),6);
        tracep->fullCData(oldp+124,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0),2);
        tracep->fullBit(oldp+125,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata1));
        tracep->fullBit(oldp+126,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rreq_r));
        tracep->fullCData(oldp+127,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7),5);
        tracep->fullCData(oldp+128,((0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                                              >> 4U))),5);
        tracep->fullCData(oldp+129,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20),5);
        tracep->fullCData(oldp+130,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl),4);
        tracep->fullCData(oldp+131,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_en),4);
        tracep->fullBit(oldp+132,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                         >> 2U))));
        tracep->fullBit(oldp+133,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))));
        tracep->fullBit(oldp+134,((1U & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))));
        tracep->fullBit(oldp+135,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_two_stage_op));
        tracep->fullBit(oldp+136,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_e_op));
        tracep->fullBit(oldp+137,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20));
        tracep->fullBit(oldp+138,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                         >> 4U))));
        tracep->fullBit(oldp+139,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op));
        tracep->fullBit(oldp+140,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                           >> 4U) | 
                                          (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                            >> 1U) 
                                           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                              >> 2U))) 
                                         | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30) 
                                              & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                 >> 2U)) 
                                             & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                >> 3U)) 
                                            & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                                  >> 2U)))))));
        tracep->fullBit(oldp+141,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op));
        tracep->fullBit(oldp+142,((1U & (((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)) 
                                          & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                             >> 2U)) 
                                         & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                               >> 4U))))));
        tracep->fullBit(oldp+143,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op));
        tracep->fullBit(oldp+144,((1U & ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                             >> 2U)) 
                                         & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))))));
        tracep->fullBit(oldp+145,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_utype) 
                                    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
                                   | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4) 
                                      & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                          >> 4U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))))));
        tracep->fullBit(oldp+146,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_q) 
                                           | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel) 
                                              & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_add))) 
                                          | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel) 
                                              >> 1U) 
                                             & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r) 
                                                & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0)))) 
                                         | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel) 
                                             >> 2U) 
                                            & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                                                 ^ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__op_b)) 
                                                & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
                                               | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                                    >> 1U) 
                                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__op_b)) 
                                                  & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0))))))));
        tracep->fullBit(oldp+147,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid)
                                    ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2_q)
                                    : ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                           >> 2U)) 
                                       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit)))));
        tracep->fullBit(oldp+148,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out));
        tracep->fullBit(oldp+149,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl_pc_en));
        tracep->fullBit(oldp+150,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__jump));
        tracep->fullBit(oldp+151,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                          >> 4U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))));
        tracep->fullBit(oldp+152,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_utype));
        tracep->fullBit(oldp+153,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret));
        tracep->fullBit(oldp+154,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm));
        tracep->fullBit(oldp+155,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap));
        tracep->fullBit(oldp+156,(((((0U == (7U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                                     | (3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))) 
                                    | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                         >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                   >> 2U)) 
                                       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20))) 
                                   | (0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                   >> 3U))))));
        tracep->fullBit(oldp+157,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init));
        tracep->fullBit(oldp+158,((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb))));
        tracep->fullBit(oldp+159,((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt))));
        tracep->fullBit(oldp+160,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                          >> 2U) | 
                                         (3U == (3U 
                                                 & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)))))));
        tracep->fullBit(oldp+161,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0));
        tracep->fullBit(oldp+162,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt1));
        tracep->fullBit(oldp+163,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt2));
        tracep->fullBit(oldp+164,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt3));
        tracep->fullBit(oldp+165,(((1U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
                                   & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb) 
                                      >> 3U))));
        tracep->fullBit(oldp+166,(((2U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
                                   & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb) 
                                      >> 3U))));
        tracep->fullBit(oldp+167,(((3U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb))));
        tracep->fullBit(oldp+168,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done));
        tracep->fullBit(oldp+169,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_en));
        tracep->fullBit(oldp+170,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30));
        tracep->fullBit(oldp+171,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en));
        tracep->fullBit(oldp+172,((1U & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                            >> 2U)))));
        tracep->fullBit(oldp+173,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                    >> 4U) & ((0U == 
                                               (3U 
                                                & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                                              | (3U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))))));
        tracep->fullBit(oldp+174,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_q));
        tracep->fullBit(oldp+175,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2_q));
        tracep->fullBit(oldp+176,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_sub));
        tracep->fullCData(oldp+177,((3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))),2);
        tracep->fullBit(oldp+178,((0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                                >> 1U)))));
        tracep->fullBit(oldp+179,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig));
        tracep->fullBit(oldp+180,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_cmp));
        tracep->fullCData(oldp+181,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel),3);
        tracep->fullBit(oldp+182,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op) 
                                   & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init)))));
        tracep->fullBit(oldp+183,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__op_b));
        tracep->fullBit(oldp+184,((1U & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                            >> 2U)))));
        tracep->fullBit(oldp+185,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                         >> 1U))));
        tracep->fullCData(oldp+186,((3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                           >> 1U))),2);
        tracep->fullBit(oldp+187,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                                         >> 5U))));
        tracep->fullBit(oldp+188,((1U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
                                         >> 5U))));
        tracep->fullBit(oldp+189,((1U & ((((((~ vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data) 
                                             & (~ (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                   >> 1U))) 
                                            | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                   >> 1U)) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                   >> 2U)))) 
                                           | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                  >> 1U)))) 
                                          | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                 >> 2U)) 
                                             & (~ vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data))) 
                                         | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                >> 1U)) 
                                            & (~ (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                  >> 1U)))))));
        tracep->fullBit(oldp+190,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_misalign));
        tracep->fullBit(oldp+191,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned));
        tracep->fullBit(oldp+192,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en));
        tracep->fullBit(oldp+193,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mie_en));
        tracep->fullBit(oldp+194,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en));
        tracep->fullBit(oldp+195,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                                         >> 4U))));
        tracep->fullBit(oldp+196,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en));
        tracep->fullCData(oldp+197,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr),2);
        tracep->fullBit(oldp+198,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_imm_en));
        tracep->fullBit(oldp+199,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in));
        tracep->fullBit(oldp+200,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1) 
                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en))));
        tracep->fullBit(oldp+201,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_dbus_en));
        tracep->fullBit(oldp+202,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__new_irq));
        tracep->fullCData(oldp+203,((3U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)),2);
        tracep->fullBit(oldp+204,((1U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                         >> 1U))));
        tracep->fullBit(oldp+205,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req));
        tracep->fullBit(oldp+206,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__init_done));
        tracep->fullBit(oldp+207,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_csr__DOT__misalign_trap_sync_r));
        tracep->fullCData(oldp+208,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt),3);
        tracep->fullCData(oldp+209,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb),4);
        tracep->fullBit(oldp+210,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__ibus_cyc));
        tracep->fullBit(oldp+211,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__take_branch));
        tracep->fullBit(oldp+212,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__take_branch) 
                                    & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                       >> 1U)) | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_dbus_en) 
                                                  & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_misalign)))));
        tracep->fullIData(oldp+213,((0x3fffffffU & 
                                     (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                                      >> 2U))),30);
        tracep->fullCData(oldp+214,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode),5);
        tracep->fullBit(oldp+215,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21));
        tracep->fullBit(oldp+216,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op22));
        tracep->fullBit(oldp+217,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26));
        tracep->fullBit(oldp+218,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm25));
        tracep->fullBit(oldp+219,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20) 
                                   | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26) 
                                      & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21))))));
        tracep->fullIData(oldp+220,((0x1ffffffU & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                                                   >> 7U))),25);
        tracep->fullBit(oldp+221,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm31));
        tracep->fullSData(oldp+222,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20),9);
        tracep->fullBit(oldp+223,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm7));
        tracep->fullCData(oldp+224,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25),6);
        tracep->fullBit(oldp+225,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__signbit));
        tracep->fullBit(oldp+226,((1U & (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                                            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en)) 
                                           + (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                   >> 2U))) 
                                              & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb)))) 
                                          + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r)) 
                                         >> 1U))));
        tracep->fullBit(oldp+227,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__q));
        tracep->fullBit(oldp+228,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r));
        tracep->fullBit(oldp+229,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb));
        tracep->fullBit(oldp+230,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op) 
                                   | ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb)) 
                                      & ((((((~ vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data) 
                                             & (~ (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                   >> 1U))) 
                                            | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                   >> 1U)) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                   >> 2U)))) 
                                           | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                  >> 1U)))) 
                                          | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                 >> 2U)) 
                                             & (~ vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data))) 
                                         | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                >> 1U)) 
                                            & (~ (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                  >> 1U))))))));
        tracep->fullCData(oldp+231,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat_shamt),6);
        tracep->fullBit(oldp+232,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
                                   | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret))));
        tracep->fullBit(oldp+233,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4));
        tracep->fullBit(oldp+234,((1U & ((((1U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_adr) 
                                           + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt2)) 
                                          + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r)) 
                                         >> 1U))));
        tracep->fullBit(oldp+235,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r));
        tracep->fullBit(oldp+236,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                                          + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b)) 
                                         + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r)))));
        tracep->fullBit(oldp+237,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                                           + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b)) 
                                          + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r)) 
                                         >> 1U))));
        tracep->fullBit(oldp+238,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r));
        tracep->fullBit(oldp+239,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt2));
        tracep->fullBit(oldp+240,((1U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_adr)));
        tracep->fullBit(oldp+241,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
                                    | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret))
                                    ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1) 
                                       & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0) 
                                             | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt1))))
                                    : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__jump)
                                        ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                                        : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)))));
        tracep->fullBit(oldp+242,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a));
        tracep->fullBit(oldp+243,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b));
        tracep->fullBit(oldp+244,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_add));
        tracep->fullBit(oldp+245,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r) 
                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0))));
        tracep->fullBit(oldp+246,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r));
        tracep->fullBit(oldp+247,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy));
        tracep->fullBit(oldp+248,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r));
        tracep->fullBit(oldp+249,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig))));
        tracep->fullBit(oldp+250,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__op_b) 
                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig))));
        tracep->fullBit(oldp+251,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_b));
        tracep->fullBit(oldp+252,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                                           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig)) 
                                          + (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__op_b) 
                                                & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig)))) 
                                         + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy)))));
        tracep->fullBit(oldp+253,(((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_add)) 
                                   & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r) 
                                      | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0)))));
        tracep->fullBit(oldp+254,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                                           ^ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__op_b)) 
                                          & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
                                         | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__op_b)) 
                                            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0))))));
        tracep->fullBit(oldp+255,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op) 
                                    & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init))) 
                                   & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7)))));
        tracep->fullBit(oldp+256,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
        tracep->fullBit(oldp+257,(((0x10U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))
                                    ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                                    : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_q))));
        tracep->fullBit(oldp+258,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2));
        tracep->fullBit(oldp+259,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit));
        tracep->fullBit(oldp+260,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid));
        tracep->fullBit(oldp+261,((1U & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                            >> 4U)))));
        tracep->fullBit(oldp+262,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie));
        tracep->fullBit(oldp+263,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie));
        tracep->fullBit(oldp+264,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mie_mtie));
        tracep->fullBit(oldp+265,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause31));
        tracep->fullCData(oldp+266,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0),4);
        tracep->fullBit(oldp+267,((1U & ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt))
                                          ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0)
                                          : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done) 
                                             & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause31))))));
        tracep->fullBit(oldp+268,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq_r));
        tracep->fullBit(oldp+269,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d));
        tracep->fullBit(oldp+270,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie) 
                                    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt3)) 
                                   | (((2U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
                                       & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb) 
                                          >> 3U)) | 
                                      ((3U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
                                       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb))))));
        tracep->fullBit(oldp+271,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq));
        tracep->fullBit(oldp+272,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__update_rd));
        tracep->fullIData(oldp+273,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd),32);
        tracep->fullIData(oldp+274,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_csr),32);
        tracep->fullIData(oldp+275,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mstatus),32);
        tracep->fullIData(oldp+276,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mie),32);
        tracep->fullIData(oldp+277,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mcause),32);
        tracep->fullIData(oldp+278,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mscratch),32);
        tracep->fullIData(oldp+279,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mtvec),32);
        tracep->fullIData(oldp+280,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mepc),32);
        tracep->fullIData(oldp+281,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mtval),32);
        tracep->fullIData(oldp+282,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x1),32);
        tracep->fullIData(oldp+283,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x2),32);
        tracep->fullIData(oldp+284,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x3),32);
        tracep->fullIData(oldp+285,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x4),32);
        tracep->fullIData(oldp+286,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x5),32);
        tracep->fullIData(oldp+287,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x6),32);
        tracep->fullIData(oldp+288,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x7),32);
        tracep->fullIData(oldp+289,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x8),32);
        tracep->fullIData(oldp+290,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x9),32);
        tracep->fullIData(oldp+291,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x10),32);
        tracep->fullIData(oldp+292,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x11),32);
        tracep->fullIData(oldp+293,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x12),32);
        tracep->fullIData(oldp+294,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x13),32);
        tracep->fullIData(oldp+295,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x14),32);
        tracep->fullIData(oldp+296,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x15),32);
        tracep->fullIData(oldp+297,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x16),32);
        tracep->fullIData(oldp+298,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x17),32);
        tracep->fullIData(oldp+299,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x18),32);
        tracep->fullIData(oldp+300,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x19),32);
        tracep->fullIData(oldp+301,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x20),32);
        tracep->fullIData(oldp+302,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x21),32);
        tracep->fullIData(oldp+303,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x22),32);
        tracep->fullIData(oldp+304,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x23),32);
        tracep->fullIData(oldp+305,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x24),32);
        tracep->fullIData(oldp+306,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x25),32);
        tracep->fullIData(oldp+307,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x26),32);
        tracep->fullIData(oldp+308,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x27),32);
        tracep->fullIData(oldp+309,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x28),32);
        tracep->fullIData(oldp+310,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x29),32);
        tracep->fullIData(oldp+311,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x30),32);
        tracep->fullIData(oldp+312,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x31),32);
        tracep->fullBit(oldp+313,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LUI));
        tracep->fullBit(oldp+314,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__AUIPC));
        tracep->fullBit(oldp+315,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__JAL));
        tracep->fullBit(oldp+316,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__JALR));
        tracep->fullBit(oldp+317,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BEQ));
        tracep->fullBit(oldp+318,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BNE));
        tracep->fullBit(oldp+319,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BLT));
        tracep->fullBit(oldp+320,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BGE));
        tracep->fullBit(oldp+321,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BLTU));
        tracep->fullBit(oldp+322,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BGEU));
        tracep->fullBit(oldp+323,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LB));
        tracep->fullBit(oldp+324,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LH));
        tracep->fullBit(oldp+325,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LW));
        tracep->fullBit(oldp+326,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LBU));
        tracep->fullBit(oldp+327,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LHU));
        tracep->fullBit(oldp+328,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SB));
        tracep->fullBit(oldp+329,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SH));
        tracep->fullBit(oldp+330,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SW));
        tracep->fullBit(oldp+331,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ADDI));
        tracep->fullBit(oldp+332,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLTI));
        tracep->fullBit(oldp+333,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLTIU));
        tracep->fullBit(oldp+334,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__XORI));
        tracep->fullBit(oldp+335,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ORI));
        tracep->fullBit(oldp+336,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ANDI));
        tracep->fullBit(oldp+337,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLLI));
        tracep->fullBit(oldp+338,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRLI));
        tracep->fullBit(oldp+339,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRAI));
        tracep->fullBit(oldp+340,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ADD));
        tracep->fullBit(oldp+341,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SUB));
        tracep->fullBit(oldp+342,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLL));
        tracep->fullBit(oldp+343,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLT));
        tracep->fullBit(oldp+344,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLTU));
        tracep->fullBit(oldp+345,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__XOR));
        tracep->fullBit(oldp+346,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRL));
        tracep->fullBit(oldp+347,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRA));
        tracep->fullBit(oldp+348,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__OR));
        tracep->fullBit(oldp+349,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__AND));
        tracep->fullBit(oldp+350,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__FENCE));
        tracep->fullBit(oldp+351,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ECALL));
        tracep->fullBit(oldp+352,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__EBREAK));
        tracep->fullBit(oldp+353,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRW));
        tracep->fullBit(oldp+354,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRS));
        tracep->fullBit(oldp+355,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRC));
        tracep->fullBit(oldp+356,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRWI));
        tracep->fullBit(oldp+357,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRSI));
        tracep->fullBit(oldp+358,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRCI));
        tracep->fullBit(oldp+359,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__OTHER));
        tracep->fullIData(oldp+360,(vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_adr),32);
        tracep->fullBit(oldp+361,(vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_stb));
        tracep->fullBit(oldp+362,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_cyc));
        tracep->fullBit(oldp+363,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack));
        tracep->fullBit(oldp+364,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_dbus_ack));
        tracep->fullBit(oldp+365,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_wreq));
        tracep->fullBit(oldp+366,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_rreq));
        tracep->fullSData(oldp+367,((0x1fffU & (vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_adr 
                                                >> 2U))),13);
        tracep->fullCData(oldp+368,(vlSymsp->TOP__servant_sim__dut__ram.__PVT__we),4);
        tracep->fullBit(oldp+369,(vlTOPp->wb_clk));
        tracep->fullBit(oldp+370,(vlTOPp->wb_rst));
        tracep->fullIData(oldp+371,(vlTOPp->pc_adr),32);
        tracep->fullBit(oldp+372,(vlTOPp->pc_vld));
        tracep->fullBit(oldp+373,(vlTOPp->q));
        tracep->fullBit(oldp+374,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                          >> 3U) & 
                                         (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_cyc))))));
        tracep->fullBit(oldp+375,(((IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack) 
                                   & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_cyc)))));
        tracep->fullBit(oldp+376,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rgnt) 
                                   | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_wreq))));
        tracep->fullBit(oldp+377,(0U));
        tracep->fullIData(oldp+378,(1U),32);
        tracep->fullIData(oldp+379,(0U),32);
        tracep->fullIData(oldp+380,(0x8000U),32);
        tracep->fullIData(oldp+381,(0x4d494e49U),32);
        tracep->fullBit(oldp+382,(1U));
        tracep->fullIData(oldp+383,(1U),32);
        tracep->fullIData(oldp+384,(0xfU),32);
        tracep->fullIData(oldp+385,(4U),32);
        tracep->fullIData(oldp+386,(2U),32);
        tracep->fullIData(oldp+387,(0xaU),32);
        tracep->fullIData(oldp+388,(0x20U),32);
        tracep->fullIData(oldp+389,(0x1fU),32);
        tracep->fullIData(oldp+390,(0x240U),32);
        tracep->fullIData(oldp+391,(0U),32);
        tracep->fullIData(oldp+392,(0x24U),32);
        tracep->fullBit(oldp+393,(0U));
        tracep->fullIData(oldp+394,(0x80000000U),32);
        tracep->fullIData(oldp+395,(0x90000000U),32);
        tracep->fullIData(oldp+396,(6U),32);
        tracep->fullIData(oldp+397,(4U),32);
        tracep->fullCData(oldp+398,(0U),2);
        tracep->fullCData(oldp+399,(1U),2);
        tracep->fullCData(oldp+400,(2U),2);
        tracep->fullCData(oldp+401,(3U),2);
    }
}
