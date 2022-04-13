//
// Created by Waif Jonathon on 4/12/22.
//

#ifndef CPPMODULES_PRESIDENTIALPARDONFORM_HPP
#define CPPMODULES_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &obj);
	~PresidentialPardonForm();

	PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);

	std::string	getTarget() const;
	int			getSignGrade() const;
	int			getExecGrade() const;
private:
	const std::string	_target;
	static const int	_signGrade = 25;
	static const int	_execGrade = 5;
};


#endif //CPPMODULES_PRESIDENTIALPARDONFORM_HPP
