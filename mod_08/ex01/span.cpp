#include "span.hpp"

#include <ostream>
#include <climits>

#define OK		 	"\033[92m"
#define FAIL 		"\033[91m"
#define END 		"\033[0m"

/*************/
/*CONSTRUCTOR*/
/*************/

Span::Span(unsigned n) : _container(new int[n]), _maxLen(n), _currLen(0), _min(INT_MAX), _secondMin(INT_MAX), _max(INT_MIN) {}

/************/
/*DESTRUCTOR*/
/************/

Span::~Span() { delete [] this->_container; }

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

void	Span::_handleSpan(int n) {
	if (n < this->_min) {
		this->_secondMin = this->_min;
		this->_min = n;
	}
	else if (n > this->_max)
		this->_max = n;
	if (n > this->_min and n < this->_secondMin)
		this->_secondMin = n;

}

int	Span::shortestSpan() { return this->_secondMin - this->_min; }

int	Span::longestSpan() { return this->_max - this->_min; }
/*********/
/*OSTREAM*/
/*********/

std::ostream&	operator<< (std::ostream& os, Span::FullContainer& e) {
	os << FAIL << e.what() << END;
	return os;
}
