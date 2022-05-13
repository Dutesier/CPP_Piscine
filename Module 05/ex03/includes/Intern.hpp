#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern {
public:
	Intern();
	Intern(const Intern& orig);
	Intern &operator=(const Intern& orig);
	virtual ~Intern();

	Form* makeForm(std::string name, std::string target);
	Form* buildPPF(std::string target);
	Form* buildSCF(std::string target);
	Form* buildRRF(std::string target);

private:
	std::string forms[3];
	Form* (Intern::*builders[3])(std::string);
};

#endif