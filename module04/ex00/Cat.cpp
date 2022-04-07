//
// Created by Waif Jonathon on 4/7/22.
//

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat constructor" << std::endl;
	this->type = "cat";
}

Cat::Cat(const Cat &obj) {
	std::cout << "Cat copy constructor" << std::endl;
	*this = obj;
}

Cat::~Cat() {
	std::cout << "Cat destructor" << std::endl;
}

Cat &Cat::operator=(const Cat &obj) {
	setType(obj.getType());
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "<MEOW>" << std::endl;
}