//
// Created by Nikita Kaluzhskikh on 05.04.2022.
//

#ifndef CPP_MODULES_DOG_HPP
#define CPP_MODULES_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog &obj);
	virtual ~Dog();
	Dog& operator=(const Dog &obj);
	virtual void makeSound() const;
};


#endif //CPP_MODULES_DOG_HPP
