#include "AMateriaArray.hpp"

AMateriaArray::AMateriaArray():size(0), array(0) {
}

AMateriaArray::AMateriaArray(const AMateriaArray& orig):size(0), array(0) {

    // Since this array will hold future freable pointers we will NOT make deep copies
    (void)orig;
}

AMateriaArray & AMateriaArray::operator=(const AMateriaArray& orig) {
    size = 0;
    array = 0;
    // Since this array will hold future freable pointers we will NOT make deep copies
    (void)orig;
    return (*this);
}

AMateriaArray::~AMateriaArray() {
    freeAll();
}

int AMateriaArray::getSize(void) {
    return (size);
}

void AMateriaArray::addElement(AMateria* new_elem) {
    void** temp = new void*[size + 1];
    for (int i = 0; i < size; i++) {
        temp[i] = array[i];
    }
    temp[size] = static_cast<void *>(new_elem);
    size++;
    array = temp;
}

void AMateriaArray::freeAll(void){
    for (int i = 0; i < size; i++) {
        delete static_cast<AMateria *>(array[i]);
    }
}