//
// Created by Waif Jonathon on 4/26/22.
//

#include "Array.hpp"

int main(int, char**)
{

	try {
		const Array<float> v(4);
//		Array<float> v(0);
		v[0] = 9.42f;
		for (int i = 0; i < 2; i++) {
			std::cout << i << " – " << v[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Array<float> v(5);
		Array<float> k(1);
		k = v;
		for (int i = 0; i < 5; i++) {
			std::cout << i << " – " << v[i] << " | " << k[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Array<float> v(5);
		Array<float> k(1);
		k = v;
		for (int i = 0; i < 6; i++) {
			std::cout << i << " – " << v[i] << " | " << k[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
