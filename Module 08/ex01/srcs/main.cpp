#include "Span.hpp"
#include <cstdlib>

int main(){
    srand(time(0));
    Span s(100);

    s.addNumber(-1);
    s.addNumber(-3);
    for (int i = 2; i < 99; i++) {
        s.addNumber(0);
    }
    s.addNumber(5);
    std::cout << "Shortest Span " << s.shortestSpan() << std::endl;
    // std::cout << "Longest Span " << s.longestSpan() << std::endl;
}