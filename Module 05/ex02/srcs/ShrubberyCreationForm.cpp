#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
    Form("Shrubbery Creation", 145, 137),
    target("Zombie Target") {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string& init_target):
    Form("Shrubbery Creation", 145, 137),
    target(init_target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& orig):
    Form("Shrubbery Creation", 145, 137),
    target(orig.getTarget()) {
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm& orig) {
    target = orig.getTarget();
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

std::string    ShrubberyCreationForm::getTarget() const {
    return (target);
}

void            ShrubberyCreationForm::execute(Bureaucrat const & executor) const throw(std::exception){
    if (can_execute(executor)) {
        std::string temp = "_shrubbery";
        std::string filename = getTarget() + temp; 
        std::ofstream myFile;
        myFile.open(filename.c_str());
        if (!myFile.is_open()){
            std::cout << "Could not open file " << filename << std::endl;
        }
        myFile <<
        "                                               ." << std::endl <<
        "                                   .         ;" << std::endl <<
        "      .              .              ;%     ;;" << std::endl <<
        "        ,           ,                :;%  %;" << std::endl <<
        "         :         ;                   :;%;'     .," << std::endl <<
        ",.        %;     %;            ;        %;'    ,;" << std::endl <<
        "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl <<
        "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl <<
        "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl <<
        "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl <<
        "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl <<
        "         `:%;.  :;bd%;          %;@%;'" << std::endl <<
        "           `@%:.  :;%.         ;@@%;'" << std::endl <<
        "             `@%.  `;@%.      ;@@%;" << std::endl <<
        "               `@%%. `@%%    ;@@%;" << std::endl <<
        "                 ;@%. :@%%  %@@%;" << std::endl <<
        "                   %@bd%%%bd%%:;" << std::endl <<
        "                     #@%%%%%:;;" << std::endl <<
        "                     %@@%%%::;" << std::endl <<
        "                     %@@@%(o);  . '" << std::endl <<
        "                     %@@@o%;:(.,'" << std::endl <<
        "                 `.. %@@@o%::;" << std::endl <<
        "                    `)@@@o%::;" << std::endl <<
        "                     %@@(o)::;" << std::endl <<
        "                    .%@@@@%::;" << std::endl <<
        "                    ;%@@@@%::;." << std::endl <<
        "                   ;%@@@@%%:;;;." << std::endl <<
        "               ...;%@@@@@%%:;;;;,..    Gilo97" << std::endl;
        myFile.close();
    }
}