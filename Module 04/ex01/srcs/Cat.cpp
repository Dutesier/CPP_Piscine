#include "Cat.hpp"

Cat::Cat():Animal("Cat") {
    std::cout << "\033[32m[Cat Default Constructor]\033[37m" << std::endl;
    my_brain = new Brain();
}

Cat::Cat(const Cat& orig): Animal(orig.getType()){
    std::cout << "\033[32m[Cat Copy Constructor]\033[37m" << std::endl;
    my_brain = new Brain();
}

Cat & Cat::operator=(const Cat& orig) {
    std::cout << "\033[32m[Cat Assignment Operator]\033[37m" << std::endl;
    Animal(orig.getType());
    return (*this);
}

Cat::~Cat() {
    std::cout << "\033[32m[Cat Destructor]\033[37m" << std::endl;
    delete my_brain;
}

void    Cat::makeSound(void) const {
    std::cout << "\033[32m*** a CAT noise (gtfo) ***\033[37m" << std::endl;
}

void    Cat::shareThoughts(void){
    for (int i = 0; i < BRAIN_SIZE; i++) {
        std::cout << "I think... " << my_brain->getIdeas()[i] << std::endl;
    }
}
