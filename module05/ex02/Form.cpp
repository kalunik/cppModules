//
// Created by Waif Jonathon on 4/12/22.
//

#include "Form.hpp"


Form::Form() : _requireGradeSign(150), _requireGradeExec(150){
}

Form::Form(std::string name, int requireGradeSign, int requireGradeExec) :
	_name(name), _signed(false), _requireGradeSign(requireGradeSign),
	_requireGradeExec(requireGradeExec) {
	if (this->_requireGradeSign > 150 || this->_requireGradeExec > 150)
		throw GradeTooLowExeception();
	else if (this->_requireGradeSign < 1 || this->_requireGradeExec < 1)
		throw GradeTooHighExeception();
}

Form::Form(const Form &obj) : _name(obj._name),
	_requireGradeSign(obj._requireGradeSign), _requireGradeExec(obj._requireGradeExec) {
	*this = obj;
}

Form::~Form() {}

Form &Form::operator=(const Form &obj) {
	this->_signed = obj._signed;
	return (*this);
}

std::string Form::getName() const {
	return (this->_name);
}

bool Form::getSigned() const {
	return (this->_signed);
}

int Form::getGradeSign() const {
	return (this->_requireGradeSign);
}

int Form::getGradeExec() const {
	return (this->_requireGradeExec);
}

void Form::setSigned(Form &obj) {
	obj._signed = true;
}

void Form::beSigned(const Bureaucrat &obj) {
	if (obj.getGrade() > this->getGradeSign())
		throw GradeTooLowExeception();
	setSigned(*this);
}

const char *Form::GradeTooHighExeception::what() const throw() {
	return ("Form Exception : Bureaucrat grade too high!");
}

const char *Form::GradeTooLowExeception::what() const throw() {
	return ("Form Exception : Bureaucrat grade too low!");
}

const char *Form::NoSign::what() const throw() {
	return ("Form Exception : Bureaucrat should sign this form first!");
}

void Form::execute(const Bureaucrat &executor) const {
	if (this->getSigned()) {
		if (executor.getGrade() > Form::getGradeExec())
			throw GradeTooLowExeception();
	} else
		throw NoSign();
}

std::ostream &operator<<(std::ostream &out, const Form &obj) {
	out << obj.getName() << " | " << obj.getSigned() << " | " << obj.getGradeSign()
		<< " | " << obj.getGradeExec();
	return (out);
}
