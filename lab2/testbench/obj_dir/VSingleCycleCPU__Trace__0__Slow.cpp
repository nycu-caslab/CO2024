// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleCPU__Syms.h"


VL_ATTR_COLD void VSingleCycleCPU___024root__trace_init_sub__TOP__0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+49,"clk", false,-1);
    tracep->declBit(c+50,"start", false,-1);
    tracep->declBus(c+51,"t0", false,-1, 31,0);
    tracep->declBus(c+52,"t1", false,-1, 31,0);
    tracep->declBus(c+53,"t2", false,-1, 31,0);
    tracep->declBus(c+54,"t3", false,-1, 31,0);
    tracep->declBus(c+55,"t4", false,-1, 31,0);
    tracep->declBus(c+56,"t5", false,-1, 31,0);
    tracep->declBus(c+57,"t6", false,-1, 31,0);
    tracep->declBus(c+58,"s0", false,-1, 31,0);
    tracep->declBus(c+59,"s1", false,-1, 31,0);
    tracep->declBus(c+60,"s2", false,-1, 31,0);
    tracep->declBus(c+61,"sp", false,-1, 31,0);
    tracep->declBus(c+62,"a0", false,-1, 31,0);
    tracep->declBus(c+63,"a1", false,-1, 31,0);
    tracep->declBus(c+64,"ra", false,-1, 31,0);
    tracep->pushNamePrefix("SingleCycleCPU ");
    tracep->declBit(c+49,"clk", false,-1);
    tracep->declBit(c+50,"start", false,-1);
    tracep->declBus(c+51,"t0", false,-1, 31,0);
    tracep->declBus(c+52,"t1", false,-1, 31,0);
    tracep->declBus(c+53,"t2", false,-1, 31,0);
    tracep->declBus(c+54,"t3", false,-1, 31,0);
    tracep->declBus(c+55,"t4", false,-1, 31,0);
    tracep->declBus(c+56,"t5", false,-1, 31,0);
    tracep->declBus(c+57,"t6", false,-1, 31,0);
    tracep->declBus(c+58,"s0", false,-1, 31,0);
    tracep->declBus(c+59,"s1", false,-1, 31,0);
    tracep->declBus(c+60,"s2", false,-1, 31,0);
    tracep->declBus(c+61,"sp", false,-1, 31,0);
    tracep->declBus(c+62,"a0", false,-1, 31,0);
    tracep->declBus(c+63,"a1", false,-1, 31,0);
    tracep->declBus(c+64,"ra", false,-1, 31,0);
    tracep->declBus(c+65,"pc_i", false,-1, 31,0);
    tracep->declBus(c+33,"pc_o", false,-1, 31,0);
    tracep->declBus(c+34,"pc_a4", false,-1, 31,0);
    tracep->declBus(c+66,"pc_aimm", false,-1, 31,0);
    tracep->declBus(c+35,"inst", false,-1, 31,0);
    tracep->declBus(c+41,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+42,"branch", false,-1);
    tracep->declBit(c+43,"memRead", false,-1);
    tracep->declBit(c+44,"memtoReg", false,-1);
    tracep->declBit(c+45,"memWrite", false,-1);
    tracep->declBit(c+46,"ALUSrc", false,-1);
    tracep->declBit(c+47,"regWrite", false,-1);
    tracep->declBit(c+48,"jump", false,-1);
    tracep->declBus(c+67,"readData1", false,-1, 31,0);
    tracep->declBus(c+68,"readData2", false,-1, 31,0);
    tracep->declBus(c+69,"writeData", false,-1, 31,0);
    tracep->declBus(c+70,"imm", false,-1, 31,0);
    tracep->declBus(c+71,"imm_sl", false,-1, 31,0);
    tracep->declBus(c+72,"alu_s2", false,-1, 31,0);
    tracep->declBus(c+73,"ALUCtl", false,-1, 3,0);
    tracep->declBit(c+74,"condition", false,-1);
    tracep->declBus(c+75,"ALUOut", false,-1, 31,0);
    tracep->declBus(c+76,"memtoRegWriteData", false,-1, 31,0);
    tracep->declBus(c+77,"readData", false,-1, 31,0);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+73,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+67,"A", false,-1, 31,0);
    tracep->declBus(c+72,"B", false,-1, 31,0);
    tracep->declBus(c+75,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+74,"condition", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+41,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+36,"funct7", false,-1);
    tracep->declBus(c+37,"funct3", false,-1, 2,0);
    tracep->declBus(c+73,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+33,"a", false,-1, 31,0);
    tracep->declBus(c+80,"b", false,-1, 31,0);
    tracep->declBus(c+34,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+33,"a", false,-1, 31,0);
    tracep->declBus(c+71,"b", false,-1, 31,0);
    tracep->declBus(c+66,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+78,"opcode", false,-1, 6,0);
    tracep->declBit(c+42,"branch", false,-1);
    tracep->declBit(c+43,"memRead", false,-1);
    tracep->declBit(c+44,"memtoReg", false,-1);
    tracep->declBus(c+41,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+45,"memWrite", false,-1);
    tracep->declBit(c+46,"ALUSrc", false,-1);
    tracep->declBit(c+47,"regWrite", false,-1);
    tracep->declBit(c+48,"jump", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+50,"rst", false,-1);
    tracep->declBit(c+49,"clk", false,-1);
    tracep->declBit(c+45,"memWrite", false,-1);
    tracep->declBit(c+43,"memRead", false,-1);
    tracep->declBus(c+75,"address", false,-1, 31,0);
    tracep->declBus(c+68,"writeData", false,-1, 31,0);
    tracep->declBus(c+77,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+35,"inst", false,-1, 31,0);
    tracep->declBus(c+70,"imm", false,-1, 31,0);
    tracep->declBus(c+78,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+33,"readAddr", false,-1, 31,0);
    tracep->declBus(c+35,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+81,"size", false,-1, 31,0);
    tracep->declBit(c+46,"sel", false,-1);
    tracep->declBus(c+68,"s0", false,-1, 31,0);
    tracep->declBus(c+70,"s1", false,-1, 31,0);
    tracep->declBus(c+72,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+81,"size", false,-1, 31,0);
    tracep->declBit(c+48,"sel1", false,-1);
    tracep->declBit(c+79,"sel2", false,-1);
    tracep->declBus(c+34,"s0", false,-1, 31,0);
    tracep->declBus(c+66,"s1", false,-1, 31,0);
    tracep->declBus(c+66,"s2", false,-1, 31,0);
    tracep->declBus(c+75,"s3", false,-1, 31,0);
    tracep->declBus(c+65,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+81,"size", false,-1, 31,0);
    tracep->declBit(c+48,"sel", false,-1);
    tracep->declBus(c+76,"s0", false,-1, 31,0);
    tracep->declBus(c+34,"s1", false,-1, 31,0);
    tracep->declBus(c+69,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_memtoRegWriteData ");
    tracep->declBus(c+81,"size", false,-1, 31,0);
    tracep->declBit(c+44,"sel", false,-1);
    tracep->declBus(c+75,"s0", false,-1, 31,0);
    tracep->declBus(c+77,"s1", false,-1, 31,0);
    tracep->declBus(c+76,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+49,"clk", false,-1);
    tracep->declBit(c+50,"rst", false,-1);
    tracep->declBus(c+65,"pc_i", false,-1, 31,0);
    tracep->declBus(c+33,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+49,"clk", false,-1);
    tracep->declBit(c+50,"rst", false,-1);
    tracep->declBit(c+47,"regWrite", false,-1);
    tracep->declBus(c+38,"readReg1", false,-1, 4,0);
    tracep->declBus(c+39,"readReg2", false,-1, 4,0);
    tracep->declBus(c+40,"writeReg", false,-1, 4,0);
    tracep->declBus(c+69,"writeData", false,-1, 31,0);
    tracep->declBus(c+67,"readData1", false,-1, 31,0);
    tracep->declBus(c+68,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+70,"i", false,-1, 31,0);
    tracep->declBus(c+71,"o", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_init_top(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_init_top\n"); );
    // Body
    VSingleCycleCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_register(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSingleCycleCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSingleCycleCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSingleCycleCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_full_top_0\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSingleCycleCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->SingleCycleCPU__DOT__pc_o),32);
    bufp->fullIData(oldp+34,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_o)),32);
    bufp->fullIData(oldp+35,(vlSelf->SingleCycleCPU__DOT__inst),32);
    bufp->fullBit(oldp+36,(((0x80U > vlSelf->SingleCycleCPU__DOT__pc_o) 
                            & ((IData)(vlSelf->__VdfgTmp_h98940ace__0) 
                               >> 6U))));
    bufp->fullCData(oldp+37,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_o)
                               ? 0U : (7U & ((IData)(vlSelf->__VdfgTmp_h0374c2a2__0) 
                                             >> 4U)))),3);
    bufp->fullCData(oldp+38,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_o)
                               ? 0U : (0x1fU & (vlSelf->__VdfgTmp_h9594e3d4__0 
                                                >> 0xfU)))),5);
    bufp->fullCData(oldp+39,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_o)
                               ? 0U : (0x1fU & (vlSelf->__VdfgTmp_he45b3cba__0 
                                                >> 0x14U)))),5);
    bufp->fullCData(oldp+40,(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg),5);
    bufp->fullCData(oldp+41,(vlSelf->SingleCycleCPU__DOT__ALUOp),2);
    bufp->fullBit(oldp+42,(vlSelf->SingleCycleCPU__DOT__branch));
    bufp->fullBit(oldp+43,(vlSelf->SingleCycleCPU__DOT__memRead));
    bufp->fullBit(oldp+44,(vlSelf->SingleCycleCPU__DOT__memtoReg));
    bufp->fullBit(oldp+45,(vlSelf->SingleCycleCPU__DOT__memWrite));
    bufp->fullBit(oldp+46,(vlSelf->SingleCycleCPU__DOT__ALUSrc));
    bufp->fullBit(oldp+47,(vlSelf->SingleCycleCPU__DOT__regWrite));
    bufp->fullBit(oldp+48,(vlSelf->SingleCycleCPU__DOT__jump));
    bufp->fullBit(oldp+49,(vlSelf->clk));
    bufp->fullBit(oldp+50,(vlSelf->start));
    bufp->fullIData(oldp+51,(vlSelf->t0),32);
    bufp->fullIData(oldp+52,(vlSelf->t1),32);
    bufp->fullIData(oldp+53,(vlSelf->t2),32);
    bufp->fullIData(oldp+54,(vlSelf->t3),32);
    bufp->fullIData(oldp+55,(vlSelf->t4),32);
    bufp->fullIData(oldp+56,(vlSelf->t5),32);
    bufp->fullIData(oldp+57,(vlSelf->t6),32);
    bufp->fullIData(oldp+58,(vlSelf->s0),32);
    bufp->fullIData(oldp+59,(vlSelf->s1),32);
    bufp->fullIData(oldp+60,(vlSelf->s2),32);
    bufp->fullIData(oldp+61,(vlSelf->sp),32);
    bufp->fullIData(oldp+62,(vlSelf->a0),32);
    bufp->fullIData(oldp+63,(vlSelf->a1),32);
    bufp->fullIData(oldp+64,(vlSelf->ra),32);
    bufp->fullIData(oldp+65,(vlSelf->SingleCycleCPU__DOT__pc_i),32);
    bufp->fullIData(oldp+66,(vlSelf->SingleCycleCPU__DOT__pc_aimm),32);
    bufp->fullIData(oldp+67,(vlSelf->SingleCycleCPU__DOT__readData1),32);
    bufp->fullIData(oldp+68,(vlSelf->SingleCycleCPU__DOT__readData2),32);
    bufp->fullIData(oldp+69,(((IData)(vlSelf->SingleCycleCPU__DOT__jump)
                               ? ((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_o)
                               : vlSelf->SingleCycleCPU__DOT__memtoRegWriteData)),32);
    bufp->fullIData(oldp+70,(vlSelf->SingleCycleCPU__DOT__imm),32);
    bufp->fullIData(oldp+71,((vlSelf->SingleCycleCPU__DOT__imm 
                              << 1U)),32);
    bufp->fullIData(oldp+72,(vlSelf->SingleCycleCPU__DOT__alu_s2),32);
    bufp->fullCData(oldp+73,(vlSelf->SingleCycleCPU__DOT__ALUCtl),4);
    bufp->fullBit(oldp+74,((1U == vlSelf->SingleCycleCPU__DOT__ALUOut)));
    bufp->fullIData(oldp+75,(vlSelf->SingleCycleCPU__DOT__ALUOut),32);
    bufp->fullIData(oldp+76,(vlSelf->SingleCycleCPU__DOT__memtoRegWriteData),32);
    bufp->fullIData(oldp+77,(vlSelf->SingleCycleCPU__DOT__readData),32);
    bufp->fullCData(oldp+78,(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode),7);
    bufp->fullBit(oldp+79,(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Mux_PC__sel2));
    bufp->fullIData(oldp+80,(4U),32);
    bufp->fullIData(oldp+81,(0x20U),32);
}
