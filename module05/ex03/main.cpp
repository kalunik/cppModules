//
// Created by Waif Jonathon on 4/10/22.
//

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
	Intern		nobodyKnowHim;
	Bureaucrat	frank("frank", 3);
	Form		*form;

	form = nobodyKnowHim.makeForm("shrubbery", "Paul");
	frank.signForm(*form);
	frank.executeForm(*form);

	return (0);
}