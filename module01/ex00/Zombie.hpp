//
// Created by Nikita Kaluzhskikh on 02.04.2022.
//

#ifndef CPP_MODULES_ZOMBIE_HPP
#define CPP_MODULES_ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
public:
	Zombie();
	~Zombie();
	void	announce(void);
	void	setName(std::string fname);
private:
	std::string name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif //CPP_MODULES_ZOMBIE_HPP
