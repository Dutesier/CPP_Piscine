#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main(void){
    AMateria *temp = new Ice;
    AMateria *tempi = new Cure;
    std::string basic = "main";
    std::string interf = "inter";
    Character quirky(basic);
    Character inter(interf);

    AMateria *other = temp->clone();
    quirky.equip(temp);
    quirky.use(0, inter);
    inter = quirky;
    inter.use(0, quirky);

    Character mats(quirky);
    mats.use(0, quirky);
    mats.equip(tempi);
    mats.use(1, inter);

    delete temp;
    delete tempi;
    delete other;
    {
        IMateriaSource* src = new MateriaSource(); src->learnMateria(new Ice()); src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice"); me->equip(tmp);
        tmp = src->createMateria("cure"); me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob); me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
    }
    return 0;
}