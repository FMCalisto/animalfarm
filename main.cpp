#include <istream>

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

namespace animalfarm
{
	class Animal;
	class Cat;
	class Dog;
}

int main()
{
	animalfarm::Cat *c[1];
	animalfarm::Dog *d[1];

	// ERROR

	std::cout << *c <<std::endl;
	std::cout << *d <<std::endl;

	return 0;
}