//
// Created by Waif Jonathon on 4/10/22.
//

#include "Bureaucrat.hpp"

int main() {
	{
		try {
			Bureaucrat a("John", 2);
			std::cout << a << std::endl;
			a.incrementGrade(); //increment grade to 1
			a.incrementGrade(); //increment grade to 0 -- FAIL (out of range)
			std::cout << a << std::endl; //shouldn't work (exception caught)
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
			a.decrementGrade(); //same thing (out of range)
			std::cout << a << std::endl;
		}
		catch (std::exception &exception) {
			std::cout << exception.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
			Bureaucrat a("John", 0); //exception caught here
			std::cout << a << std::endl;
			a.decrementGrade(); //shouldn't work
			std::cout << a << std::endl;
		}
		catch (std::exception &exception) {
			std::cout << exception.what() << std::endl;
		}
	}
	return (0);
}