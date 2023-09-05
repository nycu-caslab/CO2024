#include <verilated.h>
#include <verilated_vcd_c.h>
#include <stdio.h>
#include <vector>
#include <time.h>
#include <cmath>
#include <iostream>

using namespace std;

#include "VSingleCycleCPU.h"

VerilatedContext* contextp = new VerilatedContext;
VerilatedVcdC *m_trace = new VerilatedVcdC;
VSingleCycleCPU *top = new VSingleCycleCPU{contextp};

void SingleCycleCPUTest(int cycle){
    top->clk = 0;
    top->start = 1;
    top->eval();
    m_trace->dump(contextp->time());
    contextp->timeInc(1);

    top->clk = 1;
    top->start = 0;
    top->eval();
    m_trace->dump(contextp->time());
    contextp->timeInc(1);

    top->clk = 0;
    top->start = 1;
    top->eval();
    m_trace->dump(contextp->time());
    contextp->timeInc(1);
    

    top->clk = 1;
    top->start = 1;
    top->eval();
    m_trace->dump(contextp->time());
    contextp->timeInc(1);

    for(int i=0; i<cycle; ++i){
        top->clk = !top->clk;
        top->eval();

        m_trace->dump(contextp->time());
        contextp->timeInc(1);
    }
}

int main(int argc, char **argv){
    // srand(1111);
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);

    top->trace(m_trace, 0);
    m_trace->open("waveform.vcd");


    SingleCycleCPUTest(50);
    assert(top->ra == 0x18);
    assert(top->t0 == 0xa);
    assert(top->t1 == 0x3d);
    assert(top->t2 == 0x0);
    assert(top->s0 == 0x17);
    assert(top->s1 == 0x54);
    assert(top->a0 == 0x7a);
    assert(top->a1 == 0x4d);
    assert(top->s2 == 0x3d);
    assert(top->t3 == 0xA8);
    assert(top->t4 == 0x698);
    assert(top->t5 == 0x0);
    assert(top->t6 == 0x0);
    assert(top->sp == 0x80);
    
    printf("============================\n");
    printf("\e[32m\e[1mPASS\e[0m\n");
    printf("============================\n");

    m_trace->dump(contextp->time());
    top->final();
    m_trace->close();
    delete top;
    delete contextp;
    return 0;

}
