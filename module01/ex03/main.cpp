//
// Created by Waif Jonathon on 3/24/22.
//

#include <iostream>

class	Weapon{
public:
	Weapon(std::string base);
	std::string&	getType();
	void				setType
	(std::string mes);
private:
	std::string	type;
};

Weapon::Weapon(std::string base) : type(base){};

std::string& Weapon::getType() {
	return (this->type);
}

void Weapon::setType(std::string mes){
	this->type = mes;
}

class	HumanA{
public:
	HumanA(std::string fName, Weapon &gun);
	void	attack();
private:
	std::string	name;
	Weapon&		gunA;
};

HumanA::HumanA(std::string fName, Weapon &gun) : name(fName), gunA(gun){};

void HumanA::attack(){
	std::cout << this->name << " attacks with their " << this->gunA.getType()
		<< std::endl;
}

class	HumanB{
public:
	HumanB(std::string fName);
	void	attack();
	void	setWeapon(Weapon &gun);
private:
	std::string	name;
	Weapon*	gunB;
};

HumanB::HumanB(std::string fName) : name(fName){}

void HumanB::attack(){
	if (this->gunB)
		std::cout << this->name << " attacks with their " << this->gunB->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &gun){
	this->gunB = &gun;
}

int	main(){
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}