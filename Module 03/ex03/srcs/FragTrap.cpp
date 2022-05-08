#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
    name = "anon";
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    species = "FragTrap";
    std::cout << "\u001b[33m";
    std::cout << "[FragTrap Default Constructor] " << "A wild " << name << " appeared!" << std::endl;

}

FragTrap::FragTrap(std::string my_name): ClapTrap(my_name){
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    species = "FragTrap";
    std::cout << "\u001b[33m";
    std::cout << "[FragTrap Default Constructor] " << "A wild " << name << " appeared!" << std::endl;

}

FragTrap::FragTrap(const FragTrap& orig): ClapTrap(orig.name){
    hit_points = orig.hit_points;
    energy_points = orig.energy_points;
    attack_damage = orig.attack_damage;
    species = orig.species;
    std::cout << "\u001b[33m";
    std::cout << "[FragTrap Copy Constructor] " << "A wild " << name << " appeared!" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap& orig) {
    std::cout << "\u001b[33m";
    std::cout << "[ScavTrap Assignment Operator] " << name <<" copying data from " << orig.name << std::endl;
    ClapTrap::operator=(orig);
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "\u001b[33m";
    std::cout << "[FragTrap Destructor] " << name << " has been destroyed" << std::endl;
}

void    FragTrap::highFivesGuys(void) {
    if (hit_points == 0 || energy_points == 0) {
        std::cout << "\u001b[33m";
        std::cout << species << " " << name << " tried to ask for a high five but it couldn't... " << (hit_points > 0 ? "Energy Points (0)" : "Hit Points (0)" ) << std::endl;   
        return ;
    }
    energy_points--;
    std::cout << "\u001b[33m";
    std::cout << "FragTrap " << name << " is asking for a high five" << std::endl;

}