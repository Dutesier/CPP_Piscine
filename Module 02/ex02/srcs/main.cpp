#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( 10 ); Fixed const c( 42.42f ); Fixed const d( b );
	a = Fixed( 1234.4321f );
	Fixed e = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "Starting comparison tests" << std::endl; 
	std::cout << "a > b: " << (a > b) << std::endl; 
	std::cout << "b > a: " << (b > a) << std::endl; 
	std::cout << "a < b: " << (a < b) << std::endl; 
	std::cout << "b < a: " << (b < a) << std::endl; 
	std::cout << "a >= b: " << (a >= b) << std::endl; 
	std::cout << "a >= e: " << (a >= b) << std::endl; 
	std::cout << "c >= b: " << (c >= b) << std::endl; 
	std::cout << "a <= b: " << (a <= b) << std::endl; 
	std::cout << "a <= e: " << (a <= b) << std::endl; 
	std::cout << "c <= b: " << (c <= b) << std::endl; 
	std::cout << "a == e: " << (a == e) << std::endl; 
	std::cout << "a == d: " << (a == d) << std::endl; 
	std::cout << "a != e: " << (a != e) << std::endl; 
	std::cout << "a != d: " << (a != d) << std::endl;
	std::cout << "Starting arithmetic tests" << std::endl; 
	std::cout << "a + b: " << (a + b) << std::endl;
	std::cout << "0.5 * 4 = " << (Fixed(0.5f) * Fixed(4)) << std::endl; 
	std::cout << "0.1 * 0.2 = " << (Fixed(0.1f) * Fixed(0.2f)) << std::endl; 
	return 0;
}