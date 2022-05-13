#include <stdint.h>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void) {
    srand(time(0));

    Base *p;
    for (int i = 0; i < 30; i++) {
        p = generate();
        identify(p);
        identify(*p);
        delete p;
    }
}
