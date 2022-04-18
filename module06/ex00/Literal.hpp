//
// Created by Waif Jonathon on 4/18/22.
//

#ifndef CPPMODULES_LITERAL_HPP
#define CPPMODULES_LITERAL_HPP

#include <iostream>
#include <limits>

class Literal {
public:
	Literal();
	Literal(std::string str);
	Literal(const Literal &obj);
	~Literal();

	Literal &operator=(const Literal &obj);

	void	setDouble(std::string str);

private:
	std::string	_str;
	char		_c;
	int			_i;
	float		_f;
	double		_d;
};


#endif //CPPMODULES_LITERAL_HPP
