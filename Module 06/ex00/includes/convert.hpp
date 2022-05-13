#ifndef CONVERT_HPP
# define CONVERT_HPP

# define LOG(x) std::cout << std::setprecision(4) << x << std::endl

enum {
    INVALID,
    XCHAR,
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
void print_double(double d);
void print_char(char c);
void print_float(float d);
void print_special(unsigned int type);
void theHackerWay(std::string &literal);

#endif