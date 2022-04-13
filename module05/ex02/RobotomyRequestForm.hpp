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
	int			getSignGrade() const;
	int			getExecGrade() const;
private:
	const std::string	_target;
	static const int	_signGrade = 72;
	static const int	_execGrade = 45;
};


#endif //CPPMODULES_ROBOTOMYREQUESTFORM_HPP
