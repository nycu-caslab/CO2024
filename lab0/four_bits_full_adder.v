module four_bits_full_adder(cin, a, b, s, cout);
    input cin;
    input signed [3:0] a;
    input signed [3:0] b;
    output wire signed [3:0] s;
    output wire cout;

    wire signed [3:0] bin;
    wire [4:0] c;
    assign c[0] = cin;
    assign cout = c[4];

    assign bin = cin ? ~b : b;

    // always @ (cin)begin
    //     if(cin==0)
    //         bin = b;
    //     else begin
    //         bin = ~b;
    //     end
    // end

    genvar idx;
    generate
        for (idx=0; idx<4; idx=idx+1) begin : generate_FA
            fullAdder FA(.cin(c[idx]), .a(a[idx]), .b(bin[idx]), .s(s[idx]), .cout(c[idx+1]));
        end
    endgenerate
endmodule