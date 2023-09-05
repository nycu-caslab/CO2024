module HazardDectionUnit (
    input EXE_memRead,
    input [4:0] EXE_writeReg,
    input [4:0] ID_regRs1,
    input [4:0] ID_regRs2,
    input branchTake,
    output reg PC_write,
    output reg IF_ID_write,
    output reg IF_ID_flush,
    output reg ID_EX_flush
);

always @(*) begin
    
    if(EXE_memRead & ( EXE_writeReg == ID_regRs1 || EXE_writeReg == ID_regRs2)) begin
        // stall
        PC_write = 1'b0;
        IF_ID_write = 1'b0;
        IF_ID_flush = 1'b0;
        ID_EX_flush = 1'b1;
    end
    else if (branchTake) begin
        PC_write = 1'b1;
        IF_ID_write = 1'b0;
        IF_ID_flush = 1'b1;
        ID_EX_flush = 1'b1;
    end
    else begin
        PC_write = 1'b1;
        IF_ID_write = 1'b1;
        IF_ID_flush = 1'b0;
        ID_EX_flush = 1'b0;
    end

end
    
endmodule
