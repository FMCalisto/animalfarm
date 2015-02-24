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
				o << "The Cat name" << getName()
				  << "has" << getAge() << "years old.";
			}
		cat std::ostream &operator<<(std::ostream &o, const Cat &c)
		{
			c.dumpTo(o);
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