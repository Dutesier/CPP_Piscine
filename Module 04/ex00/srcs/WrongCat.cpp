#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat") {
    std::cout << "\u001b[35m[WrongCat Default Constructor]\u001b[37m" << std::endl;
}

WrongCat::WrongCat(const WrongCat& orig): WrongAnimal(orig.getType()){
    std::cout << "\u001b[35m[WrongCat Copy Constructor]\u001b[37m" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat& orig) {
    std::cout << "\u001b[35m[WrongCat Assignment Operator]\u001b[37m" << std::endl;
    WrongAnimal(orig.getType());
    return (*this);
}

WrongCat::~WrongCat() {
    std::cout << "\u001b[35m[WrongCat Destructor]\u001b[37m" << std::endl;
}

void    WrongCat::makeSound(void) const {
    std::cout << "\u001b[35m*** a CAT noise (gtfo) ***\u001b[37m" << std::endl;
}
