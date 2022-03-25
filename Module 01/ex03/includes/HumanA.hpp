#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string newName, Weapon &newWeapon);
	HumanA(const HumanA& orig);
	HumanA &operator=(const HumanA &orig);
	virtual ~HumanA();
	void attack(void);
private:
	std::string name;
	Weapon &weapon;

};

#endif