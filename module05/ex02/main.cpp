//
// Created by Waif Jonathon on 4/10/22.
//

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main() {
	{
//		try {
			Bureaucrat a("John", 6);
			PresidentialPardonForm b("George Bush");
//			std::cout << b << std::endl;
//			a.signForm(b);
			std::cout << b << std::endl;
			a.executeForm(b);
//		}
//		catch (std::exception &exception) {
//			std::cout << exception.what() << std::endl;
//		}
	}
	/*std::cout << std::endl;
	{
		try {
			Bureaucrat a("Deer", 2);
			RobotomyRequestForm b("George Bush");
//			std::cout << b << std::endl;
			a.signForm(b);
//			std::cout << b << std::endl;
			b.execute(a);
		}
		catch (std::exception &exception) {
			std::cout << exception.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
			Bureaucrat a("Wolf", 2);
			ShrubberyCreationForm b("George");
//			std::cout << b << std::endl;
			a.signForm(b);
//			std::cout << b << std::endl;
			b.execute(a);
		}
		catch (std::exception &exception) {
			std::cout << exception.what() << std::endl;
		}
	}
	std::cout << std::endl;*/
/*	{
		try {
			Bureaucrat a("John", 2);
			Form b("DOC", 1, 2);
			std::cout << b << std::endl;
			a.signForm(b);
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
			Form b("DOC", 0, 2);
			std::cout << b << std::endl;
			b.beSigned(a);
			std::cout << b << std::endl;
		}
		catch (std::exception &exception) {
			std::cout << exception.what() << std::endl;
		}
	}*/
	return (0);
}