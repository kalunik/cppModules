//
// Created by Nikita Kaluzhskikh on 02.04.2022.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string fName) : name(fName) {}

void HumanB::attack() {
	if (this->gunB)
		std::cout << this->name << " attacks with their " << this->gunB->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &gun) {
	this->gunB = &gun;
}
