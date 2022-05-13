#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
    Form("Presidential Pardon", 25, 5),
    target("Zombie Target") {
}

PresidentialPardonForm::PresidentialPardonForm(std::string& init_target):
    Form("Presidential Pardon", 25, 5),
    target(init_target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& orig):
    Form("Presidential Pardon", 25, 5),
    target(orig.getTarget()) {
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm& orig) {
    target = orig.getTarget();
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

std::string    PresidentialPardonForm::getTarget() const {
    return (target);
}

void            PresidentialPardonForm::execute(Bureaucrat const & executor) const throw(std::exception){
    if (can_execute(executor)) {
        std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
}