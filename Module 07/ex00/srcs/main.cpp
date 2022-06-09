#include <iostream>
#include "whatever.hpp"

int main() {
    {std::cout << std::endl << "\033[33;1m" << "---> 42 Tests <---" << "\033[37m" << std::endl;
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;}
{    std::cout << std::endl << "\033[33;1m" << "---> Testing SWAP Ints <---" << "\033[37m" << std::endl;
    int a = 2;
    int b = 4;
    std::cout << a << b << std::endl;
    swap(a, b);
    std::cout << a << b << std::endl;}
    {std::cout << std::endl << "\033[33;1m" << "---> Testing SWAP Chars <---" << "\033[37m" << std::endl;
    char a = '2';
    char b = '4';
    std::cout << a << b << std::endl;
    swap(a, b);
    std::cout << a << b << std::endl;}
    {std::cout << std::endl << "\033[33;1m" << "---> Testing SWAP Strings <---" << "\033[37m" << std::endl;
    std::string a = "2";
    std::string b = "4";
    std::cout << a << b << std::endl;
    swap(a, b);
    std::cout << a << b << std::endl;}
    {std::cout << std::endl << "\033[33;1m" << "---> Testing min Ints <---" << "\033[37m" << std::endl;
    int a = 2;
    int b = 4;
    std::cout << a << b << std::endl;
    std::cout << ::min(a, b) << std::endl;}
    {std::cout << std::endl << "\033[33;1m" << "---> Testing min Chars <---" << "\033[37m" << std::endl;
    char a = '2';
    char b = '4';
    std::cout << a << b << std::endl;
    std::cout << ::min(a, b) << std::endl;}
    {std::cout << std::endl << "\033[33;1m" << "---> Testing min Strings <---" << "\033[37m" << std::endl;
    std::string a = "2";
    std::string b = "4";
    std::cout << a << b << std::endl;
    std::cout << ::min(a, b) << std::endl;}
    {std::cout << std::endl << "\033[33;1m" << "---> Testing max Ints <---" << "\033[37m" << std::endl;
    int a = 2;
    int b = 4;
    std::cout << a << b << std::endl;
    std::cout << ::max(a, b) << std::endl;}
    {std::cout << std::endl << "\033[33;1m" << "---> Testing max Chars <---" << "\033[37m" << std::endl;
    char a = '2';
    char b = '4';
    std::cout << a << b << std::endl;
    std::cout << ::max(a, b) << std::endl;}
    {std::cout << std::endl << "\033[33;1m" << "---> Testing max Strings <---" << "\033[37m" << std::endl;
    std::string a = "2";
    std::string b = "4";
    std::cout << a << b << std::endl;
    std::cout << ::max(a, b) << std::endl;}}
