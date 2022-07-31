/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:08:39 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/31 13:13:45 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*STRING TO INT*/
/*https://stackoverflow.com/questions/7663709/how-can-i-convert-a-stdstring-to-int*/

/*****/
/*SRC*/
/*****/

#include "Cast.hpp"

#include <iostream>
#include <iomanip>
#include <sstream>

/*************/
/*CONSTRUCTOR*/
/*************/

Cast::Cast() : _str(""), _n(0), _f(0.0f), _d(0.0), _c(0), _hasF(false), _hasDigit(false), _hasAlpha(false){
	this->_c_str = NULL;
	this->_str = "";
	std::cout << "Non initialized instance, please use the setter" << std::endl;
}

Cast::Cast(const char* str) : _str(""), _n(0), _f(0.0f), _d(0.0), _c(0), _hasF(false), _hasDigit(false), _hasAlpha(false) {
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
	std::size_t	i;

	i = 0;
	while (this->_c_str[i]) {
		if (isdigit(this->_c_str[i]))
			this->_hasDigit = true;
		else if (isalpha(this->_c_str[i]) and this->_c_str[i] != 'f')
			this->_hasAlpha = true;
		else if (this->_c_str[i] == '.')
			this->_hasDot = true;
		i++;
	}
	this->_len = i;
	if (this->_c_str[this->_len - 1] == 'f' and this->_hasDigit)
		this->_hasF = true;
	if (this->_hasF and this->_hasDigit and !this->_hasAlpha and this->_hasDot)
		this->_isFloat();
	else if (this->_hasDigit and !this->_hasAlpha and !this->_hasDot)
		this->_isInt();
	else if (this->_hasDigit and this->_hasDot and !this->_hasAlpha)
		this->_isDouble();
	else if (this->_len == 1)
		this->_isChar();
	else
		this->_c = 0;
}

void	Cast::_isFloat() {
	std::cout << "Is Float" << std::endl;
	std::istringstream(this->_str.erase(this->_len - 1)) >> this->_f;
	this->_d = static_cast<double>(this->_f);
	this->_n = static_cast<int>(this->_f);
}

void	Cast::_isDouble() {
	std::cout << "Is Double" << std::endl;
	std::istringstream(this->_str) >> this->_d;
	this->_f = static_cast<float>(this->_d);
	this->_n = static_cast<int>(this->_d);
}

void	Cast::_isInt() {
	std::cout << "Is Int" << std::endl;
	std::istringstream(this->_str) >> this->_n;
	this->_d = static_cast<double>(this->_n);
	this->_f = static_cast<float>(this->_n);
}

void	Cast::_isChar() {
	std::cout << "Is Char" << std::endl;
	this->_c = *this->_c_str;
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
double	Cast::getDouble() const { return this->_d; }
int		Cast::getInt() const { return this->_n; }
char	Cast::getChar() const { return this->_c; }
bool	Cast::getFlags() const { return !this->_hasAlpha and (this->_hasF or this->_hasDigit); }

/*********/
/*OSTREAM*/
/*********/

std::ostream&	operator<< (std::ostream& os, Cast const& src)
{
	int n;
	std::ostringstream oss;

	n = src.getInt();
	if (src.getFlags())
	{
		if (n > 32 and n < 127)
			os << "CHAR: " << static_cast<char>(n) << std::endl;
		else
			os << "CHAR: " << "impossible" << std::endl;
		os << "INT: " << src.getInt() << std::endl;
		os << "FLOAT: " << std::fixed << std::setprecision(1) << src.getFloat() << "f" << std::endl;
		os << "DOUBLE: " << src.getDouble() << std::endl;
	}
	else
	{
		if (n > 32 and n < 127)
			os << "CHAR: " << static_cast<char>(n) << std::endl;
		else
			os << "CHAR: " << "impossible" << std::endl;
		os << "FLOAT: " << "nanf" << std::endl;
		os << "DOUBLE: " << "nan" << std::endl;
		os << "INT: " << "imposible" << std::endl;
	}
	return os;
}
