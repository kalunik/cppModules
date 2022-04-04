//
// Created by Nikita Kaluzhskikh on 04.04.2022.
//

#ifndef CPP_MODULES_FRAGTRAP_HPP
#define CPP_MODULES_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &obj);
	FragTrap& operator=(const FragTrap &obj);
	~FragTrap();
	void	attack(const std::string &target);
	void	highFivesGuys(void);
};


#endif //CPP_MODULES_FRAGTRAP_HPP
