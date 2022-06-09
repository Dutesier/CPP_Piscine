#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"



int TestAAnimalsWithToughts(void) {
    AAnimal* animals[BRAIN_SIZE];
    for (int i = 0; i < BRAIN_SIZE; i++) {
        if (i % 2)
            animals[i] = new Cat;
        else
            animals[i] = new Dog;
    }
    for (int i = 0; i < BRAIN_SIZE; i++) {
        animals[i]->makeSound();
        (animals[i])->shareThoughts();
    }
    for (int i = 0; i < BRAIN_SIZE; i++) {
        delete animals[i];
    }
    std::cout << "\033[42;1m" <<"***** Finished Animals Thoughts and Sounds Testing *****" << "\033[0m" << std::endl;
    return (0);
}


int main(void) {
    

    if (TestAAnimalsWithToughts()) {
        std::cout << "\033[41;1m" <<"***** Failed Animals Thoughts and Sounds Testing *****" << "\033[0m" << std::endl;
    } else {
        std::cout << "\033[42;1m" <<"***** Passed Animals Thoughts and Sounds Testing *****" << "\033[0m" << std::endl;
    }

    std::cout << "\033[42;1m" <<"***** Finished Testing *****" << "\033[0m" << std::endl;




    return (0);
}