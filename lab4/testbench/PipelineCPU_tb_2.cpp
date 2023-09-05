#include <verilated.h>
#include <verilated_vcd_c.h>
#include <stdio.h>
#include <vector>
#include <time.h>
#include <cmath>
#include <iostream>

using namespace std;

#include "VPipelineCPU.h"

VerilatedContext* contextp = new VerilatedContext;
VerilatedVcdC *m_trace = new VerilatedVcdC;
VPipelineCPU *top = new VPipelineCPU{contextp};

void PipelineCPUTest(int cycle){
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


    PipelineCPUTest(1000);
    
    printf("------------START------------\n");
    // cout<<hex<<((int)top->r[5] )<<endl;         /*t0*/
    // cout<<hex<<((int)top->r[6] )<<endl;         /*t1*/
    // cout<<hex<<((int)top->r[7] )<<endl;         /*t2*/
    // cout<<hex<<((int)top->r[8] )<<endl;         /*s0*/
    // cout<<hex<<((int)top->r[9] )<<endl;         /*s1*/
    // cout<<hex<<((int)top->r[10])<<endl;         /*a0*/
    // cout<<hex<<((int)top->r[11])<<endl;         /*a1*/
    // cout<<hex<<((int)top->r[18])<<endl;         /*s2*/
    // cout<<hex<<((int)top->r[28])<<endl;         /*t3*/
    // cout<<hex<<((int)top->r[29])<<endl;         /*t4*/
    // cout<<hex<<((int)top->r[2])<<endl;          /*sp*/

    //for load use
    assert(top->r[5] == 0xa);            /*t0*/
    assert(top->r[6] == 0x7c);          /*t1*/
    assert(top->r[7] == 0x0);            /*t2*/
    assert(top->r[8] == 0xb6);           /*s0*/
    assert(top->r[9] == 0x132);          /*s1*/
    assert(top->r[10] == 0x7a);          /*a0*/
    assert(top->r[11] == 0x4d);          /*a1*/
    assert(top->r[18] == 0x3d);          /*s2*/
    assert(top->r[28] == 0x0);           /*t3*/
    assert(top->r[29] == 0x698);         /*t4*/
    assert(top->r[2] == 0x80);           /*sp*/
    printf("-------------END-------------\n");

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