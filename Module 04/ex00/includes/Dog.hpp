#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal {
public:
	Dog();
	Dog(const Dog& orig);
	Dog &operator=(const Dog& orig);
	virtual ~Dog();
	void		makeSound(void) const;

private:
	
};

#endif