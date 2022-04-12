//
// Created by Waif Jonathon on 4/12/22.
//

#ifndef CPPMODULES_PRESIDENTIALPARDONFORM_HPP
#define CPPMODULES_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &obj);
	~PresidentialPardonForm();

	PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);

private:
	const std::string	_target;
};


#endif //CPPMODULES_PRESIDENTIALPARDONFORM_HPP
