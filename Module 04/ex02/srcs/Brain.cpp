#include "Brain.hpp"

Brain::Brain(){
    std::cout << "\033[38;5;42m[Brain Default Constructor]\033[37m" << std::endl;
    populateIdeas();
}

Brain::Brain(const Brain& orig) {
    std::cout << "\033[38;5;42m[Brain Copy Constructor]\033[37m" << std::endl;
    if (orig.ideas != NULL) {
        for (int i = 0; i < BRAIN_SIZE; i++) {
            ideas[i] = orig.ideas[i];
        }
    }
}

Brain & Brain::operator=(const Brain& orig) {
    std::cout << "\033[38;5;42m[Brain Assignment Operator]\033[37m" << std::endl;
    if (orig.ideas != NULL) {
        for (int i = 0; i < BRAIN_SIZE; i++) {
            ideas[i] = orig.ideas[i];
        }
    }
    return (*this);
}

Brain::~Brain() {
    std::cout << "\033[38;5;42m[Brain Destructor]\033[37m" << std::endl;
}

void    Brain::populateIdeas(void) {
    for (int i = 0; i < BRAIN_SIZE; i++) {
        std::string temp;
        switch (i % 3) {
            case 0:
                temp = "a";
                break ;
            case 1:
                temp = "b";
                break ;
            case 2:
                temp = "c";
                break ;
        }
        ideas[i] = "Hello " + temp;
    }
}

std::string* Brain::getIdeas(void){
    return (ideas);
}

