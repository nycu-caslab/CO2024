// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "verilated.h"

#include "VPipelineCPU___024root.h"

void VPipelineCPU___024root___eval_act(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_act\n"); );
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__PipelineCPU__DOT____Vcellout__IF_ID_reg__o[0U] 
        = vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[0U];
    vlSelf->__Vdly__PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
        = vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U];
    vlSelf->__Vdly__PipelineCPU__DOT____Vcellout__IF_ID_reg__o[2U] 
        = vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[2U];
    vlSelf->__Vdlyvset__PipelineCPU__DOT__dataMemory__DOT__data_memory__v0 = 0U;
    vlSelf->__Vdlyvset__PipelineCPU__DOT__dataMemory__DOT__data_memory__v4 = 0U;
    if (vlSelf->start) {
        if (vlSelf->PipelineCPU__DOT__IF_ID_flush) {
            vlSelf->__Vdly__PipelineCPU__DOT____Vcellout__IF_ID_reg__o[0U] = 0U;
            vlSelf->__Vdly__PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] = 0U;
            vlSelf->__Vdly__PipelineCPU__DOT____Vcellout__IF_ID_reg__o[2U] = 0U;
        } else if (vlSelf->PipelineCPU__DOT__IF_ID_write) {
            vlSelf->__Vdly__PipelineCPU__DOT____Vcellout__IF_ID_reg__o[0U] 
                = ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_o);
            vlSelf->__Vdly__PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                = (IData)((((QData)((IData)(vlSelf->PipelineCPU__DOT__pc_o)) 
                            << 0x20U) | (QData)((IData)(
                                                        ((0x80U 
                                                          <= vlSelf->PipelineCPU__DOT__pc_o)
                                                          ? 0U
                                                          : 
                                                         ((vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts
                                                           [
                                                           (0x7fU 
                                                            & vlSelf->PipelineCPU__DOT__pc_o)] 
                                                           << 0x18U) 
                                                          | ((vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts
                                                              [
                                                              (0x7fU 
                                                               & ((IData)(1U) 
                                                                  + vlSelf->PipelineCPU__DOT__pc_o))] 
                                                              << 0x10U) 
                                                             | ((vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts
                                                                 [
                                                                 (0x7fU 
                                                                  & ((IData)(2U) 
                                                                     + vlSelf->PipelineCPU__DOT__pc_o))] 
                                                                 << 8U) 
                                                                | vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts
                                                                [
                                                                (0x7fU 
                                                                 & ((IData)(3U) 
                                                                    + vlSelf->PipelineCPU__DOT__pc_o))]))))))));
            vlSelf->__Vdly__PipelineCPU__DOT____Vcellout__IF_ID_reg__o[2U] 
                = (IData)(((((QData)((IData)(vlSelf->PipelineCPU__DOT__pc_o)) 
                             << 0x20U) | (QData)((IData)(
                                                         ((0x80U 
                                                           <= vlSelf->PipelineCPU__DOT__pc_o)
                                                           ? 0U
                                                           : 
                                                          ((vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts
                                                            [
                                                            (0x7fU 
                                                             & vlSelf->PipelineCPU__DOT__pc_o)] 
                                                            << 0x18U) 
                                                           | ((vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts
                                                               [
                                                               (0x7fU 
                                                                & ((IData)(1U) 
                                                                   + vlSelf->PipelineCPU__DOT__pc_o))] 
                                                               << 0x10U) 
                                                              | ((vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts
                                                                  [
                                                                  (0x7fU 
                                                                   & ((IData)(2U) 
                                                                      + vlSelf->PipelineCPU__DOT__pc_o))] 
                                                                  << 8U) 
                                                                 | vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts
                                                                 [
                                                                 (0x7fU 
                                                                  & ((IData)(3U) 
                                                                     + vlSelf->PipelineCPU__DOT__pc_o))]))))))) 
                           >> 0x20U));
        } else {
            vlSelf->__Vdly__PipelineCPU__DOT____Vcellout__IF_ID_reg__o[0U] 
                = vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[0U];
            vlSelf->__Vdly__PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                = vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U];
            vlSelf->__Vdly__PipelineCPU__DOT____Vcellout__IF_ID_reg__o[2U] 
                = vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[2U];
        }
        if ((4U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o))) {
            vlSelf->__Vdlyvval__PipelineCPU__DOT__dataMemory__DOT__data_memory__v0 
                = (vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[2U] 
                   >> 0x18U);
            vlSelf->__Vdlyvset__PipelineCPU__DOT__dataMemory__DOT__data_memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__dataMemory__DOT__data_memory__v0 
                = (0x7fU & ((IData)(3U) + vlSelf->PipelineCPU__DOT__MEM_ALUOut));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__dataMemory__DOT__data_memory__v1 
                = (0xffU & (vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[2U] 
                            >> 0x10U));
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__dataMemory__DOT__data_memory__v1 
                = (0x7fU & ((IData)(2U) + vlSelf->PipelineCPU__DOT__MEM_ALUOut));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__dataMemory__DOT__data_memory__v2 
                = (0xffU & (vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[2U] 
                            >> 8U));
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__dataMemory__DOT__data_memory__v2 
                = (0x7fU & ((IData)(1U) + vlSelf->PipelineCPU__DOT__MEM_ALUOut));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__dataMemory__DOT__data_memory__v3 
                = (0xffU & vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[2U]);
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__dataMemory__DOT__data_memory__v3 
                = (0x7fU & vlSelf->PipelineCPU__DOT__MEM_ALUOut);
        }
        vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[0U] 
            = (IData)((((QData)((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[0U]))));
        vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[1U] 
            = (IData)(((((QData)((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[0U]))) 
                       >> 0x20U));
        vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[2U] 
            = (IData)((((QData)((IData)(vlSelf->PipelineCPU__DOT__EXE_ALUOut)) 
                        << 0x20U) | (QData)((IData)(vlSelf->PipelineCPU__DOT__EXE_alu_s2))));
        vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[3U] 
            = (IData)(((((QData)((IData)(vlSelf->PipelineCPU__DOT__EXE_ALUOut)) 
                         << 0x20U) | (QData)((IData)(vlSelf->PipelineCPU__DOT__EXE_alu_s2))) 
                       >> 0x20U));
    } else {
        vlSelf->__Vdly__PipelineCPU__DOT____Vcellout__IF_ID_reg__o[0U] = 0U;
        vlSelf->__Vdly__PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] = 0U;
        vlSelf->__Vdly__PipelineCPU__DOT____Vcellout__IF_ID_reg__o[2U] = 0U;
        vlSelf->__Vdlyvset__PipelineCPU__DOT__dataMemory__DOT__data_memory__v4 = 1U;
        vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[0U] = 0U;
        vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[1U] = 0U;
        vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[2U] = 0U;
        vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[3U] = 0U;
    }
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__1(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->PipelineCPU__DOT__pc_o = ((IData)(vlSelf->start)
                                       ? ((((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                            >> 7U) 
                                           & (((0x1fU 
                                                & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                                   >> 7U)) 
                                               == (0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                                      >> 0xfU))) 
                                              | ((0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                                     >> 7U)) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                                     >> 0x14U)))))
                                           ? vlSelf->PipelineCPU__DOT__pc_o
                                           : vlSelf->PipelineCPU__DOT__pc_i)
                                       : 0U);
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__2(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdlyvset__PipelineCPU__DOT__register__DOT__regs__v0 = 0U;
    vlSelf->__Vdlyvset__PipelineCPU__DOT__register__DOT__regs__v1 = 0U;
    if (vlSelf->start) {
        if ((4U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o))) {
            vlSelf->__Vdlyvval__PipelineCPU__DOT__register__DOT__regs__v0 
                = ((0U == (0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[1U] 
                                    >> 7U))) ? 0U : vlSelf->PipelineCPU__DOT__WB_writeData);
            vlSelf->__Vdlyvset__PipelineCPU__DOT__register__DOT__regs__v0 = 1U;
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__register__DOT__regs__v0 
                = (0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[1U] 
                            >> 7U));
        }
    } else {
        vlSelf->__Vdlyvset__PipelineCPU__DOT__register__DOT__regs__v1 = 1U;
    }
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__3(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->PipelineCPU__DOT__MEM_memRead) {
        vlSelf->PipelineCPU__DOT__MEM_readData = ((0xffffffU 
                                                   & vlSelf->PipelineCPU__DOT__MEM_readData) 
                                                  | (vlSelf->PipelineCPU__DOT__dataMemory__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(3U) 
                                                         + vlSelf->PipelineCPU__DOT__MEM_ALUOut))] 
                                                     << 0x18U));
        vlSelf->PipelineCPU__DOT__MEM_readData = ((0xff00ffffU 
                                                   & vlSelf->PipelineCPU__DOT__MEM_readData) 
                                                  | (vlSelf->PipelineCPU__DOT__dataMemory__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(2U) 
                                                         + vlSelf->PipelineCPU__DOT__MEM_ALUOut))] 
                                                     << 0x10U));
        vlSelf->PipelineCPU__DOT__MEM_readData = ((0xffff00ffU 
                                                   & vlSelf->PipelineCPU__DOT__MEM_readData) 
                                                  | (vlSelf->PipelineCPU__DOT__dataMemory__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + vlSelf->PipelineCPU__DOT__MEM_ALUOut))] 
                                                     << 8U));
        vlSelf->PipelineCPU__DOT__MEM_readData = ((0xffffff00U 
                                                   & vlSelf->PipelineCPU__DOT__MEM_readData) 
                                                  | vlSelf->PipelineCPU__DOT__dataMemory__DOT__data_memory
                                                  [
                                                  (0x7fU 
                                                   & vlSelf->PipelineCPU__DOT__MEM_ALUOut)]);
    }
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__4(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->PipelineCPU__DOT__EXE_ALUOut = ((((((((
                                                   (0U 
                                                    == (IData)(vlSelf->PipelineCPU__DOT__EXE_ALUCtl)) 
                                                   | (1U 
                                                      == (IData)(vlSelf->PipelineCPU__DOT__EXE_ALUCtl))) 
                                                  | (2U 
                                                     == (IData)(vlSelf->PipelineCPU__DOT__EXE_ALUCtl))) 
                                                 | (6U 
                                                    == (IData)(vlSelf->PipelineCPU__DOT__EXE_ALUCtl))) 
                                                | (7U 
                                                   == (IData)(vlSelf->PipelineCPU__DOT__EXE_ALUCtl))) 
                                               | (8U 
                                                  == (IData)(vlSelf->PipelineCPU__DOT__EXE_ALUCtl))) 
                                              | (9U 
                                                 == (IData)(vlSelf->PipelineCPU__DOT__EXE_ALUCtl))) 
                                             | (0xaU 
                                                == (IData)(vlSelf->PipelineCPU__DOT__EXE_ALUCtl)))
                                             ? ((0U 
                                                 == (IData)(vlSelf->PipelineCPU__DOT__EXE_ALUCtl))
                                                 ? 
                                                (vlSelf->PipelineCPU__DOT__EXE_alu_s1 
                                                 & vlSelf->PipelineCPU__DOT__EXE_alus2_imm)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->PipelineCPU__DOT__EXE_ALUCtl))
                                                  ? 
                                                 (vlSelf->PipelineCPU__DOT__EXE_alu_s1 
                                                  | vlSelf->PipelineCPU__DOT__EXE_alus2_imm)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->PipelineCPU__DOT__EXE_ALUCtl))
                                                   ? 
                                                  (vlSelf->PipelineCPU__DOT__EXE_alu_s1 
                                                   + vlSelf->PipelineCPU__DOT__EXE_alus2_imm)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->PipelineCPU__DOT__EXE_ALUCtl))
                                                    ? 
                                                   (vlSelf->PipelineCPU__DOT__EXE_alu_s1 
                                                    - vlSelf->PipelineCPU__DOT__EXE_alus2_imm)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->PipelineCPU__DOT__EXE_ALUCtl))
                                                     ? 
                                                    (VL_LTS_III(32, vlSelf->PipelineCPU__DOT__EXE_alu_s1, vlSelf->PipelineCPU__DOT__EXE_alus2_imm)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->PipelineCPU__DOT__EXE_ALUCtl))
                                                      ? 
                                                     ((vlSelf->PipelineCPU__DOT__EXE_alu_s1 
                                                       == vlSelf->PipelineCPU__DOT__EXE_alus2_imm)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     ((9U 
                                                       == (IData)(vlSelf->PipelineCPU__DOT__EXE_ALUCtl))
                                                       ? 
                                                      ((vlSelf->PipelineCPU__DOT__EXE_alu_s1 
                                                        != vlSelf->PipelineCPU__DOT__EXE_alus2_imm)
                                                        ? 1U
                                                        : 0U)
                                                       : 
                                                      (VL_LTS_III(32, vlSelf->PipelineCPU__DOT__EXE_alu_s1, vlSelf->PipelineCPU__DOT__EXE_alus2_imm)
                                                        ? 1U
                                                        : 0U))))))))
                                             : ((0xbU 
                                                 == (IData)(vlSelf->PipelineCPU__DOT__EXE_ALUCtl))
                                                 ? 
                                                (VL_GTS_III(32, vlSelf->PipelineCPU__DOT__EXE_alu_s1, vlSelf->PipelineCPU__DOT__EXE_alus2_imm)
                                                  ? 1U
                                                  : 0U)
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->PipelineCPU__DOT__EXE_ALUCtl))
                                                  ? 
                                                 (~ 
                                                  (vlSelf->PipelineCPU__DOT__EXE_alu_s1 
                                                   | vlSelf->PipelineCPU__DOT__EXE_alus2_imm))
                                                  : 0U)));
}

