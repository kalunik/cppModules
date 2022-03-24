//
// Created by Waif Jonathon on 3/22/22.
//

#include <iostream>
#include <string>

class Zombie
{
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

Zombie::Zombie(){
	std::cout << "Grrr\n";
}

Zombie::~Zombie(){
	std::cout << this->name << " die" << std::endl;
}

void Zombie::announce(){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string fname){
	this->name = fname;
}

int main(){
	Zombie *zomb;

	zomb = newZombie("Richard");

	randomChump("Jelly");

	zomb->announce();
	delete zomb;
	return 0;
}

Zombie* newZombie(std::string name){
	Zombie	*person = new Zombie;

	person->setName(name);
	return (person);
}

void randomChump(std::string name){
	Zombie	person;

	person.setName(name);
	person.announce();
}