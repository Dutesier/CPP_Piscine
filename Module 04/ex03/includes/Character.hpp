#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateriaArray.hpp"

class Character: public ICharacter {
public:
	Character(std::string my_name);
	Character(const Character& orig);
	Character &operator=(const Character& orig);
	virtual ~Character();
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
private:
	std::string name;
	AMateria *inventory[4];
	AMateriaArray oldMateria;
	int can_equip(void);
};

#endif