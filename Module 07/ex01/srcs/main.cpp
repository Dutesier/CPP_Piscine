#include <iostream>
#include "iter.hpp"

void add_one(int& i) {
    i++;
}

void add_one(char& i) {
    i++;
}

int main() {
    {
        std::cout << std::endl << "\033[33;1m" << "---> Testing Int Array <---" << "\033[37m" << std::endl;
        int array[] = {0, 1, 2, 3};
        std::cout << "Initial Array" << std::endl;
        for (int i = 0; i < 4; i++) {
            std::cout << array[i] << std::endl;
        }
        iter(array, 4, &add_one);
        std::cout << "After Iter" << std::endl;
        for (int i = 0; i < 4; i++) {
            std::cout << array[i] << std::endl;
        }
    }
    {
        std::cout << std::endl << "\033[33;1m" << "---> Testing Char Array <---" << "\033[37m" << std::endl;
        char array[] = "abcd";
        std::cout << "Initial Array" << std::endl;
        for (int i = 0; i < 4; i++) {
            std::cout << array[i] << std::endl;
        }
        iter(array, 4, &add_one);
        std::cout << "After Iter" << std::endl;
        for (int i = 0; i < 4; i++) {
            std::cout << array[i] << std::endl;
        }
    }
}
