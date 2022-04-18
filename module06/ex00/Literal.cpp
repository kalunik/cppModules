//
// Created by Waif Jonathon on 4/18/22.
//

#include "Literal.hpp"

Literal::Literal() {}

Literal::Literal(std::string str) : _str(str) {}

Literal::Literal(const Literal &obj) {
	*this = obj;
}

Literal &Literal::operator=(const Literal &obj) {
	_str = obj._str;
	_c = obj._c;
	_i = obj._i;
	_f = obj._f;
	_d = obj._d;
	return (*this);
}

void Literal::setDouble(std::string str) {
	double d = strtod(str.c_str(), NULL);
	std::numeric_limits<double>::max();
}
