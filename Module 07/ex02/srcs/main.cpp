#include <iostream>
#include "Array.hpp"


int main() {

    Array<int> a(10);
    Array<int> b = a;
    Array<int> c(b);

    
    for (unsigned int i = 0; i <= a.size(); i++) {
        try {
            std::cout << a[i] << std::endl;
        } catch (std::exception& ex) {
            std::cout << ex.what() << std::endl;
        }
    }
    try {
        std::cout << a[-1] << std::endl;
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    
}
