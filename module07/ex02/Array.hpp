//
// Created by Waif Jonathon on 4/26/22.
//

#ifndef CPPMODULES_ARRAY_HPP
#define CPPMODULES_ARRAY_HPP

#include <iostream>

template<class T>

class Array {
public:
	Array() {T *arr;};
	Array(unsigned int n) {T arr[n];};
	Array(const Array<T> &obj) {*this = obj;};

	Array &operator=(const Array<T> &obj) {this->_n = obj._n;};

	int	size() const;
private:
	T _n;
};

#endif //CPPMODULES_ARRAY_HPP
