//
// Created by Waif Jonathon on 4/7/22.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) {
	*this = obj;
	std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj) {
	this->type = obj.type;
	return (*this);
}

std::string WrongAnimal::getType() const {
	return (this->type);
}

void WrongAnimal::setType(std::string _type) {
	this->type = _type;
}

void WrongAnimal::makeSound() const {
	std::cout << "<silence>" << std::endl;
}