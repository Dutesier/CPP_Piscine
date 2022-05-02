#include "Ice.hpp"

Ice::Ice():AMateria("ice") {
}

Ice::Ice(const Ice& orig):AMateria(orig.getType()) {
}

Ice & Ice::operator=(const Ice& orig) {
    type = orig.getType();
    return (*this);
}

Ice::~Ice() {
}

AMateria* Ice::clone(void) const {
    AMateria *temp = new Ice;
    return (temp);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
