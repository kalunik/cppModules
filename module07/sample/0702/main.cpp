//
// Created by Waif Jonathon on 4/26/22.
//

#include "Vertex.hpp"

int main() {
	Vertex<int> v1(12, 23, 34);
	Vertex<> v2(12, 23, 34);

	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;

	return 0;
}