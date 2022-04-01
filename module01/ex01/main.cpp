//
// Created by Waif Jonathon on 3/24/22.
//

#include "Zombie.hpp"

int	main(void) {
	Zombie*	horde;
	int n = 7;

	horde = zombieHorde(n, "Ben");
	for (int i = 0; i < n; i++){
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
