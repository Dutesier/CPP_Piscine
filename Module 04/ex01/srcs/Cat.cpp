#include "Cat.hpp"

Cat::Cat():Animal("Cat") {
    std::cout << "\u001b[32m[Cat Default Constructor]\u001b[37m" << std::endl;
    my_brain = new Brain();
}

Cat::Cat(const Cat& orig): Animal(orig.getType()){
    std::cout << "\u001b[32m[Cat Copy Constructor]\u001b[37m" << std::endl;
    my_brain = new Brain();
}

Cat & Cat::operator=(const Cat& orig) {
    std::cout << "\u001b[32m[Cat Assignment Operator]\u001b[37m" << std::endl;
    Animal(orig.getType());
    return (*this);
}

Cat::~Cat() {
    std::cout << "\u001b[32m[Cat Destructor]\u001b[37m" << std::endl;
    delete my_brain;
}

void    Cat::makeSound(void) const {
    std::cout << "\u001b[32m*** a CAT noise (gtfo) ***\u001b[37m" << std::endl;
}

void    Cat::shareThoughts(void){
    for (int i = 0; i < BRAIN_SIZE; i++) {
        std::cout << "I think... " << my_brain->getIdeas()[i] << std::endl;
    }
}
