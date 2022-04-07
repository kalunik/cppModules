//
// Created by Waif Jonathon on 4/7/22.
//

#ifndef CPPMODULES_WRONGCAT_HPP
#define CPPMODULES_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat &obj);
	~WrongCat();

	WrongCat& operator=(const WrongCat &obj);

	void makeSound() const;
};


#endif //CPPMODULES_WRONGCAT_HPP
