//
// Created by Waif Jonathon on 4/29/22.
//

#include <iostream>
#include <list>

int main() {
	std::list<int>	lst1;

	lst1.push_back(1);
	lst1.push_back(17);
	lst1.push_back(42);
	lst1.push_back(17);

	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = lst1.end();

	for (it = lst1.begin(); it != ite; ++it){
		std::cout << *it << std::endl;
	}
}