//
// Created by Waif Jonathon on 4/18/22.
//

#ifndef CPPMODULES_LITERAL_HPP
#define CPPMODULES_LITERAL_HPP

#include <iostream>
#include <limits> //numeric_limits

class Literal {
public:
	Literal(char **str);
	Literal(const Literal &obj);
	~Literal();

	Literal &operator=(const Literal &obj);

	void	setStr(char **str);
	void	setDigit();

	char	charConversion();
	int		intConversion();
	float	floatConversion();
	double	doubleConversion();

	void	displayLiterals();

	class BadArgs : public std::exception {
		virtual const char * what() const throw();
	};
	class NonDisplayable : public std::exception {
		virtual const char * what() const throw();
	};
	class Impossible : public std::exception {
		virtual const char * what() const throw();
	};
private:
	Literal();

	std::string	_str;
	double		_digit;
};


#endif //CPPMODULES_LITERAL_HPP
