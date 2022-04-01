//
// Created by Waif Jonathon on 3/24/22.
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

	friend Fixed operator+(const Fixed &objL, const Fixed &objR);
	friend Fixed operator-(const Fixed &objL, const Fixed &objR);
	friend Fixed operator*(const Fixed &objL, const Fixed &objR);
	friend Fixed operator/(const Fixed &objL, const Fixed &objR);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
private:
	int					fixPnt;
	static const int	fractBits;
};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);

int	main(void){
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) + Fixed( 2 ) );
	Fixed const d( Fixed( 5.05f ) - Fixed( 2 ) );
	Fixed const e( Fixed( 6.06f ) / Fixed( 2 ) );

//	std::cout << a << std::endl;
//	std::cout << ++a << std::endl;
//	std::cout << a << std::endl;
//	std::cout << a++ << std::endl;
//	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;

//	std::cout << Fixed::max( a, b ) << std::endl;
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

Fixed operator+(const Fixed& objL, const Fixed& objR) {
	return Fixed(objL.toFloat() + objR.toFloat());
}

Fixed operator-(const Fixed& objL, const Fixed& objR) {
	return Fixed(objL.toFloat() - objR.toFloat());
}

Fixed operator*(const Fixed& objL, const Fixed& objR) {
	return Fixed(objL.toFloat() * objR.toFloat());
}

Fixed operator/(const Fixed& objL, const Fixed& objR) {
	return Fixed(objL.toFloat() / objR.toFloat());
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

