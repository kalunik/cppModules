//
// Created by Waif Jonathon on 3/24/22.
//

#include <iostream>

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

Zombie* zombieHorde(int N, std::string name);

int	main(){
	Zombie*	horde;
	int n = 7;

	horde = zombieHorde(n, "Ben");
	for (int i = 0; i < n; i++){
		horde[i].announce();
	}
	delete [] horde;
}

Zombie* zombieHorde(int N, std::string name){
	Zombie* drop = new Zombie[N];

	for (int i = 0; i < N; i++){
		drop[i].setName(name);
	}
	return (drop);
}