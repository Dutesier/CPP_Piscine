#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string my_name):ScavTrap(my_name), FragTrap(my_name) {
    hit_points = FragTrap::hit_points;
    energy_points = ScavTrap::energy_points;
    attack_damage = FragTrap::attack_damage;
    species = "DiamondTrap";
    ClapTrap::name = my_name + "_clap_name";
    name = my_name;
    std::cout << "\u001b[31m"; // 05");
    std::cout << "[DiamondTrap Default Constructor] " << "A wild " << name << " appeared!" << std::endl;
}

// DiamondTrap::DiamondTrap(const DiamondTrap& orig): ScavTrap(orig.name), FragTrap(orig.name) {
// }

// DiamondTrap & DiamondTrap::operator=(const DiamondTrap& orig) {
// }

DiamondTrap::~DiamondTrap() {
}
