module SingleCycleCPU (
    input clk,
    input start,
    output signed [31:0] t0,
    output signed [31:0] t1,
    output signed [31:0] t2,
    output signed [31:0] t3,
    output signed [31:0] t4,
    output signed [31:0] t5,
    output signed [31:0] t6,
    output signed [31:0] s0,
    output signed [31:0] s1,
    output signed [31:0] s2,
    output signed [31:0] sp
);

wire [31:0] pc_i, pc_o, pc_a4, pc_aimm;
wire [31:0] inst;

wire [1:0] ALUOp;
wire branch, memRead, memtoReg, memWrite, ALUSrc, regWrite;

wire [31:0] readData1, readData2, writeData, imm, imm_sl, alu_s2;
wire [3:0] ALUCtl;
wire zero;

wire [31:0] ALUOut;
wire [31:0] readData;

PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(pc_i),
    .pc_o(pc_o)
);

Adder m_Adder_1(
    .a(pc_o),
    .b(32'd4),
    .sum(pc_a4)
);

InstructionMemory m_InstMem(
    .readAddr(pc_o),
    .inst(inst)
);

Control m_Control(
    .opcode(inst[6:0]),
    .branch(branch),
    .memRead(memRead),
    .memtoReg(memtoReg),
    .ALUOp(ALUOp),
    .memWrite(memWrite),
    .ALUSrc(ALUSrc),
    .regWrite(regWrite)
);

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(regWrite),
    .readReg1(inst[19:15]),
    .readReg2(inst[24:20]),
    .writeReg(inst[11:7]),
    .writeData(writeData),
    .readData1(readData1),
    .readData2(readData2)
);

assign t0 = m_Register.regs[5];
assign t1 = m_Register.regs[6];
assign t2 = m_Register.regs[7];
assign s0 = m_Register.regs[8];
assign s1 = m_Register.regs[9];
assign s2 = m_Register.regs[18];
assign t3 = m_Register.regs[28];
assign t4 = m_Register.regs[29];
assign t5 = m_Register.regs[30];
assign t6 = m_Register.regs[31];
assign sp = m_Register.regs[2];

ImmGen m_ImmGen(
    .inst(inst),
    .imm(imm)
);

ShiftLeftOne m_ShiftLeftOne(
    .i(imm),
    .o(imm_sl)
);

Adder m_Adder_2(
    .a(pc_o),
    .b(imm_sl),
    .sum(pc_aimm)
);

Mux2to1 #(.size(32)) m_Mux_PC(
    .sel(zero & branch),
    .s0(pc_a4),
    .s1(pc_aimm),
    .out(pc_i)
);

Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(ALUSrc),
    .s0(readData2),
    .s1(imm),
    .out(alu_s2)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(ALUOp),
    .funct7(inst[30]),
    .funct3(inst[14:12]),
    .ALUCtl(ALUCtl)
);

ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(readData1),
    .B(alu_s2),
    .ALUOut(ALUOut),
    .zero(zero)
);

DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(memWrite),
    .memRead(memRead),
    .address(ALUOut),
    .writeData(readData2),
    .readData(readData)
);

Mux2to1 #(.size(32)) m_Mux_WriteData(
    .sel(memtoReg),
    .s0(ALUOut),
    .s1(readData),
    .out(writeData)
);

endmodule
