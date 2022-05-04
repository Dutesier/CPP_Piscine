#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
        learnedMateria[i] = 0;
    }
}

MateriaSource::MateriaSource(const MateriaSource& orig) {
	for (int i = 0; i < 4; i++) {
        if (orig.learnedMateria[i] != 0)
			learnedMateria[i] = orig.learnedMateria[i]->clone();
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& orig) {
	for (int i = 0; i < 4; i++) {
		if (learnedMateria[i] != 0) {
			delete learnedMateria[i];
		}
	}
	for (int i = 0; i < 4; i++) {
        if (orig.learnedMateria[i] != 0)
			learnedMateria[i] = orig.learnedMateria[i]->clone();
    }
	return (*this);
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++) {
        if (learnedMateria[i] != 0)
            delete learnedMateria[i];
    }
}

void MateriaSource::learnMateria(AMateria* mat_pointer) {
	int can = can_learn();
    if (!mat_pointer || !can)
        return ;
    learnedMateria[can - 1] = mat_pointer->clone();

}

AMateria* MateriaSource::createMateria(const std::string& type) {
	for (int i = 0; i < 4; i++) {
        if (learnedMateria[i]->getType() == type)
            return (learnedMateria[i]->clone());
    }
	return (NULL);
}

int    MateriaSource::can_learn(void) {
    for (int i = 0; i < 4; i++) {
        if (learnedMateria[i] == 0)
            return (i + 1);
    }
    return (0);
}