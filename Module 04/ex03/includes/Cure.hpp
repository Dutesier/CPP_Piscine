#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria {
public:
	Cure();
	Cure(const Cure& orig);
	Cure &operator=(const Cure& orig);
	virtual ~Cure();
	AMateria*	clone(void) const;
	void		use(ICharacter& target);
	
};

#endif