# Animal Farm Problem

## Class Animal

File ```Animal.h``` contains the interface and a few small functions.

File ```Animal.cpp``` contains the implementations of the functions not defined in the header .h file. Note how the destructor destroys all the cats and the dogs when the lamp itself is destroyed (the only animal is created in the stack of the ```main``` function - below - and its destructor is called at the end of the ```main``` function, when its stack is released).

Class Animal defines the basic behaviour for all animals. The whole class is defined in the header file (```Animal.h```).

Note that the output operator by itself if not capable of handling the polymorphic access used in the ```main``` function (because it is used as an argument). For it to work correctly, we defined an abstract method (dumpTo) that each class must implement. This method will be correctly called in polymorphic situations.

Note also that, since Animal is a class whose methods are to be redefined by subclasses and whose pointers will only point to subclass instances, needs a virtual destructor: in this was, the delete operator will look at the actual type of the object (instead of using the type of the pointer), allowing the correct destructor (that of the object's class and not the pointer's) to be called.
