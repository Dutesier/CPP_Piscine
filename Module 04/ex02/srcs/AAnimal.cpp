#include "AAnimal.hpp"

AAnimal::AAnimal():type("undefined") {
    std::cout << "\033[33m[AAnimal Default Constructor]\033[37m" << std::endl;
}

AAnimal::AAnimal(std::string my_type):type(my_type) {
    std::cout << "\033[33m[AAnimal Default Constructor]\033[37m" << std::endl;
}

AAnimal::AAnimal(const AAnimal& orig):type(orig.type) {
    std::cout << "\033[33m[AAnimal Copy Constructor]\033[37m" << std::endl;
}

AAnimal & AAnimal::operator=(const AAnimal& orig) {
    std::cout << "\033[33m[AAnimal Assignment Operator]\033[37m" << std::endl;
    this->setType(orig.type);
    return (*this);
}

AAnimal::~AAnimal() {
    std::cout << "\033[33m[AAnimal Destructor]\033[37m" << std::endl;
}

std::string AAnimal::getType() const{
    return (type);
}

void        AAnimal::setType(std::string my_type) {
    type = my_type;
}

void    AAnimal::makeSound(void) const {
    std::cout << "\033[33m*** an unknown animal noise (scary) ***\033[37m" << std::endl;
}