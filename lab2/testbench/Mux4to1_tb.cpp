#include <verilated.h>
#include <verilated_vcd_c.h>
#include <stdio.h>
#include <vector>
#include <time.h>
#include <cmath>

using namespace std;

#include "VMux4to1.h"

VerilatedContext* contextp = new VerilatedContext;
VerilatedVcdC *m_trace = new VerilatedVcdC;
VMux4to1 *top = new VMux4to1{contextp};

void muxTest(int cycle){
    int tmps1, tmps2, tmps3, tmps4, tmpsel1, tmpsel2;
    for(int i=0; i<cycle; i++){
        tmps1 = pow(-1, rand()) * rand();
        tmps2 = pow(-1, rand()) * rand();
        tmps3 = pow(-1, rand()) * rand();
        tmps4 = pow(-1, rand()) * rand();
        tmpsel1 = rand() % 2;
        tmpsel2 = rand() % 2;
        top->s0 = tmps1;
        top->s1 = tmps2;
        top->s2 = tmps3;
        top->s3 = tmps4;
        top->sel1 = tmpsel1;
        top->sel2 = tmpsel2;
        top->eval();
        // printf("a: %d, b: %d, sum: %d\n", top->a, top->b, top->sum);
        m_trace->dump(contextp->time());
        contextp->timeInc(1);
        assert(top->out == tmpsel1 ? (tmps2 ? tmps4 : tmps3) : (tmps2 ? tmps2 : tmps1));
    }
    printf("\n");
    printf("============================\n");
    printf("\e[32m\e[1mPASS\e[0m\n");
    printf("============================\n");
}

int main(int argc, char **argv){
    srand(1111);

    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);

    top->trace(m_trace, 0);
    m_trace->open("waveform.vcd");

    muxTest(10000);    
    
    m_trace->dump(contextp->time());
    top->final();
    m_trace->close();
    delete top;
    delete contextp;
    return 0;
}