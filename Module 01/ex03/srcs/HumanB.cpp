#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
	this->weapon = 0;
}

HumanB::HumanB(const HumanB &orig) {
	new HumanB(orig.name);
}

HumanB & HumanB::operator=(const HumanB &orig){
	name = orig.name;
	weapon = orig.weapon;
	return (*this);
}

HumanB::~HumanB() {
}

void HumanB::attack(void){
	std::string weaponType;
	if (weapon == 0)
		weaponType = "bare hands";
	else
		weaponType = (*weapon).getType();
	std::cout << name << " attacks with their " << weaponType << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon) {
	this->weapon = &(newWeapon);
}
