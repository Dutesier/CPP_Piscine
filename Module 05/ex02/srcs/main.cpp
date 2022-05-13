#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

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

void testPPF() {
    std::cout << std::endl << "\u001b[33;1m" << "---> Testing Presidential Pardon Form <---" << "\u001b[37m" << std::endl;
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
}

void testSCF()  {
    std::cout << std::endl << "\u001b[33;1m" << "---> Testing Shrubbery Creation Form <---" << "\u001b[37m" << std::endl;
    std::string target = "JFK";
    std::string name = "Bob";

    Bureaucrat bob_a(name, 146);

    Bureaucrat bob_b(name, 138);

    Bureaucrat bob_c(name, 5);
    ShrubberyCreationForm scf1(target);
    ShrubberyCreationForm scf2(target);
    ShrubberyCreationForm scf3(target);
    ShrubberyCreationForm scf4(target);
    ShrubberyCreationForm scf5(target);
    ShrubberyCreationForm scf6(target);

    std::cout << "\u001b[33;1m" << "Testing Can't Sign, Won't Sign, Can't Execute" << "\u001b[37m" << std::endl;
    bob_a.executeForm(scf1);
    test_checker(scf1, false);

    std::cout << "\u001b[33;1m" << "Testing Can't Sign, Will Sign, Can't Execute" << "\u001b[37m" << std::endl;
    bob_a.signForm(scf2);
    bob_a.executeForm(scf2);
    test_checker(scf2, false);

    std::cout << "\u001b[33;1m" << "Testing Can Sign, Won't Sign, Can't Execute" << "\u001b[37m" << std::endl;
    bob_b.executeForm(scf3);
    test_checker(scf3, false);

    std::cout << "\u001b[33;1m" << "Testing Can Sign, Will Sign, Can't Execute" << "\u001b[37m" << std::endl;
    bob_b.signForm(scf4);
    bob_b.executeForm(scf4);
    test_checker(scf4, true);

    std::cout << "\u001b[33;1m" << "Testing Can Sign, Won't Sign, Can Execute" << "\u001b[37m" << std::endl;
    bob_c.executeForm(scf5);
    test_checker(scf5, false);

    std::cout << "\u001b[33;1m" << "Testing Can Sign, Will Sign, Can Execute" << "\u001b[37m" << std::endl;
    bob_c.signForm(scf6);
    bob_c.executeForm(scf6);
    test_checker(scf6, true);
    std::cout << std::endl << "\u001b[33;1m" << "---> Finished Testing <---" << "\u001b[37m" << std::endl;
}

void testRRF()  {
    std::cout << std::endl << "\u001b[33;1m" << "---> Testing Robotomy Request Form <---" << "\u001b[37m" << std::endl;
    std::string target = "JFK";
    std::string name = "Bob";

    Bureaucrat bob_a(name, 73);

    Bureaucrat bob_b(name, 72);

    Bureaucrat bob_c(name, 45);
    RobotomyRequestForm rrf1(target);
    RobotomyRequestForm rrf2(target);
    RobotomyRequestForm rrf3(target);
    RobotomyRequestForm rrf4(target);
    RobotomyRequestForm rrf5(target);
    RobotomyRequestForm rrf6(target);

    std::cout << "\u001b[33;1m" << "Testing Can't Sign, Won't Sign, Can't Execute" << "\u001b[37m" << std::endl;
    bob_a.executeForm(rrf1);
    test_checker(rrf1, false);

    std::cout << "\u001b[33;1m" << "Testing Can't Sign, Will Sign, Can't Execute" << "\u001b[37m" << std::endl;
    bob_a.signForm(rrf2);
    bob_a.executeForm(rrf2);
    test_checker(rrf2, false);

    std::cout << "\u001b[33;1m" << "Testing Can Sign, Won't Sign, Can't Execute" << "\u001b[37m" << std::endl;
    bob_b.executeForm(rrf3);
    test_checker(rrf3, false);

    std::cout << "\u001b[33;1m" << "Testing Can Sign, Will Sign, Can't Execute" << "\u001b[37m" << std::endl;
    bob_b.signForm(rrf4);
    bob_b.executeForm(rrf4);
    test_checker(rrf4, true);

    std::cout << "\u001b[33;1m" << "Testing Can Sign, Won't Sign, Can Execute" << "\u001b[37m" << std::endl;
    bob_c.executeForm(rrf5);
    test_checker(rrf5, false);

    std::cout << "\u001b[33;1m" << "Testing Can Sign, Will Sign, Can Execute" << "\u001b[37m" << std::endl;
    bob_c.signForm(rrf6);
    bob_c.executeForm(rrf6);
    test_checker(rrf6, true);

    std::cout << "\u001b[33;1m" << "Testing Multiple Executions" << "\u001b[37m" << std::endl;
    bob_c.signForm(rrf6);
    for (int i = 0; i < 50; i++) {
       bob_c.executeForm(rrf6);
    }
    test_checker(rrf6, true);
    std::cout << std::endl << "\u001b[33;1m" << "---> Finished Testing <---" << "\u001b[37m" << std::endl;
}

int main(void) {
    srand(time(0));    

    testPPF();
    testSCF();
    testRRF();
    return (0);
}