#include "Base.hpp"
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {
}

Base* generate(void) {
    int i = rand();
    if (i % 3 == 0) {
        return (new A);
    } else if (i % 3 == 1) {
        return (new B);
    }
    return (new C);
}

void identify(Base* p) {
    // Downcasting
    if (dynamic_cast<A*>(p) != NULL) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p) != NULL) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p) != NULL) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Unknown type!" << std::endl;
    }
}

void identify(Base& p) {
    // Since we cant check if an object instance is not null we need to catch exceptions
	try {
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
        return ;
	} catch (std::exception& e) {}
	try {
		dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
        return ;
	} catch (std::exception& e) {}
	try {
		dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
        return ;
	} catch (std::exception& e) {
        std::cout << "Unknown type" << std::endl;
    }

}