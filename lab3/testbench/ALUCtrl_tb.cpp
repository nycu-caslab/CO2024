#include <verilated.h>
#include <verilated_vcd_c.h>
#include <stdio.h>
#include <vector>
#include <time.h>
#include <cmath>

using namespace std;

#include "VALUCtrl.h"

VerilatedContext* contextp = new VerilatedContext;
VerilatedVcdC *m_trace = new VerilatedVcdC;
VALUCtrl *top = new VALUCtrl{contextp};
// vector<int> ALUctls = {4b0010, 4b0110, 4b0000, 4b0001};
vector<int> ALUops = {0b00, 0b01, 0b10};
vector<int> func3 = {0b000, 0b111, 0b110};

void ALUCtrlTest(int cycle){
    int tmpALUop, tmpFunc3, tmpFunc7;
    for(int i=0; i<cycle; i++){
        tmpALUop = ALUops[rand()%(ALUops.size())];
        tmpFunc3 = func3[rand()%(func3.size())];
        tmpFunc7 = rand() % 2;
        top->ALUOp = tmpALUop;
        top->funct3 = tmpFunc3;
        top->funct7 = tmpFunc7;
        top->eval();
        // printf("a: %d, b: %d, sum: %d\n", top->a, top->b, top->sum);
        m_trace->dump(contextp->time());
        contextp->timeInc(1);
        switch(tmpALUop){
            case 0b00:
                assert(top->ALUCtl == 0b0010);
                break;
            case 0b01:
                assert(top->ALUCtl == 0b0110);
                break;
            case 0b10:
                if(tmpFunc7 == 0b1){
                    assert(top->ALUCtl == 0b0110);
                    break;
                }
                else{
                    switch (tmpFunc3){
                        case 0b000:
                            assert(top->ALUCtl == 0b0010);
                            break;
                        case 0b111:
                            assert(top->ALUCtl == 0b0000);
                            break;
                        case 0b110:
                            assert(top->ALUCtl == 0b0001);
                            break;
                        default:
                            printf("func3 default\n");
                            break;
                    }
                }
        }
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

    ALUCtrlTest(1000);    
    
    m_trace->dump(contextp->time());
    top->final();
    m_trace->close();
    delete top;
    delete contextp;
    return 0;
}