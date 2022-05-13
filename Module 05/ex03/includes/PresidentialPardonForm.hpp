#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm: public Form {
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string& init_target);
	PresidentialPardonForm(const PresidentialPardonForm& orig);
	PresidentialPardonForm &operator=(const PresidentialPardonForm& orig);
	virtual ~PresidentialPardonForm();

	std::string	getTarget() const;
	void		execute(Bureaucrat const & executor) const throw(std::exception);
private:
	std::string	target;

};

#endif