//
// Created by Waif Jonathon on 4/10/22.
//

#include "Bureaucrat.hpp"

int main() {
	{
		try {
			Bureaucrat a("John", 2);
			std::cout << a << std::endl;
			a.incrementGrade();
			a.incrementGrade();
			std::cout << a << std::endl;
		}
		catch (std::exception &exception) {
			std::cout << exception.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
			Bureaucrat a("John", 150);
			std::cout << a << std::endl;
			a.decrementGrade();
			std::cout << a << std::endl;
		}
		catch (std::exception &exception) {
			std::cout << exception.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
			Bureaucrat a("John", 0);
			std::cout << a << std::endl;
			a.decrementGrade();
			std::cout << a << std::endl;
		}
		catch (std::exception &exception) {
			std::cout << exception.what() << std::endl;
		}
	}
	return (0);
}