extern const VlUnpacked<CData/*3:0*/, 64> VPipelineCPU__ConstPool__TABLE_hcf922457_0;

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__5(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__5\n"); );
    // Init
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__dataMemory__DOT__data_memory__v0) {
        vlSelf->PipelineCPU__DOT__dataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__dataMemory__DOT__data_memory__v0] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__dataMemory__DOT__data_memory__v0;
        vlSelf->PipelineCPU__DOT__dataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__dataMemory__DOT__data_memory__v1] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__dataMemory__DOT__data_memory__v1;
        vlSelf->PipelineCPU__DOT__dataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__dataMemory__DOT__data_memory__v2] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__dataMemory__DOT__data_memory__v2;
        vlSelf->PipelineCPU__DOT__dataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__dataMemory__DOT__data_memory__v3] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__dataMemory__DOT__data_memory__v3;
    }
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__dataMemory__DOT__data_memory__v4) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            vlSelf->PipelineCPU__DOT__dataMemory__DOT__data_memory[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlSelf->PipelineCPU__DOT__MEM_ALUOut = vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[3U];
    if (vlSelf->start) {
        vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[0U] 
            = vlSelf->PipelineCPU__DOT____Vcellinp__MEM_WB_reg__i[0U];
        vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[1U] 
            = vlSelf->PipelineCPU__DOT____Vcellinp__MEM_WB_reg__i[1U];
        vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[2U] 
            = vlSelf->PipelineCPU__DOT____Vcellinp__MEM_WB_reg__i[2U];
        vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[3U] 
            = vlSelf->PipelineCPU__DOT____Vcellinp__MEM_WB_reg__i[3U];
        vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o 
            = ((4U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                      << 1U)) | ((2U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                        >> 2U)) | (1U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o))));
        vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o 
            = ((0x18U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                         >> 3U)) | ((4U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                           >> 1U)) 
                                    | (3U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o))));
        if (vlSelf->PipelineCPU__DOT__ID_EX_flush) {
            vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[0U] = 0U;
            vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] = 0U;
            vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[2U] = 0U;
            vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[3U] = 0U;
            vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[4U] = 0U;
            vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[5U] = 0U;
            vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o = 0U;
        } else {
            vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[0U] 
                = (IData)((((QData)((IData)(vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[0U]))));
            vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                = (IData)(((((QData)((IData)(vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[0U]))) 
                           >> 0x20U));
            vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[2U] 
                = vlSelf->PipelineCPU__DOT__ID_imm;
            vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[3U] 
                = vlSelf->PipelineCPU__DOT__register__DOT__regs
                [(0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                           >> 0x14U))];
            vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[4U] 
                = (IData)((((QData)((IData)(vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[2U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->PipelineCPU__DOT__register__DOT__regs
                                                        [
                                                        (0x1fU 
                                                         & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                                            >> 0xfU))]))));
            vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[5U] 
                = (IData)(((((QData)((IData)(vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[2U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->PipelineCPU__DOT__register__DOT__regs
                                                         [
                                                         (0x1fU 
                                                          & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                                             >> 0xfU))]))) 
                           >> 0x20U));
            vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o 
                = (((IData)(vlSelf->PipelineCPU__DOT__ID_branch) 
                    << 8U) | (((IData)(vlSelf->PipelineCPU__DOT__ID_memRead) 
                               << 7U) | (((IData)(vlSelf->PipelineCPU__DOT__ID_memtoReg) 
                                          << 6U) | 
                                         (((IData)(vlSelf->PipelineCPU__DOT__ID_ALUOp) 
                                           << 4U) | 
                                          (((IData)(vlSelf->PipelineCPU__DOT__ID_memWrite) 
                                            << 3U) 
                                           | (((IData)(vlSelf->PipelineCPU__DOT__ID_ALUSrc) 
                                               << 2U) 
                                              | (((IData)(vlSelf->PipelineCPU__DOT__ID_regWrite) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->PipelineCPU__DOT__ID_jump))))))));
        }
    } else {
        vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[0U] = 0U;
        vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] = 0U;
        vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[2U] = 0U;
        vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[3U] = 0U;
        vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[4U] = 0U;
        vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[5U] = 0U;
        vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[0U] = 0U;
        vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[1U] = 0U;
        vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[2U] = 0U;
        vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[3U] = 0U;
        vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o = 0U;
        vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o = 0U;
        vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o = 0U;
    }
    vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[0U] 
        = vlSelf->__Vdly__PipelineCPU__DOT____Vcellout__IF_ID_reg__o[0U];
    vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
        = vlSelf->__Vdly__PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U];
    vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[2U] 
        = vlSelf->__Vdly__PipelineCPU__DOT____Vcellout__IF_ID_reg__o[2U];
    vlSelf->PipelineCPU__DOT__EXE_pc_aimm = (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[5U] 
                                             + (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[2U] 
                                                << 1U));
    vlSelf->PipelineCPU__DOT__WB_writeData = ((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o))
                                               ? vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[0U]
                                               : ((2U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o))
                                                   ? 
                                                  vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[3U]
                                                   : 
                                                  vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[2U]));
    vlSelf->PipelineCPU__DOT__MEM_memRead = (1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                                   >> 4U));
    vlSelf->PipelineCPU__DOT__forwardA = (((((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                             >> 1U) 
                                            & (0U != 
                                               (0x1fU 
                                                & (vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[1U] 
                                                   >> 7U)))) 
                                           & ((0x1fU 
                                               & (vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[1U] 
                                                  >> 7U)) 
                                              == (0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                                     >> 0xfU))))
                                           ? 2U : (
                                                   ((((IData)(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o) 
                                                      >> 2U) 
                                                     & (0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[1U] 
                                                            >> 7U)))) 
                                                    & ((0x1fU 
                                                        & (vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[1U] 
                                                           >> 7U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                                           >> 0xfU))))
                                                    ? 1U
                                                    : 0U));
    vlSelf->PipelineCPU__DOT__forwardB = (((((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                             >> 1U) 
                                            & (0U != 
                                               (0x1fU 
                                                & (vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[1U] 
                                                   >> 7U)))) 
                                           & ((0x1fU 
                                               & (vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[1U] 
                                                  >> 7U)) 
                                              == (0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                                     >> 0x14U))))
                                           ? 2U : (
                                                   ((((IData)(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o) 
                                                      >> 2U) 
                                                     & (0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[1U] 
                                                            >> 7U)))) 
                                                    & ((0x1fU 
                                                        & (vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[1U] 
                                                           >> 7U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                                           >> 0x14U))))
                                                    ? 1U
                                                    : 0U));
    vlSelf->PipelineCPU__DOT__EXE_alu_s1 = ((2U & (IData)(vlSelf->PipelineCPU__DOT__forwardA))
                                             ? ((1U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__forwardA))
                                                 ? 0U
                                                 : vlSelf->PipelineCPU__DOT__MEM_ALUOut)
                                             : ((1U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__forwardA))
                                                 ? vlSelf->PipelineCPU__DOT__WB_writeData
                                                 : 
                                                vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[4U]));
    vlSelf->PipelineCPU__DOT__EXE_alu_s2 = ((2U & (IData)(vlSelf->PipelineCPU__DOT__forwardB))
                                             ? ((1U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__forwardB))
                                                 ? 0U
                                                 : vlSelf->PipelineCPU__DOT__MEM_ALUOut)
                                             : ((1U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__forwardB))
                                                 ? vlSelf->PipelineCPU__DOT__WB_writeData
                                                 : 
                                                vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[3U]));
    vlSelf->PipelineCPU__DOT__EXE_alus2_imm = ((4U 
                                                & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o))
                                                ? vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[2U]
                                                : vlSelf->PipelineCPU__DOT__EXE_alu_s2);
    __Vtableidx2 = ((0x20U & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                              >> 0x19U)) | ((0x1cU 
                                             & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                                >> 0xaU)) 
                                            | (3U & 
                                               ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                                >> 4U))));
    vlSelf->PipelineCPU__DOT__EXE_ALUCtl = VPipelineCPU__ConstPool__TABLE_hcf922457_0
        [__Vtableidx2];
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__6(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->PipelineCPU__DOT__ID_imm = ((0x40U & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                         ? ((0x20U 
                                             & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                             ? ((0x10U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                 ? 0U
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__ID_inst 
                                                                  >> 0x1fU))) 
                                                      << 0x13U) 
                                                     | ((0x7f800U 
                                                         & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                            >> 1U)) 
                                                        | ((0x400U 
                                                            & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                               >> 0xaU)) 
                                                           | (0x3ffU 
                                                              & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                                 >> 0x15U)))))
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__ID_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | (0x7ffU 
                                                        & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                           >> 0x14U)))
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__ID_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | ((0x400U 
                                                         & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                            << 3U)) 
                                                        | ((0x3f0U 
                                                            & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                               >> 0x15U)) 
                                                           | (0xfU 
                                                              & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                                 >> 8U)))))
                                                     : 0U)
                                                    : 0U))))
                                             : 0U) : 
                                        ((0x20U & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                          ? ((0x10U 
                                              & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                              ? 0U : 
                                             ((8U & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                               ? 0U
                                               : ((4U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__ID_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                              >> 7U))))
                                                     : 0U)
                                                    : 0U))))
                                          : ((0x10U 
                                              & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                              ? ((8U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__ID_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | (0x7ffU 
                                                        & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                           >> 0x14U)))
                                                     : 0U)
                                                    : 0U)))
                                              : ((8U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__ID_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | (0x7ffU 
                                                        & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                           >> 0x14U)))
                                                     : 0U)
                                                    : 0U))))));
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__7(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__7\n"); );
    // Body
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__register__DOT__regs__v0) {
        vlSelf->PipelineCPU__DOT__register__DOT__regs[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__register__DOT__regs__v0] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__register__DOT__regs__v0;
    }
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__register__DOT__regs__v1) {
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0U] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[1U] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[2U] = 0x80U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[3U] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[4U] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[5U] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[6U] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[7U] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[8U] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[9U] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0xaU] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0xbU] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0xcU] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0xdU] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0xeU] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0xfU] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0x10U] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0x11U] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0x12U] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0x13U] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0x14U] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0x15U] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0x16U] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0x17U] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0x18U] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0x19U] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0x1aU] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0x1bU] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0x1cU] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0x1dU] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0x1eU] = 0U;
        vlSelf->PipelineCPU__DOT__register__DOT__regs[0x1fU] = 0U;
    }
    vlSelf->r[0U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [0x1fU];
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_comb__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->PipelineCPU__DOT____Vcellinp__MEM_WB_reg__i[0U] 
        = (IData)((((QData)((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[0U]))));
    vlSelf->PipelineCPU__DOT____Vcellinp__MEM_WB_reg__i[1U] 
        = (IData)(((((QData)((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[0U]))) 
                   >> 0x20U));
    vlSelf->PipelineCPU__DOT____Vcellinp__MEM_WB_reg__i[2U] 
        = (IData)((((QData)((IData)(vlSelf->PipelineCPU__DOT__MEM_readData)) 
                    << 0x20U) | (QData)((IData)(vlSelf->PipelineCPU__DOT__MEM_ALUOut))));
    vlSelf->PipelineCPU__DOT____Vcellinp__MEM_WB_reg__i[3U] 
        = (IData)(((((QData)((IData)(vlSelf->PipelineCPU__DOT__MEM_readData)) 
                     << 0x20U) | (QData)((IData)(vlSelf->PipelineCPU__DOT__MEM_ALUOut))) 
                   >> 0x20U));
}

extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_h6b3819ef_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_he16e6d56_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_h3729482a_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_hbdb291c7_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_h3a8944b4_0;
extern const VlUnpacked<CData/*1:0*/, 128> VPipelineCPU__ConstPool__TABLE_hdb293efa_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_ha8f04b9d_0;

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__8(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__8\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode;
    vlSelf->PipelineCPU__DOT__ID_ALUSrc = VPipelineCPU__ConstPool__TABLE_h6b3819ef_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ID_memtoReg = VPipelineCPU__ConstPool__TABLE_he16e6d56_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ID_regWrite = VPipelineCPU__ConstPool__TABLE_h3729482a_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ID_memRead = VPipelineCPU__ConstPool__TABLE_he16e6d56_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ID_memWrite = VPipelineCPU__ConstPool__TABLE_hbdb291c7_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ID_branch = VPipelineCPU__ConstPool__TABLE_h3a8944b4_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ID_ALUOp = VPipelineCPU__ConstPool__TABLE_hdb293efa_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ID_jump = VPipelineCPU__ConstPool__TABLE_ha8f04b9d_0
        [__Vtableidx1];
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_comb__TOP__1(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->PipelineCPU__DOT____Vcellinp__PC_Mux__sel2 
        = (1U & ((IData)(((0x100U == (0x101U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o))) 
                          & (1U == vlSelf->PipelineCPU__DOT__EXE_ALUOut))) 
                 | ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                    & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                       >> 8U))));
    vlSelf->PipelineCPU__DOT____Vcellinp__hazardDectionUnit__branchTake 
        = (1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                 | ((1U == vlSelf->PipelineCPU__DOT__EXE_ALUOut) 
                    & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                       >> 8U))));
    vlSelf->PipelineCPU__DOT__ID_EX_flush = ((((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                               >> 7U) 
                                              & (((0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                                      >> 7U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                                      >> 0xfU))) 
                                                 | ((0x1fU 
                                                     & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                                        >> 7U)) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                                        >> 0x14U))))) 
                                             | (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__hazardDectionUnit__branchTake));
    vlSelf->PipelineCPU__DOT__IF_ID_flush = ((~ (((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                                  >> 7U) 
                                                 & (((0x1fU 
                                                      & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                                         >> 7U)) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                                         >> 0xfU))) 
                                                    | ((0x1fU 
                                                        & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                                           >> 7U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                                           >> 0x14U)))))) 
                                             & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__hazardDectionUnit__branchTake));
    vlSelf->PipelineCPU__DOT__IF_ID_write = (1U & (
                                                   (~ 
                                                    (((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                                      >> 7U) 
                                                     & (((0x1fU 
                                                          & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                                             >> 7U)) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                                             >> 0xfU))) 
                                                        | ((0x1fU 
                                                            & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                                               >> 7U)) 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                                               >> 0x14U)))))) 
                                                   & (~ (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__hazardDectionUnit__branchTake))));
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__9(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->PipelineCPU__DOT__ID_inst = vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U];
    vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode 
        = (0x7fU & vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U]);
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_comb__TOP__2(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->PipelineCPU__DOT__pc_i = ((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o))
                                       ? ((IData)(vlSelf->PipelineCPU__DOT____Vcellinp__PC_Mux__sel2)
                                           ? vlSelf->PipelineCPU__DOT__EXE_ALUOut
                                           : vlSelf->PipelineCPU__DOT__EXE_pc_aimm)
                                       : ((IData)(vlSelf->PipelineCPU__DOT____Vcellinp__PC_Mux__sel2)
                                           ? vlSelf->PipelineCPU__DOT__EXE_pc_aimm
                                           : ((IData)(4U) 
                                              + vlSelf->PipelineCPU__DOT__pc_o)));
}

void VPipelineCPU___024root___eval_nba(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VPipelineCPU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPipelineCPU___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VPipelineCPU___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VPipelineCPU___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VPipelineCPU___024root___nba_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VPipelineCPU___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VPipelineCPU___024root___nba_sequent__TOP__6(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VPipelineCPU___024root___nba_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(6U))) {
        VPipelineCPU___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VPipelineCPU___024root___nba_sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(5U))) {
        VPipelineCPU___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VPipelineCPU___024root___nba_sequent__TOP__9(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(5U))) {
        VPipelineCPU___024root___nba_comb__TOP__2(vlSelf);
    }
}

void VPipelineCPU___024root___eval_triggers__act(VPipelineCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__act(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__nba(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VPipelineCPU___024root___eval(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval\n"); );
    // Init
    VlTriggerVec<7> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VPipelineCPU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VPipelineCPU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../PipelineCPU.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VPipelineCPU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VPipelineCPU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../PipelineCPU.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VPipelineCPU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VPipelineCPU___024root___eval_debug_assertions(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
