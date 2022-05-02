#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string new_name);
	ScavTrap(const ScavTrap& orig);
	ScavTrap &operator=(const ScavTrap& orig);
	virtual ~ScavTrap();
	void	attack(const std::string& target);
	void	guardGate();
	
};

#endif