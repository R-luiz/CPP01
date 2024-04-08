
#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon created" << std::endl;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << "Weapon " << type << " created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon " << type << " destroyed" << std::endl;
}

const std::string &Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

