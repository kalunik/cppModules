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

	Fixed	operator+(const Fixed &objR);
	Fixed	operator-(const Fixed &objR);
	Fixed	operator*(const Fixed &objR);
	Fixed	operator/(const Fixed &objR);

	bool	operator>(const Fixed &objR) const;
	bool	operator<(const Fixed &objR) const;
	bool	operator>=(const Fixed &objR) const;
	bool	operator<=(const Fixed &objR) const;
	bool	operator==(const Fixed &objR) const;
	bool	operator!=(const Fixed &objR) const;

	Fixed	&operator++(void);
	Fixed	&operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);

	static Fixed		&min(Fixed &objL, Fixed &objR);
	static const Fixed	&min(const Fixed &objL, const Fixed &objR);
	static Fixed		&max(Fixed &objL, Fixed &objR);
	static const Fixed	&max(const Fixed &objL, const Fixed &objR);

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
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		Fixed a;
		Fixed const b(Fixed(10.05f) * Fixed(2));
		Fixed const c(Fixed(5.05f) + Fixed(2));
		Fixed const d(Fixed(5.05f) - Fixed(2));
		Fixed const e(Fixed(6.06f) / Fixed(2));

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;
		std::cout << c << std::endl;
		std::cout << d << std::endl;
		std::cout << e << std::endl;

		std::cout << Fixed::max(a, b) << std::endl;
	}
}


const int Fixed::fractBits = 8;

Fixed::Fixed() : fixPnt(0) {
}

Fixed::Fixed(const int num) {
	this->fixPnt = num << this->fractBits;
}

Fixed::Fixed(const float num) {
	this->fixPnt = roundf(num * (1 << this->fractBits));
}

Fixed::Fixed(const Fixed &objRef) {
	*this = objRef;
}

Fixed::~Fixed() {
}

Fixed &Fixed::operator=(const Fixed& obj) {
	this->fixPnt = obj.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed& objR) {
	return Fixed(this->toFloat() + objR.toFloat());;
}

Fixed Fixed::operator-(const Fixed& objR) {
	return Fixed(this->toFloat() - objR.toFloat());;
}

Fixed Fixed::operator*(const Fixed& objR) {
	return Fixed(this->toFloat() * objR.toFloat());;
}

Fixed Fixed::operator/(const Fixed& objR) {
	return Fixed(this->toFloat() / objR.toFloat());;
}

bool Fixed::operator>(const Fixed &objR) const {
	return (this->fixPnt > objR.fixPnt);
}

bool Fixed::operator<(const Fixed &objR) const {
	return (this->fixPnt < objR.fixPnt);
}

bool Fixed::operator>=(const Fixed &objR) const {
	return (this->fixPnt >= objR.fixPnt);
}

bool Fixed::operator<=(const Fixed &objR) const {
	return (this->fixPnt <= objR.fixPnt);
}

bool Fixed::operator==(const Fixed &objR) const {
	return (this->fixPnt == objR.fixPnt);
}

bool Fixed::operator!=(const Fixed &objR) const {
	return (this->fixPnt != objR.fixPnt);
}

Fixed &Fixed::operator++(void) {
	this->fixPnt += 1;
	return (*this);
}

Fixed &Fixed::operator--(void) {
	this->fixPnt -= 1;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed &Fixed::min(Fixed &objL, Fixed &objR) {
	return (objL < objR ? objL : objR);
}

const Fixed &Fixed::min(const Fixed &objL, const Fixed &objR) {
	return (objL < objR ? objL : objR);
}

Fixed &Fixed::max(Fixed &objL, Fixed &objR) {
	return (objL > objR ? objL : objR);
}

const Fixed &Fixed::max(const Fixed &objL, const Fixed &objR) {
	return (objL > objR ? objL : objR);
}

int Fixed::getRawBits() const{
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

