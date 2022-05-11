//
// Created by Waif Jonathon on 4/26/22.
//

#ifndef CPPMODULES_ARRAY_HPP
#define CPPMODULES_ARRAY_HPP

#include <iostream>

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
	Array<T>() : _arr(NULL), _size(0) {
		std::cout << "Zero constructor" << std::endl;
	};
	Array<T>(unsigned int size) {
		std::cout << "Size constructor" << std::endl;
		if (size == 0)
			_arr = NULL;
		else
			this->_arr = new T[_size]();
		_size = size;
	};
	Array<T>(const Array<T> &obj) {
		std::cout << "Copy constructor called" << std::endl;
		*this = obj;
	};
	~Array<T>() {
		if (this->_arr)
			delete [](this->_arr);
	};

	Array<T> &operator=(const Array<T> &obj) {
		std::cout << "Assignation overload called" << std::endl;
		if (this == &obj)
			return (*this);
		if (this->_arr)
			delete [](this->_arr);
		this->_size = obj.size();
		this->_arr = new T[_size]();
		for (unsigned int i = 0; i < this->_size; i++) {
			this->_arr[i] = obj[i];
		}
		return *this;
	};

	T &operator[](const unsigned int index) const {
		if (index < 0 || index >= _size)
			throw std::range_error("Index out of bounds");
		return this->_arr[index];
	}

	int	size() const {
		return this->_size;
	};
private:
	T				*_arr;
	unsigned int	_size;
};



#endif //CPPMODULES_ARRAY_HPP
