#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main() {
    std::cout << "Testing Mutant Stack vs ---List" << std::endl;
    MutantStack<int> mstack;
    std::list<int> list;

    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;

    list.push_back(5);
    list.push_back(17);
    std::cout << "---" << list.back() << std::endl;

    mstack.pop();
    std::cout << mstack.size() << std::endl;

    list.pop_back();
    std::cout << "---" << list.size() << std::endl;

    {   
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    {
        list.push_back(3);
        list.push_back(5);
        list.push_back(737);
        list.push_back(0);
        std::list<int>::iterator it = list.begin();
        std::list<int>::iterator ite = list.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << "---" << *it << std::endl;
            ++it;
        }
        // std::stack<int> s(list);
    }
    return 0;
}  