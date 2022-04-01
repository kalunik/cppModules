//
// Created by Nikita Kaluzhskikh on 02.04.2022.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string fName, Weapon &gun) : name(fName), gunA(gun) {}

void HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->gunA.getType()
			  << std::endl;
}
