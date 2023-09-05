module ALU (
    input [3:0] ALUctl,
    input signed [31:0] A,B,
    output reg signed [31:0] ALUOut,
    output zero
);

    assign zero = (ALUOut == 0);
    always @(ALUctl, A, B) begin
        case (ALUctl)
            0: ALUOut <= A & B;
            1: ALUOut <= A | B;
            2: ALUOut <= A + B;
            6: ALUOut <= A - B;
            7: ALUOut <= (A < B)? 1 : 0;
            12: ALUOut <= ~(A | B);
            // `slt: ALUOut <= (A < B)? 1: 0;
            default: ALUOut <= 0; 
        endcase
    end
endmodule
