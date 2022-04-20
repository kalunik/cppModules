//
// Created by Waif Jonathon on 4/18/22.
//

#include "Literal.hpp"

Literal::Literal() {}

Literal::Literal(char **str) : _type(UNKNOWN) {
	setStr(str);
	setDigit();
}

Literal::Literal(const Literal &obj) {
	*this = obj;
}

Literal::~Literal() {}

Literal &Literal::operator=(const Literal &obj) {
	_type = obj._type;
	_str = obj._str;
	return (*this);
}

int Literal::getType() {
	return _type;
}

void Literal::setType(int type) {
	this->_type = type;
}

void Literal::setStr(char **str) {
	std::string tmp(str[1]);
	_str = tmp;
}

void Literal::setDigit() {
	if (_str[0])
		_digit = strtod(_str.c_str(), NULL);
}

int Literal::typeSelector() {
//	float a = 0.f;
	if (isprint(_str[0]) && !_str[1] && !isdigit(_str[0])) {
		return CHAR; //todo check if I need special error for non-printable
	} else if (_str.find("f") == _str.length() - 1) {
			std::cout << _str.find("f") << std::endl;
			return FLOAT;
	} else {
		if (_str.find(".") || _str.length() > 11) {
			return DOUBLE;
		} else {
			return INT;
		}
//		1234567.8243f
	}
	return UNKNOWN;
}

void Literal::setDouble(std::string str) {
	(void ) str;
	/*double d = strtod(str.c_str(), NULL);
	std::numeric_limits<double>::max();*/
}

char Literal::charConversion() {
	std::cout << _str << "!!" << std::endl;
	if (isdigit(_str[0]))
		throw NonDisplayable();
	if (!isprint(_str[0]) || _str[1])
		throw Impossible();
	return static_cast<char>(_str[0]);
}

int Literal::intConversion() {
//	std::cout << _digit << "!!" << std::endl;
	if (std::numeric_limits<int>::min() > static_cast<long>(_digit) ||
		std::numeric_limits<int>::max() < static_cast<long>(_digit) )
		throw Impossible();
	return static_cast<int>(_digit);
}

float Literal::floatConversion() {
//	std::cout << _digit << "!!" << std::endl;
	if (-std::numeric_limits<float>::infinity() != _digit &&
		std::numeric_limits<float>::infinity() != _digit) {
		if (-std::numeric_limits<float>::max() > _digit ||
				std::numeric_limits<float>::max() < _digit)
			throw Impossible();
	}
	return static_cast<float>(_digit);
}

double Literal::doubleConversion() {
//	std::cout << _digit << "!!" << std::endl;
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
		std::cout << charConversion() << std::endl;
	}
	catch (std::exception &e) {
		std::cout <<e.what() << std::endl;
	}
	try {
		std::cout << "int    : ";
		std::cout << intConversion() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "float  : ";
		std::cout << std::fixed << floatConversion()
		<< 'f' <<
		std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "double  : ";
		std::cout << std::fixed << doubleConversion()
			<< std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

const char *Literal::NonDisplayable::what() const throw() {
	return "Non displayable";
}

const char *Literal::Impossible::what() const throw() {
	return "Impossible";
}
