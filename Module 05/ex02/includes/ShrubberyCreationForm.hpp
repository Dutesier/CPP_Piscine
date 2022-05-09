#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm: public Form {
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm& orig);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm& orig);
	virtual ~ShrubberyCreationForm();
	void		execute(Bureaucrat const & executor) const;
private:
	
};

#endif