//
// Created by Waif Jonathon on 4/8/22.
//

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(const Brain &obj) {
	std::cout << "Brain copy constructor" << std::endl;
	*this = obj;
}

Brain::~Brain() {}

Brain &Brain::operator=(const Brain &obj) {
	for (unsigned long i = 0; i < obj.ideas->length(); i++) {
//		std::cout << "AAA" << std::endl;
		(*this).ideas[i] = obj.ideas[i];
	}
	return *this;
}

