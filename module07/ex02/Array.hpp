//
// Created by Waif Jonathon on 4/26/22.
//

#ifndef CPPMODULES_ARRAY_HPP
#define CPPMODULES_ARRAY_HPP

#include <iostream>
#include <iomanip>


/*template<typename T>
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
}*/



template<class T>

		///try to create arr[0] and delete via destructor
class Array{
public:
	Array<T>() : _arr(NULL), _size(0) {};
	Array<T>(unsigned int size) : _size(size) {
		if (size < 0)
			throw std::runtime_error("Index out of bounds");
		_arr = new T[_size];
	};
	Array<T>(const Array<T> &obj) {*this = obj;};
	~Array<T>() {delete []_arr;};

	Array<T> &operator=(const Array<T> &obj) {
		if (this == &obj)
			return (*this);
		if (this->_size > 0)
			delete [] this->_arr;
		this->_size = obj._size;
		this->_arr = new T(this->_size);
		for (unsigned int i = 0; i < this->_size; i++) {
			this->_arr[i] = obj._arr[i];
		}
		return *this;
	};

	T &operator[](const unsigned int index) const {
		///overflow
		return this->_arr[index];
	}

	int	size() const {
		return this->_size;
	};
private:
	T				*_arr;
	unsigned int	_size
};

#endif //CPPMODULES_ARRAY_HPP
