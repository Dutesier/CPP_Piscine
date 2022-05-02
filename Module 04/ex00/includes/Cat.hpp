#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal{
public:
	Cat();
	Cat(const Cat& orig);
	Cat &operator=(const Cat& orig);
	virtual ~Cat();
	void makeSound(void)const;
};

#endif