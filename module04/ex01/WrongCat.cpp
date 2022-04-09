//
// Created by Waif Jonathon on 4/7/22.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat constructor" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj) {
	std::cout << "WrongCat copy constructor" << std::endl;
	*this = obj;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj) {
	setType(obj.getType());
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "<MEOW>" << std::endl;
}