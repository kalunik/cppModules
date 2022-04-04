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
	///get
	std::string		getName() const;
	unsigned int	getHP() const;
	unsigned int	getDamage() const;
	unsigned int	getEnergy() const;
	///set
	void	setName(std::string name);
	void	setHP(unsigned int amount);
	void	setDamage(unsigned int amount);
	void	setEnergy(unsigned int amount);
	///info
	void	displayInfo();
private:
	std::string		name;
	unsigned int	HP;
	unsigned int	damage;
	unsigned int	energy;
};

#endif //CPPMODULES_CLAPTRAP_HPP
