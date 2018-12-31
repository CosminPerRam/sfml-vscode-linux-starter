# SFML 2.5.1 Visual Studio Code Linux
This repository contains everything you need to start off your SFML project in Visual Studio Code for Linux.
It comes preloaded with SFML 2.5.1, as the name suggests.

# Basic questions
- What are the folders used for?
	- `bin` contains the binary files of the project
	- `content` contains the resources used such as images, fonts etc.
	- `include` here you can find your include files and folders for your external libraries, such as `include/SFML`, used in a code example such as `#include <SFML/Window.hpp>`
	- `lib` your lib files for the external libraries used
	- `src` everything about your own code files
- What if i want to add a library or modify the Makefile?  
    = You need to have the library that you want to add with its lib files and include files first, it does need to be compatible with the running system.    
	= Here are the basic steps:
    1. Add the `lib` files in the `lib` folder (of the project one)
    2. Add the `include` folder in the `include` folder (of the project one), for better use, the `include` folder of the library should be its library name, for example, `SFML` (seen in `include/SFML`)
    3. Add the libraries to the `Makefile` file of the project, the line that you need to edit is `LIBRARIES`, seen in the project as `LIBRARIES	:= -lsfml-graphics -lsfml-window -lsfml-system`, if you want to add, lets say, SFML networking, just add `-lsfml-network` to the line, making it to 'LIBRARIES	:= -lsfml-graphics -lsfml-window -lsfml-system -lsfml-network'
    
    It is noted that some libraries require more configuration in the `Makefile` file, for this, you should look into the documentation of the library that you want to add.
