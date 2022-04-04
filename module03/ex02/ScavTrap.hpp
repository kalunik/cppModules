//
// Created by Nikita Kaluzhskikh on 04.04.2022.
//

#ifndef CPP_MODULES_SCAVTRAP_HPP
#define CPP_MODULES_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &obj);
	ScavTrap& operator=(const ScavTrap &obj);
	~ScavTrap();
	void	attack(const std::string &target);
	void	guardGate();
};


#endif //CPP_MODULES_SCAVTRAP_HPP
