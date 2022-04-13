#include "Fixed.hpp"

Fixed::Fixed(): value(0){
	std::cout
		<< "Default constructor called"
		<< std::endl;
}

Fixed::Fixed(int my_value): value(my_value) {
}

Fixed::Fixed(const Fixed &original){
	std::cout
		<< "Copy constructor called"
		<< std::endl;
	value = original.value;
}

Fixed & Fixed::operator=(const Fixed &original) {
	std::cout
		<< "Assignation constructor called"
		<< std::endl;
	value = original.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout
		<< "Destructor called"
		<< std::endl;
}

int Fixed::getRawBits( void ) const {
	std::cout
		<< "getRawBits member function called"
		<< std::endl;
	return (value);
}

void Fixed::setRawBits( int const raw ) {
	std::cout
		<< "setRawBits member function called"
		<< std::endl;
	value = raw;
}