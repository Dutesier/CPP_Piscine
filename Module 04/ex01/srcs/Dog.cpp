#include "Dog.hpp"

Dog::Dog():Animal("Dog") {
    std::cout << "\u001b[31m[Dog Default Constructor]\u001b[37m" << std::endl;
    my_brain = new Brain();
}

Dog::Dog(const Dog& orig): Animal(orig.getType()){
    std::cout << "\u001b[31m[Dog Copy Constructor]\u001b[37m" << std::endl;
    my_brain = new Brain();
}

Dog & Dog::operator=(const Dog& orig) {
    std::cout << "\u001b[31m[Dog Assignment Operator]\u001b[37m" << std::endl;
    Animal(orig.getType());
    return (*this);
}

Dog::~Dog() {
    std::cout << "\u001b[31m[Dog Destructor]\u001b[37m" << std::endl;
    delete my_brain;
}

void    Dog::makeSound(void) const {
    std::cout << "\u001b[31m*** a DOG noise (good boy) ***\u001b[37m" << std::endl;
}

void    Dog::shareThoughts(void){
    for (int i = 0; i < BRAIN_SIZE; i++) {
        std::cout << "I think... " << my_brain->getIdeas()[i] << std::endl;
    }
}