//
// Created by Waif Jonathon on 3/24/22.
//

#include <iostream>

int	main(){
	std::string mes = "HI THIS IS BRAIN";
	std::string	*stringPTR;
	std::string	&stringREF = mes;

	stringPTR = &mes;

	std::cout << "mes address: " << &mes << std::endl;
	std::cout << "PTR address: " << stringPTR << std::endl;
	std::cout << "REF address: " << &stringREF << std::endl << std::endl;

	std::cout << "mes value: " << mes << std::endl;
	std::cout << "PTR value: " << *stringPTR << std::endl;
	std::cout << "REF value: " << stringREF << std::endl;
}