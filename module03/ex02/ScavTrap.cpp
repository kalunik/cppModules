//
// Created by Nikita Kaluzhskikh on 04.04.2022.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "Scav constructor called" << std::endl;
	setHP(100);
	setEnergy(50);
	setDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj) {
	std::cout << "Scav copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj) {
	setName(obj.getName());
	setHP(obj.getHP());
	setDamage(obj.getDamage());
	setEnergy(obj.getEnergy());
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "Scav destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (getEnergy() && getHP()) {
		std::cout << "ScavTrap " << getName() << " attacks " << target <<
			", causing " << getDamage() << " points of damage!" << std::endl;
		setEnergy(getEnergy() - 1);
	}
}

void ScavTrap::guardGate() {
	std::cout << getName() << " is now in Gate keeper mode" << std::endl;
}