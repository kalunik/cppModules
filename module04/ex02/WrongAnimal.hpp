//
// Created by Waif Jonathon on 4/7/22.
//

#ifndef CPPMODULES_WRONGANIMAL_HPP
#define CPPMODULES_WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &obj);
	~WrongAnimal();

	WrongAnimal& operator=(const WrongAnimal &obj);

	std::string	getType() const;
	void		setType(std::string _type);

	void makeSound() const;
protected:
	std::string type;
};


#endif //CPPMODULES_WRONGANIMAL_HPP
