addi s0, zero, 23
addi s1, zero, 84
addi s2, zero, 61
addi a0, zero, 35
addi a1, zero, 77
jal ra, branchTest
blt s0, s1, bltTest
branchTest:
    addi t0, zero, 10
    add a0, a0, a1
    add a0, a0, t0
    jalr zero, ra, 0
bltTest:
    blt s0, s1, bneTest
    addi t2, zero, 888
bneTest:
    sub t1, s1, s0
    bne t1, s2, final
    addi t3, zero, 168
    bne t3, s2, final
    addi t3, zero, 168
final:
    addi t4, zero, 1688