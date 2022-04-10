//
// Created by Waif Jonathon on 4/10/22.
//

#ifndef CPPMODULES_BUREAUCRAT_HPP
#define CPPMODULES_BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &obj);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &obj);

	void	incrementGrade(Bureaucrat &obj);
	void	decrementGrade(Bureaucrat &obj);

	std::string	getName() const;
	int			getGrade() const;
	void		displayInfo() const;
private:
	Bureaucrat();

	std::string const	_name;
	int					_grade;
};


#endif //CPPMODULES_BUREAUCRAT_HPP
