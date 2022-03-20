//
// Created by Waif Jonathon on 3/20/22.
//

#include "Contact.hpp"

Contact::Contact() {
	key[0] = "FirstName";
	key[1] = "LastName";
	key[2] = "Nickname";
	key[3] = "PhoneNumb";
	key[4] = "DarkSecret";
}

void	Contact::setContact() {
	std::cout << "* All fields should non-empty fields *" << std::endl;
	std::cout << key[0] << " : ", std::cin >> val[0];
	std::cout << key[1] << " : ", std::cin >> val[1];
	std::cout << key[2] << " : ", std::cin >> val[2];
	std::cout << key[3] << " : ", std::cin >> val[3];
	std::cout << key[4] << " : ", std::cin >> val[4];
}

void	Contact::getContactKey(int i) {
	std::cout << this->key[i];
}

void	Contact::getContactVal(int i) {
	std::cout << this->val[i];
}

void	Contact::getContactValFixedWide(int i)
{
	unsigned	len;

	len = this->val[i].size();
	if (len > 10)
		this->val[i].resize(10);
	else if (len < 10){
		for (int j = 0; j < 10 - len; j++) {
			std::cout << " ";
		}
	}
	std::cout << this->val[i];
}

