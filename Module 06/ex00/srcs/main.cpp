#include <iostream>
#include <sstream>
#include <iomanip>
#include "convert.hpp"

int main(int argc, char* argv[]) {
    unsigned int type;
    std::string literal;

    if (argc != 2) {
        LOG("USAGE: ./convert [literal]");
        return (1);
    }
    literal = static_cast<std::string>(argv[1]);
    type = get_type(literal);
    print_by_type(type, literal);
    LOG("Type: " << type);
    return (0);
}

unsigned int get_type(std::string literal) {
    int len = literal.length();
    int count_f = 0;
    int count_dot = 0;
    char c;

    if (len == 0)
        return INVALID;
    if (literal == "nanf")
        return NANF;
    if (literal == "nan")
        return NAN;
    if ((literal == "inff") || (literal == "inff+"))
        return INFF;
    if ((literal == "inf") || (literal == "inf+"))
        return INF;
    if (literal == "inff-")
        return NINFF;
    if (literal == "inf-")
        return NINF;
    if (len > 1) {
        for (int i = 0; i < len; i++) {
            c = literal[i];
            if (c != 'f' && c != '.' && !is_digit(c)) {
                return INVALID;
            } else if (c == '.') {
                count_dot++;
            } else if (c == 'f') {
                count_f++;
            }
        }
        if (count_dot > 1 || count_f > 1)
            return INVALID;
    }
    if (count_f)
        return XFLOAT;
    if (count_dot)
        return XDOUBLE;
    if (!isdigit(literal[0]))
        return XCHAR;
    return XINT;
}



void print_special(unsigned int type) {
    LOG("Special: " << type);
}

void print_char(std::string& literal) {
    if (!std::isprint(literal[0]))
        LOG("char: Non displayable");
    else
        LOG("char: " << literal);
    LOG("int: " << static_cast<int>(literal[0]));
    LOG("float: " << static_cast<float>(literal[0]) << ".0f" );
    LOG("double: " << static_cast<double>(literal[0]) << ".0");
}

void print_float(std::string& literal) {
    std::istringstream iss(literal);    
    float f;

    iss >> f;

    if (!std::isprint(static_cast<char>(f)))
        LOG("char: Non displayable");
    else
        LOG("char: " << static_cast<char>(f));
    LOG("int: " << static_cast<int>(f));
    LOG("float: " << f << "f");
    LOG("double: " << static_cast<double>(f));
}

void print_double(std::string& literal) {
    std::istringstream iss(literal);    
    double d;

    iss >> d;

    if (!std::isprint(static_cast<char>(d)))
        LOG("char: Non displayable");
    else
        LOG("char: " << static_cast<char>(d));
    LOG("int: " << static_cast<int>(d));
    LOG("float: " << static_cast<float>(d) << "f");
    LOG("double: " << d);
}

void print_int(std::string& literal) {
    std::istringstream iss(literal);    
    int i;

    iss >> i;

    if (!std::isprint(static_cast<char>(i)))
        LOG("char: Non displayable");
    else
        LOG("char: " << static_cast<char>(i));
    LOG("int: " << i);
    LOG("float: " << static_cast<float>(i) << ".0f");
    LOG("double: " << static_cast<double>(i) << ".0");
}

void print_by_type(unsigned int type, std::string& literal) {
    switch (type) {
        case INVALID:
            LOG("Invalid literal");
            return ;
        case XCHAR:
            print_char(literal);
            break ;
        case XFLOAT:
            print_float(literal);
            break ;
        case XDOUBLE:
            print_double(literal);
            break ;
        case XINT:
            print_int(literal);
            break ;
        default:
            print_special(type);
    }
}

bool    is_digit(char c) {
    if (c >= '0' && c <= '9')   
        return (true);
    return (false);
}