#include "Character.hpp"
#include "Ice.hpp"

int main(void){
    AMateria *temp = new Ice;
    std::string basic = "main";
    std::string interf = "inter";
    Character quirky(basic);
    Character inter(interf);

    AMateria *other = temp->clone();
    quirky.equip(temp);
    quirky.use(0, inter);


    delete temp;
    delete other;
}