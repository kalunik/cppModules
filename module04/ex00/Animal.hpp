//
// Created by Nikita Kaluzhskikh on 04.04.2022.
//

#ifndef CPP_MODULES_ANIMAL_HPP
#define CPP_MODULES_ANIMAL_HPP

#include "iostream"

class Animal {
public:
	Animal();
	Animal(const Animal &obj);
	virtual ~Animal();
	Animal& operator=(const Animal &obj);
	std::string	getType() const;
	void		setType(std::string _type);
	virtual void makeSound() const;
protected:
	std::string type;
};


#endif //CPP_MODULES_ANIMAL_HPP
