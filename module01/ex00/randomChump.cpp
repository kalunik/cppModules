//
// Created by Nikita Kaluzhskikh on 02.04.2022.
//

#include "Zombie.hpp"

void randomChump(std::string name) {
	Zombie	person;

	person.setName(name);
	person.announce();
}
