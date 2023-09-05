module PipelineCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);



// wire [31:0] pc_i, pc_o, pc_a4, pc_aimm;
// wire [31:0] inst;
// wire [1:0] ALUOp;
// wire branch, memRead, memtoReg, memWrite, ALUSrc, regWrite, jump;
// wire [31:0] readData1, readData2, writeData, imm, imm_sl, alu_s2;
// wire [3:0] ALUCtl;
// wire condition;
// wire [31:0] ALUOut, memtoRegWriteData;
// wire [31:0] readData;


// IF wire
wire [31:0] pc_i, pc_o, pc_a4;
wire [31:0] IF_inst;

// ID wire
wire [31:0] ID_pc, ID_readData1, ID_readData2, ID_imm, ID_inst, ID_pc_a4;
wire ID_branch, ID_memRead, ID_memtoReg, ID_memWrite, ID_ALUSrc, ID_regWrite, ID_jump;
wire [1:0] ID_ALUOp;

// EX wire
wire [31:0] EXE_pc, EXE_readData1, EXE_readData2, EXE_imm, EXE_inst, EXE_pc_a4;
wire EXE_branch, EXE_memRead, EXE_memtoReg, EXE_memWrite, EXE_ALUSrc, EXE_regWrite, EXE_jump;
wire [1:0] EXE_ALUOp;

wire [31:0] EXE_imm_sl, EXE_pc_aimm, EXE_ALUOut;
wire [3:0] EXE_ALUCtl;
wire EXE_condition;

// MEM wire
wire [31:0] MEM_ALUOut, MEM_inst, MEM_pc_a4;
wire MEM_memRead, MEM_memtoReg, MEM_memWrite, MEM_regWrite, MEM_jump;

wire [31:0] MEM_readData;

// WB wire
wire WB_regWrite, WB_memtoReg, WB_jump;

/* verilator lint_off UNUSEDSIGNAL */ 
wire [31:0] WB_readData, WB_ALUOut, WB_inst, WB_pc_a4, WB_writeData;


// Hazard, forward control wire
wire PC_write, IF_ID_write, IF_ID_flush, ID_EX_flush;
wire [31:0] EXE_alu_s1, EXE_alu_s2, EXE_alus2_imm;

HazardDectionUnit hazardDectionUnit(
    .EXE_memRead(EXE_memRead),
    .EXE_writeReg(EXE_inst[11:7]),
    .ID_regRs1(ID_inst[19:15]),
    .ID_regRs2(ID_inst[24:20]),
    .branchTake(EXE_jump | (EXE_condition & EXE_branch)),
    .PC_write(PC_write),
    .IF_ID_write(IF_ID_write),
    .IF_ID_flush(IF_ID_flush),
    .ID_EX_flush(ID_EX_flush)
);

wire [1:0] forwardA, forwardB;

ForwardingUnit forwardingUnit(
    .MEM_regWrite(MEM_regWrite),
    .WB_regWrite(WB_regWrite),
    .MEM_writeReg(MEM_inst[11:7]),
    .WB_writeReg(WB_inst[11:7]),
    .EXE_regRs1(EXE_inst[19:15]), 
    .EXE_regRs2(EXE_inst[24:20]), 
    .forwardA(forwardA),
    .forwardB(forwardB)
);



/**** IF Stage ****/

Mux4to1 #(.size(32)) PC_Mux(
    .sel1(EXE_jump),
    .sel2(((~EXE_jump)&EXE_branch&EXE_condition)|(EXE_jump&EXE_branch)),
    .s0(pc_a4),
    .s1(EXE_pc_aimm),
    .s2(EXE_pc_aimm),
    .s3(EXE_ALUOut),
    .out(pc_i)
);

PC pc(
    .clk(clk),
    .rst(start),
    .write(PC_write),
    .pc_i(pc_i),
    .pc_o(pc_o)
);

Adder pc_add(
    .a(pc_o),
    .b(32'd4),
    .sum(pc_a4)
);

InstructionMemory inst_mem(
    .readAddr(pc_o),
    .inst(IF_inst)
);

PipeReg #(.size(96)) IF_ID_reg(
    .clk(clk),
    .rst(start),
    .write(IF_ID_write),
    .flush(IF_ID_flush),
    .i({pc_o, IF_inst, pc_a4}),
    .o({ID_pc, ID_inst, ID_pc_a4})
);

/**** ID Stage ****/

Control control(
    .opcode(ID_inst[6:0]),
    .branch(ID_branch),
    .memRead(ID_memRead),
    .memtoReg(ID_memtoReg),
    .ALUOp(ID_ALUOp),
    .memWrite(ID_memWrite),
    .ALUSrc(ID_ALUSrc),
    .regWrite(ID_regWrite),
    .jump(ID_jump)
);

