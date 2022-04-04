//
// Created by Waif Jonathon on 4/3/22.
//

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ClapTrap	objB("John");
	ScavTrap	objC("Vert");

	objB.beRepaired(10);

	objC.attack("John");
	objB.takeDamage(objC.getDamage());

	{
		FragTrap	objD("Bud");
		objD.highFivesGuys();
	}


	objC.displayInfo();
	objB.displayInfo();

	objB.beRepaired(10);

	objC.guardGate();


	return (0);
}
