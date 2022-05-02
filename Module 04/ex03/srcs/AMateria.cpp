#include "AMateria.hpp"

AMateria::AMateria(std::string const & type):type(type){
}

AMateria::AMateria(const AMateria& orig):type(orig.getType()) {
}

AMateria & AMateria::operator=(const AMateria& orig) {
    type = orig.getType();
    return (*this);
}

AMateria::~AMateria() {
}

std::string const & AMateria::getType() const {
    return (this->type);
}

void AMateria::use(ICharacter& target) // Since there is another "use" method (from ICharacter) we want to make sure it gets overwritten here
{
    (void)target;
}