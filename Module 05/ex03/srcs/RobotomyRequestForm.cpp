#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
    Form("Robotomy Request", 72, 45),
    target("Zombie Target") {
}

RobotomyRequestForm::RobotomyRequestForm(std::string& init_target):
    Form("Robotomy Request", 72, 45),
    target(init_target) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& orig):
    Form("Robotomy Request", 72, 45),
    target(orig.getTarget()) {
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm& orig) {
    target = orig.getTarget();
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

std::string    RobotomyRequestForm::getTarget() const {
    return (target);
}

void            RobotomyRequestForm::execute(Bureaucrat const & executor) const throw(std::exception){
    if (can_execute(executor)) {
        int run = rand();
        if (run % 2) {
            std::cout << "HRRRRRRRRMPHHHH... Uh oh... Was this piece supposed to be left out?" << std::endl;
            std::cout << "\033[35;1m" << "[Robotomy Failed]" << "\033[37;1m" << std::endl;
        } else {
            std::cout << "HRRRRRRRRMPHHHH... Good as new!" << std::endl;
            std::cout << "\033[36;1m" << "[Robotomy Success]" << "\033[37;1m" << std::endl;
        }
    }
}