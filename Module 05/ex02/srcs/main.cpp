#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

// Checks for state changes in f
bool    state_checker(const Form& f, bool will_sign) {
    if (f.isFormSigned() != will_sign)
        return (false);
    return (true);
}

bool    test_checker(const Form& f, bool will_sign) {
    if (state_checker(f, will_sign) == false) {
        std::cerr << "Test \u001b[41;1mFAILED\u001b[0m: Unwarranted Form Sign Change" << std::endl;
        return (false);
    }
    std::cout << "Test for signing \u001b[42;1mSUCESS\u001b[0m" << std::endl;
    return (true);
    
}

int main(void) {

    std::string target = "JFK";
    std::string name = "Bob";

    Bureaucrat bob_a(name, 26);

    Bureaucrat bob_b(name, 10);

    Bureaucrat bob_c(name, 5);
    PresidentialPardonForm ppf1(target);
    PresidentialPardonForm ppf2(target);
    PresidentialPardonForm ppf3(target);
    PresidentialPardonForm ppf4(target);
    PresidentialPardonForm ppf5(target);
    PresidentialPardonForm ppf6(target);

    std::cout << "\u001b[33;1m" << "Testing Can't Sign, Won't Sign, Can't Execute" << "\u001b[37m" << std::endl;
    bob_a.executeForm(ppf1);
    test_checker(ppf1, false);

    std::cout << "\u001b[33;1m" << "Testing Can't Sign, Will Sign, Can't Execute" << "\u001b[37m" << std::endl;
    bob_a.signForm(ppf2);
    bob_a.executeForm(ppf2);
    test_checker(ppf2, false);

    std::cout << "\u001b[33;1m" << "Testing Can Sign, Won't Sign, Can't Execute" << "\u001b[37m" << std::endl;
    bob_b.executeForm(ppf3);
    test_checker(ppf3, false);

    std::cout << "\u001b[33;1m" << "Testing Can Sign, Will Sign, Can't Execute" << "\u001b[37m" << std::endl;
    bob_b.signForm(ppf4);
    bob_b.executeForm(ppf4);
    test_checker(ppf4, true);

    std::cout << "\u001b[33;1m" << "Testing Can Sign, Won't Sign, Can Execute" << "\u001b[37m" << std::endl;
    bob_c.executeForm(ppf5);
    test_checker(ppf5, false);

    std::cout << "\u001b[33;1m" << "Testing Can Sign, Will Sign, Can Execute" << "\u001b[37m" << std::endl;
    bob_c.signForm(ppf6);
    bob_c.executeForm(ppf6);
    test_checker(ppf6, true);
    std::cout << std::endl << "\u001b[33;1m" << "---> Finished Testing <---" << "\u001b[37m" << std::endl;

    return (0);
}