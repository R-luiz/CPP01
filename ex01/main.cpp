
#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("Zombie1");
	zombie->announce();
	delete zombie;
	randomChump("Zombie2");
	zombie = zombieHorde(5, "Zombie3");
	for (int i = 0; i < 5; i++)
	{
		zombie[i].announce();
	}
	delete[] zombie;
	return 0;
}