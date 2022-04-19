//
// Created by Waif Jonathon on 16.04.2022.
//

#include "iostream"
#include <iomanip>
#include <sstream>

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "It works only with 1 argument." << std::endl;
		return (EXIT_FAILURE);
	}

	int type = -1;
	double num;

	if (strlen(av[1]) == 1) {
		if (isprint(av[1][0])) {
			type = CHAR;
		} else if (isdigit(av[1][0])) {
			type = INT;
		}
	}

	num = strtod(av[1], NULL);
	std::cout << "char   : " << static_cast<char>(num) << std::endl;
	std::cout << "int    : " << static_cast<int>(num) << std::endl;
	std::cout << "float  : " << std::setprecision(15)<< static_cast<float>(num)
	<< 	std::endl;
	std::cout << "double : " << static_cast<double>(num) << std::endl;


}