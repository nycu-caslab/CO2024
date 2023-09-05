module Control (
    input [6:0] opcode,
    output reg branch,
    output reg memRead,
    output reg memtoReg,
    output reg [1:0] ALUOp,
    output reg memWrite,
    output reg ALUSrc,
    output reg regWrite,
    output reg jump
);

always @(opcode) begin
    case (opcode)
        // B-Type: beq
        7'b1100011: begin
            ALUSrc     <= 0;
            memtoReg   <= 1'bx;
            regWrite   <= 0;
            memRead    <= 0;
            memWrite   <= 0;
            branch     <= 1;
            ALUOp      <= 2'b01;
            jump       <= 0;
        end
        // I-Type: lw
        7'b0000011: begin
            ALUSrc     <= 1;
            memtoReg   <= 1;
            regWrite   <= 1;
            memRead    <= 1;
            memWrite   <= 0;
            branch     <= 0;
            ALUOp      <= 2'b00;
            jump       <= 0;
        end
        // S-Type: sw
        7'b0100011: begin
            ALUSrc     <= 1;
            memtoReg   <= 1'bx;
            regWrite   <= 0;
            memRead    <= 0;
            memWrite   <= 1;
            branch     <= 0;
            ALUOp      <= 2'b00;
            jump       <= 0;
        end 
        // I-Type: addi, xori, ori, andi, slli, srli, slti
        7'b0010011: begin
            ALUSrc     <= 1;
            memtoReg   <= 0;
            regWrite   <= 1;
            memRead    <= 0;
            memWrite   <= 0;
            branch     <= 0;
            ALUOp      <= 2'b11;
            jump       <= 0;
        end
        // R-type: add, sub, sll, xor, srl, or, and, slt
        7'b0110011: begin
            ALUSrc     <= 0;
            memtoReg   <= 0;
            regWrite   <= 1;
            memRead    <= 0;
            memWrite   <= 0;
            branch     <= 0;
            ALUOp      <= 2'b10;
            jump       <= 0;
        end
        // jal PC+off
        7'b1101111: begin
            ALUSrc     <= 0;
            memtoReg   <= 0;
            regWrite   <= 1;
            memRead    <= 0;
            memWrite   <= 0;
            branch     <= 0;
            ALUOp      <= 2'b00;
            jump       <= 1;
        end
        // jalr reg+off
        7'b1100111: begin
            ALUSrc     <= 1;
            memtoReg   <= 0;
            regWrite   <= 1;
            memRead    <= 0;
            memWrite   <= 0;
            branch     <= 1;
            ALUOp      <= 2'b11;
            jump       <= 1;
        end
        default: begin
            ALUSrc     <= 1'bx;
            memtoReg   <= 1'bx;
            regWrite   <= 1'bx;
            memRead    <= 1'bx;
            memWrite   <= 1'bx;
            branch     <= 1'bx;
            ALUOp      <= 2'bx;
            jump       <= 0;
        end 
        
    endcase
end

endmodule
