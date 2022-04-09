//
// Created by Nikita Kaluzhskikh on 05.04.2022.
//

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructor" << std::endl;
	this->type = "dog";
	this->ptr = new Brain();
}

Dog::Dog(const Dog &obj) {
	std::cout << "Dog copy constructor" << std::endl;
	this->ptr = new Brain();
	*this = obj;
}

Dog::~Dog() {
	std::cout << "Dog destructor" << std::endl;
	delete this->ptr;
}

Dog &Dog::operator=(const Dog &obj) {
	std::cout << "Dog assignment operator" << std::endl;
	setType(obj.getType());
	*this->ptr = *obj.ptr;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "<WOOF>" << std::endl;
}
