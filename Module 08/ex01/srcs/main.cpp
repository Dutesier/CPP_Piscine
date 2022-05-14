#include "Span.hpp"
#include <cstdlib>

int main(){
    srand(time(0));
    Span s(100);

 
    for (int i = 0; i < 100; i++) {
        s.addNumber(rand() % 100);
    }
    std::cout << "Shortest Span " << s.shortestSpan() << std::endl;
    std::cout << "Longest Span " << s.longestSpan() << std::endl;


    Span j(0);

    try {
        j.addNumber(42);
    } catch (std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }

    Span x(2);

    try {
        x.addNumber(42);
        x.addNumber(42);
        x.addNumber(42);
    } catch (std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }

    Span n(5);

    try {
        n.addNumber(-10);
        n.addNumber(-6);
        n.addNumber(-5);
        n.addNumber(-4);
        n.addNumber(-2);
        std::cout << "Shortest Span " << n.shortestSpan() << std::endl;
        std::cout << "Longest Span " << n.longestSpan() << std::endl;

    } catch (std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }
}