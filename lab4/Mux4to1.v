module Mux4to1 #(
    parameter size = 32
) 
(
    input sel1,
    input sel2,
    input signed [size-1:0] s0,
    input signed [size-1:0] s1,
    input signed [size-1:0] s2,
    input signed [size-1:0] s3,
    output signed [size-1:0] out
);
    assign out = (sel1) ? ((sel2 ? s3 : s2)) : ((sel2 ? s1 : s0));
endmodule
