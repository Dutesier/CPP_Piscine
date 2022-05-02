#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>


class ICharacter;

// Complete the definition of the following AMateria class and implement the necessary
// member functions.

class AMateria {
public:
	AMateria(std::string const & type);
	AMateria(const AMateria& orig);
	AMateria& operator=(const AMateria& orig);
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual ~AMateria();
	virtual void use(ICharacter& target);

protected:
	std::string type;
private:
	
};

#endif