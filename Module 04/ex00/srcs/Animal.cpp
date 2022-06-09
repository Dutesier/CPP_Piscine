#include "Animal.hpp"

Animal::Animal():type("undefined") {
    std::cout << "\033[33m[Animal Default Constructor]\033[37m" << std::endl;
}

Animal::Animal(std::string my_type):type(my_type) {
    std::cout << "\033[33m[Animal Default Constructor]\033[37m" << std::endl;
}

Animal::Animal(const Animal& orig):type(orig.type) {
    std::cout << "\033[33m[Animal Copy Constructor]\033[37m" << std::endl;
}

Animal & Animal::operator=(const Animal& orig) {
    std::cout << "\033[33m[Animal Assignment Operator]\033[37m" << std::endl;
    this->setType(orig.type);
    return (*this);
}

Animal::~Animal() {
    std::cout << "\033[33m[Animal Destructor]\033[37m" << std::endl;
}

std::string Animal::getType() const{
    return (type);
}

void        Animal::setType(std::string my_type) {
    type = my_type;
}

void    Animal::makeSound(void) const {
    std::cout << "\033[33m*** an unknown animal noise (scary) ***\033[37m" << std::endl;
}