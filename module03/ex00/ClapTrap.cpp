//
// Created by Waif Jonathon on 4/3/22.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string objName) : name(objName), HP(10), energy(10),
		damage(0) {
	std::cout << "Clap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) {
	*this = obj;
	std::cout << "Clap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
	this->name = obj.name;
	this->HP = obj.HP;
	this->energy = obj.energy;
	this->damage = obj.damage;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Clap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (this->energy && this->HP) {
		std::cout << "ClapTrap " << this->name << " attacks " << target <<
			", causing " << this->damage << " points of damage!" << std::endl;
		this->energy--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << " was attacked. It gets " <<
	 amount << " points of damage!" << std::endl;
	this->HP -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energy && this->HP) {
		std::cout << "ClapTrap " << this->name << " repair itself, it gets " <<
			amount << " HP back." << std::endl;
		this->HP += amount;
		this->energy--;
	}
}