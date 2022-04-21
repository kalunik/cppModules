//
// Created by Waif Jonathon on 4/18/22.
//

#include "Literal.hpp"

Literal::Literal() {}

Literal::Literal(char **str) {
	setStr(str);
	setDigit();
}

Literal::Literal(const Literal &obj) {
	*this = obj;
}

Literal::~Literal() {}

Literal &Literal::operator=(const Literal &obj) {
	_str = obj._str;
	_digit = obj._digit;
	return (*this);
}

void Literal::setStr(char **str) {
	if (!str[1] || str[2])
		throw BadArgs();
	std::string tmp(str[1]);
	_str = tmp;
}

void Literal::setDigit() {
	if (_str[0]){
		if (!_str[1] && isascii(_str[0]) && !isdigit(_str[0])) {
			_digit = static_cast<int>(_str[0]);
		} else
			_digit = strtod(_str.c_str(), NULL);
	}
}

char Literal::charConversion() {
	if (((int)_digit < std::numeric_limits<char>::min() ||
			(int)_digit > std::numeric_limits<char>::max()))
		throw Impossible();
	if (!isprint((int)_digit))
		throw NonDisplayable();
	return static_cast<char>(_digit);
}

int Literal::intConversion() {
	if (std::numeric_limits<int>::min() > static_cast<long>(_digit) ||
		std::numeric_limits<int>::max() < static_cast<long>(_digit) )
		throw Impossible();
	return static_cast<int>(_digit);
}

float Literal::floatConversion() {
	if (-std::numeric_limits<float>::infinity() != _digit &&
		std::numeric_limits<float>::infinity() != _digit) {
		if (-std::numeric_limits<float>::max() > _digit ||
				std::numeric_limits<float>::max() < _digit)
			throw Impossible();
	}
	return static_cast<float>(_digit);
}

double Literal::doubleConversion() {
	if (-std::numeric_limits<double>::infinity() != _digit &&
		std::numeric_limits<double>::infinity() != _digit) {
		if (-std::numeric_limits<double>::max() > _digit ||
			std::numeric_limits<double>::max() < _digit)
			throw Impossible();
	}
	return static_cast<double>(_digit);
}

void Literal::displayLiterals() {
	try {
		std::cout << "char   : ";
		char c = charConversion();
		std::cout << "\'" << c << "\'" << std::endl;
	}
	catch (std::exception &e) {
		std::cerr <<e.what() << std::endl;
	}
	try {
		std::cout << "int    : ";
		std::cout << intConversion() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "float  : ";
		std::cout << std::fixed << floatConversion()
		<< 'f' <<
		std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "double  : ";
		std::cout << std::fixed << doubleConversion()
			<< std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

const char *Literal::BadArgs::what() const throw() {
	return "It works only with 1 argument";
}

const char *Literal::NonDisplayable::what() const throw() {
	return "Non displayable";
}

const char *Literal::Impossible::what() const throw() {
	return "Impossible";
}
