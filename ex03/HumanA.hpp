
#include "Weapon.hpp"
#include <cstdlib>

class HumanA
{
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA(Weapon &weapon);
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void setWeapon(Weapon &weapon);
		Weapon &getWeapon();
		void setName(std::string name);
		std::string getName();
		void attack();
};