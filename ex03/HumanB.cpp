
#include "HumanB.hpp"

HumanB::HumanB()
{
	std::cout << "HumanB created" << std::endl;
}

HumanB::HumanB(std::string name) : name(name)
{
	std::cout << "HumanB " << name << " created" << std::endl;
}

HumanB::HumanB(Weapon &weapon) : weapon(&weapon)
{
	std::cout << "HumanB created" << std::endl;
}

HumanB::HumanB(std::string name, Weapon &weapon) : name(name), weapon(&weapon)
{
	std::cout << "HumanB " << name << " created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB " << name << " destroyed" << std::endl;
}

void HumanB::attack()
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
