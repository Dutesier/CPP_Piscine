#include "Dog.hpp"

Dog::Dog():Animal("Dog") {
    std::cout << "\033[31m[Dog Default Constructor]\033[37m" << std::endl;
}

Dog::Dog(const Dog& orig): Animal(orig.getType()){
    std::cout << "\033[31m[Dog Copy Constructor]\033[37m" << std::endl;
}

Dog & Dog::operator=(const Dog& orig) {
    std::cout << "\033[31m[Dog Assignment Operator]\033[37m" << std::endl;
    Animal(orig.getType());
    return (*this);
}

Dog::~Dog() {
    std::cout << "\033[31m[Dog Destructor]\033[37m" << std::endl;
}

void    Dog::makeSound(void) const {
    std::cout << "\033[31m*** a DOG noise (good boy) ***\033[37m" << std::endl;
}
