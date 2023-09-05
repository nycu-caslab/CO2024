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


    PipelineCPUTest(100);
    cout<<hex<<((int)top->r[5] )<<endl;        /*t0*/
    cout<<hex<<((int)top->r[6] )<<endl;        /*t1*/
    cout<<hex<<((int)top->r[7] )<<endl;        /*t2*/
    cout<<hex<<((int)top->r[8] )<<endl;        /*s0*/
    cout<<hex<<((int)top->r[9] )<<endl;        /*s1*/
    cout<<hex<<((int)top->r[18])<<endl;        /*s2*/
    cout<<hex<<((int)top->r[19])<<endl;        /*s3*/
    cout<<hex<<((int)top->r[20])<<endl;        /*s4*/
    cout<<hex<<((int)top->r[21])<<endl;        /*s5*/
    cout<<hex<<((int)top->r[28])<<endl;        /*t3*/
    cout<<hex<<((int)top->r[29])<<endl;        /*t4*/
    cout<<hex<<((int)top->r[30])<<endl;        /*t5*/
    cout<<hex<<((int)top->r[31])<<endl;        /*t6*/
    cout<<hex<<((int)top->r[2] )<<endl;        /*sp*/
    printf("------------START------------\n");
    assert(top->r[5] == 0x63f);         /*t0*/
    assert(top->r[6] == 0x78);          /*t1*/
    assert(top->r[7] == 0x6b7);         /*t2*/
    assert(top->r[8] == 0x77f);         /*s0*/
    assert(top->r[9] == 0x0);           /*s1*/
    assert(top->r[18] == 0x1);          /*s2*/
    assert(top->r[19] == 0x0);          /*s3*/
    assert(top->r[20] == 0x0);          /*s4*/
    assert(top->r[21] == 0x63f);        /*s5*/
    assert(top->r[28] == 0x5c7);        /*t3*/
    assert(top->r[29] == 0x38);         /*t4*/
    assert(top->r[30] == 0x1d);         /*t5*/
    assert(top->r[31] == 0x67f);        /*t6*/
    assert(top->r[2] == 0x80);          /*sp*/
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