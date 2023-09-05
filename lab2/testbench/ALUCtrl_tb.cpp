#include <verilated.h>
#include <verilated_vcd_c.h>
#include <stdio.h>
#include <vector>
#include <time.h>
#include <cmath>
#include <iostream>

using namespace std;

#include "VALUCtrl.h"

VerilatedContext* contextp = new VerilatedContext;
VerilatedVcdC *m_trace = new VerilatedVcdC;
VALUCtrl *top = new VALUCtrl{contextp};
// vector<int> ALUctls = {4b0010, 4b0110, 4b0000, 4b0001};
vector<int> ALUops = {0b00, 0b01, 0b10, 0b11};
vector<int> func3_01 = {0b000, 0b001, 0b100, 0b101};
vector<int> func3_10_11 = {0b000, 0b111, 0b110, 0b010};

void ALUCtrlTest(int cycle){
    int tmpALUop, tmpFunc3, tmpFunc7;
    for(int i=0; i<cycle; i++){
        tmpALUop = ALUops[rand()%(ALUops.size())];
        if(tmpALUop == 0b01)
            tmpFunc3 = func3_01[rand()%(func3_01.size())];
        else
            tmpFunc3 = func3_10_11[rand()%(func3_10_11.size())];
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
                // assert(top->ALUCtl == 0b0110);
                switch (tmpFunc3)
                {
                case 0b000:
                    assert(top->ALUCtl == 0b1000);
                    break;
                case 0b001:
                    assert(top->ALUCtl == 0b1001);
                    break;
                case 0b100:
                    assert(top->ALUCtl == 0b0111);
                    break;
                case 0b101:
                    assert(top->ALUCtl == 0b1011);
                    break;
                default:
                    break;
                }
                break;
            case 0b10:
                switch (tmpFunc3){
                    case 0b000:
                        assert(top->ALUCtl == (tmpFunc7 ? 0b0110 : 0b0010));
                        break;
                    case 0b111:
                        assert(top->ALUCtl == 0b0000);
                        break;
                    case 0b110:
                        assert(top->ALUCtl == 0b0001);
                        break;
                    case 0b010:
                        assert(top->ALUCtl == 0b0111);
                        break;
                    default:
                        printf("func3 default\n");
                        break;
                }
                break;
            case 0b11:
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
                    case 0b010:
                        assert(top->ALUCtl == 0b0111);
                        break;
                    default:
                        printf("func3 default\n");
                        break;
                }
                break;
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