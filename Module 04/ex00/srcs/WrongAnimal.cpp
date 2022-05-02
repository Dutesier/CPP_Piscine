#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("undefined") {
    std::cout << "\u001b[34m[WrongAnimal Default Constructor]\u001b[37m" << std::endl;
}

WrongAnimal::WrongAnimal(std::string my_type):type(my_type) {
    std::cout << "\u001b[34m[WrongAnimal Default Constructor]\u001b[37m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& orig):type(orig.type) {
    std::cout << "\u001b[34m[WrongAnimal Copy Constructor]\u001b[37m" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal& orig) {
    std::cout << "\u001b[34m[WrongAnimal Assignment Operator]\u001b[37m" << std::endl;
    this->setType(orig.type);
    return (*this);
}

WrongAnimal::~WrongAnimal() {
    std::cout << "\u001b[34m[WrongAnimal Destructor]\u001b[37m" << std::endl;
}

std::string WrongAnimal::getType() const{
    return (type);
}

void        WrongAnimal::setType(std::string my_type) {
    type = my_type;
}

void    WrongAnimal::makeSound(void) const {
    std::cout << "\u001b[34m*** an unknown WRONG animal noise (scary) ***\u001b[37m" << std::endl;
}