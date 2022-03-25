#include "Zombie.hpp"

Zombie::Zombie(){
	name = "jorge";
}

Zombie::Zombie(std::string my_name) {
	this->name = my_name;
}

Zombie::Zombie(const Zombie &zombie){
	new Zombie(zombie.name);
}

Zombie & Zombie::operator=(const Zombie &zombie) {
	name = zombie.name;
	return (*this);
}

void Zombie::setName(std::string my_name){
	name = my_name;
}

Zombie::~Zombie() {
	std::cout << name
		<< " has entered their second after-life"
		<< std::endl;
}

void Zombie::announce(void)
{
	std::cout << name
		<< ": BraiiiiiiinnnzzzZ..." << std::endl;
}
