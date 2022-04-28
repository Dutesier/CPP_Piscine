#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string new_name): name(new_name) {
    std::cout << "A wild " << name << " appeared!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& orig) {
    name = orig.name;
    hit_points = orig.hit_points;
	energy_points = orig.energy_points;
	attack_damage = orig.attack_damage;
    std::cout << "A wild " << name << " appeared!" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap& orig) {
    name = orig.name;
    hit_points = orig.hit_points;
	energy_points = orig.energy_points;
	attack_damage = orig.attack_damage;
    std::cout << "A wild " << name << " appeared!" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << name << " has been destroyed!" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
    std::cout << "ClapTrap " << name << " attacked "<< target << " causing " << attack_damage << " points of damage!" << std::endl:
}

void	ClapTrap::takeDamage(unsigned int amount) {

}

void	ClapTrap::beRepaired(unsigned int amount) {

}

