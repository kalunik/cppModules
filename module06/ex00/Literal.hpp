//
// Created by Waif Jonathon on 4/18/22.
//

#ifndef CPPMODULES_LITERAL_HPP
#define CPPMODULES_LITERAL_HPP

#define UNKNOWN 0
#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4

#include <iostream>
#include <limits> //numeric_limits
#include <iomanip>

class Literal {
public:
	Literal(char **str);
	Literal(const Literal &obj);
	~Literal();

	Literal &operator=(const Literal &obj);

	int		getType();

	void	setType(int type);
	void	setDouble(std::string str);
	int		typeSelector();

	void	setStr(char **str);
	void	setDigit();

	char	charConversion();
	int		intConversion();
	float	floatConversion();
	double	doubleConversion();
	void	displayLiterals();

	class NonDisplayable : public std::exception {
		virtual const char * what() const throw();
	};
	class Impossible : public std::exception {
		virtual const char * what() const throw();
	};
private:
	Literal();

	int			_type;
	std::string	_str;
	double		_digit;
};


#endif //CPPMODULES_LITERAL_HPP
