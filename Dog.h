#ifndef __ANIMALFARM_DOG_H__
#define __ANIMALFARM_DOG_H__
 
#include <iostream>

namespace animalfarm
{
	class Dog : public Animal
	{
		bool _breed;

		void startKillingIt()
		{
			_breed = false;
		}

		protected:
			bool _bark;

		public:
			Dog(char name) : Animal(name) {}

			void doBark(std::ostream &o)
				const
				{
					if(_bark)
					{
						o << "The Dog bark.";
					}
					else
					{
						o << "The Dog is dying." << startKillingIt();
					}
				}

			void dumpTo(std::ostream &o)
				const
				{
					o << "The Dog name" << getName()
					  << "has" << getAge() << "years old.";
				}

			friend std::ostream &operator<<(std::ostream &o, const Dog &d)
			{
				d.dumpTo(o);
				d.doBark(o);
				return o;
			}
	};
} //namespace animalfarm

#if 0
// alternative definition for output operator (non-dog)
inline std::ostream &operator<<(std::ostream &o, const Dog &d)
{
  d.dumpTo(o);
  return o;
}
#endif
 
#endif