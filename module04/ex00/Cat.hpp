//
// Created by Waif Jonathon on 4/7/22.
//

#ifndef CPP_MODULES_CAT_HPP
#define CPP_MODULES_CAT_HPP


#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat &obj);
	virtual ~Cat();

	Cat& operator=(const Cat &obj);

	virtual void makeSound() const;
};


#endif //CPP_MODULES_CAT_HPP
