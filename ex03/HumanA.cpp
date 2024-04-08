
#include "HumanA.hpp"

HumanA::HumanA(Weapon &weapon) : weapon(weapon)
{
	if (weapon.getType().empty())
	{
		std::cerr << "HumanA weapon type cannot be empty" << std::endl;
		exit(1);
	}
	std::cout << "HumanA created" << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	if (weapon.getType().empty())
	{
		std::cerr << "HumanA weapon type cannot be empty" << std::endl;
		exit(1);
	}
	std::cout << "HumanA " << name << " created" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA " << name << " destroyed" << std::endl;
}

void HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
