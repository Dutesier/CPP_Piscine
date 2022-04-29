#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string new_name): ClapTrap(new_name){
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    species = "SlavTrap";
    std::cout << "[ScavTrap Default Constructor] " << "A wild " << name << " appeared!" << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap& orig): ClapTrap(orig.name) {
    hit_points = orig.hit_points;
	energy_points = orig.energy_points;
	attack_damage = orig.attack_damage;
	species = orig.species;
    std::cout << "[ScavTrap Copy Constructor] " << "A wild " << name << " appeared!" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap& orig){
    ClapTrap::operator=(orig);
    std::cout << "[ScavTrap Assignment Operator] " << "A wild " << name << " appeared!" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap() {
    std::cout << "[ScavTrap Destructor] " << name << " has been destroyed" << std::endl;

}

void	ScavTrap::attack(const std::string& target) {
    if (hit_points == 0 || energy_points == 0) {
        std::cout << species << " " << name << " tried to attack but it couldn't... " << (hit_points > 0 ? "Energy Points (0)" : "Hit Points (0)" ) << std::endl;   
        return ;
    }
    energy_points--;
    std::cout << species << " " << name << " attacked fiercily "<< target << " causing " << attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << species << " " << name << " is now in Gate Keeper Mode!" << std::endl;
}
