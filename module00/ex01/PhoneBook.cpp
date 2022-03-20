//
// Created by Waif Jonathon on 3/20/22.
//
#include "PhoneBook.hpp"

PhoneBook::PhoneBook () : id(-1){};

void	PhoneBook::addContact()
{
	id++;
	if (id < 8)
		contacts[id].setContact();
	else {
		id = 0;
		contacts[id].setContact();
	}
}

void	PhoneBook::printHeader()
{
	std::cout << "     INDEX|" << "FIRST NAME|" << " LAST NAME|";
	std::cout << "  NICKNAME" << std::endl;
}

void	PhoneBook::printContacts()
{
	printHeader();
	for (int j = 0 ; j <= id; j++)
	{
		std::cout << "         " << j << "|";
		for (int i = 0; i < 3; i++)
		{
			contacts[j].getContactValFixedWide(i);
			if (i != 2)
				std::cout << "|";
		}
		std::cout << std::endl;
	}
}

void	PhoneBook::printID()
{
	std::cout << "Enter existing index" << std::endl, std::cin >> searchID;
	if (std::cin.eof())
		exit(EXIT_SUCCESS);
	if (std::cin.fail() || searchID < 0 || searchID > id) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Index doesn't exist" << std::endl;
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			contacts[searchID].getContactKey(i);
			std::cout << " : ";
			contacts[searchID].getContactVal(i);
			std::cout << std::endl;
		}
	}
}
