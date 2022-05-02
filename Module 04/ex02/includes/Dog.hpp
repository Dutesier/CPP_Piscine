#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal {
public:
	Dog();
	Dog(const Dog& orig);
	Dog &operator=(const Dog& orig);
	virtual ~Dog();
	void		makeSound(void) const;
	void		shareThoughts(void);

private:
	Brain *my_brain;	
};

#endif