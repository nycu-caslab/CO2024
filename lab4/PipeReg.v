module PipeReg #(
    size = 1
) (
    input clk,
    input rst,
    input write,
    input flush,
    input [size-1:0] i,
    output reg [size-1:0] o 
);

always @(posedge clk) begin
    /* verilator lint_off SYNCASYNCNET */
    if(~rst) 
        o <= 0;
    else if(flush)
        o <= 0;
    else if(!write)
        o <= o;
    else
        o <= i;
end
    
endmodule
