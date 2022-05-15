#include "Span.hpp"

Span::Span(unsigned int n):
    size(n){
    try {
        data.reserve(n);
    } catch (std::exception& ex) {
        std::cerr << "Could not allocate enough memory" << std::endl;
    }
}

Span::Span(const Span& orig):    
    size(orig.size),
    data(orig.data) {
}

Span & Span::operator=(const Span& orig) {
    if (this != &orig) {
        size = orig.size;
        data = orig.data;
    }
    return (*this);
}

Span::~Span() {
}

void    Span::addNumber(int num) {
    if (data.size() >= size) {
        throw std::exception();
    }
    data.push_back(num);
}

int     Span::shortestSpan(void) {
    if (data.size() <= 1)
        throw std::exception();
    
    std::vector<int> diff = data;
    std::sort(data.begin(), data.end());
    std::adjacent_difference(data.begin(), data.end(), diff.begin());
    *diff.begin() = INT_MAX;
    // std::cout << "\nDEBUGGING" << std::endl;
    // std::vector<int>::iterator j = data.begin();
    for (std::vector<int>::iterator i = diff.begin(); i < diff.end(); i++) {
        if (*i < 0) {
            *i = *i * -1;
        }
        // std::cout << "Data: " << *j << std::endl << " Diff: " << *i << " " << std::endl;
        // j++;
    }
    // std::cout << "\n Finished DEBUGGING" << std::endl;
    return *(std::min_element(diff.begin(), diff.end()));
}

int     Span::longestSpan(void) {
    if (data.size() <= 1)
        throw std::exception();
    
    return (*std::max_element(data.begin(), data.end()) - *std::min_element(data.begin(), data.end()));
}

void Span::addMultipleNumbers(std::vector<int>::iterator b, std::vector<int>::iterator e) {
    try {
        for (std::vector<int>::iterator i = b; i < e; i++){
            addNumber(rand());
        }
    } catch (std::exception &ex) {
        std::cerr << "Reached span max size, stopping now" << std::endl;
    }
}

unsigned int Span::getDataSize(void) {
    return (data.size());
}