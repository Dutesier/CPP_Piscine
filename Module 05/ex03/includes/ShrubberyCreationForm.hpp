#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm: public Form {
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string& init_target);
	ShrubberyCreationForm(const ShrubberyCreationForm& orig);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm& orig);
	virtual ~ShrubberyCreationForm();

	std::string	getTarget() const;
	void		execute(Bureaucrat const & executor) const throw(std::exception);
private:
	std::string	target;

};

#endif