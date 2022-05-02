#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int TestShallowVsDeepCopies(void) {
    std::cout << "Testing for Shallow vs Deep copies" << std::endl;
    Cat *my_cat = new Cat;
    my_cat->shareThoughts();
    Cat my_other_cat(*my_cat);
    delete my_cat;
    my_other_cat.shareThoughts();
    return (0);
}

int TestSubject(void) {
    std::cout << "Testing like the Subject" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    return 0;
}

int TestCatWithToughts(void) {
    Animal* animals[BRAIN_SIZE];
    for (int i = 0; i < BRAIN_SIZE; i++) {
        animals[i] = new Cat;
    }
    for (int i = 0; i < BRAIN_SIZE; i++) {
        animals[i]->makeSound();
        static_cast<Cat *>(animals[i])->shareThoughts();
    }
    for (int i = 0; i < BRAIN_SIZE; i++) {
        delete animals[i];
    }
    std::cout << "\u001b[42;1m" <<"***** Finished Cat with Testing *****" << "\u001b[0m" << std::endl;
    return (0);
}

int TestAnimalsWithBrains(void){
    Animal* animals[BRAIN_SIZE];
    for (int i = 0; i < BRAIN_SIZE; i++) {
        if (i % 2)
            animals[i] = new Cat;
        else
            animals[i] = new Dog;
    }
    for (int i = 0; i < BRAIN_SIZE; i++) {
        animals[i]->makeSound();
    }
    for (int i = 0; i < BRAIN_SIZE; i++) {
        delete animals[i];
    }
    return (0);
}

int main(void) {
    if (TestShallowVsDeepCopies()) {
        std::cout << "\u001b[41;1m" <<"***** Failed Copy Testing *****" << "\u001b[0m" << std::endl;
    } else {
        std::cout << "\u001b[42;1m" <<"***** Passed Copy Testing *****" << "\u001b[0m" << std::endl;
    }

    if (TestSubject()) {
        std::cout << "\u001b[41;1m" <<"***** Failed Subject Testing *****" << "\u001b[0m" << std::endl;
    } else {
        std::cout << "\u001b[42;1m" <<"***** Passed Subject Testing *****" << "\u001b[0m" << std::endl;
    }

    if (TestCatWithToughts()) {
        std::cout << "\u001b[41;1m" <<"***** Failed Cat Sharing Thoughts Testing *****" << "\u001b[0m" << std::endl;
    } else {
        std::cout << "\u001b[42;1m" <<"***** Passed Cat Sharing Thoughts Testing *****" << "\u001b[0m" << std::endl;
    }

    if (TestAnimalsWithBrains()) {
        std::cout << "\u001b[41;1m" <<"***** Failed Cat & Dogs Testing *****" << "\u001b[0m" << std::endl;
    } else {
        std::cout << "\u001b[42;1m" <<"***** Passed Cat & Dogs Testing *****" << "\u001b[0m" << std::endl;
    }





    std::cout << "\u001b[42;1m" <<"***** Finished Testing *****" << "\u001b[0m" << std::endl;




    return (0);
}