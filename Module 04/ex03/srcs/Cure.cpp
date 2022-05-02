#include "Cure.hpp"

Cure::Cure():AMateria("cure") {
}

Cure::Cure(const Cure& orig):AMateria(orig.getType()) {
}

Cure & Cure::operator=(const Cure& orig) {
    type = orig.getType();
    return (*this);
}

Cure::~Cure() {
}

AMateria* Cure::clone(void) const {
    AMateria *temp = new Cure;
    return (temp);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "’s wounds *"<< std::endl;
}
