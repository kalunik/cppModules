//
// Created by Nikita Kaluzhskikh on 07.03.2022.
//

/*
#include "contactClass.hpp"
#include "phoneBookClass.hpp"
#include "phoneBook.h"
*/
#include <string>
#include <iostream>
#include <stdlib.h> //exit




class PhoneBook {
public:
	PhoneBook () : id(-1){};
	void addContact()
	{
		id++;
		if (id < 8)
		{
			contacts[id].setContact();
		}
		else
		{
			id = 0;
			contacts[id].setContact();
		}
	}
	void printContacts()
	{
		for (int j = 0 ; j <= id; j++)
		{
			std::cout << j << " | ";
			for (int i = 0; i < 5; i++)
			{
				contacts[j].getContactVal(i);
				std::cout << " | ";
			}
			std::cout << std::endl;
		}
	}
	void	printID()
	{
		std::cout << "Enter existing index" << std::endl, std::cin >> searchID;
		if (searchID < 0 || searchID > id) {
			std::cout << "Index doesn't exist" << std::endl;
		} else {
			for (int i = 0; i < 5; i++) {
				contacts[searchID].getContactKey(i);
				std::cout << " : ";
				contacts[searchID].getContactVal(i);
				std::cout << std::endl;
			}
		}

	}
private:
	int id;
	int searchID;
	ContactClass contacts[8];
};

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
