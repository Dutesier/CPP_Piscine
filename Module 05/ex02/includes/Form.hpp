#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
public:
	Form();
	Form(std::string init_name, unsigned int init_req_sign, unsigned int init_req_exec) throw (std::exception);
	Form(const Form& orig);
	Form &operator=(const Form& orig);
	virtual ~Form();

	// Getters
	const std::string	getName() const;
	bool				isFormSigned() const;
	unsigned int		getGradeRequiredSigning() const;
	unsigned int		getGradeRequiredExecuting() const;

	// Setters
	void				beSigned(Bureaucrat& b) throw(std::exception);

	// Methods
	bool				can_execute(Bureaucrat const& executor) const throw(std::exception);
	virtual void		execute(Bureaucrat const & executor) const = 0;

	// Exceptions
	class GradeTooHighException : public std::exception {
	public:
		const char* what(void) const throw ();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char* what(void) const throw ();
	};
	class ExecutingUnsignedFormException : public std::exception {
	public:
		const char* what(void) const throw ();
	};


private:
	const std::string	name;
	bool				is_signed;
	const unsigned int	grade_required_signing;
	const unsigned int	grade_required_executing;
	bool				is_valid(unsigned int grade) throw(std::exception);

};

std::ostream&	operator<<(std::ostream& os, const Form& f);

#endif