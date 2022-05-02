#include "FragTrap.hpp"

int main(void) {
    FragTrap fragus("fragus");
    fragus.beRepaired(10);
    fragus.takeDamage(15);
    fragus.printStats();
    fragus.attack("a brick wall...");
    fragus.highFivesGuys();

    FragTrap other(fragus);
    other.setName("other");

    FragTrap another(fragus);
    another = other;
    another.setName("another");

    fragus.printStats();
    other.printStats();
    another.printStats();

    
    return (0);
}