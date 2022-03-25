#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon &newWeapon):name(newName), weapon(newWeapon){
}

HumanA::HumanA(const HumanA &orig):weapon(orig.weapon) {
	std::string newName = orig.name;
	Weapon newWeapon = orig.weapon;
	new HumanA(newName, newWeapon);
}

HumanA & HumanA::operator=(const HumanA &orig){
	name = orig.name;
	weapon = orig.weapon;
	return (*this);
}

HumanA::~HumanA() {
}

void HumanA::attack(void){
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
