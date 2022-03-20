//
// Created by Nikita Kaluzhskikh on 07.03.2022.
//

#ifndef CPP_MODULES_PHONEBOOK_HPP
#define CPP_MODULES_PHONEBOOK_HPP

#include "Contact.hpp"
#include <cstdlib> //exit

class PhoneBook
{
public:
	PhoneBook();
	void		addContact();
	static void	printHeader();
	void		printContacts();
	void		printID();
private:
	int			id;
	int			searchID;
	Contact		contacts[8];
};

#endif //CPP_MODULES_PHONEBOOK_HPP
