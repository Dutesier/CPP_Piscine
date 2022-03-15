#include "Zombie.hpp"

Zombie::Zombie(std::string my_name) {
	this->name = my_name;
}


Zombie::~Zombie() {
	std::cout << name
		<< " has entered their second after-life"
		<< std::endl;
}

void Zombie::announce(void)
{
	std::cout << name
		<< " BraiiiiiiinnnzzzZ..." << std::endl;
}
