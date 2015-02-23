#ifndef __ANIMALFARM_ANIMAL_H__
#define __ANIMALFARM_ANIMAL_H__
 
#include <vector>

// INCLUDES

#include "Cat.h"
#include "Dog.h"

namespace animalfarm
{
	class Cat;
	class Dog;

	class Animal
	{
		char _name;
		char _race;

		int _age;

		bool _breed;
		bool _alive;

		std::vector<Cat*> _cat;
		std::vector<Dog*> _dog;

	public:
		Animal(char name, char race, int age)
			: _name(name), _race(race), _age(age), _breed(true), _alive(true) {}

		virtual ~Animal();

		char getName()
			const
			{
				return _name;
			}

		char getRace()
			const
			{
				return _race;
			}

		int getAge()
			const
			{
				return _age;
			}

		inline bool operator(const Animal &a)
		{
			return getName() == a.getName()
					&&
				   getRace() == a.getRace()
				   	&&
				   getAge() == a.getAge();
		}
	};
} // namespace animalfarm