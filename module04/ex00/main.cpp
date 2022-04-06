//
// Created by Nikita Kaluzhskikh on 04.04.2022.
//

#include "Dog.hpp"

/*#include <iostream>

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

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog &obj);
	virtual ~Dog();

	Dog& operator=(const Dog &obj);

	virtual void makeSound() const;
};*/

int main(void)
{
	const Animal animal;
	const Animal* j = new Dog();
//	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
//	std::cout << i->getType() << " " << std::endl;
//	i->makeSound(); //will output the cat sound!
//	j->makeSound();

	animal.makeSound();
	delete j;
	return 0;
}


/*
Animal::Animal() {
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(const Animal &obj) {
	*this = obj;
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
}*/
