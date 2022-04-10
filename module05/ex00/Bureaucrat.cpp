//
// Created by Waif Jonathon on 4/10/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << "Bureaucrat ng constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name) {
	std::cout << "Bureaucrat copy constructor" << std::endl;
	*this = obj;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj) {
	std::cout << "Bureaucrat assignment operator" << std::endl;
	this->_grade = obj._grade;
	return (*this);
}

void Bureaucrat::incrementGrade(Bureaucrat &obj) {
	obj._grade += 1;
}

void Bureaucrat::decrementGrade(Bureaucrat &obj) {
	obj._grade -= 1;
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
