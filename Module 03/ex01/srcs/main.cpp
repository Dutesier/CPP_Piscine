#include "ScavTrap.hpp"

int main(void) {
    ScavTrap scavus("scavus");
    scavus.beRepaired(10);
    scavus.takeDamage(10);
    scavus.printStats();
    scavus.attack("a brick wall...");
    scavus.guardGate();

    ScavTrap other = scavus;
    other.setName("other");

    ScavTrap another(scavus);
    another.setName("another");

    scavus.printStats();
    other.printStats();
    another.printStats();

    
    return (0);
}