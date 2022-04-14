#include "Fixed.hpp"

Fixed::Fixed(): value(0){
	std::cout
		<< "Default constructor called"
		<< std::endl;
}

Fixed::Fixed(int my_value){
	value = my_value << fractional_bits;
	std::cout
		<< "Int constructor called"
		<< std::endl;
}

Fixed::Fixed(float my_value) {
	float x;

	x = my_value * (1 << fractional_bits);
	value = roundf(x);
	std::cout
		<< "Float constructor called"
		<< std::endl;
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
	value = original.value;
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

float Fixed::toFloat( void ) const {
	float ret;

	ret = (float)value / (1 << fractional_bits);
	return (ret);
}

int Fixed::toInt( void ) const {
	return (value >> fractional_bits);
}

bool Fixed::operator>(const Fixed& other) const {
	return (value > other.value);
}

bool Fixed::operator<(const Fixed& other) const {
	return (value < other.value);
}

bool Fixed::operator>=(const Fixed& other) const {
	return (value >= other.value);
}

bool Fixed::operator<=(const Fixed& other) const {
	return (value <= other.value);
}

bool Fixed::operator==(const Fixed& other) const {
	return (value == other.value);
}

bool Fixed::operator!=(const Fixed& other) const {
	return (value != other.value);
}

Fixed	Fixed::operator+(const Fixed& other) const {
	Fixed ret;

	ret.setRawBits(value + other.value);
	return (ret);
}

Fixed	Fixed::operator-(const Fixed& other) const {
	Fixed ret;

	ret.setRawBits(value - other.value);
	return (ret);
}

Fixed	Fixed::operator*(const Fixed& other) const {
	Fixed	ret;
	int		result;

	result = ((signed long long) value * (signed long long)other.value) >> fractional_bits;
	ret.setRawBits(result);
	return (ret);
}

Fixed	Fixed::operator/(const Fixed& other) const {
	Fixed	ret;
	int		result;

	result = ((signed long long)(value) << fractional_bits / other.value);
	ret.setRawBits(result);
	return (ret);
}

std::ostream& operator<<(std::ostream& s, const Fixed& me) {
	s << me.toFloat();
	return s;
}