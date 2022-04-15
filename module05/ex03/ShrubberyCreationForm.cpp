//
// Created by Waif Jonathon on 4/12/22.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form
("ShrubberyForm", 145, 137), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm
&obj) : Form(obj) {
	*this = obj;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj) {
	this->_target = obj._target;
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const {
	return (this->_target);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::ofstream	ofs(getTarget() + "_shrubbery");
	std::string tree =
			"                                                         .\n"
			"                                              .         ;  \n"
			"                 .              .              ;%     ;;   \n"
			"                   ,           ,                :;%  %;   \n"
			"                    :         ;                   :;%;'     .,   \n"
			"           ,.        %;     %;            ;        %;'    ,;\n"
			"             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
			"              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
			"               ;%;      %;        ;%;        % ;%;  ,%;'\n"
			"                `%;.     ;%;     %;'         `;%%;.%;'\n"
			"                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
			"                    `:%;.  :;bd%;          %;@%;'\n"
			"                      `@%:.  :;%.         ;@@%;'   \n"
			"                        `@%.  `;@%.      ;@@%;         \n"
			"                          `@%%. `@%%    ;@@%;        \n"
			"                            ;@%. :@%%  %@@%;       \n"
			"                              %@bd%%%bd%%:;     \n"
			"                                #@%%%%%:;;\n"
			"                                %@@%%%::;\n"
			"                                %@@@%(o);  . '         \n"
			"                                %@@@o%;:(.,'         \n"
			"                            `.. %@@@o%::;         \n"
			"                               `)@@@o%::;         \n"
			"                                %@@(o)::;        \n"
			"                               .%@@@@%::;         \n"
			"                               ;%@@@@%::;.          \n"
			"                              ;%@@@@%%:;;;. \n"
			"                          ...;%@@@@@%%:;;;;,..   \n";

	ofs << tree;
	ofs.close();
}
