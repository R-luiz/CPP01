
#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		void setName(std::string name);
		std::string getName();
		void announce();

};

void randomChump(std::string name);
Zombie* newZombie(std::string name);