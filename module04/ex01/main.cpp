//
// Created by Nikita Kaluzhskikh on 04.04.2022.
//

#include <unistd.h>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#define SIZE 5

int main(void) {
	{
		std::cout << "BRAIN BRAIN BRAIN.." << std::endl;
		{
			Animal *meta[SIZE];
			int i = 0;
			for (;i < SIZE /2 ; i++) {
				meta[i] = new Dog();
			}
			for (; i < SIZE; i++) {
				meta[i] = new Cat();
			}
			for (int j = 0; j < SIZE; j++) {
				meta[j]->makeSound();
			}
			for (i = 0; i < SIZE; i++) {
			   delete meta[i];
			}
		}
	}
	std::cout << std::endl;
	{
		Dog a;
		{
			Dog tmp = a;
		}
		std::cout << a.getType() << std::endl;
	}
	return 0;
}
