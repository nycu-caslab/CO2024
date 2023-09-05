// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


void VPipelineCPU___024root__trace_chg_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPipelineCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VPipelineCPU___024root__trace_chg_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_h50723950__0;
    VlWide<4>/*127:0*/ __Vtemp_ha1cb3fe0__0;
    VlWide<6>/*191:0*/ __Vtemp_h582d926e__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[1U]),32);
        bufp->chgIData(oldp+1,(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[0U]),32);
        bufp->chgIData(oldp+2,(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[2U]),32);
        bufp->chgWData(oldp+3,(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o),128);
        bufp->chgCData(oldp+7,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[1U] 
                                         >> 7U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+8,(vlSelf->PipelineCPU__DOT__pc_o),32);
        bufp->chgIData(oldp+9,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_o)),32);
        bufp->chgIData(oldp+10,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_o)
                                  ? 0U : ((vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts
                                           [(0x7fU 
                                             & vlSelf->PipelineCPU__DOT__pc_o)] 
                                           << 0x18U) 
                                          | ((vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts
                                              [(0x7fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->PipelineCPU__DOT__pc_o))] 
                                              << 0x10U) 
                                             | ((vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts
                                                 [(0x7fU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->PipelineCPU__DOT__pc_o))] 
                                                 << 8U) 
                                                | vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts
                                                [(0x7fU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->PipelineCPU__DOT__pc_o))]))))),32);
        __Vtemp_h50723950__0[0U] = ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_o);
        __Vtemp_h50723950__0[1U] = (IData)((((QData)((IData)(vlSelf->PipelineCPU__DOT__pc_o)) 
                                             << 0x20U) 
                                            | (QData)((IData)(
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
        __Vtemp_h50723950__0[2U] = (IData)(((((QData)((IData)(vlSelf->PipelineCPU__DOT__pc_o)) 
                                              << 0x20U) 
                                             | (QData)((IData)(
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
        bufp->chgWData(oldp+11,(__Vtemp_h50723950__0),96);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+14,(vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[2U]),32);
        bufp->chgIData(oldp+15,(vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[0U]),32);
        bufp->chgIData(oldp+16,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[5U]),32);
        bufp->chgIData(oldp+17,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[4U]),32);
        bufp->chgIData(oldp+18,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[3U]),32);
        bufp->chgIData(oldp+19,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[2U]),32);
        bufp->chgIData(oldp+20,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U]),32);
        bufp->chgIData(oldp+21,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[0U]),32);
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                     >> 8U))));
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                     >> 7U))));
        bufp->chgBit(oldp+24,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                     >> 6U))));
        bufp->chgBit(oldp+25,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                     >> 3U))));
        bufp->chgBit(oldp+26,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                     >> 2U))));
        bufp->chgBit(oldp+27,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                     >> 1U))));
        bufp->chgBit(oldp+28,((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o))));
        bufp->chgCData(oldp+29,((3U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                       >> 4U))),2);
        bufp->chgIData(oldp+30,((vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[2U] 
                                 << 1U)),32);
        bufp->chgIData(oldp+31,(vlSelf->PipelineCPU__DOT__EXE_pc_aimm),32);
        bufp->chgCData(oldp+32,(vlSelf->PipelineCPU__DOT__EXE_ALUCtl),4);
        bufp->chgIData(oldp+33,(vlSelf->PipelineCPU__DOT__MEM_ALUOut),32);
        bufp->chgBit(oldp+34,(vlSelf->PipelineCPU__DOT__MEM_memRead));
        bufp->chgBit(oldp+35,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                     >> 3U))));
        bufp->chgBit(oldp+36,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                     >> 2U))));
        bufp->chgBit(oldp+37,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                     >> 1U))));
        bufp->chgBit(oldp+38,((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o))));
        bufp->chgBit(oldp+39,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o) 
                                     >> 2U))));
        bufp->chgBit(oldp+40,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o) 
                                     >> 1U))));
        bufp->chgBit(oldp+41,((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o))));
        bufp->chgIData(oldp+42,(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[3U]),32);
        bufp->chgIData(oldp+43,(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[2U]),32);
        bufp->chgIData(oldp+44,(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[1U]),32);
        bufp->chgIData(oldp+45,(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[0U]),32);
        bufp->chgIData(oldp+46,(vlSelf->PipelineCPU__DOT__WB_writeData),32);
        bufp->chgBit(oldp+47,((1U & (~ (((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                         >> 7U) & (
                                                   ((0x1fU 
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
                                                          >> 0x14U)))))))));
        bufp->chgIData(oldp+48,(vlSelf->PipelineCPU__DOT__EXE_alu_s1),32);
        bufp->chgIData(oldp+49,(vlSelf->PipelineCPU__DOT__EXE_alu_s2),32);
        bufp->chgIData(oldp+50,(vlSelf->PipelineCPU__DOT__EXE_alus2_imm),32);
        bufp->chgCData(oldp+51,(vlSelf->PipelineCPU__DOT__forwardA),2);
        bufp->chgCData(oldp+52,(vlSelf->PipelineCPU__DOT__forwardB),2);
        bufp->chgCData(oldp+53,(((0x18U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                           >> 3U)) 
                                 | ((4U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                           >> 1U)) 
                                    | (3U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o))))),5);
        bufp->chgCData(oldp+54,(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o),5);
        bufp->chgSData(oldp+55,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o),9);
        bufp->chgWData(oldp+56,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o),192);
        bufp->chgWData(oldp+62,(vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o),96);
        bufp->chgCData(oldp+65,(((4U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                        << 1U)) | (
                                                   (2U 
                                                    & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o))))),3);
        bufp->chgCData(oldp+66,(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o),3);
        bufp->chgWData(oldp+67,(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o),128);
        bufp->chgCData(oldp+71,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[1U] 
                                          >> 7U))),5);
        bufp->chgCData(oldp+72,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+73,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+74,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                          >> 7U))),5);
        bufp->chgCData(oldp+75,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+76,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+77,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+78,((7U & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+79,((1U & ((IData)(vlSelf->PipelineCPU__DOT__forwardA) 
                                     >> 1U))));
        bufp->chgBit(oldp+80,((1U & (IData)(vlSelf->PipelineCPU__DOT__forwardA))));
        bufp->chgBit(oldp+81,((1U & ((IData)(vlSelf->PipelineCPU__DOT__forwardB) 
                                     >> 1U))));
        bufp->chgBit(oldp+82,((1U & (IData)(vlSelf->PipelineCPU__DOT__forwardB))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+83,(vlSelf->PipelineCPU__DOT__register__DOT__regs[0]),32);
        bufp->chgIData(oldp+84,(vlSelf->PipelineCPU__DOT__register__DOT__regs[1]),32);
        bufp->chgIData(oldp+85,(vlSelf->PipelineCPU__DOT__register__DOT__regs[2]),32);
        bufp->chgIData(oldp+86,(vlSelf->PipelineCPU__DOT__register__DOT__regs[3]),32);
        bufp->chgIData(oldp+87,(vlSelf->PipelineCPU__DOT__register__DOT__regs[4]),32);
        bufp->chgIData(oldp+88,(vlSelf->PipelineCPU__DOT__register__DOT__regs[5]),32);
        bufp->chgIData(oldp+89,(vlSelf->PipelineCPU__DOT__register__DOT__regs[6]),32);
        bufp->chgIData(oldp+90,(vlSelf->PipelineCPU__DOT__register__DOT__regs[7]),32);
        bufp->chgIData(oldp+91,(vlSelf->PipelineCPU__DOT__register__DOT__regs[8]),32);
        bufp->chgIData(oldp+92,(vlSelf->PipelineCPU__DOT__register__DOT__regs[9]),32);
        bufp->chgIData(oldp+93,(vlSelf->PipelineCPU__DOT__register__DOT__regs[10]),32);
        bufp->chgIData(oldp+94,(vlSelf->PipelineCPU__DOT__register__DOT__regs[11]),32);
        bufp->chgIData(oldp+95,(vlSelf->PipelineCPU__DOT__register__DOT__regs[12]),32);
        bufp->chgIData(oldp+96,(vlSelf->PipelineCPU__DOT__register__DOT__regs[13]),32);
        bufp->chgIData(oldp+97,(vlSelf->PipelineCPU__DOT__register__DOT__regs[14]),32);
        bufp->chgIData(oldp+98,(vlSelf->PipelineCPU__DOT__register__DOT__regs[15]),32);
        bufp->chgIData(oldp+99,(vlSelf->PipelineCPU__DOT__register__DOT__regs[16]),32);
        bufp->chgIData(oldp+100,(vlSelf->PipelineCPU__DOT__register__DOT__regs[17]),32);
        bufp->chgIData(oldp+101,(vlSelf->PipelineCPU__DOT__register__DOT__regs[18]),32);
        bufp->chgIData(oldp+102,(vlSelf->PipelineCPU__DOT__register__DOT__regs[19]),32);
        bufp->chgIData(oldp+103,(vlSelf->PipelineCPU__DOT__register__DOT__regs[20]),32);
        bufp->chgIData(oldp+104,(vlSelf->PipelineCPU__DOT__register__DOT__regs[21]),32);
        bufp->chgIData(oldp+105,(vlSelf->PipelineCPU__DOT__register__DOT__regs[22]),32);
        bufp->chgIData(oldp+106,(vlSelf->PipelineCPU__DOT__register__DOT__regs[23]),32);
        bufp->chgIData(oldp+107,(vlSelf->PipelineCPU__DOT__register__DOT__regs[24]),32);
        bufp->chgIData(oldp+108,(vlSelf->PipelineCPU__DOT__register__DOT__regs[25]),32);
        bufp->chgIData(oldp+109,(vlSelf->PipelineCPU__DOT__register__DOT__regs[26]),32);
        bufp->chgIData(oldp+110,(vlSelf->PipelineCPU__DOT__register__DOT__regs[27]),32);
        bufp->chgIData(oldp+111,(vlSelf->PipelineCPU__DOT__register__DOT__regs[28]),32);
        bufp->chgIData(oldp+112,(vlSelf->PipelineCPU__DOT__register__DOT__regs[29]),32);
        bufp->chgIData(oldp+113,(vlSelf->PipelineCPU__DOT__register__DOT__regs[30]),32);
        bufp->chgIData(oldp+114,(vlSelf->PipelineCPU__DOT__register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgWData(oldp+115,(vlSelf->PipelineCPU__DOT____Vcellinp__MEM_WB_reg__i),128);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+119,(vlSelf->PipelineCPU__DOT__ID_branch));
        bufp->chgBit(oldp+120,(vlSelf->PipelineCPU__DOT__ID_memRead));
        bufp->chgBit(oldp+121,(vlSelf->PipelineCPU__DOT__ID_memtoReg));
        bufp->chgBit(oldp+122,(vlSelf->PipelineCPU__DOT__ID_memWrite));
        bufp->chgBit(oldp+123,(vlSelf->PipelineCPU__DOT__ID_ALUSrc));
        bufp->chgBit(oldp+124,(vlSelf->PipelineCPU__DOT__ID_regWrite));
        bufp->chgBit(oldp+125,(vlSelf->PipelineCPU__DOT__ID_jump));
        bufp->chgCData(oldp+126,(vlSelf->PipelineCPU__DOT__ID_ALUOp),2);
        bufp->chgSData(oldp+127,((((IData)(vlSelf->PipelineCPU__DOT__ID_branch) 
                                   << 8U) | (((IData)(vlSelf->PipelineCPU__DOT__ID_memRead) 
                                              << 7U) 
                                             | (((IData)(vlSelf->PipelineCPU__DOT__ID_memtoReg) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->PipelineCPU__DOT__ID_ALUOp) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->PipelineCPU__DOT__ID_memWrite) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->PipelineCPU__DOT__ID_ALUSrc) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->PipelineCPU__DOT__ID_regWrite) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->PipelineCPU__DOT__ID_jump))))))))),9);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+128,(vlSelf->PipelineCPU__DOT__ID_EX_flush));
        bufp->chgBit(oldp+129,(vlSelf->PipelineCPU__DOT____Vcellinp__PC_Mux__sel2));
        bufp->chgBit(oldp+130,(vlSelf->PipelineCPU__DOT____Vcellinp__hazardDectionUnit__branchTake));
    }
    bufp->chgBit(oldp+131,(vlSelf->clk));
    bufp->chgBit(oldp+132,(vlSelf->start));
    bufp->chgIData(oldp+133,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+134,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+135,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+136,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+137,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+138,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+139,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+140,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+141,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+142,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+143,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+144,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+145,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+146,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+147,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+148,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+149,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+150,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+151,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+152,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+153,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+154,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+155,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+156,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+157,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+158,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+159,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+160,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+161,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+162,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+163,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+164,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+165,(((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o))
                               ? ((IData)(vlSelf->PipelineCPU__DOT____Vcellinp__PC_Mux__sel2)
                                   ? vlSelf->PipelineCPU__DOT__EXE_ALUOut
                                   : vlSelf->PipelineCPU__DOT__EXE_pc_aimm)
                               : ((IData)(vlSelf->PipelineCPU__DOT____Vcellinp__PC_Mux__sel2)
                                   ? vlSelf->PipelineCPU__DOT__EXE_pc_aimm
                                   : ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_o)))),32);
    bufp->chgIData(oldp+166,(vlSelf->PipelineCPU__DOT__register__DOT__regs
                             [(0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+167,(vlSelf->PipelineCPU__DOT__register__DOT__regs
                             [(0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+168,(vlSelf->PipelineCPU__DOT__ID_imm),32);
    bufp->chgIData(oldp+169,(vlSelf->PipelineCPU__DOT__ID_inst),32);
    bufp->chgIData(oldp+170,(vlSelf->PipelineCPU__DOT__EXE_ALUOut),32);
    bufp->chgBit(oldp+171,((1U == vlSelf->PipelineCPU__DOT__EXE_ALUOut)));
    bufp->chgIData(oldp+172,(vlSelf->PipelineCPU__DOT__MEM_readData),32);
    bufp->chgBit(oldp+173,((1U & ((~ (((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                       >> 7U) & (((0x1fU 
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
                                  & (~ (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__hazardDectionUnit__branchTake))))));
    bufp->chgBit(oldp+174,(((~ (((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                 >> 7U) & (((0x1fU 
                                             & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                                >> 7U)) 
                                            == (0x1fU 
                                                & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                                   >> 0xfU))) 
                                           | ((0x1fU 
                                               & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                                  >> 7U)) 
                                              == (0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                                     >> 0x14U)))))) 
                            & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__hazardDectionUnit__branchTake))));
    __Vtemp_ha1cb3fe0__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[0U]))));
    __Vtemp_ha1cb3fe0__0[1U] = (IData)(((((QData)((IData)(
                                                          vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[0U]))) 
                                        >> 0x20U));
    __Vtemp_ha1cb3fe0__0[2U] = (IData)((((QData)((IData)(vlSelf->PipelineCPU__DOT__EXE_ALUOut)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->PipelineCPU__DOT__EXE_alu_s2))));
    __Vtemp_ha1cb3fe0__0[3U] = (IData)(((((QData)((IData)(vlSelf->PipelineCPU__DOT__EXE_ALUOut)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->PipelineCPU__DOT__EXE_alu_s2))) 
                                        >> 0x20U));
    bufp->chgWData(oldp+175,(__Vtemp_ha1cb3fe0__0),128);
    __Vtemp_h582d926e__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[0U]))));
    __Vtemp_h582d926e__0[1U] = (IData)(((((QData)((IData)(
                                                          vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[0U]))) 
                                        >> 0x20U));
    __Vtemp_h582d926e__0[2U] = vlSelf->PipelineCPU__DOT__ID_imm;
    __Vtemp_h582d926e__0[3U] = vlSelf->PipelineCPU__DOT__register__DOT__regs
        [(0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                   >> 0x14U))];
    __Vtemp_h582d926e__0[4U] = (IData)((((QData)((IData)(
                                                         vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->PipelineCPU__DOT__register__DOT__regs
                                                          [
                                                          (0x1fU 
                                                           & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                                              >> 0xfU))]))));
    __Vtemp_h582d926e__0[5U] = (IData)(((((QData)((IData)(
                                                          vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[2U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->PipelineCPU__DOT__register__DOT__regs
                                                           [
                                                           (0x1fU 
                                                            & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                                               >> 0xfU))]))) 
                                        >> 0x20U));
    bufp->chgWData(oldp+179,(__Vtemp_h582d926e__0),192);
    bufp->chgCData(oldp+185,(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode),7);
}

void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_cleanup\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
}
