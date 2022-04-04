//
// Created by Waif Jonathon on 4/3/22.
//

#include "ClapTrap.hpp"

int main() {
	ClapTrap	objA("Clark");
	ClapTrap	objB("John");

	objA.attack("John");
	objB.takeDamage(0);
	objB.beRepaired(10);

	return (0);
}
