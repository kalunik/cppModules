//
// Created by Waif Jonathon on 3/22/22.
//

#include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed &objRef);
	Fixed& operator=(const Fixed &obj);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
private:
	int					fixPnt;
	static const int	fractBits;
};

int main() {
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}

const int fractBits = 8;

Fixed::Fixed() : fixPnt(0) {
	std::cout << "Default constructor called" << std::endl;
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

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixPnt);
}

void	Fixed::setRawBits(int const raw) {
	this->fixPnt = raw;
}
