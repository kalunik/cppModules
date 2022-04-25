//
// Created by Waif Jonathon on 4/25/22.
//

#ifndef CPPMODULES_BASE_HPP
#define CPPMODULES_BASE_HPP


class Base {
public:
	virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base	*generate(void);

void	identify(Base *p);

void	identify(Base &p);

#endif //CPPMODULES_BASE_HPP
