//
// Created by Waif Jonathon on 4/12/22.
//

#ifndef CPPMODULES_SHRUBBERYCREATIONFORM_HPP
#define CPPMODULES_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "fstream"

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &obj);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);

	std::string	getTarget() const;

	virtual void execute(const Bureaucrat &executor) const;
private:
	std::string	_target;
};


#endif //CPPMODULES_SHRUBBERYCREATIONFORM_HPP
