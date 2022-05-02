#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal{
public:
	Cat();
	Cat(const Cat& orig);
	Cat &operator=(const Cat& orig);
	virtual ~Cat();
	void makeSound(void)const;
	void shareThoughts(void);
private:
	Brain *my_brain;
};



#endif