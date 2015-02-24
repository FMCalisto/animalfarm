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
	animalfarm::Animal::Cat *c[1];
	animalfarm::Animal::Dog *d[1];

	std::cout << *c <<std::endl;
	std::cout << *d <<std::endl;

	return 0;
}