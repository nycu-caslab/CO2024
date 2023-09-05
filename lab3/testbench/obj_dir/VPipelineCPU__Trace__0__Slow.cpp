// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


VL_ATTR_COLD void VPipelineCPU___024root__trace_init_sub__TOP__0(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+127+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("PipelineCPU ");
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+127+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+159,"pc_i", false,-1, 31,0);
    tracep->declBus(c+69,"pc_o", false,-1, 31,0);
    tracep->declBus(c+70,"pc_a4", false,-1, 31,0);
    tracep->declBus(c+71,"IF_inst", false,-1, 31,0);
    tracep->declBus(c+1,"ID_pc", false,-1, 31,0);
    tracep->declBus(c+160,"ID_readData1", false,-1, 31,0);
    tracep->declBus(c+161,"ID_readData2", false,-1, 31,0);
    tracep->declBus(c+162,"ID_imm", false,-1, 31,0);
    tracep->declBus(c+120,"ID_inst", false,-1, 31,0);
    tracep->declBus(c+2,"ID_pc_a4", false,-1, 31,0);
    tracep->declBit(c+111,"ID_branch", false,-1);
    tracep->declBit(c+112,"ID_memRead", false,-1);
    tracep->declBit(c+113,"ID_memtoReg", false,-1);
    tracep->declBit(c+114,"ID_memWrite", false,-1);
    tracep->declBit(c+115,"ID_ALUSrc", false,-1);
    tracep->declBit(c+116,"ID_regWrite", false,-1);
    tracep->declBit(c+117,"ID_jump", false,-1);
    tracep->declBus(c+118,"ID_ALUOp", false,-1, 1,0);
    tracep->declBus(c+3,"EXE_pc", false,-1, 31,0);
    tracep->declBus(c+121,"EXE_readData1", false,-1, 31,0);
    tracep->declBus(c+4,"EXE_readData2", false,-1, 31,0);
    tracep->declBus(c+5,"EXE_imm", false,-1, 31,0);
    tracep->declBus(c+6,"EXE_inst", false,-1, 31,0);
    tracep->declBus(c+7,"EXE_pc_a4", false,-1, 31,0);
    tracep->declBit(c+8,"EXE_branch", false,-1);
    tracep->declBit(c+9,"EXE_memRead", false,-1);
    tracep->declBit(c+10,"EXE_memtoReg", false,-1);
    tracep->declBit(c+11,"EXE_memWrite", false,-1);
    tracep->declBit(c+12,"EXE_ALUSrc", false,-1);
    tracep->declBit(c+13,"EXE_regWrite", false,-1);
    tracep->declBit(c+14,"EXE_jump", false,-1);
    tracep->declBus(c+15,"EXE_ALUOp", false,-1, 1,0);
    tracep->declBus(c+16,"EXE_imm_sl", false,-1, 31,0);
    tracep->declBus(c+17,"EXE_pc_aimm", false,-1, 31,0);
    tracep->declBus(c+122,"EXE_alu_s2", false,-1, 31,0);
    tracep->declBus(c+163,"EXE_ALUOut", false,-1, 31,0);
    tracep->declBus(c+123,"EXE_ALUCtl", false,-1, 3,0);
    tracep->declBit(c+164,"EXE_condition", false,-1);
    tracep->declBus(c+18,"MEM_ALUOut", false,-1, 31,0);
    tracep->declBus(c+19,"MEM_readData2", false,-1, 31,0);
    tracep->declBus(c+20,"MEM_inst", false,-1, 31,0);
    tracep->declBus(c+21,"MEM_pc_a4", false,-1, 31,0);
    tracep->declBit(c+22,"MEM_branch", false,-1);
    tracep->declBit(c+23,"MEM_memRead", false,-1);
    tracep->declBit(c+24,"MEM_memtoReg", false,-1);
    tracep->declBit(c+25,"MEM_memWrite", false,-1);
    tracep->declBit(c+26,"MEM_regWrite", false,-1);
    tracep->declBit(c+27,"MEM_jump", false,-1);
    tracep->declBit(c+28,"MEM_condition", false,-1);
    tracep->declBus(c+165,"MEM_readData", false,-1, 31,0);
    tracep->declBit(c+29,"WB_regWrite", false,-1);
    tracep->declBit(c+30,"WB_memtoReg", false,-1);
    tracep->declBit(c+31,"WB_jump", false,-1);
    tracep->declBus(c+32,"WB_readData", false,-1, 31,0);
    tracep->declBus(c+33,"WB_ALUOut", false,-1, 31,0);
    tracep->declBus(c+34,"WB_inst", false,-1, 31,0);
    tracep->declBus(c+35,"WB_pc_a4", false,-1, 31,0);
    tracep->declBus(c+36,"WB_writeData", false,-1, 31,0);
    tracep->pushNamePrefix("EXE_MEM_control_reg ");
    tracep->declBus(c+172,"size", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+64,"i", false,-1, 6,0);
    tracep->declBus(c+37,"o", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXE_MEM_reg ");
    tracep->declBus(c+173,"size", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declArray(c+65,"i", false,-1, 127,0);
    tracep->declArray(c+38,"o", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID_EXE_control_reg ");
    tracep->declBus(c+174,"size", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+119,"i", false,-1, 8,0);
    tracep->declBus(c+42,"o", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID_EXE_reg ");
    tracep->declBus(c+175,"size", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declArray(c+166,"i", false,-1, 191,0);
    tracep->declArray(c+43,"o", false,-1, 191,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_ID_reg ");
    tracep->declBus(c+176,"size", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declArray(c+72,"i", false,-1, 95,0);
    tracep->declArray(c+49,"o", false,-1, 95,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM_WB_control_reg ");
    tracep->declBus(c+177,"size", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+52,"i", false,-1, 2,0);
    tracep->declBus(c+53,"o", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM_WB_reg ");
    tracep->declBus(c+173,"size", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declArray(c+75,"i", false,-1, 127,0);
    tracep->declArray(c+54,"o", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_Mux ");
    tracep->declBus(c+178,"size", false,-1, 31,0);
    tracep->declBit(c+27,"sel1", false,-1);
    tracep->declBit(c+58,"sel2", false,-1);
    tracep->declBus(c+70,"s0", false,-1, 31,0);
    tracep->declBus(c+17,"s1", false,-1, 31,0);
    tracep->declBus(c+17,"s2", false,-1, 31,0);
    tracep->declBus(c+163,"s3", false,-1, 31,0);
    tracep->declBus(c+159,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("adder_pc_aimm ");
    tracep->declBus(c+3,"a", false,-1, 31,0);
    tracep->declBus(c+16,"b", false,-1, 31,0);
    tracep->declBus(c+17,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+123,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+121,"A", false,-1, 31,0);
    tracep->declBus(c+122,"B", false,-1, 31,0);
    tracep->declBus(c+163,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+164,"condition", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+124,"opcode", false,-1, 6,0);
    tracep->declBit(c+111,"branch", false,-1);
    tracep->declBit(c+112,"memRead", false,-1);
    tracep->declBit(c+113,"memtoReg", false,-1);
    tracep->declBus(c+118,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+114,"memWrite", false,-1);
    tracep->declBit(c+115,"ALUSrc", false,-1);
    tracep->declBit(c+116,"regWrite", false,-1);
    tracep->declBit(c+117,"jump", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dataMemory ");
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+25,"memWrite", false,-1);
    tracep->declBit(c+23,"memRead", false,-1);
    tracep->declBus(c+18,"address", false,-1, 31,0);
    tracep->declBus(c+19,"writeData", false,-1, 31,0);
    tracep->declBus(c+165,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immGen ");
    tracep->declBus(c+120,"inst", false,-1, 31,0);
    tracep->declBus(c+162,"imm", false,-1, 31,0);
    tracep->declBus(c+124,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_mem ");
    tracep->declBus(c+69,"readAddr", false,-1, 31,0);
    tracep->declBus(c+71,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+15,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+59,"funct7", false,-1);
    tracep->declBus(c+60,"funct3", false,-1, 2,0);
    tracep->declBus(c+123,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_alu_src ");
    tracep->declBus(c+178,"size", false,-1, 31,0);
    tracep->declBit(c+12,"sel", false,-1);
    tracep->declBus(c+4,"s0", false,-1, 31,0);
    tracep->declBus(c+5,"s1", false,-1, 31,0);
    tracep->declBus(c+122,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_writeData ");
    tracep->declBus(c+178,"size", false,-1, 31,0);
    tracep->declBit(c+31,"sel1", false,-1);
    tracep->declBit(c+30,"sel2", false,-1);
    tracep->declBus(c+33,"s0", false,-1, 31,0);
    tracep->declBus(c+32,"s1", false,-1, 31,0);
    tracep->declBus(c+35,"s2", false,-1, 31,0);
    tracep->declBus(c+35,"s3", false,-1, 31,0);
    tracep->declBus(c+36,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc ");
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+159,"pc_i", false,-1, 31,0);
    tracep->declBus(c+69,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_add ");
    tracep->declBus(c+69,"a", false,-1, 31,0);
    tracep->declBus(c+179,"b", false,-1, 31,0);
    tracep->declBus(c+70,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register ");
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBit(c+29,"regWrite", false,-1);
    tracep->declBus(c+61,"readReg1", false,-1, 4,0);
    tracep->declBus(c+62,"readReg2", false,-1, 4,0);
    tracep->declBus(c+63,"writeReg", false,-1, 4,0);
    tracep->declBus(c+36,"writeData", false,-1, 31,0);
    tracep->declBus(c+160,"readData1", false,-1, 31,0);
    tracep->declBus(c+161,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+79+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shiftLeftOne ");
    tracep->declBus(c+5,"i", false,-1, 31,0);
    tracep->declBus(c+16,"o", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_init_top(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_top\n"); );
    // Body
    VPipelineCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPipelineCPU___024root__trace_register(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPipelineCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPipelineCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPipelineCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPipelineCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h03c9bd37__0;
    VlWide<3>/*95:0*/ __Vtemp_h50723950__0;
    VlWide<6>/*191:0*/ __Vtemp_h582d926e__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[2U]),32);
    bufp->fullIData(oldp+2,(vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[0U]),32);
    bufp->fullIData(oldp+3,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[5U]),32);
    bufp->fullIData(oldp+4,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[3U]),32);
    bufp->fullIData(oldp+5,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[2U]),32);
    bufp->fullIData(oldp+6,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U]),32);
    bufp->fullIData(oldp+7,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[0U]),32);
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                 >> 8U))));
    bufp->fullBit(oldp+9,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                 >> 7U))));
    bufp->fullBit(oldp+10,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                  >> 6U))));
    bufp->fullBit(oldp+11,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                  >> 3U))));
    bufp->fullBit(oldp+12,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                  >> 2U))));
    bufp->fullBit(oldp+13,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                  >> 1U))));
    bufp->fullBit(oldp+14,((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o))));
    bufp->fullCData(oldp+15,((3U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                    >> 4U))),2);
    bufp->fullIData(oldp+16,((vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[2U] 
                              << 1U)),32);
    bufp->fullIData(oldp+17,(vlSelf->PipelineCPU__DOT__EXE_pc_aimm),32);
    bufp->fullIData(oldp+18,(vlSelf->PipelineCPU__DOT__MEM_ALUOut),32);
    bufp->fullIData(oldp+19,(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[2U]),32);
    bufp->fullIData(oldp+20,(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[1U]),32);
    bufp->fullIData(oldp+21,(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[0U]),32);
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                  >> 6U))));
    bufp->fullBit(oldp+23,(vlSelf->PipelineCPU__DOT__MEM_memRead));
    bufp->fullBit(oldp+24,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                  >> 4U))));
    bufp->fullBit(oldp+25,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                  >> 3U))));
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                  >> 2U))));
    bufp->fullBit(oldp+27,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                  >> 1U))));
    bufp->fullBit(oldp+28,((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o))));
    bufp->fullBit(oldp+29,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o) 
                                  >> 2U))));
    bufp->fullBit(oldp+30,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o) 
                                  >> 1U))));
    bufp->fullBit(oldp+31,((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o))));
    bufp->fullIData(oldp+32,(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[3U]),32);
    bufp->fullIData(oldp+33,(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[2U]),32);
    bufp->fullIData(oldp+34,(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[1U]),32);
    bufp->fullIData(oldp+35,(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[0U]),32);
    bufp->fullIData(oldp+36,(((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o))
                               ? vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[0U]
                               : ((2U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o))
                                   ? vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[3U]
                                   : vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[2U]))),32);
    bufp->fullCData(oldp+37,(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o),7);
    bufp->fullWData(oldp+38,(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o),128);
    bufp->fullSData(oldp+42,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o),9);
    bufp->fullWData(oldp+43,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o),192);
    bufp->fullWData(oldp+49,(vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o),96);
    bufp->fullCData(oldp+52,(((4U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o)) 
                              | ((2U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                        >> 3U)) | (1U 
                                                   & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                                      >> 1U))))),3);
    bufp->fullCData(oldp+53,(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o),3);
    bufp->fullWData(oldp+54,(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o),128);
    bufp->fullBit(oldp+58,(vlSelf->PipelineCPU__DOT____Vcellinp__PC_Mux__sel2));
    bufp->fullBit(oldp+59,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+60,((7U & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+61,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+62,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+63,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[1U] 
                                       >> 7U))),5);
    bufp->fullCData(oldp+64,(((0x70U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                        >> 2U)) | (
                                                   (8U 
                                                    & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o)) 
                                                   | ((6U 
                                                       & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                                          << 1U)) 
                                                      | (1U 
                                                         == vlSelf->PipelineCPU__DOT__EXE_ALUOut))))),7);
    __Vtemp_h03c9bd37__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[0U]))));
    __Vtemp_h03c9bd37__0[1U] = (IData)(((((QData)((IData)(
                                                          vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[0U]))) 
                                        >> 0x20U));
    __Vtemp_h03c9bd37__0[2U] = (IData)((((QData)((IData)(vlSelf->PipelineCPU__DOT__EXE_ALUOut)) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[3U]))));
    __Vtemp_h03c9bd37__0[3U] = (IData)(((((QData)((IData)(vlSelf->PipelineCPU__DOT__EXE_ALUOut)) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[3U]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+65,(__Vtemp_h03c9bd37__0),128);
    bufp->fullIData(oldp+69,(vlSelf->PipelineCPU__DOT__pc_o),32);
    bufp->fullIData(oldp+70,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_o)),32);
    bufp->fullIData(oldp+71,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_o)
                               ? 0U : ((vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts
                                        [(0x7fU & vlSelf->PipelineCPU__DOT__pc_o)] 
                                        << 0x18U) | 
                                       ((vlSelf->PipelineCPU__DOT__inst_mem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(1U) 
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
    bufp->fullWData(oldp+72,(__Vtemp_h50723950__0),96);
    bufp->fullWData(oldp+75,(vlSelf->PipelineCPU__DOT____Vcellinp__MEM_WB_reg__i),128);
    bufp->fullIData(oldp+79,(vlSelf->PipelineCPU__DOT__register__DOT__regs[0]),32);
    bufp->fullIData(oldp+80,(vlSelf->PipelineCPU__DOT__register__DOT__regs[1]),32);
    bufp->fullIData(oldp+81,(vlSelf->PipelineCPU__DOT__register__DOT__regs[2]),32);
    bufp->fullIData(oldp+82,(vlSelf->PipelineCPU__DOT__register__DOT__regs[3]),32);
    bufp->fullIData(oldp+83,(vlSelf->PipelineCPU__DOT__register__DOT__regs[4]),32);
    bufp->fullIData(oldp+84,(vlSelf->PipelineCPU__DOT__register__DOT__regs[5]),32);
    bufp->fullIData(oldp+85,(vlSelf->PipelineCPU__DOT__register__DOT__regs[6]),32);
    bufp->fullIData(oldp+86,(vlSelf->PipelineCPU__DOT__register__DOT__regs[7]),32);
    bufp->fullIData(oldp+87,(vlSelf->PipelineCPU__DOT__register__DOT__regs[8]),32);
    bufp->fullIData(oldp+88,(vlSelf->PipelineCPU__DOT__register__DOT__regs[9]),32);
    bufp->fullIData(oldp+89,(vlSelf->PipelineCPU__DOT__register__DOT__regs[10]),32);
    bufp->fullIData(oldp+90,(vlSelf->PipelineCPU__DOT__register__DOT__regs[11]),32);
    bufp->fullIData(oldp+91,(vlSelf->PipelineCPU__DOT__register__DOT__regs[12]),32);
    bufp->fullIData(oldp+92,(vlSelf->PipelineCPU__DOT__register__DOT__regs[13]),32);
    bufp->fullIData(oldp+93,(vlSelf->PipelineCPU__DOT__register__DOT__regs[14]),32);
    bufp->fullIData(oldp+94,(vlSelf->PipelineCPU__DOT__register__DOT__regs[15]),32);
    bufp->fullIData(oldp+95,(vlSelf->PipelineCPU__DOT__register__DOT__regs[16]),32);
    bufp->fullIData(oldp+96,(vlSelf->PipelineCPU__DOT__register__DOT__regs[17]),32);
    bufp->fullIData(oldp+97,(vlSelf->PipelineCPU__DOT__register__DOT__regs[18]),32);
    bufp->fullIData(oldp+98,(vlSelf->PipelineCPU__DOT__register__DOT__regs[19]),32);
    bufp->fullIData(oldp+99,(vlSelf->PipelineCPU__DOT__register__DOT__regs[20]),32);
    bufp->fullIData(oldp+100,(vlSelf->PipelineCPU__DOT__register__DOT__regs[21]),32);
    bufp->fullIData(oldp+101,(vlSelf->PipelineCPU__DOT__register__DOT__regs[22]),32);
    bufp->fullIData(oldp+102,(vlSelf->PipelineCPU__DOT__register__DOT__regs[23]),32);
    bufp->fullIData(oldp+103,(vlSelf->PipelineCPU__DOT__register__DOT__regs[24]),32);
    bufp->fullIData(oldp+104,(vlSelf->PipelineCPU__DOT__register__DOT__regs[25]),32);
    bufp->fullIData(oldp+105,(vlSelf->PipelineCPU__DOT__register__DOT__regs[26]),32);
    bufp->fullIData(oldp+106,(vlSelf->PipelineCPU__DOT__register__DOT__regs[27]),32);
    bufp->fullIData(oldp+107,(vlSelf->PipelineCPU__DOT__register__DOT__regs[28]),32);
    bufp->fullIData(oldp+108,(vlSelf->PipelineCPU__DOT__register__DOT__regs[29]),32);
    bufp->fullIData(oldp+109,(vlSelf->PipelineCPU__DOT__register__DOT__regs[30]),32);
    bufp->fullIData(oldp+110,(vlSelf->PipelineCPU__DOT__register__DOT__regs[31]),32);
    bufp->fullBit(oldp+111,(vlSelf->PipelineCPU__DOT__ID_branch));
    bufp->fullBit(oldp+112,(vlSelf->PipelineCPU__DOT__ID_memRead));
    bufp->fullBit(oldp+113,(vlSelf->PipelineCPU__DOT__ID_memtoReg));
    bufp->fullBit(oldp+114,(vlSelf->PipelineCPU__DOT__ID_memWrite));
    bufp->fullBit(oldp+115,(vlSelf->PipelineCPU__DOT__ID_ALUSrc));
    bufp->fullBit(oldp+116,(vlSelf->PipelineCPU__DOT__ID_regWrite));
    bufp->fullBit(oldp+117,(vlSelf->PipelineCPU__DOT__ID_jump));
    bufp->fullCData(oldp+118,(vlSelf->PipelineCPU__DOT__ID_ALUOp),2);
    bufp->fullSData(oldp+119,((((IData)(vlSelf->PipelineCPU__DOT__ID_branch) 
                                << 8U) | (((IData)(vlSelf->PipelineCPU__DOT__ID_memRead) 
                                           << 7U) | 
                                          (((IData)(vlSelf->PipelineCPU__DOT__ID_memtoReg) 
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
    bufp->fullIData(oldp+120,(vlSelf->PipelineCPU__DOT__ID_inst),32);
    bufp->fullIData(oldp+121,(vlSelf->PipelineCPU__DOT__EXE_readData1),32);
    bufp->fullIData(oldp+122,(vlSelf->PipelineCPU__DOT__EXE_alu_s2),32);
    bufp->fullCData(oldp+123,(vlSelf->PipelineCPU__DOT__EXE_ALUCtl),4);
    bufp->fullCData(oldp+124,(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode),7);
    bufp->fullBit(oldp+125,(vlSelf->clk));
    bufp->fullBit(oldp+126,(vlSelf->start));
    bufp->fullIData(oldp+127,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+128,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+129,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+130,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+131,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+132,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+133,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+134,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+135,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+136,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+137,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+138,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+139,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+140,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+141,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+142,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+143,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+144,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+145,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+146,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+147,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+148,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+149,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+150,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+151,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+152,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+153,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+154,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+155,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+156,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+157,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+158,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+159,(((2U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o))
                                ? ((IData)(vlSelf->PipelineCPU__DOT____Vcellinp__PC_Mux__sel2)
                                    ? vlSelf->PipelineCPU__DOT__EXE_ALUOut
                                    : vlSelf->PipelineCPU__DOT__EXE_pc_aimm)
                                : ((IData)(vlSelf->PipelineCPU__DOT____Vcellinp__PC_Mux__sel2)
                                    ? vlSelf->PipelineCPU__DOT__EXE_pc_aimm
                                    : ((IData)(4U) 
                                       + vlSelf->PipelineCPU__DOT__pc_o)))),32);
    bufp->fullIData(oldp+160,(vlSelf->PipelineCPU__DOT__register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+161,(vlSelf->PipelineCPU__DOT__register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+162,(vlSelf->PipelineCPU__DOT__ID_imm),32);
    bufp->fullIData(oldp+163,(vlSelf->PipelineCPU__DOT__EXE_ALUOut),32);
    bufp->fullBit(oldp+164,((1U == vlSelf->PipelineCPU__DOT__EXE_ALUOut)));
    bufp->fullIData(oldp+165,(vlSelf->PipelineCPU__DOT__MEM_readData),32);
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
    bufp->fullWData(oldp+166,(__Vtemp_h582d926e__0),192);
    bufp->fullIData(oldp+172,(7U),32);
    bufp->fullIData(oldp+173,(0x80U),32);
    bufp->fullIData(oldp+174,(9U),32);
    bufp->fullIData(oldp+175,(0xc0U),32);
    bufp->fullIData(oldp+176,(0x60U),32);
    bufp->fullIData(oldp+177,(3U),32);
    bufp->fullIData(oldp+178,(0x20U),32);
    bufp->fullIData(oldp+179,(4U),32);
}
