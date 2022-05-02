#include "AAnimal.hpp"

AAnimal::AAnimal():type("undefined") {
    std::cout << "\u001b[33m[AAnimal Default Constructor]\u001b[37m" << std::endl;
}

AAnimal::AAnimal(std::string my_type):type(my_type) {
    std::cout << "\u001b[33m[AAnimal Default Constructor]\u001b[37m" << std::endl;
}

AAnimal::AAnimal(const AAnimal& orig):type(orig.type) {
    std::cout << "\u001b[33m[AAnimal Copy Constructor]\u001b[37m" << std::endl;
}

AAnimal & AAnimal::operator=(const AAnimal& orig) {
    std::cout << "\u001b[33m[AAnimal Assignment Operator]\u001b[37m" << std::endl;
    this->setType(orig.type);
    return (*this);
}

AAnimal::~AAnimal() {
    std::cout << "\u001b[33m[AAnimal Destructor]\u001b[37m" << std::endl;
}

std::string AAnimal::getType() const{
    return (type);
}

void        AAnimal::setType(std::string my_type) {
    type = my_type;
}

void    AAnimal::makeSound(void) const {
    std::cout << "\u001b[33m*** an unknown animal noise (scary) ***\u001b[37m" << std::endl;
}