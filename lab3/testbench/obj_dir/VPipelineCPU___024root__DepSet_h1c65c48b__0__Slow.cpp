// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "verilated.h"

#include "VPipelineCPU___024root.h"

VL_ATTR_COLD void VPipelineCPU___024root___eval_static(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_static\n"); );
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial__TOP(VPipelineCPU___024root* vlSelf);

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_initial\n"); );
    // Body
    VPipelineCPU___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__start = vlSelf->start;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT____Vcellinp__control__opcode 
        = vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__ID_inst 
        = vlSelf->PipelineCPU__DOT__ID_inst;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__EXE_ALUCtl 
        = vlSelf->PipelineCPU__DOT__EXE_ALUCtl;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__EXE_alu_s2 
        = vlSelf->PipelineCPU__DOT__EXE_alu_s2;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__EXE_readData1 
        = vlSelf->PipelineCPU__DOT__EXE_readData1;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__MEM_ALUOut 
        = vlSelf->PipelineCPU__DOT__MEM_ALUOut;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__MEM_memRead 
        = vlSelf->PipelineCPU__DOT__MEM_memRead;
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial__TOP(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_hd0a1b870__0;
    // Body
    vlSelf->PipelineCPU__DOT__pc_o = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[1U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[2U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[3U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[4U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[5U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[6U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[7U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[8U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[9U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0xaU] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0xbU] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0xcU] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0xdU] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0xeU] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0xfU] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0x10U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0x11U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0x12U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0x13U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0x14U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0x15U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0x16U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0x17U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0x18U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0x19U] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0x1aU] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0x1bU] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0x1cU] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0x1dU] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0x1eU] = 0U;
    vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[0x1fU] = 0U;
    __Vtemp_hd0a1b870__0[0U] = 0x2e747874U;
    __Vtemp_hd0a1b870__0[1U] = 0x494f4e53U;
    __Vtemp_hd0a1b870__0[2U] = 0x52554354U;
    __Vtemp_hd0a1b870__0[3U] = 0x494e5354U;
    __Vtemp_hd0a1b870__0[4U] = 0x4553545fU;
    __Vtemp_hd0a1b870__0[5U] = 0x54U;
    VL_READMEM_N(false, 8, 128, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_hd0a1b870__0)
                 ,  &(vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_final(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_final\n"); );
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_triggers__stl(VPipelineCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__stl(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___eval_stl(VPipelineCPU___024root* vlSelf);

VL_ATTR_COLD void VPipelineCPU___024root___eval_settle(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VPipelineCPU___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VPipelineCPU___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("../PipelineCPU.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VPipelineCPU___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__stl(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*3:0*/, 64> VPipelineCPU__ConstPool__TABLE_hcf922457_0;

VL_ATTR_COLD void VPipelineCPU___024root___stl_sequent__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->PipelineCPU__DOT__MEM_memRead = (1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                                   >> 5U));
    vlSelf->PipelineCPU__DOT__EXE_readData1 = vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[4U];
    vlSelf->PipelineCPU__DOT__ID_inst = vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U];
    vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode 
        = (0x7fU & vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U]);
    vlSelf->PipelineCPU__DOT__EXE_alu_s2 = ((4U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o))
                                             ? vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[2U]
                                             : vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[3U]);
    __Vtableidx2 = ((0x20U & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                              >> 0x19U)) | ((0x1cU 
                                             & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                                >> 0xaU)) 
                                            | (3U & 
                                               ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                                >> 4U))));
    vlSelf->PipelineCPU__DOT__EXE_ALUCtl = VPipelineCPU__ConstPool__TABLE_hcf922457_0
        [__Vtableidx2];
    vlSelf->PipelineCPU__DOT__MEM_ALUOut = vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[3U];
    vlSelf->PipelineCPU__DOT____Vcellinp__PC_Mux__sel2 
        = (1U & ((IData)((0x41U == (0x43U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o)))) 
                 | (IData)((0x42U == (0x42U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o))))));
    vlSelf->PipelineCPU__DOT__EXE_pc_aimm = (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[5U] 
                                             + (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[2U] 
                                                << 1U));
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
    vlSelf->PipelineCPU__DOT__pc_i = ((2U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o))
                                       ? ((IData)(vlSelf->PipelineCPU__DOT____Vcellinp__PC_Mux__sel2)
                                           ? vlSelf->PipelineCPU__DOT__EXE_ALUOut
                                           : vlSelf->PipelineCPU__DOT__EXE_pc_aimm)
                                       : ((IData)(vlSelf->PipelineCPU__DOT____Vcellinp__PC_Mux__sel2)
                                           ? vlSelf->PipelineCPU__DOT__EXE_pc_aimm
                                           : ((IData)(4U) 
                                              + vlSelf->PipelineCPU__DOT__pc_o)));
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_stl(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VPipelineCPU___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__act(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge start)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] PipelineCPU.__Vcellinp__control__opcode)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge clk or negedge start)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] PipelineCPU.ID_inst or [changed] PipelineCPU.__Vcellinp__control__opcode)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] PipelineCPU.EXE_ALUCtl or [changed] PipelineCPU.EXE_alu_s2 or [changed] PipelineCPU.EXE_readData1)\n");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([changed] PipelineCPU.MEM_ALUOut or [changed] PipelineCPU.MEM_memRead)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__nba(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge start)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] PipelineCPU.__Vcellinp__control__opcode)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge clk or negedge start)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] PipelineCPU.ID_inst or [changed] PipelineCPU.__Vcellinp__control__opcode)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] PipelineCPU.EXE_ALUCtl or [changed] PipelineCPU.EXE_alu_s2 or [changed] PipelineCPU.EXE_readData1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([changed] PipelineCPU.MEM_ALUOut or [changed] PipelineCPU.MEM_memRead)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPipelineCPU___024root___ctor_var_reset(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->r[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->PipelineCPU__DOT__pc_i = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__pc_o = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ID_imm = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ID_inst = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ID_branch = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__ID_memRead = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__ID_memtoReg = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__ID_memWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__ID_ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__ID_regWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__ID_jump = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__ID_ALUOp = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__EXE_readData1 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__EXE_pc_aimm = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__EXE_alu_s2 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__EXE_ALUOut = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__EXE_ALUCtl = VL_RAND_RESET_I(4);
    vlSelf->PipelineCPU__DOT__MEM_ALUOut = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__MEM_memRead = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__MEM_readData = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT____Vcellinp__PC_Mux__sel2 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o);
    vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode = VL_RAND_RESET_I(7);
    vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(192, vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o);
    vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o);
    vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o);
    VL_RAND_RESET_W(128, vlSelf->PipelineCPU__DOT____Vcellinp__MEM_WB_reg__i);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__register__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__dataMemory__DOT__data_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__dataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__dataMemory__DOT__data_memory__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__PipelineCPU__DOT__dataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__dataMemory__DOT__data_memory__v1 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__dataMemory__DOT__data_memory__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__dataMemory__DOT__data_memory__v2 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__dataMemory__DOT__data_memory__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__dataMemory__DOT__data_memory__v3 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__dataMemory__DOT__data_memory__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__PipelineCPU__DOT__dataMemory__DOT__data_memory__v4 = 0;
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__register__DOT__regs__v0 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__register__DOT__regs__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__PipelineCPU__DOT__register__DOT__regs__v0 = 0;
    vlSelf->__Vdlyvset__PipelineCPU__DOT__register__DOT__regs__v1 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__start = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT____Vcellinp__control__opcode = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__ID_inst = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__EXE_ALUCtl = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__EXE_alu_s2 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__EXE_readData1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__MEM_ALUOut = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__MEM_memRead = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
