#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include <iostream>
# include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(int my_value);
	Fixed(float my_value);
	Fixed(const Fixed &original);
	Fixed &operator=(const Fixed &original);
	~Fixed();
	int		getRawBits(void) const; // Meaning it is not allowed to modify the object on which it is called
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	bool	operator>(const Fixed& other) const;
	bool	operator<(const Fixed& other) const;
	bool	operator>=(const Fixed& other) const;
	bool	operator<=(const Fixed& other) const;
	bool	operator==(const Fixed& other) const;
	bool	operator!=(const Fixed& other) const;
	Fixed	operator+(const Fixed& other) const;
	Fixed	operator-(const Fixed& other) const;
	Fixed	operator*(const Fixed& other) const;
	Fixed	operator/(const Fixed& other) const;
	Fixed&	operator++(); // Prefix
	Fixed&	operator--(); // Prefix
	Fixed	operator++(int);
	Fixed	operator--(int);
	static Fixed&		min(Fixed& a, Fixed& b);
	static Fixed&		max(Fixed& a, Fixed& b);
	static const Fixed&	min(const Fixed& a, const Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);
	
private:
	int value;
	static const int fractional_bits = 8;
};

std::ostream& operator<<(std::ostream&, const Fixed&);



#endif