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
    return ("\u001b[31mException: Grade too high\u001b[37m");
}
const char* Bureaucrat::GradeTooLowException::what(void) const throw () {
    return ("\u001b[31mException: Grade too low\u001b[37m");
}

void        Bureaucrat::signForm(Form& f) {
    try  {
        f.beSigned(*this);
    } catch (std::exception& ex) {
        std::cout << this->getName() << " couldn't sign " << f.getName() << " because of " << ex.what() << std::endl;
        return ;
    }
    std::cout << this->getName() << " signed " << f.getName() << std::endl;

}