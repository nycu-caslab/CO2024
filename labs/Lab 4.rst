Lab4 Advance Pipeline CPU
=========================

Introduction
------------

We have pipelined our CPU to improve performance. However, there are
three significant issues that stay unsolved. They are branches,
load-use, and write-use hazards. In this lab, you are requested to
implement hazard detection and forwarding units.

Lab Source Code
---------------

As for other modules, TAs think you should finish lab4 based on your
lab3 submission, so there is no template.

Pipeline Cycle CPU (with hazard & forwarding)
=============================================

Architecture
------------

.. figure:: images/pipeline_hazard_forwarding.png

Hazard Dectection Unit
----------------------

The hazard detection unit is responsible for inserting a nop when
load-use data hazard happens (as the following snippet)

.. code :: c

   ld x1 0(sp);
   ; insert nop here 
   add x1 x1 x2;

Also, flush the pipeline register after branch instruction once the
branch is taken. - If you follow the architecture provided above - You
must determine if the branch will take or not in the ID stage.

Forwarding Unit
---------------

The forwarding unit deals with write-use data hazards; your design
should handle the following case.

.. code :: c

   add x1, x1, x2
   add x1, x1, x3
   add x1, x1, x4

Instruction
-----------

Your CPU should be able to support the following RISC-V ISA.

- add, addi, sub, and, andi, or, ori
- slt, slti
- lw, sw, beq
- jal, jalr, bne, blt, bge

Requirement
-----------

Implement hazard detection and forwarding units, then integrate them
into your CPU. You are recommended to write the assembly yourself to
test your design’s correctness.

TAs have prepared hidden test cases to grade your design. We will verify
correctness by comparing register values. Your design should also be
able to satisfy previous (lab1~3) requirements.

Submission
----------

Please submit your source code as a zip file to **E3**.

The name of the zip file should be .zip, and the structure of the file
should be as the following:

::

   <stduent_id>.zip
       |- <student_id>/
           |- ...(your source codes)

Hint
----

-  Read the textbook first and understand each submodule’s
   functionality.
-  Debugging with waveform makes your life easier.
-  Try to generate your risc-v machine code with Ripe; you can write a
   simple assembly to verify if your code runs as expected.

Reference
---------

Computer Organization and Design RISC-V Edition, CH4
`Ripes <https://github.com/mortbopet/Ripes>`__ `RISC-V
Reader <http://riscvbook.com/>`__
`riscv-isa-pages <https://msyksphinz-self.github.io/riscv-isadoc/html/rvi.html>`__
\``\`
