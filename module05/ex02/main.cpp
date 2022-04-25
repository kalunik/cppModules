//
// Created by Waif Jonathon on 4/10/22.
//

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main() {
	{
		try {
			Bureaucrat a("Wolf", 137);
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

	std::cout << std::endl;
	{
		try {
			Bureaucrat a("Deer", 2);
			RobotomyRequestForm b("George Bush");
//			std::cout << b << std::endl;
			a.signForm(b);
//			std::cout << b << std::endl;
			b.execute(a);
//			a.executeForm(b);
		}
		catch (std::exception &exception) {
			std::cout << exception.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		Bureaucrat a("John", 6); //exec reqire grade 5 and higher
		PresidentialPardonForm b("George Bush");
//		std::cout << b << std::endl;
//		a.signForm(b);
		std::cout << b << std::endl;
		a.executeForm(b); //FAIL – can't execute unsigned form or low grade
	}
	std::cout << std::endl;
	return (0);
}