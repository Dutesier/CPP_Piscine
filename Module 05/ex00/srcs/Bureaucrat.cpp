#include "Bureaucrat.hpp"

// Orthodox Canonical Class Format
Bureaucrat::Bureaucrat(const std::string init_name, unsigned int init_grade) throw (std::exception):
    name(init_name){
    setGrade(init_grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& orig):
    name(orig.getName()),
    grade(orig.getGrade()) {
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat& orig) {
    grade = orig.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat() {
}


// Getters
const std::string Bureaucrat::getName() const {
    return (name);
}

unsigned int Bureaucrat::getGrade() const {
    return (grade);
}


// Setters
void    Bureaucrat::setGrade(unsigned int new_grade) throw (std::exception) {
    if (new_grade < 1) {
        throw (GradeTooHighException());
    } else if (new_grade > 150) {
        throw (GradeTooLowException());
    } else {
        grade = new_grade;
    }
}


// Operator Overloading
std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureau) {
	out << bureau.getName() << ", bureaucrat grade " << bureau.getGrade() << std::endl;
	return (out);
}

Bureaucrat Bureaucrat::operator++(int) throw(std::exception) {
    // (i++)
    Bureaucrat temp = *this;

    setGrade(getGrade() - 1);
    return (temp);
}
Bureaucrat& Bureaucrat::operator++(void) throw(std::exception) {
    // (++i)
    setGrade(getGrade() - 1);
    return (*this);
}

Bureaucrat Bureaucrat::operator--(int) throw(std::exception) {
    // (i--)
    Bureaucrat temp = *this;

    setGrade(getGrade() + 1);
    return (temp);
}

Bureaucrat& Bureaucrat::operator--(void) throw(std::exception) {
    // (--i)
    setGrade(getGrade() + 1);
    return (*this);
}



// Exceptions
const char* Bureaucrat::GradeTooHighException::what(void) const throw () {
    return ("\033[31mException: Grade can't be higher than 1\033[37m");
}
const char* Bureaucrat::GradeTooLowException::what(void) const throw () {
    return ("\033[31mException: Grade can't be lower than 150\033[37m");
}