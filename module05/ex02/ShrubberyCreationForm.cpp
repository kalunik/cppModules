//
// Created by Waif Jonathon on 4/12/22.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) :
		_target(obj._target) {
	*this = obj;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj) {
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const {
	return (this->_target);
}

int ShrubberyCreationForm::getSignGrade() const {
	return (this->_signGrade);
}

int ShrubberyCreationForm::getExecGrade() const {
	return (this->_execGrade);
}