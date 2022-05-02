#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap diamondus("diamondus");
    diamondus.beRepaired(10);
    diamondus.takeDamage(15);
    diamondus.printStats();
    diamondus.attack("a brick wall...");
    diamondus.highFivesGuys();

    // DiamondTrap other(diamondus);
    // other.setName("other");

    // DiamondTrap another(diamondus);
    // another = other;
    // another.setName("another");

    // diamondus.printStats();
    // other.printStats();
    // another.printStats();

    
    return (0);
}