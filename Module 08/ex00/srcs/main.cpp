#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <iostream>
#include "easyfind.hpp"

int main(){
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    try {
        std::cout << *easyfind(v, 4) << std::endl;
    } catch (std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }
    try {
        std::cout << *easyfind(v, 1) << std::endl;
    } catch (std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }
    try {
        std::cout << *easyfind(v, 3) << std::endl;
    } catch (std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }

    std::list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    try {
        std::cout << *easyfind(l, 4) << std::endl;
    } catch (std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }
    try {
        std::cout << *easyfind(l, 1) << std::endl;
    } catch (std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }
    try {
        std::cout << *easyfind(l, 3) << std::endl;
    } catch (std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }
}