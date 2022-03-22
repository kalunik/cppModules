//
// Created by Nikita Kaluzhskikh on 07.03.2022.
//

#include "PhoneBook.hpp"

int	main()
{
	std::string	command;
	PhoneBook	contact;
	while (1)
	{
		std::cout << "Enter command : ADD, SEARCH or EXIT" << std::endl;
		std::cin >> command;
		if (std::cin.eof())
			break;
		if ("ADD" == command) {
			contact.addContact();
		} else if ("SEARCH" == command) {
			contact.printContacts();
			contact.printID();
		} else if ("EXIT" == command) {
			exit(EXIT_SUCCESS);
		} else {
			std::cout << command << " : is not valid. Use a command from list"
			<< std::endl;
		}
	}
	return (0);
}
