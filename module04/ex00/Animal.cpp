//
// Created by Nikita Kaluzhskikh on 04.04.2022.
//

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(const Animal &obj) : type(obj.type) {
//	*this = obj;
	std::cout << "Animal copy constructor" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor" << std::endl;
}

Animal &Animal::operator=(const Animal &obj) {
	this->type = obj.type;
	return (*this);
}

std::string Animal::getType() const {
	return (this->type);
}

void Animal::setType(std::string _type) {
	this->type = _type;
}

void Animal::makeSound() const {
	std::cout << "???" << std::endl;
}