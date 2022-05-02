#include "Cat.hpp"

Cat::Cat():Animal("Cat") {
    std::cout << "\u001b[32m[Cat Default Constructor]\u001b[37m" << std::endl;
}

Cat::Cat(const Cat& orig): Animal(orig.getType()){
    std::cout << "\u001b[32m[Cat Copy Constructor]\u001b[37m" << std::endl;
}

Cat & Cat::operator=(const Cat& orig) {
    std::cout << "\u001b[32m[Cat Assignment Operator]\u001b[37m" << std::endl;
    Animal(orig.getType());
    return (*this);
}

Cat::~Cat() {
    std::cout << "\u001b[32m[Cat Destructor]\u001b[37m" << std::endl;
}

void    Cat::makeSound(void) const {
    std::cout << "\u001b[32m*** a CAT noise (gtfo) ***\u001b[37m" << std::endl;
}
