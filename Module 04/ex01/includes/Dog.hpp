#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"


class Dog: public Animal {
public:
	Dog();
	Dog(const Dog& orig);
	Dog &operator=(const Dog& orig);
	virtual ~Dog();
	void		makeSound(void) const;
	void shareThoughts(void);

private:
	Brain *my_brain;	
};

#endif