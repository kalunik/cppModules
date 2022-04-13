//
// Created by Waif Jonathon on 4/12/22.
//

#ifndef CPPMODULES_SHRUBBERYCREATIONFORM_HPP
#define CPPMODULES_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &obj);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);

	std::string	getTarget() const;
	int			getSignGrade() const;
	int			getExecGrade() const;
private:
	const std::string	_target;
	static const int	_signGrade = 145;
	static const int	_execGrade = 137;
};


#endif //CPPMODULES_SHRUBBERYCREATIONFORM_HPP
