#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
public:
	Weapon();
	Weapon(std::string type);
	Weapon(const Weapon& weapon);
	Weapon &operator=(const Weapon &weapon);
	virtual ~Weapon();
	const std::string getType();
	void setType(std::string new_type);
private:
	std::string type;	
};

#endif