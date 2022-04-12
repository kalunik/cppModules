//
// Created by Waif Jonathon on 4/12/22.
//

#ifndef CPPMODULES_SHRUBBERYCREATIONFORM_HPP
#define CPPMODULES_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &obj);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);

private:
	const std::string	_target;
};


#endif //CPPMODULES_SHRUBBERYCREATIONFORM_HPP
