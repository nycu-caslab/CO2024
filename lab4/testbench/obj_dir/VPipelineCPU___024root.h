// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPipelineCPU.h for the primary calling header

#ifndef VERILATED_VPIPELINECPU___024ROOT_H_
#define VERILATED_VPIPELINECPU___024ROOT_H_  // guard

#include "verilated.h"

class VPipelineCPU__Syms;

class VPipelineCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(start,0,0);
        CData/*0:0*/ PipelineCPU__DOT__MEM_memRead;
        CData/*0:0*/ PipelineCPU__DOT__ID_branch;
        CData/*0:0*/ PipelineCPU__DOT__ID_memRead;
        CData/*0:0*/ PipelineCPU__DOT__ID_memtoReg;
        CData/*0:0*/ PipelineCPU__DOT__ID_memWrite;
        CData/*0:0*/ PipelineCPU__DOT__ID_ALUSrc;
        CData/*0:0*/ PipelineCPU__DOT__ID_regWrite;
        CData/*0:0*/ PipelineCPU__DOT__ID_jump;
        CData/*1:0*/ PipelineCPU__DOT__ID_ALUOp;
        CData/*3:0*/ PipelineCPU__DOT__EXE_ALUCtl;
        CData/*0:0*/ PipelineCPU__DOT__IF_ID_write;
        CData/*0:0*/ PipelineCPU__DOT__IF_ID_flush;
        CData/*0:0*/ PipelineCPU__DOT__ID_EX_flush;
        CData/*0:0*/ PipelineCPU__DOT____Vcellinp__hazardDectionUnit__branchTake;
        CData/*1:0*/ PipelineCPU__DOT__forwardA;
        CData/*1:0*/ PipelineCPU__DOT__forwardB;
        CData/*0:0*/ PipelineCPU__DOT____Vcellinp__PC_Mux__sel2;
        CData/*6:0*/ PipelineCPU__DOT____Vcellinp__control__opcode;
        CData/*4:0*/ PipelineCPU__DOT____Vcellout__EXE_MEM_control_reg__o;
        CData/*2:0*/ PipelineCPU__DOT____Vcellout__MEM_WB_control_reg__o;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__dataMemory__DOT__data_memory__v0;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__dataMemory__DOT__data_memory__v0;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__dataMemory__DOT__data_memory__v0;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__dataMemory__DOT__data_memory__v1;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__dataMemory__DOT__data_memory__v1;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__dataMemory__DOT__data_memory__v2;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__dataMemory__DOT__data_memory__v2;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__dataMemory__DOT__data_memory__v3;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__dataMemory__DOT__data_memory__v3;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__dataMemory__DOT__data_memory__v4;
        CData/*4:0*/ __Vdlyvdim0__PipelineCPU__DOT__register__DOT__regs__v0;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__register__DOT__regs__v0;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__register__DOT__regs__v1;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__start;
        CData/*6:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT____Vcellinp__control__opcode;
        CData/*3:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__EXE_ALUCtl;
        CData/*0:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__MEM_memRead;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ PipelineCPU__DOT____Vcellout__ID_EXE_control_reg__o;
        IData/*31:0*/ PipelineCPU__DOT__pc_i;
        IData/*31:0*/ PipelineCPU__DOT__pc_o;
        IData/*31:0*/ PipelineCPU__DOT__ID_imm;
        IData/*31:0*/ PipelineCPU__DOT__ID_inst;
        IData/*31:0*/ PipelineCPU__DOT__EXE_pc_aimm;
        IData/*31:0*/ PipelineCPU__DOT__EXE_ALUOut;
        IData/*31:0*/ PipelineCPU__DOT__MEM_ALUOut;
        IData/*31:0*/ PipelineCPU__DOT__MEM_readData;
        IData/*31:0*/ PipelineCPU__DOT__WB_writeData;
        IData/*31:0*/ PipelineCPU__DOT__EXE_alu_s1;
        IData/*31:0*/ PipelineCPU__DOT__EXE_alu_s2;
        IData/*31:0*/ PipelineCPU__DOT__EXE_alus2_imm;
        VlWide<3>/*95:0*/ PipelineCPU__DOT____Vcellout__IF_ID_reg__o;
        VlWide<6>/*191:0*/ PipelineCPU__DOT____Vcellout__ID_EXE_reg__o;
        VlWide<4>/*127:0*/ PipelineCPU__DOT____Vcellout__EXE_MEM_reg__o;
        VlWide<4>/*127:0*/ PipelineCPU__DOT____Vcellout__MEM_WB_reg__o;
        VlWide<4>/*127:0*/ PipelineCPU__DOT____Vcellinp__MEM_WB_reg__i;
        VlWide<3>/*95:0*/ __Vdly__PipelineCPU__DOT____Vcellout__IF_ID_reg__o;
        IData/*31:0*/ __Vdlyvval__PipelineCPU__DOT__register__DOT__regs__v0;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__ID_inst;
    };
    struct {
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__EXE_alu_s1;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__EXE_alus2_imm;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__MEM_ALUOut;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(r[32],31,0);
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__inst_mem__DOT__insts;
        VlUnpacked<IData/*31:0*/, 32> PipelineCPU__DOT__register__DOT__regs;
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__dataMemory__DOT__data_memory;
        VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<7> __VactTriggered;
    VlTriggerVec<7> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPipelineCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPipelineCPU___024root(VPipelineCPU__Syms* symsp, const char* v__name);
    ~VPipelineCPU___024root();
    VL_UNCOPYABLE(VPipelineCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
