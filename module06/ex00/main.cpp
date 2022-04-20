//
// Created by Waif Jonathon on 16.04.2022.
//

#include <iostream>
#include <iomanip>
#include "Literal.hpp"


int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "It works only with 1 argument." << std::endl;
		return (EXIT_FAILURE);
	}

	Literal lit(av);

	lit.displayLiterals();

//	float num = std::numeric_limits<float>::signaling_NaN();
//	printf("%f ______\n", num);

/*
	float num =  1234567.8243f;
//	printf("%f ______\n", num);

//	num = strtod(av[1], NULL);
	(void) av;
	std::cout << "char   : " << static_cast<char>(num) << std::endl;
	std::cout << "int    : " << static_cast<int>(num) << std::endl;
	std::cout << "float  : " << std::setprecision(8)<< static_cast<float>(num)
	<< 	std::endl;
	std::cout << "float  : " << std::fixed << static_cast<float>(num)
	<< 	std::endl;
	std::cout << "double : " << static_cast<double>(num) << std::endl;*/
}