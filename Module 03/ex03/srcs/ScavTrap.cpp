#include "ScavTrap.hpp"
ScavTrap::ScavTrap(): ClapTrap(){
    name = "anon";
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    species = "SlavTrap";
    std::cout << BLUE;
    std::cout << "[ScavTrap Default Constructor] " << "A wild " << name << " appeared!" << std::endl;
    std::cout << RESET;
}

ScavTrap::ScavTrap(std::string new_name): ClapTrap(new_name){
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    species = "SlavTrap";
    std::cout << BLUE;
    std::cout << "[ScavTrap Default Constructor] " << "A wild " << name << " appeared!" << std::endl;
    std::cout << RESET;

}

ScavTrap::ScavTrap(const ScavTrap& orig): ClapTrap(orig.name) {
    hit_points = orig.hit_points;
	energy_points = orig.energy_points;
	attack_damage = orig.attack_damage;
	species = orig.species;
    std::cout << BLUE;
    std::cout << "[ScavTrap Copy Constructor] " << "A wild " << name << " appeared!" << std::endl;
    std::cout << RESET;
}

ScavTrap & ScavTrap::operator=(const ScavTrap& orig){
    std::cout << BLUE;
    std::cout << "[ScavTrap Assignment Operator] " << name <<" copying data from " << orig.name << std::endl;
    std::cout << RESET;
    ClapTrap::operator=(orig);
    return (*this);
}

ScavTrap::~ScavTrap() {
    std::cout << BLUE;
    std::cout << "[ScavTrap Destructor] " << name << " has been destroyed" << std::endl;
    std::cout << RESET;
}

void	ScavTrap::attack(const std::string& target) {
    if (hit_points == 0 || energy_points == 0) {
        std::cout << BLUE;
        std::cout << species << " " << name << " tried to attack but it couldn't... " << (hit_points > 0 ? "Energy Points (0)" : "Hit Points (0)" ) << std::endl;   
        std::cout << RESET;
        return ;
    }
    energy_points--;
    std::cout << BLUE;
    std::cout << species << " " << name << " attacked fiercily "<< target << " causing " << attack_damage << " points of damage!" << std::endl;
    std::cout << RESET;
}

void ScavTrap::guardGate(void) {
    std::cout << BLUE;
    std::cout << species << " " << name << " is now in Gate Keeper Mode!" << std::endl;
    std::cout << RESET;
}
