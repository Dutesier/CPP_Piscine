#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(int my_value);
	Fixed(const Fixed &original);
	Fixed &operator=(const Fixed &original);
	~Fixed();
	int getRawBits( void ) const; // Meaning it is not allowed to modify the object on which it is called
	void setRawBits( int const raw );
	
private:
	int value;
	static const int fractional_bits = 8;
};


#endif