Register register(
    .clk(clk),
    .rst(start),
    .regWrite(WB_regWrite),
    .readReg1(ID_inst[19:15]),
    .readReg2(ID_inst[24:20]),
    .writeReg(WB_inst[11:7]),
    .writeData(WB_writeData),
    .readData1(ID_readData1),
    .readData2(ID_readData2)
);

assign r = register.regs;

ImmGen immGen(
    .inst(ID_inst),
    .imm(ID_imm)
);

PipeReg #(.size(9)) ID_EXE_control_reg(
    .clk(clk),
    .rst(start),
    .write(1),
    .flush(ID_EX_flush),
    .i({ID_branch, ID_memRead, ID_memtoReg, ID_ALUOp, ID_memWrite, ID_ALUSrc, ID_regWrite, ID_jump}),
    .o({EXE_branch, EXE_memRead, EXE_memtoReg, EXE_ALUOp, EXE_memWrite, EXE_ALUSrc, EXE_regWrite, EXE_jump})
);

PipeReg #(.size(192)) ID_EXE_reg(
    .clk(clk),
    .rst(start),
    .write(1),
    .flush(ID_EX_flush),
    .i({ID_pc, ID_readData1, ID_readData2, ID_imm, ID_inst, ID_pc_a4}),
    .o({EXE_pc, EXE_readData1, EXE_readData2, EXE_imm, EXE_inst, EXE_pc_a4})
);

/**** EXE Stage ****/

ShiftLeftOne shiftLeftOne(
    .i(EXE_imm),
    .o(EXE_imm_sl)
);

Adder adder_pc_aimm(
    .a(EXE_pc),
    .b(EXE_imm_sl),
    .sum(EXE_pc_aimm)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(EXE_ALUOp),
    .funct7(EXE_inst[30]),
    .funct3(EXE_inst[14:12]),
    .ALUCtl(EXE_ALUCtl)
);



Mux4to1 #(.size(32)) mux_alu1(
    .sel1(forwardA[1]),
    .sel2(forwardA[0]),
    .s0(EXE_readData1),
    .s1(WB_writeData),
    .s2(MEM_ALUOut),
    .s3(0),
    .out(EXE_alu_s1)
);

Mux4to1 #(.size(32)) mux_alu2(
    .sel1(forwardB[1]),
    .sel2(forwardB[0]),
    .s0(EXE_readData2),
    .s1(WB_writeData),
    .s2(MEM_ALUOut),
    .s3(0),
    .out(EXE_alu_s2)
);

Mux2to1 #(.size(32)) mux_alu_src(
    .sel(EXE_ALUSrc),
    .s0(EXE_alu_s2),
    .s1(EXE_imm),
    .out(EXE_alus2_imm)
);


ALU alu(
    .ALUctl(EXE_ALUCtl),
    .A(EXE_alu_s1),
    .B(EXE_alus2_imm),
    .ALUOut(EXE_ALUOut),
    .condition(EXE_condition)
);

PipeReg #(.size(5)) EXE_MEM_control_reg(
    .clk(clk),
    .rst(start),
    .write(1),
    .flush(0),
    .i({EXE_memRead, EXE_memtoReg, EXE_memWrite, EXE_regWrite, EXE_jump}),
    .o({MEM_memRead, MEM_memtoReg, MEM_memWrite, MEM_regWrite, MEM_jump})
);

wire [31:0] MEM_alu_s2;

PipeReg #(.size(128)) EXE_MEM_reg(
    .clk(clk),
    .rst(start),
    .write(1),
    .flush(0),
    .i({EXE_ALUOut, EXE_alu_s2, EXE_inst, EXE_pc_a4}),
    .o({MEM_ALUOut, MEM_alu_s2, MEM_inst, MEM_pc_a4})
);

/**** MEM Stage ****/

DataMemory dataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(MEM_memWrite),
    .memRead(MEM_memRead),
    .address(MEM_ALUOut),
    .writeData(MEM_alu_s2),
    .readData(MEM_readData)
);

PipeReg #(.size(3)) MEM_WB_control_reg(
    .clk(clk),
    .rst(start),
    .write(1),
    .flush(0),
    .i({MEM_regWrite, MEM_memtoReg, MEM_jump}),
    .o({WB_regWrite, WB_memtoReg, WB_jump})
);

PipeReg #(.size(128)) MEM_WB_reg(
    .clk(clk),
    .rst(start),
    .write(1),
    .flush(0),
    .i({MEM_readData, MEM_ALUOut, MEM_inst, MEM_pc_a4}),
    .o({WB_readData, WB_ALUOut, WB_inst, WB_pc_a4})
);

/**** WB Stage ****/

Mux4to1 #(.size(32)) mux_writeData(
    .sel1(WB_jump),
    .sel2(WB_memtoReg),
    .s0(WB_ALUOut),
    .s1(WB_readData),
    .s2(WB_pc_a4),
    .s3(WB_pc_a4),
    .out(WB_writeData)
);

endmodule
