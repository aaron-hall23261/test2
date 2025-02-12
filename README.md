Broken Hard Disk Simulation

This project simulates the random motion of hard disks inside a box with hard walls, however the code is broken and in some places completely missing.
Given the reference manual 'refnam.pdf', the simulation was fixed.

First the header file 'disk.h' was not present, so was added and its contents filled according to the reference manual.
The same was done for the 'system.h' header file.
Then the missing distance function in 'disk.cpp' and uniform function in 'system.cpp' were implemented.
Finally all necessary include statements were addd to the .cpp files.

To see the commits, the 'git log' command can be used to follow the changes

To run and visualise the simulation, an executable first needs to be compiled and ran. Using the line below in the terminal will generate an executable.
"g++ main.cpp system.cpp disk.cpp -o bin/program --std=c++11"

The executable, called 'program', in the 'bin' folder can then be ran using the following.
"./bin/program"

The output files of each step of the simulation are saved into the "confs" folder, which the 'view.py' is able to visualise as an animation.
To run this file the use the command.
"python view.py"

When the simulation is run, all disks start on the y axis but over time they randomly disperse, colliding with other disks and walls, due to their hard nature. The disks spread to fill to 20 units wide and long box.
