//
// Created by Waif Jonathon on 4/26/22.
//

#ifndef CPPMODULES_TEMP_HPP
#define CPPMODULES_TEMP_HPP

#include <iostream>
#include <algorithm>	// std::find

template<typename T>
typename T::const_iterator easyfind(const T &cont, int aim) {
	typename T::const_iterator it = std::find(cont.begin(), cont.end(), aim);
	if (it == cont.end())
		throw std::out_of_range("Couldn't find it");
	return it;
};



#endif //CPPMODULES_TEMP_HPP
