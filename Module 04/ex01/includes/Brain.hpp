#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# ifndef BRAIN_SIZE
#  define BRAIN_SIZE 100
# endif

class Brain {
public:
	Brain();
	Brain(const Brain& orig);
	Brain &operator=(const Brain& orig);
	virtual ~Brain();
	void populateIdeas(void);
	std::string* getIdeas(void);
private:
	std::string ideas[BRAIN_SIZE];

	
};

#endif