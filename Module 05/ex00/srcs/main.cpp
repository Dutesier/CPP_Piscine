#include <iostream>
#include "Bureaucrat.hpp"

int main(void) {
    std::string name;
    name = "b";
    Bureaucrat b(name, 10);
    Bureaucrat c(b);
    Bureaucrat d = b;
    std::cout << "\033[42;1m" << "Testing Canonical Orthodox Format" << "\033[0m" << std::endl;
    std::cout << b;
    std::cout << c;
    std::cout << d;
    std::cout << "\033[42;1m" << "Testing instantiations" << "\033[0m" << std::endl;
    try {
        std::string name = "a";
        std::cout << "Instantiating Bureaucrat a(name, 0)" << std::endl;
        Bureaucrat a(name, 0);
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    try {
        std::string name = "a";
        std::cout << "Instantiating Bureaucrat a(name, -1)" << std::endl;
        Bureaucrat a(name, -1);
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    try {
        std::string name = "a";
        std::cout << "Instantiating Bureaucrat a(name, 151)" << std::endl;
        Bureaucrat a(name, 151);
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

    std::cout << "\033[42;1m" << "Testing increments" << "\033[0m" << std::endl;
    try {
        std::string name = "a";
        Bureaucrat a(name, 1);
        std::cout << "------>Test" << std::endl << a << "Incrementing a: (a++)" << std::endl;
        std::cout << a++ << std::endl;
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    try {
        std::string name = "a";
        Bureaucrat a(name, 2);
        std::cout << "------>Test" << std::endl << a << "Incrementing a: (a++)" << std::endl;
        std::cout << a++ << std::endl;
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    try {
        std::string name = "a";
        Bureaucrat a(name, 1);
        std::cout << "------>Test" << std::endl << a << "Incrementing a: (++a)" << std::endl;
        std::cout << ++a << std::endl;
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    try {
        std::string name = "a";
        Bureaucrat a(name, 2);
        std::cout << "------>Test" << std::endl << a << "Incrementing a: (++a)" << std::endl;
        std::cout << ++a << std::endl;
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

    std::cout << "\033[42;1m" << "Testing decrements" << "\033[0m" << std::endl;
    try {
        std::string name = "a";
        Bureaucrat a(name, 150);
        std::cout << "------>Test" << std::endl << a << "Decrementing a: (a--)" << std::endl;
        std::cout << a-- << std::endl;
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    try {
        std::string name = "a";
        Bureaucrat a(name, 149);
        std::cout << "------>Test" << std::endl << a << "Decrementing a: (a--)" << std::endl;
        std::cout << a-- << std::endl;
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    try {
        std::string name = "a";
        Bureaucrat a(name, 150);
        std::cout << "------>Test" << std::endl << a << "Decrementing a: (--a)" << std::endl;
        std::cout << --a << std::endl;
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    try {
        std::string name = "a";
        Bureaucrat a(name, 149);
        std::cout << "------>Test" << std::endl << a << "Decrementing a: (--a)" << std::endl;
        std::cout << --a << std::endl;
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    std::cout << "\033[42;1m" << "---> Finished Testing <---" << "\033[0m" << std::endl;


    return (0);
}