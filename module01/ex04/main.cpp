//
// Created by Waif Jonathon on 3/24/22.
//

#include <iostream>
#include <fstream>
#include <istream>
#include <stdio.h>

int	main(int ac, char **av){
	if (ac != 4){
		std::cout << "Need more arguments (give 3 args)" << std::endl;
		return (EXIT_FAILURE);
	}
	std::ifstream	ifs(av[1]);
	std::string		s1;
	std::string		s2;
	ifs>>s1>>s2;
	std::cout << ifs.getline(s1, 10, "\n") << "|" << s2 << std::endl;
//	ifs.close();



	return (EXIT_SUCCESS);
}