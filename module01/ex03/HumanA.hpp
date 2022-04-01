//
// Created by Nikita Kaluzhskikh on 02.04.2022.
//

#ifndef CPP_MODULES_HUMANA_HPP
#define CPP_MODULES_HUMANA_HPP

#include "Weapon.hpp"

class	HumanA {
public:
	HumanA(std::string fName, Weapon &gun);
	void	attack();
private:
	std::string	name;
	Weapon&		gunA;
};

#endif //CPP_MODULES_HUMANA_HPP
