#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include <limits.h>
#include "convert.hpp"

// void test();
// int convert(std::string literal);

int main(int argc, char* argv[]) {
    unsigned int type;
    std::string literal;

    if (argc != 2) {
        LOG("USAGE: ./convert [literal]");
        return (1);
    }
    // test();
    literal = static_cast<std::string>(argv[1]);
    type = get_type(literal);
    if (type == INVALID) {
        LOG("Error: Invalid literal");
        return (1);
    }
    if (type == XDOUBLE) {
        theHackerWay(literal);
        return (0);
    }
    if (type == XCHAR) {
        print_char(literal[0]);
        return (0);
    }
    print_special(type);
    return (0);
}

void theHackerWay(std::string &literal) {
    char *d_err;
    char *f_err;

    double  d;
    float   f;

    bool keep_going = false;

    d = strtod(literal.c_str(), &d_err);
    if (*d_err != 0) {
        if (*d_err == '.') {
            if (&literal[literal.find_first_of('.')] != d_err) {
                keep_going = true;
            }
        } else {
            keep_going = true;
        }
    }
    if (!keep_going) {
        print_double(d);
        return ;
    }
    keep_going = false;
    f = strtof(literal.c_str(), &f_err);
    if (*f_err != 0) {
        if (*f_err == 'f') {
            if (&literal[literal.find_first_of('f')] != f_err) {
                keep_going = true;
            }
        } else {
            keep_going = true;
        }
    }
    if (!keep_going) {
        print_float(f);
        return ;
    }
    LOG("INVALID INPUT");
}

unsigned int get_type(std::string literal) {
    int len = literal.length();

    if (len == 0)
        return INVALID;
    if (literal == "nanf")
        return NANF;
    if (literal == "nan")
        return NANUM;
    if ((literal == "inff") || (literal == "+inff"))
        return INFF;
    if ((literal == "inf") || (literal == "+inf"))
        return INF;
    if (literal == "-inff")
        return NINFF;
    if (literal == "-inf")
        return NINF;
    if (len == 1 && !is_digit(literal[0]))
        return XCHAR;
    return XDOUBLE;
}


void print_special(unsigned int type) {
    LOG("char: impossible");
    LOG("int: impossible");
    switch (type) {
        case NANF:
        case NANUM:
            LOG("float: nanf");
            LOG("double: nan");
            break ;
        case NINFF:
        case NINF:
            LOG("float: ninff");
            LOG("double: ninf");
            break ;
        case INFF:
        case INF:
            LOG("float: inff");
            LOG("double: inf");
            break ;
    }
    
}

void print_char(char c) {
    if (!std::isprint(c))
        LOG("char: Non displayable");
    else
        LOG("char: " << c);
    LOG("int: " << static_cast<int>(c));
    LOG("float: " << static_cast<float>(c) << "f" );
    LOG("double: " << static_cast<double>(c));
}

void print_double(double d) {
    if (d > std::numeric_limits<char>::max() || d < std::numeric_limits<char>::min()) {
        LOG("char: impossible");
    } else if (!std::isprint(static_cast<char>(d))) {
        LOG("char: Non displayable");
    } else {
        LOG("char: " << static_cast<char>(d));
    }

    if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min()) {
        LOG("int: impossible");
    } else {
        LOG("int: " << static_cast<int>(d));
    }

    if ((d > std::numeric_limits<float>::max()) || d < -__FLT_MAX__) {
        LOG("float: impossible");
    } else {
        LOG("float: " << static_cast<float>(d) << "f");
    }

    LOG("double: " << d);
}

void print_float(float f) {
    if (f > std::numeric_limits<char>::max() || f < std::numeric_limits<char>::min()) {
        LOG("char: impossible");
    } else if (!std::isprint(static_cast<char>(f))) {
        LOG("char: Non displayable");
    } else {
        LOG("char: " << static_cast<char>(f));
    }
    if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min()) {
        LOG("int: impossible");
    } else {
        LOG("int: " << static_cast<int>(f));
    }
    LOG("float: " << f << "f");
    LOG("double: " << static_cast<double>(f));
}

bool    is_digit(char c) {
    if (c >= '0' && c <= '9')   
        return (true);
    return (false);
}

// void test() {

//     convert("42");
//     std::cout << std::endl;
//     convert("42f");
//     std::cout << std::endl;
//     convert("42.02f");
//     std::cout << std::endl;
//     convert("42.0234f");
//     std::cout << std::endl;
//     convert("42.");
//     std::cout << std::endl;
//     convert("42.02");
//     std::cout << std::endl;
//     convert("42.1234567890123");
//     std::cout << std::endl;
//     convert("-42");
//     std::cout << std::endl;
//     convert("-42f");
//     std::cout << std::endl;
//     convert("-42.02f");
//     std::cout << std::endl;
//     convert("-42.0234f");
//     std::cout << std::endl;
//     convert("-42.");
//     std::cout << std::endl;
//     convert("-42.02");
//     std::cout << std::endl;
//     convert("-42.1234567890123");
//     std::cout << std::endl;
//     convert("a");
//     std::cout << std::endl;
//     convert("nan");
//     std::cout << std::endl;
//     convert("nanf");
//     std::cout << std::endl;
//     convert("inf");
//     std::cout << std::endl;
//     convert("-inf");
//     std::cout << std::endl;
//     convert("+inff");
//     std::cout << std::endl;
//     convert("-inff");
//     std::cout << std::endl;
//     std::cout << "Exemplifying the issue with using floating point numbers" << std::endl;
//     convert("10000000000000");
//     std::cout << std::endl;
//     convert("-100000000000000");
//     std::cout << std::endl;
// }

// int convert(std::string literal) {
//     std::cout << "Testing: " << literal << std::endl;
//     unsigned int type;

//     type = get_type(literal);
//     if (type == INVALID) {
//         LOG("Error: Invalid literal");
//         return (1);
//     }
//     if (type == XDOUBLE) {
//         theHackerWay(literal);
//         return (0);
//     }
//     if (type == XCHAR) {
//         print_char(literal[0]);
//         return (0);
//     }
//     print_special(type);

//     return (0);
// }