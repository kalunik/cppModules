//
// Created by Waif Jonathon on 3/22/22.
//

#include <iostream>
#include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed &objRef);
	~Fixed();
	Fixed&	operator=(const Fixed &obj);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
private:
	int					fixPnt;
	static const int	fractBits;
};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);

int main() {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}

const int Fixed::fractBits = 8;

Fixed::Fixed() : fixPnt(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) {
	std::cout << "Int constructor called" << std::endl;
	this->fixPnt = num << this->fractBits;
}

Fixed::Fixed(const float num) {
	std::cout << "Float constructor called" << std::endl;
	this->fixPnt = roundf(num * (1 << this->fractBits));
}

Fixed::Fixed(const Fixed &objRef) {
	std::cout << "Copy constructor called" << std::endl;
	*this = objRef;
}

Fixed &Fixed::operator=(const Fixed& obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixPnt = obj.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixPnt);
}

void	Fixed::setRawBits(int const raw) {
	this->fixPnt = raw;
}

float Fixed::toFloat(void) const {
	return ((float)(this->fixPnt) / (1 << this->fractBits));
}

int Fixed::toInt() const {
	return ((int)(this->fixPnt >> this->fractBits));
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj) {
	out << obj.toFloat();
	return (out);
}
