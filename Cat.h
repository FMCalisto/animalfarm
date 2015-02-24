#ifndef __ANIMALFARM_CAT_H__
#define __ANIMALFARM_CAT_H__
 
#include <iostream>

#include "Animal.h"

namespace animalfarm
{
	class Cat : public Animal
	{
		bool _breed;

		void startKillingIt()
		{
			_breed = false;
		}

		protected:
			bool _scratch;

		public:
			Cat(char name) : Animal(name) {}

			void doScratch(std::ostream &o)
				const
				{
					if(_scratch)
					{
						o << "The Cat scratch.";
					}
					else
					{
						o << "The Cat is dying." << startKillingIt();
					}
				}

			void dumpTo(std::ostream &o)
				const
				{
					o << "The Cat name" << getName()
					  << "has" << getAge() << "years old.";
				}

			friend std::ostream &operator<<(std::ostream &o, const Cat &c)
			{
				c.dumpTo(o);
				c.doScratch(o);
				return o;
			}
	};
} //namespace animalfarm

#if 0
// alternative definition for output operator (non-cat)
inline std::ostream &operator<<(std::ostream &o, const Cat &c)
{
  c.dumpTo(o);
  return o;
}
#endif
 
#endif