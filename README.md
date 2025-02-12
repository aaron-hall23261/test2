Broken Hard Disk Simulation

This project simulates the random motion of hard disks inside a box with hard walls, however the code is broken and in some places completely missing.
Given the reference manual 'refnam.pdf', the simulation was fixed.

First the header file 'disk.h' was not present, so was added and its contents filled according to the reference manual.
The same was done for the 'system.h' header file.
Then the missing distance function in 'disk.cpp' and uniform function in 'system.cpp' were implemented.
