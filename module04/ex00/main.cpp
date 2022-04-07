//
// Created by Nikita Kaluzhskikh on 04.04.2022.
//

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}
	{
		const WrongAnimal *obj1 = new WrongAnimal();
		const WrongAnimal *obj2 = new WrongCat();

		std::cout << obj2->getType() << " " << std::endl;

		obj2->makeSound();
		obj1->makeSound();

		delete obj1;
		delete obj2;
	}
	return 0;
}
