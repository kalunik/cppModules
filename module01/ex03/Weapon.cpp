//
// Created by Nikita Kaluzhskikh on 02.04.2022.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string base) : type(base) {}

std::string	Weapon::getType() const {
	return (this->type);
}

void	Weapon::setType(std::string mes) {
	this->type = mes;
}