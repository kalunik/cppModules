//
// Created by Nikita Kaluzhskikh on 04.04.2022.
//

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#define SIZE 5

int main(void) {
	{
		std::cout << "Animal, Cat, Dog.." << std::endl;
		{
//			const Animal *meta = new Animal();
			const Animal *j = new Dog();
			const Animal *i = new Cat();
			std::cout << j->getType() << " " << std::endl;
			std::cout << i->getType() << " " << std::endl;
			i->makeSound(); //will output the cat sound!
			j->makeSound();
//			meta->makeSound();
//			delete meta;
			delete j;
			delete i;
		}
	}
	{
		Dog a;
		{
			Dog tmp = a;
		}
	}
	return 0;
}
