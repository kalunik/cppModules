//
// Created by Waif Jonathon on 4/7/22.
//

#ifndef CPPMODULES_HARL_HPP
#define CPPMODULES_HARL_HPP

#include <iostream>

class Harl {
public:
	Harl();
	~Harl();
	void	complain(std::string level);
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};


#endif //CPPMODULES_HARL_HPP
