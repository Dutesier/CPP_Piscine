#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <Form.hpp>
class Form;

class Bureaucrat {
public:
	// Orthodox Canonical Class Format
	Bureaucrat(const std::string init_name, unsigned int init_grade) throw (std::exception);
	Bureaucrat(const Bureaucrat& orig);
	Bureaucrat &operator=(const Bureaucrat& orig);
	virtual ~Bureaucrat();

	// Getters
	const std::string getName(void) const;
	unsigned int getGrade(void) const;

	// Setters
	void	setGrade(unsigned int new_grade) throw(std::exception);

	// Operator Overloading
	Bureaucrat operator++(int) throw(std::exception); // (i++)
	Bureaucrat& operator++(void) throw(std::exception); // (++i)
	Bureaucrat operator--(int) throw(std::exception); // (i--)
	Bureaucrat& operator--(void) throw(std::exception); // (--i)

	// Exceptions
	class GradeTooHighException : public std::exception {
	public:
		const char* what(void) const throw ();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char* what(void) const throw ();
	};

	// Method
	void	signForm(Form& f);

private:
	const std::string	name;
	unsigned int		grade;

	void	valid_grade(unsigned int new_grade) throw(std::exception);
	
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureau);

#endif