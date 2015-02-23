# Animal Farm Problem

## Class Animal

File ```Animal.h``` contains the interface and a few small functions.

File ```Animal.cpp``` contains the implementations of the functions not defined in the header .h file. Note how the destructor destroys all the cats and the dogs when the lamp itself is destroyed (the only animal is created in the stack of the ```main``` function - below - and its destructor is called at the end of the ```main``` function, when its stack is released).
