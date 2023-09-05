// module alu(a, b, s, y);
//     input signed [3:0] a;  
//     input signed [3:0] b;  
//     input [2:0] s; 
//     output reg signed [3:0] y;  
module alu(input signed [3:0] a, input signed [3:0] b, input [2:0] s, output reg signed [3:0] y); 
    wire x;
    reg zero;
    // reg [3:0] a1;
    // reg [3:0] b1;
    wire [3:0] y1; 
    // wire [3:0] y2; 
    four_bits_full_adder ADD(.cin(zero), .a(a), .b(b), .s(y1), .cout(x));
    // four_bits_full_suber SUB(.cin(one), .a(a), .b(b), .s(y2), .cout(x));
    always @ (*)begin
        case (s)
        0: begin
            zero = 0;
            y = y1;
        end
        1: begin
            zero = 1;
            y = y1;
        end
        2: y = ~a;
        3: y = a & b;
        4: y = a | b;
        5: y = a ^ b;
        6: 
            begin
                if(a > b)
                    y = 1;
                else
                    y = 0;
            end
        7:
            begin
                if(a == b)
                    y = 1;
                else
                    y = 0;
            end
        default: y = 0;
        endcase
    end
endmodule

