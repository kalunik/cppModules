//
// Created by Waif Jonathon on 4/12/22.
//

#ifndef CPPMODULES_PRESIDENTIALPARDONFORM_HPP
#define CPPMODULES_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &obj);
	~PresidentialPardonForm();

	PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);

	std::string	getTarget() const;
	virtual void execute(const Bureaucrat &executor) const;
private:
	PresidentialPardonForm();
	std::string	_target;

};


#endif //CPPMODULES_PRESIDENTIALPARDONFORM_HPP
