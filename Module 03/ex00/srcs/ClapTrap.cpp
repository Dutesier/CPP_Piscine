#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string new_name): name(new_name) {
}

ClapTrap::ClapTrap(const ClapTrap& orig) {
    name = orig.name;
    hit_points = orig.hit_points;
	energy_points = orig.energy_points;
	attack_damage = orig.attack_damage;
}

ClapTrap & ClapTrap::operator=(const ClapTrap& orig) {
    name = orig.name;
    hit_points = orig.hit_points;
	energy_points = orig.energy_points;
	attack_damage = orig.attack_damage;
    return (*this);
}

ClapTrap::~ClapTrap() {

}

void	ClapTrap::attack(const std::string& target) {

}

void	ClapTrap::takeDamage(unsigned int amount) {

}

void	ClapTrap::beRepaired(unsigned int amount) {

}

