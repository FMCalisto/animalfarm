#ifndef __ANIMALFARM_ANIMAL_H__
#define __ANIMALFARM_ANIMAL_H__
 
#include <iostream>

namespace animalfarm
{

	class Animal
	{
		char _name;
		char _race;

		int _age;

		bool _breed;
		bool _alive;

	protected:
		Animal(char name, char race, int age)
			: _name(name), _race(race), _age(age), _breed(true), _alive(true) {}

	public:
		virtual ~Animal();

	virtual bool grantBreed()
	{
		if(canGrantBreed())
		{
			incrementGranted();
			doGrantBreed();

			return true;
		}

		return false;
	}

	virtual bool itsAlive()
	{
		if(canBeAlive())
		{
			incrementAlivability();
			doAliveMode;

			return true;
		}

		return false;
	}

	/*

	public:
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

		inline bool operator==(const Animal &a)
		{
			return getName() == a.getName()
					&&
				   getRace() == a.getRace()
				   	&&
				   getAge() == a.getAge();
		}
	};

	*/
} // namespace animalfarm