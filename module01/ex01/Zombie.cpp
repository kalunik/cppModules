//
// Created by Nikita Kaluzhskikh on 02.04.2022.
//

#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Grrr\n";
}

Zombie::~Zombie() {
	std::cout << this->name << " die" << std::endl;
}

void Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string fname) {
	this->name = fname;
}
