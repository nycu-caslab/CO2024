#include <verilated.h>
#include <verilated_vcd_c.h>
#include <stdio.h>
#include <vector>
#include <time.h>
#include <cmath>

using namespace std;

#include "VPC.h"

VerilatedContext* contextp = new VerilatedContext;
VerilatedVcdC *m_trace = new VerilatedVcdC;
VPC *top = new VPC{contextp};

int main(int argc, char **argv){
    
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);

    top->trace(m_trace, 0);
    m_trace->open("waveform.vcd");

    top->clk = 0;
    top->rst = 0;
    int pc = 0;
    for(int i=0; i<1000; ++i){
        if(i != 0)
            top->clk = !top->clk;
        if(i == 2)
            top->rst = 1;
        top->pc_i = top->pc_o + 4;
        top->eval();
        m_trace->dump(contextp->time());
        contextp->timeInc(1);
        // printf("i : %d, rst: %d, clk: %d, pc_i: %d, pc_o: %d\n",i, top->rst, top->clk, top->pc_i, top->pc_o);
        if(top->clk && top->rst){
            assert(top->pc_i == top->pc_o);
        }
    }

    printf("\n");
    printf("============================\n");
    printf("\e[32m\e[1mPASS\e[0m\n");
    printf("============================\n");
    m_trace->dump(contextp->time());
    top->final();
    delete top;
    delete contextp;
    return 0;
}