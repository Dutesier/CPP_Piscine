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

    std::vector<int>d;
    Span t(10000);
    try {
        for (int i = 0; i < 10000; i++) {
            d.push_back(42);
        }
    } catch (std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }
    std::cout << "t is of size " << t.getDataSize() << std::endl;
    t.addMultipleNumbers(d.begin(), d.end());
    std::cout << "t is of size " << t.getDataSize() << std::endl;

    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
}