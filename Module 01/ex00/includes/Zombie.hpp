#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
public:
	Zombie(std::string my_name);
	Zombie(const Zombie &zombie);
	Zombie &operator=(const Zombie &zombie);
	~Zombie();
	void announce(void);
private:
	std::string name;
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif
