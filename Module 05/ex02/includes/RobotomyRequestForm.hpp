#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm: public Form {
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& orig);
	RobotomyRequestForm &operator=(const RobotomyRequestForm& orig);
	virtual ~RobotomyRequestForm();
	void		execute(Bureaucrat const & executor) const;

private:
	
};

#endif