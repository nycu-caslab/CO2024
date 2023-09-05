#!/bin/bash
rm -rf /obj_dir/*
verilator $1.v --exe testbench.cpp -cc --trace -Wall
make -C obj_dir -f V$1.mk
./obj_dir/V$1
