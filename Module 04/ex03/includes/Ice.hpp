#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria {
public:
	Ice();
	Ice(const Ice& orig);
	Ice &operator=(const Ice& orig);
	virtual ~Ice();
	AMateria*	clone(void) const;
	void		use(ICharacter& target);
	
};

#endif