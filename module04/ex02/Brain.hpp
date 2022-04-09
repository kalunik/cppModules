//
// Created by Waif Jonathon on 4/8/22.
//

#ifndef CPPMODULES_BRAIN_HPP
#define CPPMODULES_BRAIN_HPP

#include <iostream>

class Brain {
public:
	Brain();
	Brain(const Brain& obj);
	~Brain();

	Brain& operator=(const Brain& obj);
private:
	std::string	ideas[100];
};


#endif //CPPMODULES_BRAIN_HPP
