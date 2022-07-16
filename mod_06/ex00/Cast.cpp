/*****/
/*SRC*/
/*****/

/*STRING TO INT*/
/*https://stackoverflow.com/questions/7663709/how-can-i-convert-a-stdstring-to-int*/

#include "Cast.hpp"

#include <iostream>
#include <iomanip>
#include <sstream>

/*************/
/*CONSTRUCTOR*/
/*************/

Cast::Cast() : _str(""), _n(0), _f(0.0), _c(0), _has_f(false), _has_digit(false){
	this->_c_str = NULL;
	this->_str = "";
	std::cout << "Non initialized instance, please use the setter" << std::endl;
}

Cast::Cast(const char* str) {
	this->_c_str = str;
	this->_str = str;
	this->_detect();
}

Cast::Cast(Cast const& src) {
	*this = src;
}

/************/
/*DESTRUCTOR*/
/************/

Cast::~Cast() {
}

/******************/
/*MEMBER FUNCTIONS*/
/******************/

void	Cast::_detect() {
	this->_len = 0;
	while (this->_c_str[this->_len]) {
		if (this->_c_str[this->_len] == 'f')
			this->_has_f = true;
		else if (isdigit(this->_c_str[this->_len]))
			this->_has_digit = true;
		this->_len++;
	}
	if (this->_has_f and this->_has_digit)
		this->_isFloat();
	else if (this->_has_digit)
		this->_isInt();
	else
		this->_isChar();
}

void	Cast::_isFloat() {
	std::istringstream(this->_str) >> this->_f;
	this->_n = static_cast<int>(this->_f);
	this->_c = static_cast<char>(this->_n);
}

void	Cast::_isInt() {
	std::istringstream(this->_str) >> this->_n;
	this->_f = static_cast<float>(this->_n);
	std::ostringstream(this->_n) >> this->_c;
	//this->_c = static_cast<char>(this->_n);
}

void	Cast::_isChar() {
	//if (this->_n > 0 and this->_n < 128)
	this->_c = static_cast<char>(this->_n);
	//std::istringstream(this->_str) >> this->_c;
	//this->_f = static_cast<float>(this->_c);
	//this->_n = static_cast<int>(this->_c);
}

/**********/
/*OVERLAOD*/
/**********/

Cast&	Cast::operator= (Cast const& src) {
	this->_str = src._str;
	this->_n = src._n;
	this->_f = src._f;
	this->_c = src._c;
	return *this;
}

/********/
/*SETTER*/
/********/

void	Cast::setSTR(const char* ref) { this->_c_str = ref; }

/********/
/*GETTER*/
/********/

float	Cast::getFloat() const { return this->_f; }
float	Cast::getInt() const { return this->_n; }
float	Cast::getChar() const { return this->_c; }
float	Cast::getFlags() const { return this->_has_f or this->_has_digit; }

/*********/
/*OSTREAM*/
/*********/

std::ostream&	operator<< (std::ostream& os, Cast const& src)
{
	os << "CHAR: " << src.getChar() << std::endl;
	if (src.getFlags())
	{
		os << "INT: " << src.getInt() << std::endl;
		os << "FLOAT: " << std::fixed << std::setprecision(1) << src.getFloat() << "f" << std::endl;
	}
	else
	{
		os << "FLOAT: " << "imposible" << std::endl;
		os << "INT: " << "imposible" << std::endl;
	}
	return os;
}
