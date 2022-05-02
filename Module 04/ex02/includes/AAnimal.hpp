#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal {
public:
	AAnimal();
	AAnimal(std::string my_type);
	AAnimal(const AAnimal& orig);
	AAnimal &operator=(const AAnimal& orig);
	virtual ~AAnimal();
	std::string			getType(void) const;
	void				setType(std::string my_type);
	virtual void		makeSound(void)const = 0;
	virtual void 		shareThoughts(void) = 0;

protected:
	std::string type;
	
};

#endif