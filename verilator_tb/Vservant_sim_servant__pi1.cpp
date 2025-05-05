// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vservant_sim.h for the primary calling header

#include "Vservant_sim_servant__pi1.h"
#include "Vservant_sim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vservant_sim_servant__pi1::_sequent__TOP__servant_sim__dut__2(Vservant_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vservant_sim_servant__pi1::_sequent__TOP__servant_sim__dut__2\n"); );
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__rf_ram_if__DOT__wdata0_r 
        = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata0_r;
    vlSymsp->TOP__servant_sim__dut.__Vdly__timer__DOT__mtime 
        = vlSymsp->TOP__servant_sim__dut.__PVT__timer__DOT__mtime;
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__rf_ram_if__DOT__rcnt 
        = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt;
    vlSymsp->TOP__servant_sim__dut.__Vdly__wb_ext_ack 
        = vlSymsp->TOP__servant_sim__dut.__PVT__wb_ext_ack;
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__mux__DOT__sim_ack 
        = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__sim_ack;
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__rf_ram_if__DOT__wdata1_r 
        = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata1_r;
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__bufreg__DOT__data 
        = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data;
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_csr 
        = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_csr;
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd 
        = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
    vlSymsp->TOP__servant_sim__dut.__Vdlyvset__rf_ram__DOT__memory__v0 = 0U;
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie 
        = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie;
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__state__DOT__o_cnt 
        = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt;
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb 
        = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb;
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25 
        = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25;
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20 
        = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20;
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
        = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat;
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 
        = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0;
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__rf_ram_if__DOT__wdata0_r 
        = (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wdata0) 
            << 1U) | (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata0_r) 
                            >> 1U)));
    vlSymsp->TOP__servant_sim__dut.__Vdly__timer__DOT__mtime 
        = ((IData)(1U) + vlSymsp->TOP__servant_sim__dut.__PVT__timer__DOT__mtime);
    if (vlTOPp->wb_rst) {
        vlSymsp->TOP__servant_sim__dut.__Vdly__timer__DOT__mtime = 0U;
    }
    vlSymsp->TOP__servant_sim__dut.__Vdly__wb_ext_ack = 0U;
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ext_stb) 
         & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ext_ack)))) {
        vlSymsp->TOP__servant_sim__dut.__Vdly__wb_ext_ack = 1U;
    }
    if (vlTOPp->wb_rst) {
        vlSymsp->TOP__servant_sim__dut.__Vdly__wb_ext_ack = 0U;
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ADD = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if (((((((((0x1013U == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                               | (0x5013U == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x40005013U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x33U == (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x40000033U == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x1033U == (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x2033U == (0xfe00707fU 
                                         & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x3033U == (0xfe00707fU 
                                        & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                        if ((0x1013U != (0xfe00707fU 
                                         & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x5013U != (0xfe00707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x40005013U != 
                                     (0xfe00707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x33U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ADD = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRAI = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if (((((((((0x1013U == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                               | (0x5013U == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x40005013U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x33U == (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x40000033U == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x1033U == (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x2033U == (0xfe00707fU 
                                         & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x3033U == (0xfe00707fU 
                                        & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                        if ((0x1013U != (0xfe00707fU 
                                         & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x5013U != (0xfe00707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x40005013U == 
                                     (0xfe00707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRAI = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRLI = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if (((((((((0x1013U == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                               | (0x5013U == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x40005013U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x33U == (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x40000033U == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x1033U == (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x2033U == (0xfe00707fU 
                                         & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x3033U == (0xfe00707fU 
                                        & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                        if ((0x1013U != (0xfe00707fU 
                                         & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x5013U == (0xfe00707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRLI = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLLI = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if (((((((((0x1013U == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                               | (0x5013U == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x40005013U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x33U == (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x40000033U == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x1033U == (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x2033U == (0xfe00707fU 
                                         & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x3033U == (0xfe00707fU 
                                        & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                        if ((0x1013U == (0xfe00707fU 
                                         & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLLI = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ANDI = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if (((((((((0x1023U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                           | (0x2023U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x13U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x2013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x3013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x6013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                     | (0x7013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                    if ((0x1023U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        if ((0x2023U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x13U != (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x2013U != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x3013U != 
                                         (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        if ((0x4013U 
                                             != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                            if ((0x6013U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                                vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ANDI = 1U;
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
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ORI = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if (((((((((0x1023U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                           | (0x2023U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x13U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x2013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x3013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x6013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                     | (0x7013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                    if ((0x1023U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        if ((0x2023U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x13U != (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x2013U != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x3013U != 
                                         (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        if ((0x4013U 
                                             != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                            if ((0x6013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                                vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ORI = 1U;
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
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__XORI = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if (((((((((0x1023U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                           | (0x2023U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x13U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x2013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x3013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x6013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                     | (0x7013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                    if ((0x1023U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        if ((0x2023U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x13U != (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x2013U != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x3013U != 
                                         (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        if ((0x4013U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__XORI = 1U;
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
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLTIU = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if (((((((((0x1023U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                           | (0x2023U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x13U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x2013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x3013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x6013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                     | (0x7013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                    if ((0x1023U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        if ((0x2023U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x13U != (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x2013U != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x3013U == 
                                         (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLTIU = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLTI = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if (((((((((0x1023U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                           | (0x2023U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x13U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x2013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x3013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x6013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                     | (0x7013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                    if ((0x1023U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        if ((0x2023U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x13U != (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLTI = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ADDI = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if (((((((((0x1023U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                           | (0x2023U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x13U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x2013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x3013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x6013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                     | (0x7013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                    if ((0x1023U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        if ((0x2023U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x13U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ADDI = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SW = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if (((((((((0x1023U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                           | (0x2023U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x13U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x2013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x3013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x6013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                     | (0x7013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                    if ((0x1023U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        if ((0x2023U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SW = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SH = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if (((((((((0x1023U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                           | (0x2023U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x13U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x2013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x3013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x6013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                     | (0x7013U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                    if ((0x1023U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SH = 1U;
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SB = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if (((((((((0x6063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                       | (0x7063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                     | (0x1003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                    | (0x2003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                   | (0x4003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                  | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                 | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                if ((0x6063U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                    if ((0x7063U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        if ((3U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x1003U != (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x2003U != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x4003U != 
                                         (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        if ((0x5003U 
                                             != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SB = 1U;
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
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LHU = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if (((((((((0x6063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                       | (0x7063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                     | (0x1003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                    | (0x2003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                   | (0x4003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                  | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                 | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                if ((0x6063U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                    if ((0x7063U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        if ((3U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x1003U != (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x2003U != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x4003U != 
                                         (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        if ((0x5003U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LHU = 1U;
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
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LBU = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if (((((((((0x6063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                       | (0x7063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                     | (0x1003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                    | (0x2003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                   | (0x4003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                  | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                 | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                if ((0x6063U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                    if ((0x7063U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        if ((3U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x1003U != (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x2003U != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x4003U == 
                                         (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LBU = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LW = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if (((((((((0x6063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                       | (0x7063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                     | (0x1003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                    | (0x2003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                   | (0x4003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                  | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                 | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                if ((0x6063U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                    if ((0x7063U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        if ((3U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x1003U != (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x2003U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LW = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LUI = 0U;
        if (((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                   | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                  | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                 | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
               | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
              | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
             | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
            if ((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LUI = 1U;
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__AUIPC = 0U;
        if (((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                   | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                  | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                 | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
               | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
              | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
             | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
            if ((0x37U != (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                if ((0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__AUIPC = 1U;
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__JAL = 0U;
        if (((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                   | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                  | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                 | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
               | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
              | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
             | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
            if ((0x37U != (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                if ((0x17U != (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                    if ((0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__JAL = 1U;
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__JALR = 0U;
        if (((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                   | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                  | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                 | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
               | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
              | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
             | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
            if ((0x37U != (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                if ((0x17U != (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                    if ((0x6fU != (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        if ((0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__JALR = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BEQ = 0U;
        if (((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                   | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                  | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                 | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
               | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
              | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
             | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
            if ((0x37U != (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                if ((0x17U != (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                    if ((0x6fU != (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        if ((0x67U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x63U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BEQ = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BNE = 0U;
        if (((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                   | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                  | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                 | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
               | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
              | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
             | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
            if ((0x37U != (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                if ((0x17U != (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                    if ((0x6fU != (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        if ((0x67U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x63U != (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x1063U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BNE = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BGE = 0U;
        if (((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                   | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                  | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                 | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
               | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
              | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
             | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
            if ((0x37U != (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                if ((0x17U != (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                    if ((0x6fU != (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        if ((0x67U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x63U != (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x1063U != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x4063U != 
                                         (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BGE = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BGEU = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if (((((((((0x6063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                       | (0x7063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                     | (0x1003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                    | (0x2003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                   | (0x4003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                  | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                 | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                if ((0x6063U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                    if ((0x7063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BGEU = 1U;
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BLT = 0U;
        if (((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                   | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                  | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                 | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
               | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
              | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
             | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
            if ((0x37U != (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                if ((0x17U != (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                    if ((0x6fU != (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        if ((0x67U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x63U != (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x1063U != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x4063U == 
                                         (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BLT = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LB = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if (((((((((0x6063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                       | (0x7063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                     | (0x1003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                    | (0x2003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                   | (0x4003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                  | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                 | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                if ((0x6063U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                    if ((0x7063U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        if ((3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LB = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LH = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if (((((((((0x6063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                       | (0x7063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                     | (0x1003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                    | (0x2003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                   | (0x4003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                  | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                 | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                if ((0x6063U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                    if ((0x7063U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                        if ((3U != (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__LH = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BLTU = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if (((((((((0x6063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                       | (0x7063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                     | (0x1003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                    | (0x2003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                   | (0x4003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                  | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                 | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                if ((0x6063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__BLTU = 1U;
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SUB = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if (((((((((0x1013U == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                               | (0x5013U == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x40005013U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x33U == (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x40000033U == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x1033U == (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x2033U == (0xfe00707fU 
                                         & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x3033U == (0xfe00707fU 
                                        & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                        if ((0x1013U != (0xfe00707fU 
                                         & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x5013U != (0xfe00707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x40005013U != 
                                     (0xfe00707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x33U != (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        if ((0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SUB = 1U;
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
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLL = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if (((((((((0x1013U == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                               | (0x5013U == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x40005013U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x33U == (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x40000033U == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x1033U == (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x2033U == (0xfe00707fU 
                                         & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x3033U == (0xfe00707fU 
                                        & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                        if ((0x1013U != (0xfe00707fU 
                                         & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x5013U != (0xfe00707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x40005013U != 
                                     (0xfe00707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x33U != (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        if ((0x40000033U 
                                             != (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                            if ((0x1033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                                vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLL = 1U;
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
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLT = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if (((((((((0x1013U == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                               | (0x5013U == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x40005013U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x33U == (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x40000033U == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x1033U == (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x2033U == (0xfe00707fU 
                                         & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x3033U == (0xfe00707fU 
                                        & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                        if ((0x1013U != (0xfe00707fU 
                                         & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x5013U != (0xfe00707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x40005013U != 
                                     (0xfe00707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x33U != (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        if ((0x40000033U 
                                             != (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                            if ((0x1033U 
                                                 != 
                                                 (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                                if (
                                                    (0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                                    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLT = 1U;
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
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLTU = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if (((((((((0x1013U == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                               | (0x5013U == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x40005013U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x33U == (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x40000033U == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x1033U == (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x2033U == (0xfe00707fU 
                                         & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x3033U == (0xfe00707fU 
                                        & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))) {
                        if ((0x1013U != (0xfe00707fU 
                                         & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x5013U != (0xfe00707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x40005013U != 
                                     (0xfe00707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x33U != (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        if ((0x40000033U 
                                             != (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                            if ((0x1033U 
                                                 != 
                                                 (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                                if (
                                                    (0x2033U 
                                                     != 
                                                     (0xfe00707fU 
                                                      & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                                    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SLTU = 1U;
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
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__XOR = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if ((1U & (~ ((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                        | (0x5013U 
                                           == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x40005013U 
                                          == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                      | (0x33U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                     | (0x40000033U 
                                        == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                    | (0x1033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x2033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x3033U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                        if (((((((((0x4033U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                   | (0x5033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x40005033U == 
                                     (0xfe00707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x6033U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x7033U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0xfU == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x73U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                             | (0x100073U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x4033U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__XOR = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRL = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if ((1U & (~ ((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                        | (0x5013U 
                                           == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x40005013U 
                                          == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                      | (0x33U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                     | (0x40000033U 
                                        == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                    | (0x1033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x2033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x3033U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                        if (((((((((0x4033U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                   | (0x5033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x40005033U == 
                                     (0xfe00707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x6033U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x7033U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0xfU == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x73U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                             | (0x100073U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x4033U != (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x5033U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRL = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRA = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if ((1U & (~ ((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                        | (0x5013U 
                                           == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x40005013U 
                                          == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                      | (0x33U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                     | (0x40000033U 
                                        == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                    | (0x1033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x2033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x3033U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                        if (((((((((0x4033U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                   | (0x5033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x40005033U == 
                                     (0xfe00707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x6033U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x7033U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0xfU == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x73U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                             | (0x100073U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x4033U != (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x5033U != (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x40005033U 
                                         == (0xfe00707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__SRA = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__OR = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if ((1U & (~ ((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                        | (0x5013U 
                                           == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x40005013U 
                                          == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                      | (0x33U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                     | (0x40000033U 
                                        == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                    | (0x1033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x2033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x3033U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                        if (((((((((0x4033U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                   | (0x5033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x40005033U == 
                                     (0xfe00707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x6033U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x7033U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0xfU == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x73U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                             | (0x100073U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x4033U != (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x5033U != (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x40005033U 
                                         != (0xfe00707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        if ((0x6033U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__OR = 1U;
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
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__AND = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if ((1U & (~ ((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                        | (0x5013U 
                                           == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x40005013U 
                                          == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                      | (0x33U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                     | (0x40000033U 
                                        == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                    | (0x1033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x2033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x3033U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                        if (((((((((0x4033U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                   | (0x5033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x40005033U == 
                                     (0xfe00707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x6033U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x7033U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0xfU == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x73U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                             | (0x100073U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x4033U != (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x5033U != (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x40005033U 
                                         != (0xfe00707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        if ((0x6033U 
                                             != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                            if ((0x7033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                                vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__AND = 1U;
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
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__FENCE = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if ((1U & (~ ((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                        | (0x5013U 
                                           == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x40005013U 
                                          == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                      | (0x33U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                     | (0x40000033U 
                                        == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                    | (0x1033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x2033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x3033U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                        if (((((((((0x4033U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                   | (0x5033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x40005033U == 
                                     (0xfe00707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x6033U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x7033U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0xfU == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x73U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                             | (0x100073U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x4033U != (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x5033U != (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x40005033U 
                                         != (0xfe00707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        if ((0x6033U 
                                             != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                            if ((0x7033U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                                if (
                                                    (0xfU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                                    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__FENCE = 1U;
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
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ECALL = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if ((1U & (~ ((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                        | (0x5013U 
                                           == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x40005013U 
                                          == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                      | (0x33U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                     | (0x40000033U 
                                        == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                    | (0x1033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x2033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x3033U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                        if (((((((((0x4033U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                   | (0x5033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x40005033U == 
                                     (0xfe00707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x6033U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x7033U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0xfU == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x73U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                             | (0x100073U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x4033U != (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x5033U != (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x40005033U 
                                         != (0xfe00707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        if ((0x6033U 
                                             != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                            if ((0x7033U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                                if (
                                                    (0xfU 
                                                     != 
                                                     (0x707fU 
                                                      & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                                    if (
                                                        (0x73U 
                                                         == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) {
                                                        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__ECALL = 1U;
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
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__EBREAK = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if ((1U & (~ ((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                        | (0x5013U 
                                           == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x40005013U 
                                          == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                      | (0x33U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                     | (0x40000033U 
                                        == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                    | (0x1033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x2033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x3033U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                        if (((((((((0x4033U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                   | (0x5033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x40005033U == 
                                     (0xfe00707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x6033U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x7033U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0xfU == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x73U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                             | (0x100073U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                            if ((0x4033U != (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x5033U != (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x40005033U 
                                         != (0xfe00707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        if ((0x6033U 
                                             != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                            if ((0x7033U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                                if (
                                                    (0xfU 
                                                     != 
                                                     (0x707fU 
                                                      & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                                    if (
                                                        (0x73U 
                                                         != vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) {
                                                        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__EBREAK = 1U;
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
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRW = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if ((1U & (~ ((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                        | (0x5013U 
                                           == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x40005013U 
                                          == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                      | (0x33U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                     | (0x40000033U 
                                        == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                    | (0x1033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x2033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x3033U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                        if ((1U & (~ ((((((((0x4033U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                            | (0x5033U 
                                               == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                           | (0x40005033U 
                                              == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                          | (0x6033U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                         | (0x7033U 
                                            == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                        | (0xfU == 
                                           (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x73U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                      | (0x100073U 
                                         == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))))) {
                            if ((0x1073U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRW = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRS = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if ((1U & (~ ((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                        | (0x5013U 
                                           == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x40005013U 
                                          == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                      | (0x33U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                     | (0x40000033U 
                                        == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                    | (0x1033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x2033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x3033U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                        if ((1U & (~ ((((((((0x4033U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                            | (0x5033U 
                                               == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                           | (0x40005033U 
                                              == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                          | (0x6033U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                         | (0x7033U 
                                            == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                        | (0xfU == 
                                           (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x73U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                      | (0x100073U 
                                         == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))))) {
                            if ((0x1073U != (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x2073U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRS = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRC = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if ((1U & (~ ((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                        | (0x5013U 
                                           == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x40005013U 
                                          == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                      | (0x33U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                     | (0x40000033U 
                                        == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                    | (0x1033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x2033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x3033U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                        if ((1U & (~ ((((((((0x4033U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                            | (0x5033U 
                                               == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                           | (0x40005033U 
                                              == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                          | (0x6033U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                         | (0x7033U 
                                            == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                        | (0xfU == 
                                           (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x73U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                      | (0x100073U 
                                         == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))))) {
                            if ((0x1073U != (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x2073U != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x3073U == 
                                         (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRC = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRWI = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if ((1U & (~ ((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                        | (0x5013U 
                                           == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x40005013U 
                                          == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                      | (0x33U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                     | (0x40000033U 
                                        == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                    | (0x1033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x2033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x3033U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                        if ((1U & (~ ((((((((0x4033U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                            | (0x5033U 
                                               == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                           | (0x40005033U 
                                              == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                          | (0x6033U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                         | (0x7033U 
                                            == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                        | (0xfU == 
                                           (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x73U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                      | (0x100073U 
                                         == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))))) {
                            if ((0x1073U != (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x2073U != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x3073U != 
                                         (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        if ((0x5073U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRWI = 1U;
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
}

VL_INLINE_OPT void Vservant_sim_servant__pi1::_sequent__TOP__servant_sim__dut__3(Vservant_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vservant_sim_servant__pi1::_sequent__TOP__servant_sim__dut__3\n"); );
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdlyvval__rf_ram__DOT__memory__v0;
    SData/*9:0*/ __Vdlyvdim0__rf_ram__DOT__memory__v0;
    // Body
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRSI = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if ((1U & (~ ((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                        | (0x5013U 
                                           == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x40005013U 
                                          == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                      | (0x33U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                     | (0x40000033U 
                                        == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                    | (0x1033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x2033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x3033U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                        if ((1U & (~ ((((((((0x4033U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                            | (0x5033U 
                                               == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                           | (0x40005033U 
                                              == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                          | (0x6033U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                         | (0x7033U 
                                            == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                        | (0xfU == 
                                           (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x73U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                      | (0x100073U 
                                         == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))))) {
                            if ((0x1073U != (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x2073U != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x3073U != 
                                         (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        if ((0x5073U 
                                             != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                            if ((0x6073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                                vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRSI = 1U;
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
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRCI = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if ((1U & (~ ((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                        | (0x5013U 
                                           == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x40005013U 
                                          == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                      | (0x33U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                     | (0x40000033U 
                                        == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                    | (0x1033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x2033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x3033U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                        if ((1U & (~ ((((((((0x4033U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                            | (0x5033U 
                                               == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                           | (0x40005033U 
                                              == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                          | (0x6033U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                         | (0x7033U 
                                            == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                        | (0xfU == 
                                           (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x73U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                      | (0x100073U 
                                         == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))))) {
                            if ((0x1073U != (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x2073U != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x3073U != 
                                         (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        if ((0x5073U 
                                             != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                            if ((0x6073U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                                if (
                                                    (0x7073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                                    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__CSRRCI = 1U;
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
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__OTHER = 0U;
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                            | (0x17U == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x6fU == (0x7fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x67U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                         | (0x63U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                        | (0x1063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                       | (0x4063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
            if ((1U & (~ ((((((((0x6063U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                | (0x7063U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (3U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x1003U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                             | (0x2003U == (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                            | (0x4003U == (0x707fU 
                                           & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                           | (0x5003U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                          | (0x23U == (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                if ((1U & (~ ((((((((0x1023U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x13U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                | (0x4013U == (0x707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                               | (0x6013U == (0x707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                              | (0x7013U == (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                    if ((1U & (~ ((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                        | (0x5013U 
                                           == (0xfe00707fU 
                                               & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x40005013U 
                                          == (0xfe00707fU 
                                              & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                      | (0x33U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                     | (0x40000033U 
                                        == (0xfe00707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                    | (0x1033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                   | (0x2033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                  | (0x3033U == (0xfe00707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)))))) {
                        if ((1U & (~ ((((((((0x4033U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                            | (0x5033U 
                                               == (0xfe00707fU 
                                                   & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                           | (0x40005033U 
                                              == (0xfe00707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                          | (0x6033U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                         | (0x7033U 
                                            == (0x707fU 
                                                & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                        | (0xfU == 
                                           (0x707fU 
                                            & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) 
                                       | (0x73U == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)) 
                                      | (0x100073U 
                                         == vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))))) {
                            if ((0x1073U != (0x707fU 
                                             & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                if ((0x2073U != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                    if ((0x3073U != 
                                         (0x707fU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                        if ((0x5073U 
                                             != (0x707fU 
                                                 & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                            if ((0x6073U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                                if (
                                                    (0x7073U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))) {
                                                    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__OTHER = 1U;
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
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm25 
            = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                     >> 0x19U));
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit 
            = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2_q;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl_pc_en) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl_pc_en) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy));
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op22 
            = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                     >> 0x16U));
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r = 0U;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_en));
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__mux__DOT__sim_ack = 0U;
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_dbus_stb) 
         & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__sim_ack)))) {
        if (VL_UNLIKELY(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__sig_en) 
                         & (0U != vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__genblk1__DOT__f)))) {
            VL_FWRITEF(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__genblk1__DOT__f,"%c",
                       8,(0xffU & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat));
        } else {
            if (VL_UNLIKELY(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__halt_en)) {
                VL_WRITEF("Test complete\n");
                VL_FINISH_MT("src/servile_1.3.0/servile/servile_mux.v", 86, "");
            }
        }
        vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__mux__DOT__sim_ack 
            = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__sig_en) 
               | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__halt_en));
    }
    if (vlTOPp->wb_rst) {
        vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__mux__DOT__sim_ack = 0U;
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26 
            = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                     >> 0x1aU));
    }
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__rf_ram_if__DOT__wdata1_r 
        = ((4U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
                    ? vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_adr
                    : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in)) 
                  << 2U)) | (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata1_r) 
                                   >> 1U)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0 
        = (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                 >> 1U));
    if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0 
            = vlSymsp->TOP__servant_sim__dut.__PVT__rf_rdata;
    }
    if ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) 
          | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done)) 
         | (IData)(vlTOPp->wb_rst))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__ibus_cyc 
            = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl_pc_en) 
               | (IData)(vlTOPp->wb_rst));
    }
    if ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r 
            = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_cmp;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r = 0U;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r 
        = ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb))
            ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy)
            : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_sub));
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_en) {
        vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__bufreg__DOT__data 
            = ((3U & vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__bufreg__DOT__data) 
               | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init)
                     ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__q)
                     : ((vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                         >> 0x1fU) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30))) 
                   << 0x1fU) | (0x7ffffffcU & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                               >> 1U))));
    }
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init)
          ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0) 
             | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt1))
          : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_en))) {
        vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__bufreg__DOT__data 
            = ((0xfffffffcU & vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__bufreg__DOT__data) 
               | ((2U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init)
                           ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__q)
                           : (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                              >> 2U)) << 1U)) | (1U 
                                                 & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                    >> 1U))));
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init));
    if (vlTOPp->wb_rst) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req = 0U;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__rf_ram__DOT__regzero 
        = (1U & (~ (IData)((0U != (0x3fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rf_raddr) 
                                            >> 4U))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__rf_ram__DOT__rdata 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rgate)
            ? ((0x23fU >= (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rf_raddr))
                ? vlSymsp->TOP__servant_sim__dut.__PVT__rf_ram__DOT__memory
               [vlSymsp->TOP__servant_sim__dut.__PVT__rf_raddr]
                : 0U) : 0U);
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mie_en) 
         & ((1U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
            & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb) 
               >> 3U)))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mie_mtie 
            = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    }
    if (vlTOPp->wb_rst) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mie_mtie = 0U;
    }
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl_pc_en) 
         | (IData)(vlTOPp->wb_rst))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_adr 
            = ((IData)(vlTOPp->wb_rst) ? 0U : (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
                                                  | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0) 
                                                      | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt1))))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__jump)
                                                   ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                                                   : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4))) 
                                                << 0x1fU) 
                                               | (0x7fffffffU 
                                                  & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_adr 
                                                     >> 1U))));
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm31 
            = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                     >> 0x1fU));
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wen0) {
        vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd 
            = (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wdata0) 
                << 0x1fU) | (0x7fffffffU & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd 
                                            >> 1U)));
    }
    if ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb))) {
        vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_csr 
            = (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in) 
                << 0x1fU) | (0x7fffffffU & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_csr 
                                            >> 1U)));
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__update_rd) {
        if ((0x10U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
            if ((8U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                if ((4U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                    if ((2U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                        if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x31 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        } else {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x30 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        }
                    } else {
                        if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x29 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        } else {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x28 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        }
                    }
                } else {
                    if ((2U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                        if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x27 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        } else {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x26 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        }
                    } else {
                        if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x25 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        } else {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x24 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        }
                    }
                }
            } else {
                if ((4U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                    if ((2U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                        if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x23 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        } else {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x22 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        }
                    } else {
                        if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x21 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        } else {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x20 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        }
                    }
                } else {
                    if ((2U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                        if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x19 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        } else {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x18 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        }
                    } else {
                        if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x17 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        } else {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x16 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        }
                    }
                }
            }
        } else {
            if ((8U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                if ((4U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                    if ((2U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                        if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x15 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        } else {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x14 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        }
                    } else {
                        if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x13 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        } else {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x12 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        }
                    }
                } else {
                    if ((2U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                        if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x11 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        } else {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x10 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        }
                    } else {
                        if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x9 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        } else {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x8 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        }
                    }
                }
            } else {
                if ((4U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                    if ((2U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                        if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x7 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        } else {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x6 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        }
                    } else {
                        if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x5 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        } else {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x4 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        }
                    }
                } else {
                    if ((2U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                        if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x3 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        } else {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x2 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        }
                    } else {
                        if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) {
                            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__x1 
                                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__update_rd) {
        if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en) {
            vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mstatus 
                = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_csr;
        } else {
            if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mie_en) {
                vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mie 
                    = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_csr;
            } else {
                if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en) {
                    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mcause 
                        = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_csr;
                } else {
                    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en) {
                        if ((2U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr))) {
                            if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr))) {
                                vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mtval 
                                    = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_csr;
                            } else {
                                vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mepc 
                                    = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_csr;
                            }
                        } else {
                            if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr))) {
                                vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mtvec 
                                    = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_csr;
                            } else {
                                vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_mscratch 
                                    = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_csr;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rtrig1) 
          & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen0_r)) 
         | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt) 
            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen1_r)))) {
        vlSymsp->TOP__servant_sim__dut.rf_ram__DOT____Vlvbound1 
            = (3U & ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))
                      ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata1_r)
                      : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata0_r)));
        if ((0x23fU >= (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rf_waddr))) {
            __Vdlyvval__rf_ram__DOT__memory__v0 = vlSymsp->TOP__servant_sim__dut.rf_ram__DOT____Vlvbound1;
            vlSymsp->TOP__servant_sim__dut.__Vdlyvset__rf_ram__DOT__memory__v0 = 1U;
            __Vdlyvdim0__rf_ram__DOT__memory__v0 = vlSymsp->TOP__servant_sim__dut.__PVT__rf_waddr;
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rtrig1) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata1 
            = (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rf_rdata) 
                     >> 1U));
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21 
            = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                     >> 0x15U));
    }
    if ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) 
          | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done)) 
         | (IData)(vlTOPp->wb_rst))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_csr__DOT__misalign_trap_sync_r 
            = ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) 
                   | (IData)(vlTOPp->wb_rst))) & ((
                                                   (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__take_branch) 
                                                     & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                        >> 1U)) 
                                                    | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_dbus_en) 
                                                       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_misalign))) 
                                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init)) 
                                                  | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_csr__DOT__misalign_trap_sync_r)));
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__init_done 
            = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init) 
               & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__init_done)));
    }
    if (vlTOPp->wb_rst) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__init_done = 0U;
    }
    if (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done)) 
          | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en) 
              & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt3)) 
             & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb)))) 
         | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret))) {
        vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie 
            = ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)) 
               & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret)
                   ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie)
                   : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in)));
    }
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__state__DOT__o_cnt 
        = (7U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                 + (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb) 
                          >> 3U))));
    if (vlTOPp->wb_rst) {
        vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__state__DOT__o_cnt = 0U;
    }
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb 
        = ((0xeU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb) 
                    << 1U)) | (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb) 
                                       >> 3U) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done))) 
                                     | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rgnt) 
                                         | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_wreq)) 
                                        & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en))))));
    if (vlTOPp->wb_rst) {
        vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb = 0U;
    }
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) 
         | ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb)) 
            & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_en) 
               >> 1U)))) {
        vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20 
            = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack)
                ? ((0x1feU & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                              >> 0xbU)) | (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                                                 >> 0x14U)))
                : ((0x100U & (((8U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl))
                                ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__signbit)
                                : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20)) 
                              << 8U)) | (0xffU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                                                  >> 1U))));
    }
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) 
         | ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb)) 
            & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_en) 
               >> 3U)))) {
        vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25 
            = (0x3fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack)
                         ? (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                            >> 0x19U) : ((0x20U & (
                                                   ((4U 
                                                     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl))
                                                     ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm7)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl))
                                                      ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__signbit)
                                                      : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20))) 
                                                   << 5U)) 
                                         | (0x1fU & 
                                            ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25) 
                                             >> 1U)))));
    }
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) 
         | ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb)) 
            & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_en) 
               >> 2U)))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20 
            = (0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack)
                         ? (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                            >> 0x14U) : ((0x10U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20) 
                                             >> 1U)))));
    }
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) 
         | ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb)) 
            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_en)))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7 
            = (0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack)
                         ? (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                            >> 7U) : ((0x10U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25) 
                                                << 4U)) 
                                      | (0xfU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7) 
                                                 >> 1U)))));
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3 
            = (7U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                     >> 0xcU));
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__timer_irq 
        = VL_LTES_III(1,32,32, 0U, (vlSymsp->TOP__servant_sim__dut.__PVT__timer__DOT__mtime 
                                    - vlSymsp->TOP__servant_sim__dut.__PVT__timer__DOT__mtimecmp));
    if ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op) 
          | ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb)) 
             & ((((((~ vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data) 
                    & (~ (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                          >> 1U))) | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                          >> 1U)) & 
                                      (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                          >> 2U)))) 
                  | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                         >> 2U)) & (~ (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                       >> 1U)))) | 
                 ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                      >> 2U)) & (~ vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data))) 
                | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                       >> 1U)) & (~ (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                     >> 1U)))))) | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_dbus_ack))) {
        vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
            = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_dbus_ack)
                ? ((0U != (3U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                 >> 0x1eU))) ? ((0x80000000U 
                                                 & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)
                                                 ? vlSymsp->TOP__servant_sim__dut.__PVT__timer__DOT__mtime
                                                 : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_gpio_rdt))
                    : vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt)
                : (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__op_b) 
                    << 0x1fU) | ((0x7fffffc0U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
                                                 >> 1U)) 
                                 | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat_shamt))));
    }
    if (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en) 
           & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb))) 
          & (0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt))) 
         | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done)))) {
        vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 
            = ((7U & (IData)(vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0)) 
               | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_e_op) 
                    & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20))) 
                   | ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)) 
                      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in))) 
                  << 3U));
        vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 
            = ((0xbU & (IData)(vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0)) 
               | (4U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__new_irq) 
                          | (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                >> 4U))) << 2U) | (0x7ffffffcU 
                                                   & (((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)) 
                                                       << 2U) 
                                                      & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0) 
                                                         >> 1U))))));
        vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 
            = ((0xdU & (IData)(vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0)) 
               | (2U & (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__new_irq) 
                           | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_e_op)) 
                          << 1U) | (0x3ffffffeU & (
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                      >> 4U)) 
                                                    << 1U) 
                                                   & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                      >> 2U)))) 
                        | (0x7ffffffeU & (((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)) 
                                           << 1U) & 
                                          ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0) 
                                           >> 1U))))));
        vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 
            = ((0xeU & (IData)(vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0)) 
               | (1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__new_irq) 
                         | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_e_op)) 
                        | ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)) 
                           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0) 
                              >> 1U)))));
    }
    if ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en) 
          & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done)) 
         | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause31 
            = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
                ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__new_irq)
                : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in));
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__wb_ext_ack 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__wb_ext_ack;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__sim_ack 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__mux__DOT__sim_ack;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_rd;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_csr 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__dbg_csr;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata1_r 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__rf_ram_if__DOT__wdata1_r;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata0_r 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__rf_ram_if__DOT__wdata0_r;
    if (vlSymsp->TOP__servant_sim__dut.__Vdlyvset__rf_ram__DOT__memory__v0) {
        vlSymsp->TOP__servant_sim__dut.__PVT__rf_ram__DOT__memory[__Vdlyvdim0__rf_ram__DOT__memory__v0] 
            = __Vdlyvval__rf_ram__DOT__memory__v0;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20;
    vlSymsp->TOP__servant_sim__dut.__PVT__timer__DOT__mtime 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__timer__DOT__mtime;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__state__DOT__o_cnt;
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30 
            = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                     >> 0x1eU));
    }
    if (((0x1fU == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt)) 
         | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_rreq))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rgate 
            = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_rreq;
    }
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__rf_ram_if__DOT__rcnt 
        = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt)));
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_rreq) 
         | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_wreq))) {
        vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__rf_ram_if__DOT__rcnt 
            = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_wreq) 
               << 1U);
    }
    if (vlTOPp->wb_rst) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rgate = 0U;
        vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__rf_ram_if__DOT__rcnt = 0U;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__rf_rdata 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rf_ram__DOT__rdata) 
           & (~ (- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rf_ram__DOT__regzero)))));
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__jump 
            = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init) 
               & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__take_branch));
    }
    if (vlTOPp->wb_rst) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__jump = 0U;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_debug__DOT__debug__DOT__update_rd 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wen0));
    if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen0_r 
            = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wen0;
    }
    if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen1_r 
            = ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb)) 
               & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
                  | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en)));
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rtrig1 
        = (1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt));
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
         & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie 
            = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rgnt 
        = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rreq_r;
    if (vlTOPp->wb_rst) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rgnt = 0U;
    }
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) 
         | (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb)))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm7 
            = (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack)
                      ? (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                         >> 7U) : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__signbit)));
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d 
        = (1U & ((4U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))
                  ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                     >> 4U) : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig 
        = (1U & (~ (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                     & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                        >> 1U)) | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                    >> 1U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                              >> 2U)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel 
        = ((6U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel)) 
           | (0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel 
        = ((5U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel)) 
           | ((1U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                            >> 1U))) << 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel 
        = ((3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel)) 
           | (4U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)));
    if ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ext_stb) 
          & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
             >> 0x1fU)) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                           >> 3U))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__timer__DOT__mtimecmp 
            = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat;
    }
    if (vlTOPp->wb_rst) {
        vlSymsp->TOP__servant_sim__dut.__PVT__timer__DOT__mtimecmp = 0U;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__wb_gpio_rdt 
        = vlSymsp->TOP__servant_sim__dut.__PVT__q;
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20 
            = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                     >> 0x14U));
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid 
        = (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                   >> 1U) | (0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                          >> 1U)))) 
                 | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                    & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                          >> 2U)))));
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__new_irq 
            = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq) 
               & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq_r)));
    }
    if (vlTOPp->wb_rst) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__new_irq = 0U;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__rf_ram_if__DOT__rcnt;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1 
        = (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rf_rdata)
                  : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata1)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rreq_r 
        = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_rreq;
    if (vlTOPp->wb_rst) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rreq_r = 0U;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en 
        = (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt1 
        = ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb) 
              >> 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt2 
        = ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb) 
              >> 2U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt3 
        = ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb) 
              >> 3U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0 
        = ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done 
        = ((7U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb) 
              >> 3U));
    if ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ext_stb) 
          & (~ (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                >> 0x1fU))) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                               >> 3U))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__q = (1U 
                                                   & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat);
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr 
        = ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26) 
             & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20)) 
            << 1U) | (1U & ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26)) 
                            | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21))));
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq_r 
            = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy 
        = (1U & ((((1U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_adr) 
                   + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt2)) 
                  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r)) 
                 >> 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4 
        = (1U & ((vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_adr 
                  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt2)) 
                 + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__bufreg__DOT__data;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq 
        = (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__timer_irq) 
            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie)) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mie_mtie));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_dbus_sel 
        = ((8U & ((((3U == (3U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)) 
                    << 3U) | (0xfffffff8U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                             << 2U))) 
                  | (0xfffffff8U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                     << 3U) & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                               << 2U))))) 
           | ((4U & (((2U == (3U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)) 
                      << 2U) | (0xfffffffcU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                               << 1U)))) 
              | ((2U & ((((1U == (3U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)) 
                          << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
                        | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                            & (~ (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                  >> 1U))) << 1U))) 
                 | (0U == (3U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_misalign 
        = (1U & ((vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                  & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                      >> 1U) | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
                 | ((vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                     >> 1U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                               >> 1U))));
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode 
            = (0x1fU & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                        >> 2U));
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op 
        = (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                   >> 2U) | (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                  >> 2U)) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                             >> 4U)) 
                             & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                 | (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                         >> 2U)) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                       >> 3U))) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en 
        = (1U & ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 4U)) | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                    >> 1U)) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0) 
           & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
               >> 4U) & ((0U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                         | (3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__halt_en 
        = (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
            >> 3U) & (0x90000000U == (0xfffffffcU & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__sig_en 
        = (((0U != vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__genblk1__DOT__f) 
            & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
               >> 3U)) & (0x80000000U == (0xfffffffcU 
                                          & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret 
        = (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
              >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                        >> 2U)) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21)) 
           & (~ (IData)((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_dbus_en 
        = (1U & ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 2U)) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                   >> 4U))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a 
        = (((((0U == (7U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
              | (3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))) 
             | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                            >> 2U)) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20))) 
            | (0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                            >> 3U)))) & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_adr);
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_utype 
        = (1U & (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                      >> 4U)) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 2U)) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_sub 
        = (1U & (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                    >> 1U) | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)) 
                  | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                      >> 3U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30))) 
                 | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                    >> 4U)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op 
        = ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
             >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                       >> 2U)) & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op 
        = (1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                               >> 1U))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl 
        = ((0xeU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl)) 
           | (8U == (0xfU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl 
        = ((0xdU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl)) 
           | (((0U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
               | (0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                               >> 1U)))) << 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl 
        = ((0xbU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl)) 
           | (4U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 2U) & ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)) 
                               << 2U))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl 
        = ((7U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl)) 
           | (8U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                    >> 1U)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_e_op 
        = (1U & (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                    >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                              >> 2U)) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21))) 
                 & (~ (IData)((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_two_stage_op 
        = (1U & (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                      >> 2U)) | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                   & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                         >> 1U))) & 
                                  (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                                 & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                       >> 4U)))) | 
                 (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                     >> 1U) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                  >> 2U))) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                  & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                        >> 4U)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_imm_en 
        = (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                   >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                             >> 2U)) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                        >> 2U)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_dbus_stb 
        = ((((~ (IData)((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb)))) 
             & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__init_done)) 
            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_dbus_en)) 
           & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_misalign)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mie_en 
        = ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
             & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26))) 
            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op22)) 
           & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en 
        = (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21)) 
           & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en 
        = ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
             & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26))) 
            & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op22))) 
           & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20) 
              | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26) 
                 & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap 
        = (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_e_op) 
            | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__new_irq)) 
           | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_csr__DOT__misalign_trap_sync_r));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init 
        = (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_two_stage_op) 
            & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__new_irq))) 
           & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__init_done)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_en 
        = ((8U & ((((0x7ffffff8U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                    >> 1U)) | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                   | (0xfffffff8U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                     << 1U))) | ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)) 
                                                 << 3U))) 
           | ((4U & (((0x3ffffffcU & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                       >> 2U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                      | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                             >> 3U)) << 2U)) | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                << 2U))) 
              | ((2U & ((((1U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                        >> 1U))) << 1U) 
                         | (0x7ffffffeU & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                            >> 1U) 
                                           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                              << 1U)))) 
                        | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_imm_en) 
                           << 1U))) | (1U & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__signbit 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm31) 
           & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_imm_en)));
    vlSymsp->TOP__servant_sim__dut.__PVT__wb_ext_stb 
        = (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_dbus_stb) 
            & (0U != (3U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                            >> 0x1eU)))) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__sig_en) 
                                               | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__halt_en))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
        = (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en) 
              & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb))) 
             & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie) 
                 & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt3)) 
                | (((2U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
                    & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb) 
                       >> 3U)) | ((3U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
                                  & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb))))) 
            | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1) 
               & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en))) 
           | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en) 
               & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb))) 
              & ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt))
                  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0)
                  : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done) 
                     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause31)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__rf_waddr 
        = ((((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))
              ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
                  ? 0x22U : (0x20U | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr)))
              : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
                  ? 0x23U : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) 
            << 4U) | (0xfU & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                               - (IData)(4U)) >> 1U)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2 
        = (1U & (~ (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
                     | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret)) 
                    | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl_pc_en 
        = ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb)) 
           & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wen0 
        = ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb)) 
           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
              | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op) 
                  & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init))) 
                 & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm 
        = (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done)
                  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__signbit)
                  : ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl))
                      ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7)
                      : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
        = ((1U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))
            ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
            : ((2U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))
                ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                : ((3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))
                    ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                       & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)))
                    : ((0U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
                       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__rf_raddr 
        = ((((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))
              ? ((0x20U & ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2)) 
                           << 5U)) | ((0x1cU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20) 
                                                & ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                                   << 2U))) 
                                      | (3U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
                                                 | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret) 
                                                    << 1U)) 
                                                | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en))) 
                                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr))) 
                                               | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                                  & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20))))))
              : (0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                          >> 4U))) << 4U) | (0xfU & 
                                             ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                              >> 1U)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c 
        = (1U & (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en)) 
                   + (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm) 
                       & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                             >> 2U))) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb)))) 
                  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r)) 
                 >> 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__q 
        = (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en)) 
                  + (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm) 
                      & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                            >> 2U))) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb)))) 
                 + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__op_b 
        = ((8U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))
            ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1)
            : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__op_b) 
           ^ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_sub));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & ((((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0)) 
                   + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_b)) 
                  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r)) 
                 >> 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_b)) 
                 + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_cmp 
        = (1U & ((0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                               >> 1U))) ? ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_add)) 
                                           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r) 
                                              | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0)))
                  : ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig)) 
                      + (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__op_b) 
                            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig)))) 
                     + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__take_branch 
        = (1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                            | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_cmp) 
                               ^ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))));
}

VL_INLINE_OPT void Vservant_sim_servant__pi1::_sequent__TOP__servant_sim__dut__4(Vservant_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vservant_sim_servant__pi1::_sequent__TOP__servant_sim__dut__4\n"); );
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__bufreg2__DOT__dat;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2_q 
        = (((((3U == (3U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)) 
              & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
                 >> 0x18U)) | ((2U == (3U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)) 
                               & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
                                  >> 0x10U))) | ((1U 
                                                  == 
                                                  (3U 
                                                   & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)) 
                                                 & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
                                                    >> 8U))) 
           | ((0U == (3U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)) 
              & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = (0x3fU & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op) 
                     & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init)))
                     ? ((0x3fU & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat) 
                        - (IData)(1U)) : ((0x20U & 
                                           ((vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
                                             >> 1U) 
                                            & ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op) 
                                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done))) 
                                               << 5U))) 
                                          | (0x1fU 
                                             & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
                                                >> 1U)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_en 
        = (((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb)) 
            & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init) 
               | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
                   | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                      >> 4U)) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_two_stage_op)))) 
           | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op) 
                & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req))) 
               & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                   >> 2U) | (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
                             >> 5U))) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__init_done)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_q 
        = (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_en));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_utype)
            ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm) 
               & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                   >> 2U) | (3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)))))
            : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_q));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                   + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b)) 
                  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r)) 
                 >> 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                   + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b)) 
                  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r)) 
                 & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
        = (1U & (((((((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)) 
                      & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                         >> 2U)) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                       >> 4U))) & (
                                                   (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_q) 
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
                                                            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0)))))) 
                   | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
                      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))) 
                  | (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                          >> 2U)) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                     & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid)
                         ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2_q)
                         : ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                >> 2U)) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit))))) 
                 | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_utype) 
                     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
                    | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4) 
                       & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                           >> 4U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wdata0 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
            ? ((0x10U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))
                ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_q))
            : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
}

VL_INLINE_OPT void Vservant_sim_servant__pi1::_combo__TOP__servant_sim__dut__6(Vservant_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vservant_sim_servant__pi1::_combo__TOP__servant_sim__dut__6\n"); );
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_cyc 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__ibus_cyc) 
           & (~ (IData)(vlTOPp->wb_rst)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_dbus_ack 
        = (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ext_ack) 
            | ((IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack) 
               & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_cyc)))) 
           | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__sim_ack));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack 
        = ((IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_cyc));
    vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_adr 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_cyc)
            ? vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_adr
            : (0xfffffffcU & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data));
    vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_stb 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__wb_ibus_cyc) 
           | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_dbus_stb) 
               & (0U == (3U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                               >> 0x1eU)))) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__sig_en) 
                                                  | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__mux__DOT__halt_en)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_wreq 
        = ((((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_csr__DOT__misalign_trap_sync_r)) 
             & (~ (IData)((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb))))) 
            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__init_done)) 
           & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op) 
                & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                    >> 5U) | (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                 >> 2U)))) | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_dbus_ack)) 
              | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                   >> 4U) | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                              >> 1U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                        >> 2U))) | 
                 ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30) 
                    & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                       >> 2U)) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                  >> 3U)) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                                >> 2U))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_rreq 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wb_ibus_ack) 
           | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req) 
              & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__gen_csr__DOT__misalign_trap_sync_r)));
}
