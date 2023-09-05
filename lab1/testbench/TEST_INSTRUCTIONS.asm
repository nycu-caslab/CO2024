addi s0, zero, 163
addi sp, sp, -4
sw s0, 0(sp)
add s0, zero, zero
addi t0, zero, 0
slti t1, t0, 7
beq t1, zero, 12
addi t0, t0, 1
beq zero, zero, -12
ori t1, t1, 10
lw s0, 0(sp)
addi sp, sp, 4
addi s1, zero, 5
addi s2, zero, -10
sub t2, s1, s2
and t3, s1, s2
or t4, s1, s2
slt t5, s1, s2
andi t6, s1, 20