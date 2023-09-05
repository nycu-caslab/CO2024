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
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+134+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("PipelineCPU ");
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+134+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+166,"pc_i", false,-1, 31,0);
    tracep->declBus(c+9,"pc_o", false,-1, 31,0);
    tracep->declBus(c+10,"pc_a4", false,-1, 31,0);
    tracep->declBus(c+11,"IF_inst", false,-1, 31,0);
    tracep->declBus(c+15,"ID_pc", false,-1, 31,0);
    tracep->declBus(c+167,"ID_readData1", false,-1, 31,0);
    tracep->declBus(c+168,"ID_readData2", false,-1, 31,0);
    tracep->declBus(c+169,"ID_imm", false,-1, 31,0);
    tracep->declBus(c+170,"ID_inst", false,-1, 31,0);
    tracep->declBus(c+16,"ID_pc_a4", false,-1, 31,0);
    tracep->declBit(c+120,"ID_branch", false,-1);
    tracep->declBit(c+121,"ID_memRead", false,-1);
    tracep->declBit(c+122,"ID_memtoReg", false,-1);
    tracep->declBit(c+123,"ID_memWrite", false,-1);
    tracep->declBit(c+124,"ID_ALUSrc", false,-1);
    tracep->declBit(c+125,"ID_regWrite", false,-1);
    tracep->declBit(c+126,"ID_jump", false,-1);
    tracep->declBus(c+127,"ID_ALUOp", false,-1, 1,0);
    tracep->declBus(c+17,"EXE_pc", false,-1, 31,0);
    tracep->declBus(c+18,"EXE_readData1", false,-1, 31,0);
    tracep->declBus(c+19,"EXE_readData2", false,-1, 31,0);
    tracep->declBus(c+20,"EXE_imm", false,-1, 31,0);
    tracep->declBus(c+21,"EXE_inst", false,-1, 31,0);
    tracep->declBus(c+22,"EXE_pc_a4", false,-1, 31,0);
    tracep->declBit(c+23,"EXE_branch", false,-1);
    tracep->declBit(c+24,"EXE_memRead", false,-1);
    tracep->declBit(c+25,"EXE_memtoReg", false,-1);
    tracep->declBit(c+26,"EXE_memWrite", false,-1);
    tracep->declBit(c+27,"EXE_ALUSrc", false,-1);
    tracep->declBit(c+28,"EXE_regWrite", false,-1);
    tracep->declBit(c+29,"EXE_jump", false,-1);
    tracep->declBus(c+30,"EXE_ALUOp", false,-1, 1,0);
    tracep->declBus(c+31,"EXE_imm_sl", false,-1, 31,0);
    tracep->declBus(c+32,"EXE_pc_aimm", false,-1, 31,0);
    tracep->declBus(c+171,"EXE_ALUOut", false,-1, 31,0);
    tracep->declBus(c+33,"EXE_ALUCtl", false,-1, 3,0);
    tracep->declBit(c+172,"EXE_condition", false,-1);
    tracep->declBus(c+34,"MEM_ALUOut", false,-1, 31,0);
    tracep->declBus(c+1,"MEM_inst", false,-1, 31,0);
    tracep->declBus(c+2,"MEM_pc_a4", false,-1, 31,0);
    tracep->declBit(c+35,"MEM_memRead", false,-1);
    tracep->declBit(c+36,"MEM_memtoReg", false,-1);
    tracep->declBit(c+37,"MEM_memWrite", false,-1);
    tracep->declBit(c+38,"MEM_regWrite", false,-1);
    tracep->declBit(c+39,"MEM_jump", false,-1);
    tracep->declBus(c+173,"MEM_readData", false,-1, 31,0);
    tracep->declBit(c+40,"WB_regWrite", false,-1);
    tracep->declBit(c+41,"WB_memtoReg", false,-1);
    tracep->declBit(c+42,"WB_jump", false,-1);
    tracep->declBus(c+43,"WB_readData", false,-1, 31,0);
    tracep->declBus(c+44,"WB_ALUOut", false,-1, 31,0);
    tracep->declBus(c+45,"WB_inst", false,-1, 31,0);
    tracep->declBus(c+46,"WB_pc_a4", false,-1, 31,0);
    tracep->declBus(c+47,"WB_writeData", false,-1, 31,0);
    tracep->declBit(c+48,"PC_write", false,-1);
    tracep->declBit(c+174,"IF_ID_write", false,-1);
    tracep->declBit(c+175,"IF_ID_flush", false,-1);
    tracep->declBit(c+129,"ID_EX_flush", false,-1);
    tracep->declBus(c+49,"EXE_alu_s1", false,-1, 31,0);
    tracep->declBus(c+50,"EXE_alu_s2", false,-1, 31,0);
    tracep->declBus(c+51,"EXE_alus2_imm", false,-1, 31,0);
    tracep->declBus(c+52,"forwardA", false,-1, 1,0);
    tracep->declBus(c+53,"forwardB", false,-1, 1,0);
    tracep->declBus(c+3,"MEM_alu_s2", false,-1, 31,0);
    tracep->pushNamePrefix("EXE_MEM_control_reg ");
    tracep->declBus(c+187,"size", false,-1, 31,0);
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBit(c+188,"write", false,-1);
    tracep->declBit(c+189,"flush", false,-1);
    tracep->declBus(c+54,"i", false,-1, 4,0);
    tracep->declBus(c+55,"o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXE_MEM_reg ");
    tracep->declBus(c+190,"size", false,-1, 31,0);
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBit(c+188,"write", false,-1);
    tracep->declBit(c+189,"flush", false,-1);
    tracep->declArray(c+176,"i", false,-1, 127,0);
    tracep->declArray(c+4,"o", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID_EXE_control_reg ");
    tracep->declBus(c+191,"size", false,-1, 31,0);
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBit(c+188,"write", false,-1);
    tracep->declBit(c+129,"flush", false,-1);
    tracep->declBus(c+128,"i", false,-1, 8,0);
    tracep->declBus(c+56,"o", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID_EXE_reg ");
    tracep->declBus(c+192,"size", false,-1, 31,0);
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBit(c+188,"write", false,-1);
    tracep->declBit(c+129,"flush", false,-1);
    tracep->declArray(c+180,"i", false,-1, 191,0);
    tracep->declArray(c+57,"o", false,-1, 191,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_ID_reg ");
    tracep->declBus(c+193,"size", false,-1, 31,0);
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBit(c+174,"write", false,-1);
    tracep->declBit(c+175,"flush", false,-1);
    tracep->declArray(c+12,"i", false,-1, 95,0);
    tracep->declArray(c+63,"o", false,-1, 95,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM_WB_control_reg ");
    tracep->declBus(c+194,"size", false,-1, 31,0);
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBit(c+188,"write", false,-1);
    tracep->declBit(c+189,"flush", false,-1);
    tracep->declBus(c+66,"i", false,-1, 2,0);
    tracep->declBus(c+67,"o", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM_WB_reg ");
    tracep->declBus(c+190,"size", false,-1, 31,0);
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBit(c+188,"write", false,-1);
    tracep->declBit(c+189,"flush", false,-1);
    tracep->declArray(c+116,"i", false,-1, 127,0);
    tracep->declArray(c+68,"o", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_Mux ");
    tracep->declBus(c+195,"size", false,-1, 31,0);
    tracep->declBit(c+29,"sel1", false,-1);
    tracep->declBit(c+130,"sel2", false,-1);
    tracep->declBus(c+10,"s0", false,-1, 31,0);
    tracep->declBus(c+32,"s1", false,-1, 31,0);
    tracep->declBus(c+32,"s2", false,-1, 31,0);
    tracep->declBus(c+171,"s3", false,-1, 31,0);
    tracep->declBus(c+166,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("adder_pc_aimm ");
    tracep->declBus(c+17,"a", false,-1, 31,0);
    tracep->declBus(c+31,"b", false,-1, 31,0);
    tracep->declBus(c+32,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+33,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+49,"A", false,-1, 31,0);
    tracep->declBus(c+51,"B", false,-1, 31,0);
    tracep->declBus(c+171,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+172,"condition", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+186,"opcode", false,-1, 6,0);
    tracep->declBit(c+120,"branch", false,-1);
    tracep->declBit(c+121,"memRead", false,-1);
    tracep->declBit(c+122,"memtoReg", false,-1);
    tracep->declBus(c+127,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+123,"memWrite", false,-1);
    tracep->declBit(c+124,"ALUSrc", false,-1);
    tracep->declBit(c+125,"regWrite", false,-1);
    tracep->declBit(c+126,"jump", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dataMemory ");
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+37,"memWrite", false,-1);
    tracep->declBit(c+35,"memRead", false,-1);
    tracep->declBus(c+34,"address", false,-1, 31,0);
    tracep->declBus(c+3,"writeData", false,-1, 31,0);
    tracep->declBus(c+173,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("forwardingUnit ");
    tracep->declBit(c+38,"MEM_regWrite", false,-1);
    tracep->declBit(c+40,"WB_regWrite", false,-1);
    tracep->declBus(c+8,"MEM_writeReg", false,-1, 4,0);
    tracep->declBus(c+72,"WB_writeReg", false,-1, 4,0);
    tracep->declBus(c+73,"EXE_regRs1", false,-1, 4,0);
    tracep->declBus(c+74,"EXE_regRs2", false,-1, 4,0);
    tracep->declBus(c+52,"forwardA", false,-1, 1,0);
    tracep->declBus(c+53,"forwardB", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hazardDectionUnit ");
    tracep->declBit(c+24,"EXE_memRead", false,-1);
    tracep->declBus(c+75,"EXE_writeReg", false,-1, 4,0);
    tracep->declBus(c+76,"ID_regRs1", false,-1, 4,0);
    tracep->declBus(c+77,"ID_regRs2", false,-1, 4,0);
    tracep->declBit(c+131,"branchTake", false,-1);
    tracep->declBit(c+48,"PC_write", false,-1);
    tracep->declBit(c+174,"IF_ID_write", false,-1);
    tracep->declBit(c+175,"IF_ID_flush", false,-1);
    tracep->declBit(c+129,"ID_EX_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immGen ");
    tracep->declBus(c+170,"inst", false,-1, 31,0);
    tracep->declBus(c+169,"imm", false,-1, 31,0);
    tracep->declBus(c+186,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_mem ");
    tracep->declBus(c+9,"readAddr", false,-1, 31,0);
    tracep->declBus(c+11,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+30,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+78,"funct7", false,-1);
    tracep->declBus(c+79,"funct3", false,-1, 2,0);
    tracep->declBus(c+33,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_alu1 ");
    tracep->declBus(c+195,"size", false,-1, 31,0);
    tracep->declBit(c+80,"sel1", false,-1);
    tracep->declBit(c+81,"sel2", false,-1);
    tracep->declBus(c+18,"s0", false,-1, 31,0);
    tracep->declBus(c+47,"s1", false,-1, 31,0);
    tracep->declBus(c+34,"s2", false,-1, 31,0);
    tracep->declBus(c+196,"s3", false,-1, 31,0);
    tracep->declBus(c+49,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_alu2 ");
    tracep->declBus(c+195,"size", false,-1, 31,0);
    tracep->declBit(c+82,"sel1", false,-1);
    tracep->declBit(c+83,"sel2", false,-1);
    tracep->declBus(c+19,"s0", false,-1, 31,0);
    tracep->declBus(c+47,"s1", false,-1, 31,0);
    tracep->declBus(c+34,"s2", false,-1, 31,0);
    tracep->declBus(c+196,"s3", false,-1, 31,0);
    tracep->declBus(c+50,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_alu_src ");
    tracep->declBus(c+195,"size", false,-1, 31,0);
    tracep->declBit(c+27,"sel", false,-1);
    tracep->declBus(c+50,"s0", false,-1, 31,0);
    tracep->declBus(c+20,"s1", false,-1, 31,0);
    tracep->declBus(c+51,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_writeData ");
    tracep->declBus(c+195,"size", false,-1, 31,0);
    tracep->declBit(c+42,"sel1", false,-1);
    tracep->declBit(c+41,"sel2", false,-1);
    tracep->declBus(c+44,"s0", false,-1, 31,0);
    tracep->declBus(c+43,"s1", false,-1, 31,0);
    tracep->declBus(c+46,"s2", false,-1, 31,0);
    tracep->declBus(c+46,"s3", false,-1, 31,0);
    tracep->declBus(c+47,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc ");
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBit(c+48,"write", false,-1);
    tracep->declBus(c+166,"pc_i", false,-1, 31,0);
    tracep->declBus(c+9,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_add ");
    tracep->declBus(c+9,"a", false,-1, 31,0);
    tracep->declBus(c+197,"b", false,-1, 31,0);
    tracep->declBus(c+10,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register ");
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBit(c+40,"regWrite", false,-1);
    tracep->declBus(c+76,"readReg1", false,-1, 4,0);
    tracep->declBus(c+77,"readReg2", false,-1, 4,0);
    tracep->declBus(c+72,"writeReg", false,-1, 4,0);
    tracep->declBus(c+47,"writeData", false,-1, 31,0);
    tracep->declBus(c+167,"readData1", false,-1, 31,0);
    tracep->declBus(c+168,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+84+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shiftLeftOne ");
    tracep->declBus(c+20,"i", false,-1, 31,0);
    tracep->declBus(c+31,"o", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp_h50723950__0;
    VlWide<4>/*127:0*/ __Vtemp_ha1cb3fe0__0;
    VlWide<6>/*191:0*/ __Vtemp_h582d926e__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[1U]),32);
    bufp->fullIData(oldp+2,(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[0U]),32);
    bufp->fullIData(oldp+3,(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[2U]),32);
    bufp->fullWData(oldp+4,(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o),128);
    bufp->fullCData(oldp+8,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o[1U] 
                                      >> 7U))),5);
    bufp->fullIData(oldp+9,(vlSelf->PipelineCPU__DOT__pc_o),32);
    bufp->fullIData(oldp+10,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_o)),32);
    bufp->fullIData(oldp+11,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_o)
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
    bufp->fullWData(oldp+12,(__Vtemp_h50723950__0),96);
    bufp->fullIData(oldp+15,(vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[2U]),32);
    bufp->fullIData(oldp+16,(vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[0U]),32);
    bufp->fullIData(oldp+17,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[5U]),32);
    bufp->fullIData(oldp+18,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[4U]),32);
    bufp->fullIData(oldp+19,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[3U]),32);
    bufp->fullIData(oldp+20,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[2U]),32);
    bufp->fullIData(oldp+21,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U]),32);
    bufp->fullIData(oldp+22,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[0U]),32);
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                  >> 8U))));
    bufp->fullBit(oldp+24,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                  >> 7U))));
    bufp->fullBit(oldp+25,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                  >> 6U))));
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                  >> 3U))));
    bufp->fullBit(oldp+27,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                  >> 2U))));
    bufp->fullBit(oldp+28,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                  >> 1U))));
    bufp->fullBit(oldp+29,((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o))));
    bufp->fullCData(oldp+30,((3U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                    >> 4U))),2);
    bufp->fullIData(oldp+31,((vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[2U] 
                              << 1U)),32);
    bufp->fullIData(oldp+32,(vlSelf->PipelineCPU__DOT__EXE_pc_aimm),32);
    bufp->fullCData(oldp+33,(vlSelf->PipelineCPU__DOT__EXE_ALUCtl),4);
    bufp->fullIData(oldp+34,(vlSelf->PipelineCPU__DOT__MEM_ALUOut),32);
    bufp->fullBit(oldp+35,(vlSelf->PipelineCPU__DOT__MEM_memRead));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                  >> 3U))));
    bufp->fullBit(oldp+37,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                  >> 2U))));
    bufp->fullBit(oldp+38,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                  >> 1U))));
    bufp->fullBit(oldp+39,((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o))));
    bufp->fullBit(oldp+40,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o) 
                                  >> 2U))));
    bufp->fullBit(oldp+41,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o) 
                                  >> 1U))));
    bufp->fullBit(oldp+42,((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o))));
    bufp->fullIData(oldp+43,(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[3U]),32);
    bufp->fullIData(oldp+44,(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[2U]),32);
    bufp->fullIData(oldp+45,(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[1U]),32);
    bufp->fullIData(oldp+46,(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[0U]),32);
    bufp->fullIData(oldp+47,(vlSelf->PipelineCPU__DOT__WB_writeData),32);
    bufp->fullBit(oldp+48,((1U & (~ (((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
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
                                                       >> 0x14U)))))))));
    bufp->fullIData(oldp+49,(vlSelf->PipelineCPU__DOT__EXE_alu_s1),32);
    bufp->fullIData(oldp+50,(vlSelf->PipelineCPU__DOT__EXE_alu_s2),32);
    bufp->fullIData(oldp+51,(vlSelf->PipelineCPU__DOT__EXE_alus2_imm),32);
    bufp->fullCData(oldp+52,(vlSelf->PipelineCPU__DOT__forwardA),2);
    bufp->fullCData(oldp+53,(vlSelf->PipelineCPU__DOT__forwardB),2);
    bufp->fullCData(oldp+54,(((0x18U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                        >> 3U)) | (
                                                   (4U 
                                                    & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                                       >> 1U)) 
                                                   | (3U 
                                                      & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o))))),5);
    bufp->fullCData(oldp+55,(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o),5);
    bufp->fullSData(oldp+56,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o),9);
    bufp->fullWData(oldp+57,(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o),192);
    bufp->fullWData(oldp+63,(vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o),96);
    bufp->fullCData(oldp+66,(((4U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                     << 1U)) | ((2U 
                                                 & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o) 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o))))),3);
    bufp->fullCData(oldp+67,(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o),3);
    bufp->fullWData(oldp+68,(vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o),128);
    bufp->fullCData(oldp+72,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__MEM_WB_reg__o[1U] 
                                       >> 7U))),5);
    bufp->fullCData(oldp+73,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+74,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+75,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                       >> 7U))),5);
    bufp->fullCData(oldp+76,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+77,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+78,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+79,((7U & (vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_reg__o[1U] 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+80,((1U & ((IData)(vlSelf->PipelineCPU__DOT__forwardA) 
                                  >> 1U))));
    bufp->fullBit(oldp+81,((1U & (IData)(vlSelf->PipelineCPU__DOT__forwardA))));
    bufp->fullBit(oldp+82,((1U & ((IData)(vlSelf->PipelineCPU__DOT__forwardB) 
                                  >> 1U))));
    bufp->fullBit(oldp+83,((1U & (IData)(vlSelf->PipelineCPU__DOT__forwardB))));
    bufp->fullIData(oldp+84,(vlSelf->PipelineCPU__DOT__register__DOT__regs[0]),32);
    bufp->fullIData(oldp+85,(vlSelf->PipelineCPU__DOT__register__DOT__regs[1]),32);
    bufp->fullIData(oldp+86,(vlSelf->PipelineCPU__DOT__register__DOT__regs[2]),32);
    bufp->fullIData(oldp+87,(vlSelf->PipelineCPU__DOT__register__DOT__regs[3]),32);
    bufp->fullIData(oldp+88,(vlSelf->PipelineCPU__DOT__register__DOT__regs[4]),32);
    bufp->fullIData(oldp+89,(vlSelf->PipelineCPU__DOT__register__DOT__regs[5]),32);
    bufp->fullIData(oldp+90,(vlSelf->PipelineCPU__DOT__register__DOT__regs[6]),32);
    bufp->fullIData(oldp+91,(vlSelf->PipelineCPU__DOT__register__DOT__regs[7]),32);
    bufp->fullIData(oldp+92,(vlSelf->PipelineCPU__DOT__register__DOT__regs[8]),32);
    bufp->fullIData(oldp+93,(vlSelf->PipelineCPU__DOT__register__DOT__regs[9]),32);
    bufp->fullIData(oldp+94,(vlSelf->PipelineCPU__DOT__register__DOT__regs[10]),32);
    bufp->fullIData(oldp+95,(vlSelf->PipelineCPU__DOT__register__DOT__regs[11]),32);
    bufp->fullIData(oldp+96,(vlSelf->PipelineCPU__DOT__register__DOT__regs[12]),32);
    bufp->fullIData(oldp+97,(vlSelf->PipelineCPU__DOT__register__DOT__regs[13]),32);
    bufp->fullIData(oldp+98,(vlSelf->PipelineCPU__DOT__register__DOT__regs[14]),32);
    bufp->fullIData(oldp+99,(vlSelf->PipelineCPU__DOT__register__DOT__regs[15]),32);
    bufp->fullIData(oldp+100,(vlSelf->PipelineCPU__DOT__register__DOT__regs[16]),32);
    bufp->fullIData(oldp+101,(vlSelf->PipelineCPU__DOT__register__DOT__regs[17]),32);
    bufp->fullIData(oldp+102,(vlSelf->PipelineCPU__DOT__register__DOT__regs[18]),32);
    bufp->fullIData(oldp+103,(vlSelf->PipelineCPU__DOT__register__DOT__regs[19]),32);
    bufp->fullIData(oldp+104,(vlSelf->PipelineCPU__DOT__register__DOT__regs[20]),32);
    bufp->fullIData(oldp+105,(vlSelf->PipelineCPU__DOT__register__DOT__regs[21]),32);
    bufp->fullIData(oldp+106,(vlSelf->PipelineCPU__DOT__register__DOT__regs[22]),32);
    bufp->fullIData(oldp+107,(vlSelf->PipelineCPU__DOT__register__DOT__regs[23]),32);
    bufp->fullIData(oldp+108,(vlSelf->PipelineCPU__DOT__register__DOT__regs[24]),32);
    bufp->fullIData(oldp+109,(vlSelf->PipelineCPU__DOT__register__DOT__regs[25]),32);
    bufp->fullIData(oldp+110,(vlSelf->PipelineCPU__DOT__register__DOT__regs[26]),32);
    bufp->fullIData(oldp+111,(vlSelf->PipelineCPU__DOT__register__DOT__regs[27]),32);
    bufp->fullIData(oldp+112,(vlSelf->PipelineCPU__DOT__register__DOT__regs[28]),32);
    bufp->fullIData(oldp+113,(vlSelf->PipelineCPU__DOT__register__DOT__regs[29]),32);
    bufp->fullIData(oldp+114,(vlSelf->PipelineCPU__DOT__register__DOT__regs[30]),32);
    bufp->fullIData(oldp+115,(vlSelf->PipelineCPU__DOT__register__DOT__regs[31]),32);
    bufp->fullWData(oldp+116,(vlSelf->PipelineCPU__DOT____Vcellinp__MEM_WB_reg__i),128);
    bufp->fullBit(oldp+120,(vlSelf->PipelineCPU__DOT__ID_branch));
    bufp->fullBit(oldp+121,(vlSelf->PipelineCPU__DOT__ID_memRead));
    bufp->fullBit(oldp+122,(vlSelf->PipelineCPU__DOT__ID_memtoReg));
    bufp->fullBit(oldp+123,(vlSelf->PipelineCPU__DOT__ID_memWrite));
    bufp->fullBit(oldp+124,(vlSelf->PipelineCPU__DOT__ID_ALUSrc));
    bufp->fullBit(oldp+125,(vlSelf->PipelineCPU__DOT__ID_regWrite));
    bufp->fullBit(oldp+126,(vlSelf->PipelineCPU__DOT__ID_jump));
    bufp->fullCData(oldp+127,(vlSelf->PipelineCPU__DOT__ID_ALUOp),2);
    bufp->fullSData(oldp+128,((((IData)(vlSelf->PipelineCPU__DOT__ID_branch) 
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
    bufp->fullBit(oldp+129,(vlSelf->PipelineCPU__DOT__ID_EX_flush));
    bufp->fullBit(oldp+130,(vlSelf->PipelineCPU__DOT____Vcellinp__PC_Mux__sel2));
    bufp->fullBit(oldp+131,(vlSelf->PipelineCPU__DOT____Vcellinp__hazardDectionUnit__branchTake));
    bufp->fullBit(oldp+132,(vlSelf->clk));
    bufp->fullBit(oldp+133,(vlSelf->start));
    bufp->fullIData(oldp+134,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+135,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+136,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+137,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+138,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+139,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+140,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+141,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+142,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+143,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+144,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+145,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+146,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+147,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+148,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+149,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+150,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+151,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+152,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+153,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+154,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+155,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+156,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+157,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+158,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+159,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+160,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+161,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+162,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+163,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+164,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+165,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+166,(((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o))
                                ? ((IData)(vlSelf->PipelineCPU__DOT____Vcellinp__PC_Mux__sel2)
                                    ? vlSelf->PipelineCPU__DOT__EXE_ALUOut
                                    : vlSelf->PipelineCPU__DOT__EXE_pc_aimm)
                                : ((IData)(vlSelf->PipelineCPU__DOT____Vcellinp__PC_Mux__sel2)
                                    ? vlSelf->PipelineCPU__DOT__EXE_pc_aimm
                                    : ((IData)(4U) 
                                       + vlSelf->PipelineCPU__DOT__pc_o)))),32);
    bufp->fullIData(oldp+167,(vlSelf->PipelineCPU__DOT__register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+168,(vlSelf->PipelineCPU__DOT__register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__IF_ID_reg__o[1U] 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+169,(vlSelf->PipelineCPU__DOT__ID_imm),32);
    bufp->fullIData(oldp+170,(vlSelf->PipelineCPU__DOT__ID_inst),32);
    bufp->fullIData(oldp+171,(vlSelf->PipelineCPU__DOT__EXE_ALUOut),32);
    bufp->fullBit(oldp+172,((1U == vlSelf->PipelineCPU__DOT__EXE_ALUOut)));
    bufp->fullIData(oldp+173,(vlSelf->PipelineCPU__DOT__MEM_readData),32);
    bufp->fullBit(oldp+174,((1U & ((~ (((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
                                        >> 7U) & ((
                                                   (0x1fU 
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
    bufp->fullBit(oldp+175,(((~ (((IData)(vlSelf->PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o) 
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
    bufp->fullWData(oldp+176,(__Vtemp_ha1cb3fe0__0),128);
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
    bufp->fullWData(oldp+180,(__Vtemp_h582d926e__0),192);
    bufp->fullCData(oldp+186,(vlSelf->PipelineCPU__DOT____Vcellinp__control__opcode),7);
    bufp->fullIData(oldp+187,(5U),32);
    bufp->fullBit(oldp+188,(1U));
    bufp->fullBit(oldp+189,(0U));
    bufp->fullIData(oldp+190,(0x80U),32);
    bufp->fullIData(oldp+191,(9U),32);
    bufp->fullIData(oldp+192,(0xc0U),32);
    bufp->fullIData(oldp+193,(0x60U),32);
    bufp->fullIData(oldp+194,(3U),32);
    bufp->fullIData(oldp+195,(0x20U),32);
    bufp->fullIData(oldp+196,(0U),32);
    bufp->fullIData(oldp+197,(4U),32);
}
