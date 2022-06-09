#include "Form.hpp"

// Purposefully not allowing for credential duplication (i.e. we cant copy somehting that is signed and have it be signed too)
Form::Form():
    name("Zombie Form"),
    is_signed(false),
    grade_required_signing(1),
    grade_required_executing(1){
}

Form::Form(std::string init_name, unsigned int init_req_sign, unsigned int init_req_exec) throw (std::exception):
    name(init_name),
    is_signed(false),
    grade_required_signing(init_req_sign),
    grade_required_executing(init_req_exec) {
    is_valid(init_req_sign);
    is_valid(init_req_exec);
}

Form::Form(const Form& orig):
    name(orig.getName()),
    is_signed(false),
    grade_required_signing(orig.getGradeRequiredSigning()),
    grade_required_executing(orig.getGradeRequiredExecuting()) {
}

Form & Form::operator=(const Form& orig) {
    orig.isFormSigned();
    return (*this);
}

Form::~Form() {
}

// Getters
const std::string	Form::getName() const {
    return (name);
}

bool				Form::isFormSigned() const {
    return (is_signed);
}

unsigned int	Form::getGradeRequiredSigning() const {
    return (grade_required_signing);
}

unsigned int	Form::getGradeRequiredExecuting() const {
    return (grade_required_executing);
}


// Setters
void				Form::beSigned(Bureaucrat& b) throw(std::exception){
    unsigned int level = b.getGrade();

    if (level > getGradeRequiredSigning()) {
        throw GradeTooLowException();
    } else {
        is_signed = true;
    }
}


// Exceptions
const char* Form::GradeTooHighException::what(void) const throw () {
    return ("\033[31mGrade too high\033[37m");
}
const char* Form::GradeTooLowException::what(void) const throw () {
    return ("\033[31mGrade too low\033[37m");
}

bool        Form::is_valid(unsigned int grade) throw(std::exception){
    if (grade < 1) {
        throw GradeTooHighException();
    } else if (grade > 150) {
        throw GradeTooLowException();
    } else {
        return true;
    }
}

std::ostream&	operator<<(std::ostream& os, const Form& f) {
    os << "Form: " << f.getName() << std::endl
        << "Is Signed: " << f.isFormSigned() << std::endl 
        << "Grade Required Signing: " << f.getGradeRequiredSigning() << std::endl 
        << "Grade Required Executing: " << f.getGradeRequiredExecuting() << std::endl; 
    return (os);
}
