#include <verilated.h>
#include <verilated_vcd_c.h>
#include <stdio.h>
#include <vector>
#include <time.h>
#include <cmath>
#include <iostream>

using namespace std;

#include "VDataMemory.h"

VerilatedContext* contextp = new VerilatedContext;
VerilatedVcdC *m_trace = new VerilatedVcdC;
VDataMemory *top = new VDataMemory{contextp};

void DataMemoryTest(int cycle){
    // reset cycle
    top->memRead = 0;
    top->memWrite = 0;
    top->clk = 0;
    top->rst = 0;
    top->eval();
    m_trace->dump(contextp->time());
    contextp->timeInc(1);

    top->memRead = 0;
    top->memWrite = 0;
    top->clk = 1;
    top->rst = 0;
    top->eval();
    m_trace->dump(contextp->time());
    contextp->timeInc(1);
    top->rst = 1;

    int tmpData = 0, tmpAddr = 0,tmpRW = 0;
    char addressAndData[128] = {0};
    for(int i=0; i<cycle; i++){
        if(top->clk){
            tmpData = pow(-1, rand()) * rand();
            tmpAddr = rand() % 124;
            tmpRW = rand() % 2; // 0 read, 1 write
        }
        if(!tmpRW){
            top->memRead = 1;
            top->memWrite = 0;
            top->address = tmpAddr;
        }
        else{
            top->memRead = 0;
            top->memWrite = 1;
            top->address = tmpAddr;
            top->writeData = tmpData;
            *(int*)(addressAndData+tmpAddr) = tmpData;
            
        }
        top->clk = !top->clk;
        top->eval();
        // printf("clk: %d, memRead: %d, memWrite: %d, address: %d, writeData: %d, readData: %d\n",
        // top->clk, top->memRead, top->memWrite, top->address, top->writeData, top->readData);
        
        // cout<<*(int*)(addressAndData+tmpAddr)<<endl;

        m_trace->dump(contextp->time());
        contextp->timeInc(1);
        if(!tmpRW && top->clk){
            assert(*(int*)(addressAndData+tmpAddr) == top->readData);
        }
    }
    printf("\n");
    printf("============================\n");
    printf("\e[32m\e[1mPASS\e[0m\n");
    printf("============================\n");
}

int main(int argc, char **argv){
    // srand(1111);
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);

    top->trace(m_trace, 0);
    m_trace->open("waveform.vcd");

    DataMemoryTest(10000);
    
    m_trace->dump(contextp->time());
    top->final();
    m_trace->close();
    delete top;
    delete contextp;
    return 0;
}