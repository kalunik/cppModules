//
// Created by Waif Jonathon on 4/12/22.
//

#ifndef CPPMODULES_ROBOTOMYREQUESTFORM_HPP
#define CPPMODULES_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &obj);
	~RobotomyRequestForm();

	RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);

	std::string	getTarget() const;

	virtual void execute(const Bureaucrat &executor) const;
private:
	std::string	_target;
};


#endif //CPPMODULES_ROBOTOMYREQUESTFORM_HPP
