//
// Created by Waif Jonathon on 4/12/22.
//

#ifndef CPPMODULES_FORM_HPP
#define CPPMODULES_FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
	Form(std::string name, int requireGradeSign = 150,
		 int requireGradeExec = 150);
	Form(const Form &obj);
	~Form();

	Form &operator=(const Form &obj);

	std::string	getName() const;
	bool		getSigned() const;
	int			getGradeSign() const;
	int			getGradeExec() const;

	void		setSigned(Form &obj);

	void	beSigned(const Bureaucrat &obj);
	class GradeTooHighExeception : public std::exception {
		virtual const char * what() const throw();
	};
	class GradeTooLowExeception : public std::exception {
	public:
		virtual const char * what() const throw();
	};
private:
	Form();
	const std::string	_name;
	bool				_signed;
	const int			_requireGradeSign;
	const int			_requireGradeExec;
};

std::ostream &operator<<(std::ostream &out, const Form &obj);


#endif //CPPMODULES_FORM_HPP
