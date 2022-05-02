#include "Animal.hpp"

Animal::Animal():type("undefined") {
    std::cout << "\u001b[33m[Animal Default Constructor]\u001b[37m" << std::endl;
}

Animal::Animal(std::string my_type):type(my_type) {
    std::cout << "\u001b[33m[Animal Default Constructor]\u001b[37m" << std::endl;
}

Animal::Animal(const Animal& orig):type(orig.type) {
    std::cout << "\u001b[33m[Animal Copy Constructor]\u001b[37m" << std::endl;
}

Animal & Animal::operator=(const Animal& orig) {
    std::cout << "\u001b[33m[Animal Assignment Operator]\u001b[37m" << std::endl;
    this->setType(orig.type);
    return (*this);
}

Animal::~Animal() {
    std::cout << "\u001b[33m[Animal Destructor]\u001b[37m" << std::endl;
}

std::string Animal::getType() const{
    return (type);
}

void        Animal::setType(std::string my_type) {
    type = my_type;
}

void    Animal::makeSound(void) const {
    std::cout << "\u001b[33m*** an unknown animal noise (scary) ***\u001b[37m" << std::endl;
}