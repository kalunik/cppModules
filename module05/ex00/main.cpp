//
// Created by Waif Jonathon on 4/10/22.
//

#include "Bureaucrat.hpp"

int main() {
	Bureaucrat a("John", 2);
	Bureaucrat b;
	b = a;
	b.displayInfo();
	return (0);
}