//
// Created by Waif Jonathon on 3/22/22.
//

#include "Zombie.hpp"

int main(void) {
	Zombie *zomb;

	zomb = newZombie("Richard");

	randomChump("Jelly");

	zomb->announce();
	delete zomb;
	return 0;
}
