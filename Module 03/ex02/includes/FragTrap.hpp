#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
	FragTrap(std::string my_name);
	FragTrap(const FragTrap& orig);
	FragTrap &operator=(const FragTrap& orig);
	virtual ~FragTrap();
	void highFivesGuys(void);

};

#endif