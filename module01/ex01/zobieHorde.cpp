//
// Created by Nikita Kaluzhskikh on 02.04.2022.
//

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie* drop = new Zombie[N];

	for (int i = 0; i < N; i++){
		drop[i].setName(name);
	}
	return (drop);
}