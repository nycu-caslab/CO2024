#include <verilated.h>
#include <verilated_vcd_c.h>
#include <stdio.h>
#include <vector>
#include <time.h>
#include <cmath>
#include <iostream>

using namespace std;

#include "VRegister.h"

VerilatedContext* contextp = new VerilatedContext;
VerilatedVcdC *m_trace = new VerilatedVcdC;
VRegister *top = new VRegister{contextp};

void RegisterTest(int cycle){
    top->readReg1 = 0;
    top->readReg2 = 0;
    top->writeReg = 0;
    top->writeData = 0;
    // reset cycle
    top->clk = 0;
    top->rst = 0;
    top->regWrite = 0;
    top->eval();
    m_trace->dump(contextp->time());
    contextp->timeInc(1);

    top->clk = 1;
    top->rst = 0;
    top->regWrite = 0;
    top->eval();
    m_trace->dump(contextp->time());
    contextp->timeInc(1);
    top->rst = 1;

    int tmpRW = 0, tmpr1 = 0, tmpr2 = 0,tmpData = 0, tmpwrite = 0;;
    int registers[32] = {0};
    registers[2] = 128;
    for(int i=0; i<cycle; i++){
        if(top->clk){
            tmpData = pow(-1, rand()) * rand();
            tmpwrite = rand() % 32;
            tmpr1 = rand() % 32;
            tmpr2 = rand() % 32;
            tmpRW = rand() % 2; // 0 read, 1 write
        }
        if(!tmpRW){
            top->regWrite = 0;
            top->readReg1 = tmpr1;
            top->readReg2 = tmpr2;
        }
        else{
            top->regWrite = 1;
            top->writeReg = tmpwrite;
            top->writeData = tmpData;
            registers[tmpwrite] = tmpData;
        }
        top->clk = !top->clk;
        top->eval();
        // printf("clk: %d, memRead: %d, memWrite: %d, address: %d, writeData: %d, readData: %d\n",
        // top->clk, top->memRead, top->memWrite, top->address, top->writeData, top->readData);
        
        // cout<<*(int*)(addressAndData+tmpAddr)<<endl;
        // cout<<"clk : "<<(int)top->clk<<", R/W : "<<tmpRW<<", readr1 : "<<(int)top->readReg1<<", readr2 : "<<(int)top->readReg2
        //     <<", readdata1 : "<<top->readData1<<", readdata2 : "<<top->readData2<<", writereg : "
        //     <<(int)top->writeReg<<", write data :"<<top->writeData<<endl;
        m_trace->dump(contextp->time());
        contextp->timeInc(1);
        if(!tmpRW && top->clk){
            assert((registers[tmpr1] == top->readData1) && (registers[tmpr2] == top->readData2));
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

    RegisterTest(100);
    
    m_trace->dump(contextp->time());
    top->final();
    m_trace->close();
    delete top;
    delete contextp;
    return 0;
}