#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	std::string name = "CrazyZombie";
	int n = 3;
	horde = zombieHorde(n, name);
	for (int i = 0; i < n; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
