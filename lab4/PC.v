module PC (
    input clk,
    input rst,
    input write,
    input [31:0] pc_i,
    output reg [31:0] pc_o
);

initial begin
    pc_o = 0;
end

always @(posedge clk, negedge rst) begin
    if (~rst)
        pc_o <= 0;
    else if(!write)
        pc_o <= pc_o;
    else 
        pc_o <= pc_i;
    
end

endmodule
