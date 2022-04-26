//
// Created by Waif Jonathon on 4/26/22.
//

#ifndef CPPMODULES_ITER_HPP
#define CPPMODULES_ITER_HPP

#include <iostream>

template<typename T>
void iter(T *arr, int len, void (*func)(const T &t)) {
	for (int i = 0; i < len; i++) {
		func(arr[i]);
	}
}

#endif //CPPMODULES_ITER_HPP
