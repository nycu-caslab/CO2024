module ForwardingUnit (
    input MEM_regWrite,
    input WB_regWrite,
    input [4:0] MEM_writeReg,
    input [4:0] WB_writeReg,
    input [4:0] EXE_regRs1, 
    input [4:0] EXE_regRs2, 
    output reg [1:0] forwardA,
    output reg [1:0] forwardB
);

always @(*) begin
    if(MEM_regWrite & (MEM_writeReg != 0) & (MEM_writeReg == EXE_regRs1 ))
        forwardA = 2'b10;
    else if(WB_regWrite & (WB_writeReg != 0) & WB_writeReg == EXE_regRs1)
        forwardA = 2'b01;
    else
        forwardA = 2'b00;

    if(MEM_regWrite & (MEM_writeReg != 0) & (MEM_writeReg == EXE_regRs2 ))
        forwardB = 2'b10;
    else if(WB_regWrite & (WB_writeReg != 0) & WB_writeReg == EXE_regRs2)
        forwardB = 2'b01;
    else
        forwardB = 2'b00;
end
endmodule
