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
#include <limits>

class Literal {
public:
	Literal(std::string str);
	Literal(const Literal &obj);
	~Literal();

	Literal &operator=(const Literal &obj);

	int		typeSelector(std::string str);
	void	setDouble(std::string str);

private:
	Literal();

	int			_type;
	std::string	_str;
	char		_c;
	int			_i;
	float		_f;
	double		_d;
};


#endif //CPPMODULES_LITERAL_HPP
