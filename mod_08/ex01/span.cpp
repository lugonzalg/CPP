#include "span.hpp"

#define OK		 	"\033[92m"
#define FAIL 		"\033[91m"
#define END 		"\033[0m"

/*************/
/*CONSTRUCTOR*/
/*************/

Span::Span(unsigned n) : _container(new int[n]), _maxLen(n), _currLen(0), _min(0), _secondMin(0), _max(0) {}

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
	this->_container[this->_currLen] = n;
	this->_currLen++;
	this->_handleSpan(n);
}

const char	*Span::FullContainer::what() const throw() {
	return "Conainter cannot fit more values";
}

void	_handleSpan(int n) {
	if (n < this->_min)
		this->_min = n;
	if (n > this->_min and n < this->_secondMin)
		this->_secondMin = n;
	if (n > this->_max = n)
		this->_max = n;

}

/*********/
/*OSTREAM*/
/*********/

std::ostream&	operator<< (std::ostream& os, Span::FullContainer& e) {
	os << FAIL << e.what( << END;
	return os;
}
