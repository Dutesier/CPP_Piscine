#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("undefined") {
    std::cout << "\033[34m[WrongAnimal Default Constructor]\033[37m" << std::endl;
}

WrongAnimal::WrongAnimal(std::string my_type):type(my_type) {
    std::cout << "\033[34m[WrongAnimal Default Constructor]\033[37m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& orig):type(orig.type) {
    std::cout << "\033[34m[WrongAnimal Copy Constructor]\033[37m" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal& orig) {
    std::cout << "\033[34m[WrongAnimal Assignment Operator]\033[37m" << std::endl;
    this->setType(orig.type);
    return (*this);
}

WrongAnimal::~WrongAnimal() {
    std::cout << "\033[34m[WrongAnimal Destructor]\033[37m" << std::endl;
}

std::string WrongAnimal::getType() const{
    return (type);
}

void        WrongAnimal::setType(std::string my_type) {
    type = my_type;
}

void    WrongAnimal::makeSound(void) const {
    std::cout << "\033[34m*** an unknown WRONG animal noise (scary) ***\033[37m" << std::endl;
}