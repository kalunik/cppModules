//
// Created by Nikita Kaluzhskikh on 05.04.2022.
//

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructor" << std::endl;
	this->type = "dog";
}

Dog::Dog(const Dog &obj) {
	std::cout << "Dog copy constructor" << std::endl;
	*this = obj;
}

Dog::~Dog() {}

Dog &Dog::operator=(const Dog &obj) {
	setType(obj.getType());
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "BARK" << std::endl;
}