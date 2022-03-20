//
// Created by Nikita Kaluzhskikh on 07.03.2022.
//

#ifndef CPP_MODULES_CONTACT_H
#define CPP_MODULES_CONTACT_H

#include <string>
#include <iostream>

class Contact
{
public:
	Contact();
	void	setContact();
	void	getContactKey(int i);
	void	getContactVal(int i);
	void	getContactValFixedWide(int i);
private:
	std::string key[5];
	std::string val[5];
};

#endif //CPP_MODULES_CONTACT_H
