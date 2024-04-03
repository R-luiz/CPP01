
#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "A new zombie is born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " is dead" << std::endl;
}

Zombie* newZombie(std::string name)
{
	Zombie *zombie = new Zombie();
	zombie->setName(name);
	return zombie;
}