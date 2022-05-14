#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750
int main() {
    {
        Array<int> numbers(MAX_VAL);
        int* mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            numbers[i] = value;
            mirror[i] = value;
        }
        //SCOPE
        {
            Array<int> tmp = numbers;
            Array<int> test(tmp);
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
        try
        {
            numbers[-2] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand();
        }
        delete [] mirror;//
        
    }

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
