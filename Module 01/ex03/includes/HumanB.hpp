#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string name);
	HumanB(std::string name, Weapon weapon);
	HumanB(const HumanB& orig);
	HumanB &operator=(const HumanB &orig);
	virtual ~HumanB();
	void attack(void);
	void setWeapon(Weapon &newWeapon);
private:
	std::string name;
	Weapon *weapon;

};


#endif