#include <iostream>
#include "whatever.hpp"

int main() {
{    std::cout << std::endl << "\u001b[33;1m" << "---> Testing SWAP Ints <---" << "\u001b[37m" << std::endl;
    int a = 2;
    int b = 4;
    std::cout << a << b << std::endl;
    swap(a, b);
    std::cout << a << b << std::endl;}
    {std::cout << std::endl << "\u001b[33;1m" << "---> Testing SWAP Chars <---" << "\u001b[37m" << std::endl;
    char a = '2';
    char b = '4';
    std::cout << a << b << std::endl;
    swap(a, b);
    std::cout << a << b << std::endl;}
    {std::cout << std::endl << "\u001b[33;1m" << "---> Testing SWAP Strings <---" << "\u001b[37m" << std::endl;
    std::string a = "2";
    std::string b = "4";
    std::cout << a << b << std::endl;
    swap(a, b);
    std::cout << a << b << std::endl;}
    {std::cout << std::endl << "\u001b[33;1m" << "---> Testing min Ints <---" << "\u001b[37m" << std::endl;
    int a = 2;
    int b = 4;
    std::cout << a << b << std::endl;
    std::cout << ::min(a, b) << std::endl;}
    {std::cout << std::endl << "\u001b[33;1m" << "---> Testing min Chars <---" << "\u001b[37m" << std::endl;
    char a = '2';
    char b = '4';
    std::cout << a << b << std::endl;
    std::cout << ::min(a, b) << std::endl;}
    {std::cout << std::endl << "\u001b[33;1m" << "---> Testing min Strings <---" << "\u001b[37m" << std::endl;
    std::string a = "2";
    std::string b = "4";
    std::cout << a << b << std::endl;
    std::cout << ::min(a, b) << std::endl;}
    {std::cout << std::endl << "\u001b[33;1m" << "---> Testing max Ints <---" << "\u001b[37m" << std::endl;
    int a = 2;
    int b = 4;
    std::cout << a << b << std::endl;
    std::cout << ::max(a, b) << std::endl;}
    {std::cout << std::endl << "\u001b[33;1m" << "---> Testing max Chars <---" << "\u001b[37m" << std::endl;
    char a = '2';
    char b = '4';
    std::cout << a << b << std::endl;
    std::cout << ::max(a, b) << std::endl;}
    {std::cout << std::endl << "\u001b[33;1m" << "---> Testing max Strings <---" << "\u001b[37m" << std::endl;
    std::string a = "2";
    std::string b = "4";
    std::cout << a << b << std::endl;
    std::cout << ::max(a, b) << std::endl;}}
