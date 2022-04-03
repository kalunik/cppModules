//
// Created by Waif Jonathon on 4/3/22.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string objName) : name(objName) {
	printf("%s - %s\n", this->name, *this);
}

ClapTrap::ClapTrap(const ClapTrap &obj) {
	*this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
	this->name = obj.name;
	this->HP = obj.HP;
	this->damage = obj.damage;
	this->energy = obj.energy;
	return (*this);
}