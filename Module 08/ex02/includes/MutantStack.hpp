#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template<typename T>
class MutantStack: public std::stack<T>{
public:
    MutantStack() {};
    MutantStack(const MutantStack& orig) {
        *this = orig;
    }
    MutantStack& operator=(const MutantStack& orig) {
        std::stack<T>::operator=(orig);
        return (*this);
    }
    ~MutantStack(){}

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin(void){
        return (std::stack<T>::c.begin());
    }
    iterator end(void){
        return (std::stack<T>::c.end());
    }
};


#endif