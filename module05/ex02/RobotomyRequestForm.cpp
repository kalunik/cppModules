//
// Created by Waif Jonathon on 4/12/22.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form
("DefaultRobotomyForm", 72, 45), _target
(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) :
Form(obj) {
	*this = obj;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &obj) {
	this->_target = obj._target;
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const {
	return (this->_target);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << "* Bzzzz Bzzz bzz *" << std::endl;
	std::srand(time(NULL));
	if (rand() % 2) {
		std::cout << getTarget() << " has been successfully robotomized"
			<<std::endl;
	} else {
		std::cout << "Robotomy failed" << std::endl;
	}
}
