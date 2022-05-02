#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
public:
	Animal();
	Animal(std::string my_type);
	Animal(const Animal& orig);
	Animal &operator=(const Animal& orig);
	virtual ~Animal();
	std::string			getType(void) const;
	void				setType(std::string my_type);
	virtual void		makeSound(void)const;

protected:
	std::string type;
	
};

#endif