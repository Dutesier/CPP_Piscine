#include <stdint.h>
#include "serialize.hpp"

uintptr_t serialize(Data *ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}


int main(void) {
    Data* d = new Data;
    d->i = 10;
    Data *n;

    uintptr_t t = serialize(d);
    n = deserialize(t);
    if (n->i != 10)
        return (1);
    delete d;
    return (0);
}