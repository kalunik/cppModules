//
// Created by Nikita Kaluzhskikh on 02.04.2022.
//

#ifndef CPP_MODULES_HUMANB_HPP
#define CPP_MODULES_HUMANB_HPP

#include "Weapon.hpp"

class	HumanB {
public:
	HumanB(std::string fName);
	void	attack();
	void	setWeapon(Weapon &gun);
private:
	std::string	name;
	Weapon*	gunB;
};

#endif //CPP_MODULES_HUMANB_HPP
