#include "Weapon.hpp"

Weapon::Weapon():type("an ordinary weapon"){

}

Weapon::Weapon(std::string type){
	this->type = type;
}

Weapon::Weapon(const Weapon& weapon){
	Weapon *holder;

	holder = new Weapon;
	holder->type = weapon.type;
}

Weapon & Weapon::operator=(const Weapon &weapon){
	type = weapon.type;
	return (*this);
}

Weapon::~Weapon(){

}

const std::string Weapon::getType(){
	return (type);
}

void Weapon::setType(std::string new_type){
	type = new_type;
}