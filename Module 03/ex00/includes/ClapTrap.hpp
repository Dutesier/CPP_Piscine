#ifndef CLAPTRAP_HPP
#	define CLAPTRAP_HPP

#	include "iostream"

class ClapTrap {
public:
	ClapTrap(std::string new_name);
	ClapTrap(const ClapTrap& orig);
	ClapTrap &operator=(const ClapTrap& orig);
	virtual ~ClapTrap();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

private:
	std::string		name;
	unsigned int	hit_points;
	unsigned int	energy_points;
	int				attack_damage;

};

#endif