//
// Created by Nikita Kaluzhskikh on 02.04.2022.
//

#ifndef CPP_MODULES_WEAPON_HPP
#define CPP_MODULES_WEAPON_HPP

#include <iostream>

class	Weapon {
public:
	Weapon(std::string base);
	std::string&	getType();
	void				setType
			(std::string mes);
private:
	std::string	type;
};


#endif //CPP_MODULES_WEAPON_HPP
