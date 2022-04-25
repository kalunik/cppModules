//
// Created by Waif Jonathon on 4/10/22.
//

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
	{
		Intern nobodyKnowHim;
		Bureaucrat Frank("Frank", 3);
		Form *form;

		form = nobodyKnowHim.makeForm("shrubbery", "Paul");
		if (form) {
			Frank.signForm(*form);
			Frank.executeForm(*form);
		}
	}
	std::cout << std::endl;
	{
		Intern nobodyKnowHim;
		Bureaucrat Frank("Frank", 3);
		Form *form;

		form = nobodyKnowHim.makeForm("appointment", "Paul");
		if (form) {
		Frank.signForm(*form);
		Frank.executeForm(*form);
		}
	}

	return (0);
}