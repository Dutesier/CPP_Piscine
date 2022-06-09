#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat") {
    std::cout << "\033[35m[WrongCat Default Constructor]\033[37m" << std::endl;
}

WrongCat::WrongCat(const WrongCat& orig): WrongAnimal(orig.getType()){
    std::cout << "\033[35m[WrongCat Copy Constructor]\033[37m" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat& orig) {
    std::cout << "\033[35m[WrongCat Assignment Operator]\033[37m" << std::endl;
    WrongAnimal(orig.getType());
    return (*this);
}

WrongCat::~WrongCat() {
    std::cout << "\033[35m[WrongCat Destructor]\033[37m" << std::endl;
}

void    WrongCat::makeSound(void) const {
    std::cout << "\033[35m*** a CAT noise (gtfo) ***\033[37m" << std::endl;
}
