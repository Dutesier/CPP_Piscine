#include "FragTrap.hpp"

FragTrap::FragTrap(std::string my_name): ClapTrap(my_name){
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    species = "FragTrap";
    std::cout << "[FragTrap Default Constructor] " << "A wild " << name << " appeared!" << std::endl;

}

FragTrap::FragTrap(const FragTrap& orig): ClapTrap(orig.name){
    hit_points = orig.hit_points;
    energy_points = orig.energy_points;
    attack_damage = orig.attack_damage;
    species = orig.species;
    std::cout << "[FragTrap Copy Constructor] " << "A wild " << name << " appeared!" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap& orig) {
    std::cout << "[ScavTrap Assignment Operator] " << name <<" copying data from " << orig.name << std::endl;
    ClapTrap::operator=(orig);
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "[FragTrap Destructor] " << name << " has been destroyed" << std::endl;
}

void    FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << name << " is asking for a high five" << std::endl;

}
