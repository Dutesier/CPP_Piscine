#include "Character.hpp"

Character::Character(std::string my_name):name(my_name){
    for (int i = 0; i < 4; i++) {
        inventory[i] = NULL;
    }
}

Character::Character(const Character& orig):name(orig.getName()){
    for (int i = 0; i < 4; i++) {
        inventory[i] = NULL;
    }
    for (int i = 0; i < 4; i++) {
        if (orig.inventory[i] != 0)
            inventory[i] = orig.inventory[i]->clone();
    }
}

Character & Character::operator=(const Character& orig) {
    name = orig.getName();
    for (int i = 0; i < 4; i++) {
        if (inventory[i] != 0)
            delete inventory[i];
    }
    for (int i = 0; i < 4; i++) {
        if (orig.inventory[i] != 0)
            inventory[i] = orig.inventory[i]->clone();
    }
    return (*this);
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (inventory[i] != 0)
            delete inventory[i];
    }
}

std::string const & Character::getName(void) const {
    return (name);
}

void    Character::equip(AMateria* m) {
    int can = can_equip();
    if (!m || !can)
        return ;
    inventory[can - 1] = m->clone();
}

void    Character::unequip(int idx) {
    if (idx > 3 || idx < 0)
        return ;
    if (inventory[idx] != 0)
        oldMateria.addElement(inventory[idx]);
    inventory[idx] = 0;
}

void    Character::use(int idx, ICharacter& target) {
    if (idx > 3 || idx < 0)
        return ;
    if (inventory[idx] != 0)
        inventory[idx]->use(target);
}

int     Character::can_equip(void) {
    for (int i = 0; i < 4; i++) {
        if (inventory[i] == 0)
            return (i + 1);
    }
    return (0);
}
