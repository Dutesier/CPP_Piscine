#include "ClapTrap.hpp"

int main(void) {
    ClapTrap c ("clapus");
    std::string rockdude = "rockdude";
    c.attack(rockdude);
    c.printStats();
    c.beRepaired(5);
    c.printStats();
    c.takeDamage(16);
    c.printStats();
    // No HP scenario
    c.beRepaired(5);
    c.attack(rockdude);

    ClapTrap d("dlapus");
    d.printStats();
    d.attack(rockdude);
    d.attack(rockdude);
    d.attack(rockdude);
    d.attack(rockdude);
    d.attack(rockdude);
    d.attack(rockdude);
    d.attack(rockdude);
    d.attack(rockdude);
    d.attack(rockdude);
    d.attack(rockdude);
    // No EP scenario
    d.printStats();
    d.attack(rockdude);
    d.beRepaired(5);
    
    return (0);
}