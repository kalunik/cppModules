//
// Created by Waif Jonathon on 3/20/22.
//
#include "PhoneBook.hpp"

PhoneBook::PhoneBook () : id(-1), storageFull(false){};

void	PhoneBook::addContact()
{
	id++;
	if (id < 8)
		contacts[id].setContact();
	else {
		id = 0;
		storageFull = true;
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
	int	end;

	printHeader();
	if (storageFull)
		end = 7;
	else
		end = id;
	for (int j = 0 ; j <= end; j++)
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
	if (std::cin.fail() || searchID < 0 || (!storageFull && searchID > id) ||
		(storageFull && searchID > 7)) {
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
