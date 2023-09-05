// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleCPU__Syms.h"


void VSingleCycleCPU___024root__trace_chg_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSingleCycleCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_top_0\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSingleCycleCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VSingleCycleCPU___024root__trace_chg_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->SingleCycleCPU__DOT__pc_o),32);
        bufp->chgIData(oldp+1,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_o)),32);
        bufp->chgBit(oldp+2,(((0x80U > vlSelf->SingleCycleCPU__DOT__pc_o) 
                              & ((IData)(vlSelf->__VdfgTmp_h98940ace__0) 
                                 >> 6U))));
        bufp->chgCData(oldp+3,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_o)
                                 ? 0U : (7U & ((IData)(vlSelf->__VdfgTmp_h0374c2a2__0) 
                                               >> 4U)))),3);
        bufp->chgCData(oldp+4,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_o)
                                 ? 0U : (0x1fU & (vlSelf->__VdfgTmp_h9594e3d4__0 
                                                  >> 0xfU)))),5);
        bufp->chgCData(oldp+5,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_o)
                                 ? 0U : (0x1fU & (vlSelf->__VdfgTmp_he45b3cba__0 
                                                  >> 0x14U)))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+6,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+7,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+8,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+9,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+10,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+11,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+12,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+13,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+14,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+15,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+16,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+17,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+18,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+19,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+20,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+21,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+22,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+23,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+24,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+25,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+26,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+27,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+28,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+29,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+30,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+31,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+32,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+33,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+34,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+35,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+36,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+37,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+38,(vlSelf->SingleCycleCPU__DOT__ALUOp),2);
        bufp->chgBit(oldp+39,(vlSelf->SingleCycleCPU__DOT__branch));
        bufp->chgBit(oldp+40,(vlSelf->SingleCycleCPU__DOT__memRead));
        bufp->chgBit(oldp+41,(vlSelf->SingleCycleCPU__DOT__memtoReg));
        bufp->chgBit(oldp+42,(vlSelf->SingleCycleCPU__DOT__memWrite));
        bufp->chgBit(oldp+43,(vlSelf->SingleCycleCPU__DOT__ALUSrc));
        bufp->chgBit(oldp+44,(vlSelf->SingleCycleCPU__DOT__regWrite));
    }
    bufp->chgBit(oldp+45,(vlSelf->clk));
    bufp->chgBit(oldp+46,(vlSelf->start));
    bufp->chgIData(oldp+47,(vlSelf->t0),32);
    bufp->chgIData(oldp+48,(vlSelf->t1),32);
    bufp->chgIData(oldp+49,(vlSelf->t2),32);
    bufp->chgIData(oldp+50,(vlSelf->t3),32);
    bufp->chgIData(oldp+51,(vlSelf->t4),32);
    bufp->chgIData(oldp+52,(vlSelf->t5),32);
    bufp->chgIData(oldp+53,(vlSelf->t6),32);
    bufp->chgIData(oldp+54,(vlSelf->s0),32);
    bufp->chgIData(oldp+55,(vlSelf->s1),32);
    bufp->chgIData(oldp+56,(vlSelf->s2),32);
    bufp->chgIData(oldp+57,(vlSelf->sp),32);
    bufp->chgIData(oldp+58,((((IData)(vlSelf->SingleCycleCPU__DOT__branch) 
                              & (0U == vlSelf->SingleCycleCPU__DOT__ALUOut))
                              ? (vlSelf->SingleCycleCPU__DOT__pc_o 
                                 + (vlSelf->SingleCycleCPU__DOT__imm 
                                    << 1U)) : ((IData)(4U) 
                                               + vlSelf->SingleCycleCPU__DOT__pc_o))),32);
    bufp->chgIData(oldp+59,((vlSelf->SingleCycleCPU__DOT__pc_o 
                             + (vlSelf->SingleCycleCPU__DOT__imm 
                                << 1U))),32);
    bufp->chgIData(oldp+60,(vlSelf->SingleCycleCPU__DOT__inst),32);
    bufp->chgIData(oldp+61,(vlSelf->SingleCycleCPU__DOT__readData1),32);
    bufp->chgIData(oldp+62,(vlSelf->SingleCycleCPU__DOT__readData2),32);
    bufp->chgIData(oldp+63,(vlSelf->SingleCycleCPU__DOT__writeData),32);
    bufp->chgIData(oldp+64,(vlSelf->SingleCycleCPU__DOT__imm),32);
    bufp->chgIData(oldp+65,((vlSelf->SingleCycleCPU__DOT__imm 
                             << 1U)),32);
    bufp->chgIData(oldp+66,(vlSelf->SingleCycleCPU__DOT__alu_s2),32);
    bufp->chgCData(oldp+67,(vlSelf->SingleCycleCPU__DOT__ALUCtl),4);
    bufp->chgBit(oldp+68,((0U == vlSelf->SingleCycleCPU__DOT__ALUOut)));
    bufp->chgIData(oldp+69,(vlSelf->SingleCycleCPU__DOT__ALUOut),32);
    bufp->chgIData(oldp+70,(vlSelf->SingleCycleCPU__DOT__readData),32);
    bufp->chgCData(oldp+71,(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode),7);
    bufp->chgBit(oldp+72,(((IData)(vlSelf->SingleCycleCPU__DOT__branch) 
                           & (0U == vlSelf->SingleCycleCPU__DOT__ALUOut))));
    bufp->chgCData(oldp+73,(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg),5);
}

void VSingleCycleCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_cleanup\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
