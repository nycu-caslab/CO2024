module ALUCtrl (
    input [1:0] ALUOp,
    input funct7,
    input [2:0] funct3,
    output reg [3:0] ALUCtl
);

`define ADD 4'b0010
`define SUB 4'b0110
`define AND 4'b0000
`define OR  4'b0001
`define SLT 4'b0111

    always @(*) begin
        case (ALUOp)
            2'b00:
                ALUCtl = `ADD;
            2'b01:
                ALUCtl = `SUB;
            2'b10:
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
