Lab 2 : Single Cycle CPU w/ Branch Instruction
==============================================

Introduction
------------

In previous lab requirement, only some basic instruction are
implemented. For lab2, we are going to make our CPU more powerful, which
support more RV32I standard instructions. To reach this goal, you might
notice architecture modification is necessary.

The architecture of lab1 doesn’t support jump reletaed insturctions.
After finished lab2, you will figure out you own solution to make
original CPU support ``jal`` and ``jalr`` instructions.
``bne``,\ ``blt``,\ ``bge`` are easier, you can first try realize them.

Lab Source Code
---------------

TAs think you should finish your lab2 based on
your lab1 submission, so there is no template after lab1.

Single Cycle CPU
----------------

Architecture
~~~~~~~~~~~~

You can follow the architecture graph to realize a single cycle CPU,
however, this architecture doesn’t consider jump related instructions.
.. image:: images/singleArch.png

Operation
~~~~~~~~~

.. hint::

   All operation are signed

-  jal

   -  ``jal`` stores ``pc+4`` in ``regs[rd]``, executes
      ``pc = pc + imm << 1`` 
   
   .. image:: images/jal.png

-  jalr

   -  ``jalr`` stores ``pc+4`` in ``regs[rd]``, exectures
      ``pc = regs[rs1] + imm``

   .. image:: images/jalr.png

-  bne

   .. image:: images/bne.png

-  blt 

   .. image:: images/blt.png

-  bge 

   .. image:: images/bge.png

--------------

Requirement
-----------

Implement your RISC-V single cycle CPU, your CPU should be able to
support following RISC-V ISA - add, addi, sub, and, andi, or, ori - slt,
slti - lw, sw, beq - jal, jalr, bne, blt, bge

TAs have prepare verilator testbench and some ``TEST_INSTRUCTION.txt``
to grade your design. We will verify correctness by comparing register
value, so

.. warning::

   Don’t modify register, instruction memory and CPU interface, or you will get 0 points.

.. warning::
   
   Reset signal ``rst`` should be active low.

.. warning::
   
   Your design must satisfy lab1 requirement.

.. warning::
   
   You must follow this ISA table to implement.

.. image:: images/ISAtable.png

Hint
----

-  Read textbook first, understand each submodule’s functionality.
-  Debugging with waveform makes your life easier.
-  Try to generate your own risc-v machine code with Ripe, you can write
   simple assembly to verify if your code runs as expect.

Reference
---------

-  Computer Organization and Design RISC-V Edition, CH4
-  `Ripes <https://github.com/mortbopet/Ripes>`__
-  `RISC-VReader <http://riscvbook.com/>`__
-  `riscv-isa-pages <https://msyksphinz-self.github.io/riscv-isadoc/html/rvi.html>`__
