//
// Created by Waif Jonathon on 15.04.2022.
//

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &obj) {
	*this = obj;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &obj) {
	(void) obj;
	return (*this);
}

const char *Intern::UnknownForm::what() const throw() {
	return ("Sir, we don't have this type of form. I'm very sorry.");
}

Form *Intern::makeForm(const std::string formName, const std::string formTarget) {
	Form *val[3] = {
			new ShrubberyCreationForm(formTarget),
			new RobotomyRequestForm(formTarget),
			new PresidentialPardonForm(formTarget)
	};
	std::string	key[3] = {
			"shrubbery", "robotomy", "presidential"
	};

	try {
		for (int i = 0; i < 3; i++) {
			if (formName == key[i]) {
				std::cout << "Intern creates " << formName << std::endl;
				return (val[i]);
			}
		}
		throw UnknownForm();
	}
	catch (Intern::UnknownForm &e) {
		std::cerr << e.what() << std::endl;
	}
	return (NULL);
}