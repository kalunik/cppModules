//
// Created by Waif Jonathon on 15.04.2022.
//

#ifndef CPPMODULES_INTERN_HPP
#define CPPMODULES_INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class Intern {
public:
	Intern();
	Intern(const Intern &obj);
	~Intern();

	Intern &operator=(const Intern &obj);

	class UnknownForm : public std::exception {
	public:
		virtual const char * what() const throw();
	};

	Form	*makeForm(const std::string formName, const std::string formTarget);
};


#endif //CPPMODULES_INTERN_HPP
