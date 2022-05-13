#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void) {
    srand(time(0));

    Bureaucrat director("Someone", 1);
    Bureaucrat manager("manager", 50);
    {
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        director.signForm(*rrf);
        director.executeForm(*rrf);
        delete rrf;
    }
    {
        Intern someRandomIntern;
        Form* ppf;
        ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
        manager.signForm(*ppf);
        director.executeForm(*ppf);
        delete ppf;
    }
    {
        Intern someRandomIntern;
        Form* ppf;
        ppf = someRandomIntern.makeForm("presidenl pardon", "Bender");
        if (ppf != NULL)
        {
            manager.signForm(*ppf);
            director.executeForm(*ppf);
            delete ppf;
        }
    }
    return (0);
}