//
// Created by Waif Jonathon on 4/10/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << "Bureaucrat ng constructor" << std::endl;
	if (this->_grade > 150)
		throw GradeTooLowException();
	else if (this->_grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name) {
	std::cout << "Bureaucrat copy constructor" << std::endl;
	*this = obj;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj) {
	std::cout << "Bureaucrat assignment operator" << std::endl;
	this->_grade = obj._grade;
	if (this->_grade > 150)
		throw GradeTooLowException();
	else if (this->_grade < 1)
		throw GradeTooHighException();
	return (*this);
}

void Bureaucrat::incrementGrade() {
	this->_grade -= 1;
	if (this->_grade < 1) {
		this->_grade += 1;
		throw GradeTooHighException();
	}
}

void Bureaucrat::decrementGrade() {
	this->_grade += 1;
	if (this->_grade > 150) {
		this->_grade -= 1;
		throw GradeTooLowException();
	}
}

std::string Bureaucrat::getName() const {
	return (this->_name);
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

void Bureaucrat::displayInfo() const {
	std::cout << "–––––––" << std::endl;
	std::cout <<"name   | " << getName() << std::endl;
	std::cout <<"HP     | " << getGrade() << std::endl;
	std::cout << "–––––––" << std::endl;
}

void Bureaucrat::signForm(Form &obj) {
	try {
			obj.beSigned(*this);
			std::cout << this->getName() << " signed " << obj.getName() << std::endl;
	}
	catch (Form::GradeTooLowExeception &exeception)
	{
		std::cerr << this->getName() << " couldn't sign " << obj.getName()
		<< " because " << exeception.what() << std::endl;
	}
}

void Bureaucrat::executeForm(const Form &form) {
	try {
		form.execute(*this);
		std::cout << getName() << " execute " << form.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::checkGrade() {
	if (this->_grade > 150)
		throw GradeTooHighException();
	else if (this->_grade < 1)
		throw GradeTooHighException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Exception : Grade too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Exception : Grade too low!");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj) {
	out << obj.getName() << " , bureaucrat grade " << obj.getGrade();
	return (out);
}