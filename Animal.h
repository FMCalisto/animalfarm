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

	public:
		virtual char getName()
			const
			{
				return _name;
			}
		virtual char getRace()
			const
			{
				return _race;
			}
		virtual int getAge()
			const
			{
				return _age;
			}
		virtual bool canGrantBreed()
			const
			{
				return _breed;
			}
		virtual bool canBeAlive()
			const
			{
				return _alive;
			}
		virtual void doAliveMode()
			const
			{
				_alive(true);
			}

	public:
		virtual void startKillingIt()
		{
			_breed = false;
		}

		virtual bool grantBreed()
		{
			if(canGrantBreed())
			{
				startKillingIt();
				doGrantBreed();

				return true;
			}

			return false;
		}

		virtual bool itsAlive()
		{
			if(canBeAlive())
			{
				startKillingIt();
				doAliveMode;

				return true;
			}

			return false;
		}

		virtual bool canGrantBreed()
			const
			{
				return _breed;
			}

		virtual void doGrantBreed() {}

		virtual bool itsAlive()
			const
			{
				return _alive;
			}

		virtual void doAliveMode() {}

		virtual void dumpTo(std::ostream &o)
			const = 0;

		friend std::ostream &operator<<(std::ostream &o, const Animal &a)
		{
			a.dumpTo(o);
			return 0;
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

} // namespace animalfarm

#if 0
inline std::ostream &operator<<(std::ostream &o, const Animal &a) {
  rd.dumpTo(o);
  return o;
}
#endif
 
#endif