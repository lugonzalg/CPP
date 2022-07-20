/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:17:24 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/03 17:26:43 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

#define HIGHLEVEL	1
#define LOWLEVEL 	150

/***************************/
/*CINSTRUCTOR & DESTRUCTOR*/
/**************************/

Bureaucrat::Bureaucrat() : _name("lukas"), _level(150) {}

Bureaucrat::Bureaucrat(Bureaucrat const& src) : _name(src.getName()) {
	*this = src;
}

Bureaucrat::Bureaucrat(int level, std::string const& name) : _name(name), _level(level) {
	try
	{
		if (level < HIGHLEVEL)
			throw Bureaucrat::GradeTooHighException();
		else if (_level > LOWLEVEL)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e << std::endl;
		std::cout << *this << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e << std::endl;
		std::cout << *this << std::endl;
	}
}

Bureaucrat::~Bureaucrat() {}

/******************/
/*MEMBER FUNCTIONS*/
/******************/

void	Bureaucrat::addLevel() {
	this->_level--;
	if (_level < HIGHLEVEL)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrLevel() {
	this->_level++;
	if (_level > LOWLEVEL)
		throw Bureaucrat::GradeTooLowException();
}

/******************/
/*CUSTOM EXCEPTION*/
/******************/

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Level too high Exception");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Level too Low Exception");
}

const char*	Bureaucrat::FormStateFalse::what() const throw() {
	return ("This Form isn't signed to execute");
}

/**********/
/*OPERATOR*/
/**********/

Bureaucrat&	Bureaucrat::operator= (Bureaucrat const& src) {
	this->_level = src.getLevel();
	return *this;
}

/**********/
/*GETTERS*/
/**********/

std::string const&	Bureaucrat::getName() const { return (this->_name); }
int	Bureaucrat::getLevel() const { return (this->_level); }

/**********/
/*OSTREAM*/
/**********/

std::ostream& operator<< (std::ostream& os, Bureaucrat::GradeTooHighException& e) {
	os << e.what();
	return os;
}

std::ostream& operator<< (std::ostream& os, Bureaucrat::GradeTooLowException& e) {
	os << e.what();
	return os;
}

std::ostream& operator<< (std::ostream& os, Bureaucrat& src) {
	os << src.getName() + " bureaucrat grade," + std::to_string(src.getLevel());
	return os;
}

std::ostream& operator<< (std::ostream& os, Bureaucrat::FormStateFalse& e) {
	os << e.what();
	return os;
}
