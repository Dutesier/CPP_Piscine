#include "Dog.hpp"

Dog::Dog():AAnimal("Dog") {
    std::cout << "\033[31m[Dog Default Constructor]\033[37m" << std::endl;
    my_brain = new Brain();
}

Dog::Dog(const Dog& orig): AAnimal(orig.getType()){
    std::cout << "\033[31m[Dog Copy Constructor]\033[37m" << std::endl;
    my_brain = new Brain();
}

Dog & Dog::operator=(const Dog& orig) {
    std::cout << "\033[31m[Dog Assignment Operator]\033[37m" << std::endl;
    type = orig.getType();
    return (*this);
}

Dog::~Dog() {
    std::cout << "\033[31m[Dog Destructor]\033[37m" << std::endl;
    delete my_brain;
}

void    Dog::makeSound(void) const {
    std::cout << "\033[31m*** a DOG noise (good boy) ***\033[37m" << std::endl;
}

void    Dog::shareThoughts(void){
    for (int i = 0; i < BRAIN_SIZE; i++) {
        std::cout << "I think... " << my_brain->getIdeas()[i] << std::endl;
    }
}