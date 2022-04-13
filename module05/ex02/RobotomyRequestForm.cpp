//
// Created by Waif Jonathon on 4/12/22.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) :
_target(obj._target) {
	*this = obj;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &obj) {
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const {
	return (this->_target);
}

int RobotomyRequestForm::getSignGrade() const {
	return (this->_signGrade);
}

int RobotomyRequestForm::getExecGrade() const {
	return (this->_execGrade);
}