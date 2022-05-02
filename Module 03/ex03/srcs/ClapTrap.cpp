#include "ClapTrap.hpp"
ClapTrap::ClapTrap():
    name("Filler"),
    hit_points(10),
    energy_points(10),
    attack_damage(0),
    species("ClapTrap") {
    std::cout << "\u001b[32m";
    std::cout << "[ClapTrap Default Constructor] " << "A wild " << name << " appeared!" << std::endl;
}
ClapTrap::ClapTrap(std::string new_name): 
    name(new_name),
    hit_points(10),
    energy_points(10),
    attack_damage(0),
    species("ClapTrap") {
    std::cout << "\u001b[32m";
    std::cout << "[ClapTrap Default Constructor] " << "A wild " << name << " appeared!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& orig) {
    name = orig.name;
    hit_points = orig.hit_points;
	energy_points = orig.energy_points;
	attack_damage = orig.attack_damage;
	species = orig.species;
    std::cout << "\u001b[32m";
    std::cout << "[ClapTrap Copy Constructor] " << "A wild " << name << " appeared!" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap& orig) {
    std::cout << "\u001b[32m";
    std::cout << "[ClapTrap Assignment Operator] " << name <<" copying data from " << orig.name << std::endl;
    name = orig.name;
    hit_points = orig.hit_points;
	energy_points = orig.energy_points;
	attack_damage = orig.attack_damage;
    species = orig.species;
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "\u001b[32m";
    std::cout << "[ClapTrap Destructor] " << name << " has been destroyed" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
    if (hit_points == 0 || energy_points == 0) {
        std::cout << "\u001b[32m";
        std::cout << species << " " << name << " tried to attack but it couldn't... " << (hit_points > 0 ? "Energy Points (0)" : "Hit Points (0)" ) << std::endl;   
        return ;
    }
    energy_points--;
    std::cout << "\u001b[32m";
    std::cout << species << " " << name << " attacked "<< target << " causing " << attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
    if (amount > hit_points)
        hit_points = 0;
    else
        hit_points = hit_points - amount;
    std::cout << "\u001b[32m";
    std::cout << species << " " << name << " lost "<< amount << " HP!" << std::endl;

}

void	ClapTrap::beRepaired(unsigned int amount) {
    if (hit_points == 0 || energy_points == 0) {
        std::cout << "\u001b[32m";
        std::cout << species << " " << name << " tried to repair itself but it couldn't... " << (hit_points > 0 ? "Energy Points (0)" : "Hit Points (0)" ) << std::endl;   
        return ;
    }
    hit_points = hit_points + amount;
    energy_points--;
    std::cout << "\u001b[32m";
    std::cout << species << " " << name << " gained "<< amount << " HP!" << std::endl;
}

void ClapTrap::printStats(void) {
    std::cout << "\u001b[32m";
    std::cout << "Species: " << species << std::endl
                << "Name: " << name << std::endl
                << "HP: " << hit_points << std::endl
                << "EP: " << energy_points << std::endl
                << "AD: " << attack_damage << std::endl;
}

void ClapTrap::setName(std::string new_name) {
    name = new_name;
}
