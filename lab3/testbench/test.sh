#!/bin/bash

rm ./obj_dir/*
verilator --build --exe -cc --trace -Wall +incdir+../ $1_tb.cpp ../$1.v
#--unroll-count --unroll-stmts 
echo "-------------------------------------------------"
./obj_dir/V$1
