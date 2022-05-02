#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap("anon"), FragTrap("anon") {
    hit_points = FragTrap::hit_points;
    energy_points = ScavTrap::energy_points;
    attack_damage = FragTrap::attack_damage;
    species = "DiamondTrap";
    std::string temp = "anon";
    ClapTrap::name = temp + "_clap_name";
    name = "anon";
    std::cout << "\u001b[31m";
    std::cout << "[DiamondTrap Default Constructor] " << "A wild " << name << " appeared!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string my_name):ScavTrap(my_name), FragTrap(my_name) {
    hit_points = FragTrap::hit_points;
    energy_points = ScavTrap::energy_points;
    attack_damage = FragTrap::attack_damage;
    species = "DiamondTrap";
    ClapTrap::name = my_name + "_clap_name";
    name = my_name;
    std::cout << "\u001b[31m";
    std::cout << "[DiamondTrap Default Constructor] " << "A wild " << name << " appeared!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& orig): ClapTrap(orig.name), ScavTrap(orig.name), FragTrap(orig.name) {
    hit_points = FragTrap::hit_points;
    energy_points = ScavTrap::energy_points;
    attack_damage = FragTrap::attack_damage;
    species = "DiamondTrap";
    ClapTrap::name = orig.name + "_clap_name";
    name = orig.name;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap& orig) {
    hit_points = FragTrap::hit_points;
    energy_points = ScavTrap::energy_points;
    attack_damage = FragTrap::attack_damage;
    species = "DiamondTrap";
    ClapTrap::name = orig.name + "_clap_name";
    name = orig.name;
    return (*this);
}

DiamondTrap::~DiamondTrap() {
    std::cout << "\u001b[31m";
    std::cout << "[DiamondTrap Destructor] " << name << " has been destroyed" << std::endl;

}

void    DiamondTrap::whoAmI(void) {
    std::cout << "\u001b[31m";
    std::cout << "My name is " << name << " but my parents call me " << ClapTrap::name << std::endl;
}

void    DiamondTrap::attack(const std::string& target) {
    this->ScavTrap::attack(target); // Safer but mayber not necessary since attack is only implemented by ScavTrap
}