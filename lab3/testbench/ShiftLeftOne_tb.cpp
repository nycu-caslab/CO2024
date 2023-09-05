#include <verilated.h>
#include <verilated_vcd_c.h>
#include <stdio.h>
#include <vector>
#include <time.h>
#include <cmath>

using namespace std;

#include "VShiftLeftOne.h"

VerilatedContext* contextp = new VerilatedContext;
VerilatedVcdC *m_trace = new VerilatedVcdC;
VShiftLeftOne *top = new VShiftLeftOne{contextp};

void ShiftLeftOneTest(int cycle){
    int input;
    for(int i=0; i<cycle; i++){
        input = pow(-1, rand()) * rand();
        top->i = input;
        top->eval();
        // printf("a: %d, b: %d, sum: %d\n", top->a, top->b, top->sum);
        m_trace->dump(contextp->time());
        contextp->timeInc(1);
        assert(top->o == input << 1);
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

    ShiftLeftOneTest(10000);    
    
    m_trace->dump(contextp->time());
    top->final();
    m_trace->close();
    delete top;
    delete contextp;
    return 0;
}