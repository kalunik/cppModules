//
// Created by Nikita Kaluzhskikh on 02.04.2022.
//

#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
	Zombie	*person = new Zombie;

	person->setName(name);
	return (person);
}
