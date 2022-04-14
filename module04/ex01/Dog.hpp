//
// Created by Nikita Kaluzhskikh on 05.04.2022.
//

#ifndef CPP_MODULES_DOG_HPP
#define CPP_MODULES_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog &obj);
	virtual ~Dog();

	Dog& operator=(const Dog &obj);

	virtual void makeSound() const;
private:
	Brain *ptr;

};


#endif //CPP_MODULES_DOG_HPP
