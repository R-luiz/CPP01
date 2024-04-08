
#include "Weapon.hpp"
#include <cstdlib>

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB();
		HumanB(std::string name);
		HumanB(Weapon &weapon);
		HumanB(std::string name, Weapon &weapon);
		~HumanB();
		void setName(std::string name);
		std::string getName();
		void setWeapon(Weapon &weapon);
		Weapon &getWeapon();
		void attack();
};