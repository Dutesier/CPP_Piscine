#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <cstdlib>

class RobotomyRequestForm: public Form {
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string& init_target);
	RobotomyRequestForm(const RobotomyRequestForm& orig);
	RobotomyRequestForm &operator=(const RobotomyRequestForm& orig);
	virtual ~RobotomyRequestForm();

	std::string	getTarget() const;
	void		execute(Bureaucrat const & executor) const throw(std::exception);
private:
	std::string	target;

};

#endif