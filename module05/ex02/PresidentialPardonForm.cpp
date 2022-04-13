//
// Created by Waif Jonathon on 4/12/22.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _target
	(target){};

PresidentialPardonForm::PresidentialPardonForm(
		const PresidentialPardonForm &obj) : _target(obj._target){
	*this = obj;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &obj) {
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const {
	return (this->_target);
}

int PresidentialPardonForm::getSignGrade() const {
	return (this->_signGrade);
}

int PresidentialPardonForm::getExecGrade() const {
	return (this->_execGrade);
}
