//
// Created by Waif Jonathon on 4/26/22.
//

#ifndef CPPMODULES_TEMP_HPP
#define CPPMODULES_TEMP_HPP

#include <iostream>

template <typename S>
const S &min(const S &a, const S &b) {return (a < b) ? a : b;}

template <typename S>
const S &max(const S &a, const S &b) {return (a > b) ? a : b;}

template <typename S>
void swap(S &a, S &b) {S s = a; a = b; b = s;}



#endif //CPPMODULES_TEMP_HPP
