#include "Animal.h"

animalfarm::Animal::~Animal()
{
	for(size_t catx = 0; catx < _cat.size(); catx++)
	{
		delete _cat[catx];
	}

	for(size_t dogx = 0; dogx < _dog.size(); dogx++)
	{
		delete _dog[dogx];
	}
}