//
// Created by Waif Jonathon on 4/26/22.
//

#include "MutantStack.hpp"
#include <list>

int main( void ) {
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << " -- top" << std::endl;

		mstack.pop();
		std::cout << mstack.size() << " -- size" << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(1);
		mstack.push(22);
		mstack.push(333);
		mstack.push(4444);
		MutantStack<int>::iterator it = mstack.begin();
		std::cout << *(it) << " = begin" << std::endl;
		MutantStack<int>::iterator ite = mstack.end();
		std::cout << *(ite - 1) << " = end - 1" << std::endl;
		std::cout << mstack.size() << " = size" << std::endl;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << std::endl << "mstack2: " << std::endl;

		MutantStack<int> mstack2 = mstack;

		MutantStack<int>::iterator it2 = mstack2.begin();
		MutantStack<int>::iterator ite2 = mstack2.end();
		while (it2 != ite2) {
			std::cout << *it2 << std::endl;
			++it2;
		}
	}
}
