//
// Created by Waif Jonathon on 4/26/22.
//

#include "Span.hpp"
#include <list>

int main( void ) {
	try {
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Span sp = Span(5);
		std::list<int>	lst;

		sp.addNumber(15500);
		for (int i = 0; i < 4; i++) {
			lst.push_back(i);
		}
		sp.addElements(lst.begin(), lst.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
