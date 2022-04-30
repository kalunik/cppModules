//
// Created by Waif Jonathon on 4/29/22.
//

#ifndef CPPMODULES_MUTANTSTACK_HPP
#define CPPMODULES_MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack<T>() {};
	MutantStack<T>(const MutantStack<T> &obj) {*this = obj;};
	~MutantStack<T>() {};

	MutantStack<T> &operator=(const MutantStack<T> &obj) {
		std::stack<T>::operator=(obj);
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() {return this->c.begin();}
	iterator end() {return this->c.end();}

};

#endif //CPPMODULES_MUTANTSTACK_HPP
