//
// Created by Waif Jonathon on 4/12/22.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form
("DefaultPresidentForm", 25, 5),
_target(target) {}

PresidentialPardonForm::PresidentialPardonForm(
		const PresidentialPardonForm &obj) : Form(obj) {
	*this = obj;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &obj) {
	this->_target = obj._target;
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const {
	return (this->_target);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox."
		<< std::endl;
}
