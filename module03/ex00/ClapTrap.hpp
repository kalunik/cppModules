//
// Created by Waif Jonathon on 4/3/22.
//

#ifndef CPPMODULES_CLAPTRAP_HPP
#define CPPMODULES_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
public:
	ClapTrap(std::string objName);
	ClapTrap(const ClapTrap &obj);
	ClapTrap& operator=(const ClapTrap &obj);
	~ClapTrap();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
private:
	std::string		name;
	unsigned int	HP;
	unsigned int	energy;
	unsigned int	damage;
};

#endif //CPPMODULES_CLAPTRAP_HPP
