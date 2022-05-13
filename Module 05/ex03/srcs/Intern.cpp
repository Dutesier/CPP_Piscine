#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern() {
    forms[0] = "presidential pardon";
    forms[1] = "shrubbery creation";
    forms[2] = "robotomy request";
    builders[0] = &Intern::buildPPF;
    builders[1] = &Intern::buildSCF;
    builders[2] = &Intern::buildRRF;
}

Intern::Intern(const Intern& orig) {
    if (&orig != this) {
        forms[0] = "presidential pardon";
        forms[1] = "shrubbery creation";
        forms[2] = "robotomy request";
        builders[0] = &Intern::buildPPF;
        builders[1] = &Intern::buildSCF;
        builders[2] = &Intern::buildRRF;
    }
}

Intern & Intern::operator=(const Intern& orig) {
    if (&orig != this) {
        forms[0] = "presidential pardon";
        forms[1] = "shrubbery creation";
        forms[2] = "robotomy request";
        builders[0] = &Intern::buildPPF;
        builders[1] = &Intern::buildSCF;
        builders[2] = &Intern::buildRRF;
    }
    return (*this);
}

Intern::~Intern() {
}

Form*   Intern::makeForm(std::string name, std::string target) {
    for (int i = 0; i < 3; i++) {
        if (name == forms[i]) {
            std::cout << "Intern created form " << name << std::endl;
            return ((this->*builders[i])(target));
        }
    }

    std::cout << "Hmm, I can't find your request for form " << name << "... Did you file form 28B in advance?" << std::endl;
    return (0);
}

Form*   Intern::buildPPF(std::string target) {
    return (new PresidentialPardonForm(target));
}

Form*   Intern::buildSCF(std::string target) {    
    return (new ShrubberyCreationForm(target));
}

Form*   Intern::buildRRF(std::string target) {    
    return (new RobotomyRequestForm(target));
}