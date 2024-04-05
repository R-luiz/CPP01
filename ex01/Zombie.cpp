
#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

std::string Zombie::getName()
{
	return this->name;
}

Zombie* newZombie(std::string name)
{
	Zombie *zombie = new Zombie();
	zombie->setName(name);
	return zombie;
}

Zombie::Zombie()
{
	std::cout << "A new zombie is born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " is dead" << std::endl;
}

void randomChump(std::string name)
{
	Zombie zombie;
	zombie.setName(name);
	zombie.announce();
}

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombie[i].setName(name);
	}
	return zombie;
}