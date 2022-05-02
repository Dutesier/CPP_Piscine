#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "iostream"
# include <stdlib.h>


class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string new_name);
	ClapTrap(const ClapTrap& orig);
	ClapTrap &operator=(const ClapTrap& orig);
	virtual ~ClapTrap();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	printStats();
	void	setName(std::string new_name);

protected:
	std::string		name;
	unsigned int	hit_points;
	unsigned int	energy_points;
	int				attack_damage;
	std::string		species;

};

#endif