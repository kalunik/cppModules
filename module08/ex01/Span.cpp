//
// Created by Waif Jonathon on 4/29/22.
//

#include "Span.hpp"

Span::Span() : N(0) {}

Span::Span(unsigned int maxSize) : N(maxSize) {}

Span::Span(const Span &obj) {*this = obj;}

Span::~Span() {}

Span &Span::operator=(const Span &obj) {
	this->N = obj.N;
	this->_store = obj._store;
	return *this;
}

void Span::addNumber(int num) {
	if (_store.size() == N)
		throw std::range_error("Storage is full");
	_store.push_back(num);
}

int Span::shortestSpan() {
	if (_store.size() < 2)
		throw std::logic_error("shortestSpan impossible: add more elements");
	std::vector<int>	tmp = _store;

	std::sort(tmp.begin(), tmp.end());
	int d = (*(tmp.end() - 1) - *tmp.begin());

	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite = tmp.end();
	for (it = tmp.begin(); it != ite - 1; ++it) {
		if ((*(it + 1) - *it) < d)
			d = (*(it + 1) - *it);
	}
	return d;
}

int Span::longestSpan() {
	if (_store.size() < 2)
		throw std::logic_error("longestSpan impossible: add more elements");
	std::vector<int> tmp = _store;
	std::sort(tmp.begin(), tmp.end());

	return *(tmp.end() - 1) - *tmp.begin();
}