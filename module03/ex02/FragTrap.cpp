//
// Created by Nikita Kaluzhskikh on 04.04.2022.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "Frag constructor called" << std::endl;
	setHP(100);
	setEnergy(100);
	setDamage(30);
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj) {
	std::cout << "Frag copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj) {
	setName(obj.getName());
	setHP(obj.getHP());
	setDamage(obj.getDamage());
	setEnergy(obj.getEnergy());
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "Frag destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target) {
	if (getEnergy() && getHP()) {
		std::cout << "FragTrap " << getName() << " attacks " << target <<
				  ", causing " << getDamage() << " points of damage!" << std::endl;
		setEnergy(getEnergy() - 1);
	}
}

void FragTrap::highFivesGuys() {
	std::cout << getName() << " : <Give somebody a high five>" << std::endl;
}