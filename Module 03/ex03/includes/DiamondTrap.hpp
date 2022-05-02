#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap{
public:
	DiamondTrap(std::string my_name);
	// DiamondTrap(const DiamondTrap& orig);
	// DiamondTrap &operator=(const DiamondTrap& orig);
	virtual ~DiamondTrap();
	// void whoAmI(void);
private:
	std::string name;
	
};

#endif