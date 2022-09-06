#include "span.hpp"

#include <ostream>
#include <algorithm>
#include <utility>
#include <iostream>
#include <climits>

#define OK		 	"\033[92m"
#define FAIL 		"\033[91m"
#define END 		"\033[0m"

/*************/
/*CONSTRUCTOR*/
/*************/

Span::Span(unsigned n) :  _maxLen(n), _currLen(0) {}

Span::Span(Span const& src) {
	*this = src;
}
/************/
/*DESTRUCTOR*/
/************/

Span::~Span() {}

/******************/
/*MEMBER FUNCTIONS*/
/******************/

void	Span::addNumber(int n) {
	if (this->_maxLen == this->_currLen)
		throw Span::FullContainer();
	this->_v.push_back(n);
	this->_currLen++;
}

const char	*Span::FullContainer::what() const throw() {
	return "Container cannot fit more values\n";
}

const char	*Span::LowElementCount::what() const throw() {
	return "Container doesn't contain enough elements\n";
}

int	Span::longestSpan() { 
	if (this->_currLen < 2)
		throw LowElementCount();
	std::sort(this->_v.begin(), this->_v.end());
	return this->_v[this->_currLen - 1] - this->_v[0];
	}

int	Span::shortestSpan() {
	if (this->_currLen < 2)
		throw LowElementCount();
	std::sort(this->_v.begin(), this->_v.end());
	return this->_v[1] - this->_v[0];
	}

/*********/
/*OSTREAM*/
/*********/

std::ostream&	operator<< (std::ostream& os, Span::FullContainer& e) {
	os << FAIL << e.what() << END;
	return os;
}

/*********/
/*OPERATOR*/
/*********/

Span&	Span::operator= (Span const& src) {
	this->_v = src._v;
	this->_currLen = src._currLen;
	return *this;
}
