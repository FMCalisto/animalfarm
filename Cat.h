#ifndef __ANIMALFARM_CAT_H__
#define __ANIMALFARM_CAT_H__
 
#include <iostream>

namespace animalfarm
{
	class Cat : public Animal
	{
		public:
			Cat(char name) : Animal(name) {}

			void dumpTo(std::ostream &o) const
			{
				o << "Cat has" << 
			}
	}