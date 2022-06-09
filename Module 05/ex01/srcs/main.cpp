#include <iostream>
#include "Bureaucrat.hpp"

int main(void) {
    std::string bname;
    bname = "b";
    std::string fonename;
    fonename = "f1";
    std::string ftwoname;
    ftwoname = "f2";
    std::string fthreename;
    fthreename = "f3";
    Bureaucrat b(bname, 10);
    Form fone(fonename, 9, 9);
    Form ftwo(ftwoname, 11, 11);
    try {
        Form fthree(fthreename, 2, 151);
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    try {
        Form fthree(fthreename, 0, 151);
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    std::cout << b << fone << ftwo << std::endl;
    std::cout << "\033[42;1m" << "Testing Signing" << "\033[0m" << std::endl;
    b.signForm(fone);
    b.signForm(ftwo);
    std::cout << "\033[42;1m" << "---> Finished Testing <---" << "\033[0m" << std::endl;
    std::cout << fone << ftwo << std::endl;

    return (0);
}