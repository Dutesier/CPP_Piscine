#include "Zombie.hpp"

int main(void)
{
	Zombie *newGuy;
	std::string Rob = "Robert";
	std::string Paul = "Paul";
	newGuy = newZombie(Rob);
	newGuy->announce();
	randomChump(Paul);
	delete newGuy;
	return (0);
}
