//
// Created by Waif Jonathon on 4/25/22.
//
#include <iostream>
#include <unistd.h>
#include "Base.hpp"

Base	*generate(void) {
	Base *arr[3] = {
			new A, new B, new C
	};
	usleep(0.8*1000000);
	srand(time(NULL));
	return (arr[rand() % 3]);
}

void	identify(Base *p) {
	if ((dynamic_cast<A *>(p))) {
		std::cout << "PTR: This is A class" << std::endl;
		return;
	}
	if ((dynamic_cast<B *>(p))) {
		std::cout << "PTR: This is B class" << std::endl;
		return;
	}
	if (dynamic_cast<C *>(p)) {
		std::cout << "PTR: This is C class" << std::endl;
		return;
	}
}

void	identify(Base &p) {
	try {
		A &a = dynamic_cast<A &>(p);
		std::cout << "REF: This is A class" << std::endl;
	}
	catch (std::bad_cast &bc) {
		try {
			B &b = dynamic_cast<B &>(p);
			std::cout << "REF: This is B class" << std::endl;
		}
		catch (std::bad_cast &bc) {
			try {
				C &c = dynamic_cast<C &>(p);
				std::cout << "REF: This is C class" << std::endl;
			}
			catch (std::bad_cast &bc) {
				std::cerr << "Unexpected class" << std::endl;
			}
		}
	}
}

int main() {
	Base *ptr = generate();
	Base *aptr = generate();

	identify(ptr);
	identify(*ptr);

	identify(aptr);
	identify(*aptr);

	delete ptr;
	delete aptr;
}
