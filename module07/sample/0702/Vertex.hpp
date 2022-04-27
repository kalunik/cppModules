//
// Created by Waif Jonathon on 4/26/22.
//

#ifndef CPPMODULES_VERTEX_HPP
#define CPPMODULES_VERTEX_HPP

#include <iostream>
#include <iomanip>


template<typename T = float>
class Vertex {
public:
	Vertex(const T &x, const T &y, const T &z) : _x(x), _y(y), _z(z) {};
	~Vertex() {}

	const T &getX() const { return this->_x;};
	const T &getY() const { return this->_y;};
	const T &getZ() const { return this->_z;};

private:
	const T _x;
	const T _y;
	const T _z;
};

template<typename T>
std::ostream &operator<<(std::ostream &o, const Vertex<T> &v){
	std::cout.precision(1);
	o << std::setiosflags(std::ios::fixed);
	o << "Vertex(" << v.getX() << ", "<< v.getY() << ", "<< v.getZ() << ")";
	return o;
}


#endif //CPPMODULES_VERTEX_HPP
