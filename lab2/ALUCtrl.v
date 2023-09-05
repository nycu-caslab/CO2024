module ALUCtrl (
    input [1:0] ALUOp,
    input funct7,
    input [2:0] funct3,
    output reg [3:0] ALUCtl
);

`define AND 4'b0000
`define OR  4'b0001
`define ADD 4'b0010
`define SUB 4'b0110
`define SLT 4'b0111

`define BEQ 4'b1000
`define BNE 4'b1001
`define BLT 4'b0111
`define BGE 4'b1011

    always @(*) begin
        case (ALUOp)
            2'b00:
                ALUCtl = `ADD;
            2'b01:
                // case beq bne blt bge
                case (funct3)
                    //beq
                    3'b000:
                        ALUCtl = `BEQ;
                    3'b001:
                        ALUCtl = `BNE;
                    3'b100:
                        ALUCtl = `BLT;
                    3'b101:
                        ALUCtl = `BGE;
                    default:
                        ALUCtl = 4'bx;
                endcase
            2'b10:
            // R-type
                case (funct3)
                    3'b000:
                        ALUCtl = (funct7)?`SUB: `ADD;
                    3'b111:
                        ALUCtl = `AND;
                    3'b110:
                        ALUCtl = `OR;
                    3'b010:
                        ALUCtl = `SLT;
                    default: 
                        ALUCtl = 4'bx;
                    endcase
            2'b11:
            // I-type
                case (funct3)
                    3'b000:
                        ALUCtl = `ADD;
                    3'b111:
                        ALUCtl = `AND;
                    3'b110:
                        ALUCtl = `OR;
                    3'b010:
                        ALUCtl = `SLT;
                    default: 
                        ALUCtl = 4'bx;
                    endcase
            default:
                ALUCtl = 4'bx; 
        endcase
    end
    
endmodule

