//
// Created by Waif Jonathon on 4/10/22.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	{
		try {
			Bureaucrat a("John", 150);
			Form b("DOC", 150, 2);
			std::cout << b << std::endl;
			a.signForm(b); //form will be signed(grade equal required one)
			std::cout << b << std::endl;
		}
		catch (std::exception &exception) {
			std::cout << exception.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
			Bureaucrat a("John", 2);
			Form b("DOC", 1, 2);
			std::cout << b << std::endl;
			a.signForm(b); // FAIL – grade lower than required
			std::cout << b << std::endl;
		}
		catch (std::exception &exception) {
			std::cout << exception.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
			Bureaucrat a("John", 2);
			Form b("DOC", 0, 2); //FAIL
			std::cout << b << std::endl;
			b.beSigned(a);
			std::cout << b << std::endl;
		}
		catch (std::exception &exception) {
			std::cout << exception.what() << std::endl;
		}
	}
	return (0);
}