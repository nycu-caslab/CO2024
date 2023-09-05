module PipeReg #(
    size = 1
) (
    input clk,
    input rst,
    input [size-1:0] i,
    output reg [size-1:0] o 
);

always @(posedge clk) begin
    /* verilator lint_off SYNCASYNCNET */
    if(~rst) begin
        o <= 0;
    end
    else
        o <= i;
end
    
endmodule
