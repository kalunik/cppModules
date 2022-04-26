//
// Created by Waif Jonathon on 4/26/22.
//

#include "iter.hpp"

class Awesome {
public:
	Awesome(): _n(42) { return; }
	int get() const { return this->_n; }
private:
	int _n;
};
std::ostream & operator<<(std::ostream & o, Awesome const & rhs) { o << rhs.get(); return o; }

template<typename T>
void print(T const & x) { std::cout << x << std::endl; return; }

int main()
{
	{
		int a[5] = {1, 2, 3, 4, 5};
		iter(a, 5, print);

		std::string b[5] = {"Atlantis", "Plasma", "Oasis", "Void"};
		iter(b, 4, print);
	}
		std::cout << std::endl;
	{
		int tab[] = {0, 1, 2, 3, 4};
		Awesome tab2[5];

		iter(tab, 5, print);
		iter(tab2, 5, print);
	}
	return 0;
}