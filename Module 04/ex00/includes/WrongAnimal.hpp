#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(std::string my_type);
	WrongAnimal(const WrongAnimal& orig);
	WrongAnimal &operator=(const WrongAnimal& orig);
	virtual ~WrongAnimal();
	std::string	getType(void) const;
	void		setType(std::string my_type);
	void		makeSound(void)const;

protected:
	std::string type;
	
};

#endif