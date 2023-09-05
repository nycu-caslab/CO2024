#include <verilated.h>
#include <verilated_vcd_c.h>
#include <stdio.h>
#include <vector>
#include <time.h>
#include <cmath>

using namespace std;

#include "VALU.h"

VerilatedContext* contextp = new VerilatedContext;
VerilatedVcdC *m_trace = new VerilatedVcdC;
VALU *top = new VALU{contextp};
vector<int> ALUctls = {0,1,2,6,7,8,9,11,12};

int getALUOut(int ALUctl, int A, int B){
    switch (ALUctl)
    {
    case 0:
        return A & B;
        break;
    case 1:
        return A | B;
        break;
    case 2:
        return A + B;
        break;
    case 6:
        return A - B;
        break;
    case 7:
        return A < B ? 1 : 0;
        break;
    case 8:
        return A == B ? 1 : 0;
        break;
    case 9:
        return A != B ? 1 : 0;
        break;
    case 10:
        return A < B ? 1 : 0;
        break;
    case 11:
        return A > B ? 1 : 0;
        break;
    case 12:
        return ~(A | B);
        break;
    default:
        return 0;
        break;
    }
}

void ALUTest(int cycle){
    int tmpA, tmpB;
    for(int i=0; i<cycle; i++){
        tmpA = pow(-1, rand()) * rand();
        tmpB = pow(-1, rand()) * rand();
        top->A = tmpA;
        top->B = tmpB;
        int ALUOp = ALUctls[rand()%ALUctls.size()];
        top->ALUctl = ALUOp;
        top->eval();
        int ALUOut = getALUOut(ALUOp, tmpA, tmpB);
        // if(top->ALUOut != ALUOut){
        //     printf("ERROR: ALUclt=%d, A=%d, B=%d, ALUOut=%d, Expected=%d\n",
        //             top->ALUctl, top->A, top->B, top->ALUOut, ALUOut);
        // }

        m_trace->dump(contextp->time());
        contextp->timeInc(1);
        assert(top->ALUOut == ALUOut);
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

    ALUTest(1000);    
    
    m_trace->dump(contextp->time());
    top->final();
    m_trace->close();
    delete top;
    delete contextp;
    return 0;
}

