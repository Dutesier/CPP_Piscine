#ifndef CONVERT_HPP
# define CONVERT_HPP

# define LOG(x) std::cout << std::setprecision(8) << x << std::endl

enum {
    INVALID,
    XCHAR,
    XFLOAT,
    XDOUBLE,
    XINT,
    NANF,
    INFF,
    NINFF,
    INF,
    NINF,
    NAN,
};

unsigned int get_type(std::string literal);
bool    is_digit(char c);
void print_by_type(unsigned int type, std::string& literal);


#endif