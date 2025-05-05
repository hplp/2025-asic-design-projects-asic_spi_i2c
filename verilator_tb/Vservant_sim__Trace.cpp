// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vservant_sim__Syms.h"


void Vservant_sim::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vservant_sim__Syms* __restrict vlSymsp = static_cast<Vservant_sim__Syms*>(userp);
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vservant_sim::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vservant_sim__Syms* __restrict vlSymsp = static_cast<Vservant_sim__Syms*>(userp);
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgWData(oldp+0,(vlSymsp->TOP__servant_sim.__PVT__firmware_file),1024);
            tracep->chgWData(oldp+32,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__genblk1__DOT__signature_file),1024);
            tracep->chgIData(oldp+64,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__genblk1__DOT__f),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+65,(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack));
            tracep->chgBit(oldp+66,(vlSymsp->TOP__servant_sim__dut.__PVT__q));
            tracep->chgBit(oldp+67,(vlSymsp->TOP__servant_sim__dut.__PVT__timer_irq));
            tracep->chgIData(oldp+68,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat),32);
            tracep->chgCData(oldp+69,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_dbus_sel),4);
            tracep->chgIData(oldp+70,(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt),32);
            tracep->chgBit(oldp+71,((1U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat)));
            tracep->chgBit(oldp+72,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                           >> 3U))));
            tracep->chgBit(oldp+73,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ext_stb) 
                                     & (~ (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                           >> 0x1fU)))));
            tracep->chgBit(oldp+74,(vlSymsp->TOP__servant_sim__dut.__PVT__wb_gpio_rdt));
            tracep->chgBit(oldp+75,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ext_stb) 
                                     & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                        >> 0x1fU))));
            tracep->chgIData(oldp+76,(vlSymsp->TOP__servant_sim__dut.__PVT__timer__DOT__mtime),32);
            tracep->chgIData(oldp+77,((0xfffffffcU 
                                       & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)),32);
            tracep->chgBit(oldp+78,(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ext_stb));
            tracep->chgIData(oldp+79,(((0x80000000U 
                                        & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)
                                        ? vlSymsp->TOP__servant_sim__dut.__PVT__timer__DOT__mtime
                                        : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_gpio_rdt))),32);
            tracep->chgBit(oldp+80,(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ext_ack));
            tracep->chgSData(oldp+81,(vlSymsp->TOP__servant_sim__dut.__PVT__rf_waddr),10);
            tracep->chgCData(oldp+82,((3U & ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))
                                              ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata1_r)
                                              : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata0_r)))),2);
            tracep->chgBit(oldp+83,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rtrig1) 
                                      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen0_r)) 
                                     | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                        & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen1_r)))));
            tracep->chgSData(oldp+84,(vlSymsp->TOP__servant_sim__dut.__PVT__rf_raddr),10);
            tracep->chgBit(oldp+85,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rgate));
            tracep->chgCData(oldp+86,(vlSymsp->TOP__servant_sim__dut.__PVT__rf_rdata),2);
            tracep->chgCData(oldp+87,((3U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                             >> 0x1eU))),2);
            tracep->chgIData(oldp+88,(vlSymsp->TOP__servant_sim__dut.__PVT__timer__DOT__mtimecmp),32);
            tracep->chgCData(oldp+89,(vlSymsp->TOP__servant_sim__dut.__PVT__rf_ram__DOT__rdata),2);
            tracep->chgBit(oldp+90,(vlSymsp->TOP__servant_sim__dut.__PVT__rf_ram__DOT__regzero));
            tracep->chgIData(oldp+91,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_adr),32);
            tracep->chgBit(oldp+92,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_dbus_stb));
            tracep->chgIData(oldp+93,(((0U != (3U & 
                                               (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                >> 0x1eU)))
                                        ? ((0x80000000U 
                                            & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)
                                            ? vlSymsp->TOP__servant_sim__dut.__PVT__timer__DOT__mtime
                                            : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_gpio_rdt))
                                        : vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)),32);
            tracep->chgBit(oldp+94,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_dbus_stb) 
                                      & (0U == (3U 
                                                & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                   >> 0x1eU)))) 
                                     & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__sig_en) 
                                           | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__halt_en))))));
            tracep->chgCData(oldp+95,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
                                        ? 0x23U : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))),6);
            tracep->chgCData(oldp+96,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
                                        ? 0x22U : (0x20U 
                                                   | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr)))),6);
            tracep->chgBit(oldp+97,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wen0));
            tracep->chgBit(oldp+98,(((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb)) 
                                     & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
                                        | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en)))));
            tracep->chgBit(oldp+99,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wdata0));
            tracep->chgBit(oldp+100,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
                                             ? vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_adr
                                             : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in)))));
            tracep->chgCData(oldp+101,((0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                                                 >> 4U))),6);
            tracep->chgCData(oldp+102,(((0x20U & ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2)) 
                                                  << 5U)) 
                                        | ((0x1cU & 
                                            ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20) 
                                             & ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                                << 2U))) 
                                           | (3U & 
                                              ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
                                                 | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret) 
                                                    << 1U)) 
                                                | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en))) 
                                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr))) 
                                               | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                                  & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20))))))),6);
            tracep->chgBit(oldp+103,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0))));
            tracep->chgBit(oldp+104,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1));
            tracep->chgIData(oldp+105,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data),32);
            tracep->chgCData(oldp+106,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3),3);
            tracep->chgBit(oldp+107,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__sig_en));
            tracep->chgBit(oldp+108,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__halt_en));
            tracep->chgBit(oldp+109,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__sim_ack));
            tracep->chgBit(oldp+110,((0U != (3U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                   >> 0x1eU)))));
            tracep->chgBit(oldp+111,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rgnt));
            tracep->chgCData(oldp+112,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt),5);
            tracep->chgBit(oldp+113,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rtrig1));
            tracep->chgCData(oldp+114,((0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                                 - (IData)(4U)))),5);
            tracep->chgCData(oldp+115,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata0_r),2);
            tracep->chgCData(oldp+116,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata1_r),3);
            tracep->chgBit(oldp+117,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen0_r));
            tracep->chgBit(oldp+118,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen1_r));
            tracep->chgBit(oldp+119,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))));
            tracep->chgCData(oldp+120,(((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))
                                         ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
                                             ? 0x22U
                                             : (0x20U 
                                                | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr)))
                                         : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
                                             ? 0x23U
                                             : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7)))),6);
            tracep->chgBit(oldp+121,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))));
            tracep->chgCData(oldp+122,(((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))
                                         ? ((0x20U 
                                             & ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2)) 
                                                << 5U)) 
                                            | ((0x1cU 
                                                & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20) 
                                                   & ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                                      << 2U))) 
                                               | (3U 
                                                  & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
                                                       | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret) 
                                                          << 1U)) 
                                                      | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en))) 
                                                         & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr))) 
                                                     | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                                        & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20))))))
                                         : (0x1fU & 
                                            ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                                             >> 4U)))),6);
            tracep->chgCData(oldp+123,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0),2);
            tracep->chgBit(oldp+124,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata1));
            tracep->chgBit(oldp+125,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rreq_r));
            tracep->chgCData(oldp+126,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7),5);
            tracep->chgCData(oldp+127,((0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                                                 >> 4U))),5);
            tracep->chgCData(oldp+128,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20),5);
            tracep->chgCData(oldp+129,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl),4);
            tracep->chgCData(oldp+130,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_en),4);
            tracep->chgBit(oldp+131,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                            >> 2U))));
            tracep->chgBit(oldp+132,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))));
            tracep->chgBit(oldp+133,((1U & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))));
            tracep->chgBit(oldp+134,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_two_stage_op));
            tracep->chgBit(oldp+135,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_e_op));
            tracep->chgBit(oldp+136,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20));
            tracep->chgBit(oldp+137,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                            >> 4U))));
            tracep->chgBit(oldp+138,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op));
            tracep->chgBit(oldp+139,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                              >> 4U) 
                                             | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                                 >> 1U) 
                                                & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                   >> 2U))) 
                                            | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30) 
                                                 & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                    >> 2U)) 
                                                & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                   >> 3U)) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                                   >> 2U)))))));
            tracep->chgBit(oldp+140,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op));
            tracep->chgBit(oldp+141,((1U & (((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)) 
                                             & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                >> 2U)) 
                                            & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                  >> 4U))))));
            tracep->chgBit(oldp+142,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op));
            tracep->chgBit(oldp+143,((1U & ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                >> 2U)) 
                                            & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))))));
            tracep->chgBit(oldp+144,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_utype) 
                                       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
                                      | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4) 
                                         & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                             >> 4U) 
                                            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))))));
            tracep->chgBit(oldp+145,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_q) 
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
            tracep->chgBit(oldp+146,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid)
                                       ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2_q)
                                       : ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                              >> 2U)) 
                                          & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit)))));
            tracep->chgBit(oldp+147,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out));
            tracep->chgBit(oldp+148,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl_pc_en));
            tracep->chgBit(oldp+149,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__jump));
            tracep->chgBit(oldp+150,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                             >> 4U) 
                                            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))));
            tracep->chgBit(oldp+151,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_utype));
            tracep->chgBit(oldp+152,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret));
            tracep->chgBit(oldp+153,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm));
            tracep->chgBit(oldp+154,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap));
            tracep->chgBit(oldp+155,(((((0U == (7U 
                                                & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                                        | (3U == (3U 
                                                  & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))) 
                                       | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                            >> 4U) 
                                           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                              >> 2U)) 
                                          & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20))) 
                                      | (0U == (3U 
                                                & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                   >> 3U))))));
            tracep->chgBit(oldp+156,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init));
            tracep->chgBit(oldp+157,((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb))));
            tracep->chgBit(oldp+158,((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt))));
            tracep->chgBit(oldp+159,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                             >> 2U) 
                                            | (3U == 
                                               (3U 
                                                & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)))))));
            tracep->chgBit(oldp+160,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0));
            tracep->chgBit(oldp+161,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt1));
            tracep->chgBit(oldp+162,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt2));
            tracep->chgBit(oldp+163,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt3));
            tracep->chgBit(oldp+164,(((1U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
                                      & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb) 
                                         >> 3U))));
            tracep->chgBit(oldp+165,(((2U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
                                      & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb) 
                                         >> 3U))));
            tracep->chgBit(oldp+166,(((3U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
                                      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb))));
            tracep->chgBit(oldp+167,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done));
            tracep->chgBit(oldp+168,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_en));
            tracep->chgBit(oldp+169,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30));
            tracep->chgBit(oldp+170,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en));
            tracep->chgBit(oldp+171,((1U & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                               >> 2U)))));
            tracep->chgBit(oldp+172,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                       >> 4U) & ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                                                 | (3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))))));
            tracep->chgBit(oldp+173,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_q));
            tracep->chgBit(oldp+174,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2_q));
            tracep->chgBit(oldp+175,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_sub));
            tracep->chgCData(oldp+176,((3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))),2);
            tracep->chgBit(oldp+177,((0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                                   >> 1U)))));
            tracep->chgBit(oldp+178,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig));
            tracep->chgBit(oldp+179,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_cmp));
            tracep->chgCData(oldp+180,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel),3);
            tracep->chgBit(oldp+181,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op) 
                                      & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init)))));
            tracep->chgBit(oldp+182,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__op_b));
            tracep->chgBit(oldp+183,((1U & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                               >> 2U)))));
            tracep->chgBit(oldp+184,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                            >> 1U))));
            tracep->chgCData(oldp+185,((3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                              >> 1U))),2);
            tracep->chgBit(oldp+186,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                                            >> 5U))));
            tracep->chgBit(oldp+187,((1U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
                                            >> 5U))));
            tracep->chgBit(oldp+188,((1U & ((((((~ vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data) 
                                                & (~ 
                                                   (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                    >> 1U))) 
                                               | ((~ 
                                                   ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                    >> 1U)) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                      >> 2U)))) 
                                              | ((~ 
                                                  ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                   >> 2U)) 
                                                 & (~ 
                                                    (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                     >> 1U)))) 
                                             | ((~ 
                                                 ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                  >> 2U)) 
                                                & (~ vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data))) 
                                            | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                   >> 1U)) 
                                               & (~ 
                                                  (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+189,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_misalign));
            tracep->chgBit(oldp+190,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned));
            tracep->chgBit(oldp+191,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en));
            tracep->chgBit(oldp+192,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mie_en));
            tracep->chgBit(oldp+193,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en));
            tracep->chgBit(oldp+194,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                                            >> 4U))));
            tracep->chgBit(oldp+195,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en));
            tracep->chgCData(oldp+196,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr),2);
            tracep->chgBit(oldp+197,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_imm_en));
            tracep->chgBit(oldp+198,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in));
            tracep->chgBit(oldp+199,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1) 
                                      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en))));
            tracep->chgBit(oldp+200,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_dbus_en));
            tracep->chgBit(oldp+201,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__new_irq));
            tracep->chgCData(oldp+202,((3U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)),2);
            tracep->chgBit(oldp+203,((1U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                            >> 1U))));
            tracep->chgBit(oldp+204,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req));
            tracep->chgBit(oldp+205,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__init_done));
            tracep->chgBit(oldp+206,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_csr__DOT__misalign_trap_sync_r));
            tracep->chgCData(oldp+207,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt),3);
            tracep->chgCData(oldp+208,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb),4);
            tracep->chgBit(oldp+209,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__ibus_cyc));
            tracep->chgBit(oldp+210,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__take_branch));
            tracep->chgBit(oldp+211,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__take_branch) 
                                       & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                          >> 1U)) | 
                                      ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_dbus_en) 
                                       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_misalign)))));
            tracep->chgIData(oldp+212,((0x3fffffffU 
                                        & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                                           >> 2U))),30);
            tracep->chgCData(oldp+213,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode),5);
            tracep->chgBit(oldp+214,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21));
            tracep->chgBit(oldp+215,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op22));
            tracep->chgBit(oldp+216,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26));
            tracep->chgBit(oldp+217,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm25));
            tracep->chgBit(oldp+218,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20) 
                                      | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26) 
                                         & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21))))));
            tracep->chgIData(oldp+219,((0x1ffffffU 
                                        & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                                           >> 7U))),25);
            tracep->chgBit(oldp+220,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm31));
            tracep->chgSData(oldp+221,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20),9);
            tracep->chgBit(oldp+222,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm7));
            tracep->chgCData(oldp+223,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25),6);
            tracep->chgBit(oldp+224,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__signbit));
            tracep->chgBit(oldp+225,((1U & (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                                               & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en)) 
                                              + (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                      >> 2U))) 
                                                 & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb)))) 
                                             + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r)) 
                                            >> 1U))));
            tracep->chgBit(oldp+226,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__q));
            tracep->chgBit(oldp+227,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r));
            tracep->chgBit(oldp+228,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb));
            tracep->chgBit(oldp+229,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op) 
                                      | ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb)) 
                                         & ((((((~ vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data) 
                                                & (~ 
                                                   (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                    >> 1U))) 
                                               | ((~ 
                                                   ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                    >> 1U)) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                      >> 2U)))) 
                                              | ((~ 
                                                  ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                   >> 2U)) 
                                                 & (~ 
                                                    (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                     >> 1U)))) 
                                             | ((~ 
                                                 ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                  >> 2U)) 
                                                & (~ vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data))) 
                                            | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                   >> 1U)) 
                                               & (~ 
                                                  (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                   >> 1U))))))));
            tracep->chgCData(oldp+230,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat_shamt),6);
            tracep->chgBit(oldp+231,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
                                      | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret))));
            tracep->chgBit(oldp+232,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4));
            tracep->chgBit(oldp+233,((1U & ((((1U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_adr) 
                                              + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt2)) 
                                             + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r)) 
                                            >> 1U))));
            tracep->chgBit(oldp+234,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r));
            tracep->chgBit(oldp+235,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                                             + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b)) 
                                            + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r)))));
            tracep->chgBit(oldp+236,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                                              + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b)) 
                                             + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r)) 
                                            >> 1U))));
            tracep->chgBit(oldp+237,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r));
            tracep->chgBit(oldp+238,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt2));
            tracep->chgBit(oldp+239,((1U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_adr)));
            tracep->chgBit(oldp+240,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
                                       | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret))
                                       ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1) 
                                          & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0) 
                                                | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt1))))
                                       : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__jump)
                                           ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                                           : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)))));
            tracep->chgBit(oldp+241,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a));
            tracep->chgBit(oldp+242,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b));
            tracep->chgBit(oldp+243,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_add));
            tracep->chgBit(oldp+244,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r) 
                                      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0))));
            tracep->chgBit(oldp+245,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r));
            tracep->chgBit(oldp+246,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy));
            tracep->chgBit(oldp+247,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r));
            tracep->chgBit(oldp+248,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                                      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig))));
            tracep->chgBit(oldp+249,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__op_b) 
                                      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig))));
            tracep->chgBit(oldp+250,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_b));
            tracep->chgBit(oldp+251,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                                              & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig)) 
                                             + (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__op_b) 
                                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig)))) 
                                            + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy)))));
            tracep->chgBit(oldp+252,(((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_add)) 
                                      & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r) 
                                         | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0)))));
            tracep->chgBit(oldp+253,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                                              ^ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__op_b)) 
                                             & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
                                            | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__op_b)) 
                                               & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0))))));
            tracep->chgBit(oldp+254,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op) 
                                       & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init))) 
                                      & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7)))));
            tracep->chgBit(oldp+255,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
            tracep->chgBit(oldp+256,(((0x10U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))
                                       ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                                       : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_q))));
            tracep->chgBit(oldp+257,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2));
            tracep->chgBit(oldp+258,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit));
            tracep->chgBit(oldp+259,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid));
            tracep->chgBit(oldp+260,((1U & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                               >> 4U)))));
            tracep->chgBit(oldp+261,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie));
            tracep->chgBit(oldp+262,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie));
            tracep->chgBit(oldp+263,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mie_mtie));
            tracep->chgBit(oldp+264,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause31));
            tracep->chgCData(oldp+265,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0),4);
            tracep->chgBit(oldp+266,((1U & ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt))
                                             ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0)
                                             : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done) 
                                                & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause31))))));
            tracep->chgBit(oldp+267,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq_r));
            tracep->chgBit(oldp+268,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d));
            tracep->chgBit(oldp+269,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie) 
                                       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt3)) 
                                      | (((2U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
                                          & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb) 
                                             >> 3U)) 
                                         | ((3U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
                                            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb))))));
            tracep->chgBit(oldp+270,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq));
            tracep->chgBit(oldp+271,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__update_rd));
            tracep->chgIData(oldp+272,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd),32);
            tracep->chgIData(oldp+273,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_csr),32);
            tracep->chgIData(oldp+274,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mstatus),32);
            tracep->chgIData(oldp+275,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mie),32);
            tracep->chgIData(oldp+276,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mcause),32);
            tracep->chgIData(oldp+277,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mscratch),32);
            tracep->chgIData(oldp+278,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mtvec),32);
            tracep->chgIData(oldp+279,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mepc),32);
            tracep->chgIData(oldp+280,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mtval),32);
            tracep->chgIData(oldp+281,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x1),32);
            tracep->chgIData(oldp+282,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x2),32);
            tracep->chgIData(oldp+283,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x3),32);
            tracep->chgIData(oldp+284,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x4),32);
            tracep->chgIData(oldp+285,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x5),32);
            tracep->chgIData(oldp+286,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x6),32);
            tracep->chgIData(oldp+287,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x7),32);
            tracep->chgIData(oldp+288,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x8),32);
            tracep->chgIData(oldp+289,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x9),32);
            tracep->chgIData(oldp+290,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x10),32);
            tracep->chgIData(oldp+291,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x11),32);
            tracep->chgIData(oldp+292,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x12),32);
            tracep->chgIData(oldp+293,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x13),32);
            tracep->chgIData(oldp+294,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x14),32);
            tracep->chgIData(oldp+295,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x15),32);
            tracep->chgIData(oldp+296,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x16),32);
            tracep->chgIData(oldp+297,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x17),32);
            tracep->chgIData(oldp+298,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x18),32);
            tracep->chgIData(oldp+299,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x19),32);
            tracep->chgIData(oldp+300,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x20),32);
            tracep->chgIData(oldp+301,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x21),32);
            tracep->chgIData(oldp+302,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x22),32);
            tracep->chgIData(oldp+303,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x23),32);
            tracep->chgIData(oldp+304,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x24),32);
            tracep->chgIData(oldp+305,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x25),32);
            tracep->chgIData(oldp+306,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x26),32);
            tracep->chgIData(oldp+307,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x27),32);
            tracep->chgIData(oldp+308,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x28),32);
            tracep->chgIData(oldp+309,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x29),32);
            tracep->chgIData(oldp+310,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x30),32);
            tracep->chgIData(oldp+311,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x31),32);
            tracep->chgBit(oldp+312,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LUI));
            tracep->chgBit(oldp+313,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__AUIPC));
            tracep->chgBit(oldp+314,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__JAL));
            tracep->chgBit(oldp+315,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__JALR));
            tracep->chgBit(oldp+316,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BEQ));
            tracep->chgBit(oldp+317,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BNE));
            tracep->chgBit(oldp+318,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BLT));
            tracep->chgBit(oldp+319,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BGE));
            tracep->chgBit(oldp+320,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BLTU));
            tracep->chgBit(oldp+321,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BGEU));
            tracep->chgBit(oldp+322,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LB));
            tracep->chgBit(oldp+323,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LH));
            tracep->chgBit(oldp+324,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LW));
            tracep->chgBit(oldp+325,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LBU));
            tracep->chgBit(oldp+326,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LHU));
            tracep->chgBit(oldp+327,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SB));
            tracep->chgBit(oldp+328,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SH));
            tracep->chgBit(oldp+329,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SW));
            tracep->chgBit(oldp+330,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ADDI));
            tracep->chgBit(oldp+331,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLTI));
            tracep->chgBit(oldp+332,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLTIU));
            tracep->chgBit(oldp+333,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__XORI));
            tracep->chgBit(oldp+334,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ORI));
            tracep->chgBit(oldp+335,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ANDI));
            tracep->chgBit(oldp+336,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLLI));
            tracep->chgBit(oldp+337,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRLI));
            tracep->chgBit(oldp+338,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRAI));
            tracep->chgBit(oldp+339,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ADD));
            tracep->chgBit(oldp+340,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SUB));
            tracep->chgBit(oldp+341,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLL));
            tracep->chgBit(oldp+342,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLT));
            tracep->chgBit(oldp+343,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLTU));
            tracep->chgBit(oldp+344,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__XOR));
            tracep->chgBit(oldp+345,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRL));
            tracep->chgBit(oldp+346,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRA));
            tracep->chgBit(oldp+347,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__OR));
            tracep->chgBit(oldp+348,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__AND));
            tracep->chgBit(oldp+349,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__FENCE));
            tracep->chgBit(oldp+350,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ECALL));
            tracep->chgBit(oldp+351,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__EBREAK));
            tracep->chgBit(oldp+352,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRW));
            tracep->chgBit(oldp+353,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRS));
            tracep->chgBit(oldp+354,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRC));
            tracep->chgBit(oldp+355,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRWI));
            tracep->chgBit(oldp+356,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRSI));
            tracep->chgBit(oldp+357,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRCI));
            tracep->chgBit(oldp+358,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__OTHER));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+359,(vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_adr),32);
            tracep->chgBit(oldp+360,(vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_stb));
            tracep->chgBit(oldp+361,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_cyc));
            tracep->chgBit(oldp+362,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack));
            tracep->chgBit(oldp+363,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_dbus_ack));
            tracep->chgBit(oldp+364,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_wreq));
            tracep->chgBit(oldp+365,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_rreq));
            tracep->chgSData(oldp+366,((0x1fffU & (vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_adr 
                                                   >> 2U))),13);
            tracep->chgCData(oldp+367,(vlSymsp->TOP__servant_sim__dut__ram.__PVT__we),4);
        }
        tracep->chgBit(oldp+368,(vlTOPp->wb_clk));
        tracep->chgBit(oldp+369,(vlTOPp->wb_rst));
        tracep->chgIData(oldp+370,(vlTOPp->pc_adr),32);
        tracep->chgBit(oldp+371,(vlTOPp->pc_vld));
        tracep->chgBit(oldp+372,(vlTOPp->q));
        tracep->chgBit(oldp+373,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                         >> 3U) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_cyc))))));
        tracep->chgBit(oldp+374,(((IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack) 
                                  & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_cyc)))));
        tracep->chgBit(oldp+375,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rgnt) 
                                  | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_wreq))));
    }
}

void Vservant_sim::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vservant_sim__Syms* __restrict vlSymsp = static_cast<Vservant_sim__Syms*>(userp);
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
