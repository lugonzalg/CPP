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

/***************************/
/*CINSTRUCTOR & DESTRUCTOR*/
/**************************/

Bureaucrat::Bureaucrat() : _name("lukas"), _level(0) {}

Bureaucrat::Bureaucrat(int level, std::string const& name) : _name(name), _level(level) {
	try
	{
		if (level < 0)
			throw Bureaucrat::GradeTooHighException();
		else if (_level > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e << std::endl;
		std::cout << *this;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e << std::endl;
		std::cout << *this;
	}
}

Bureaucrat::~Bureaucrat() {}

/******************/
/*MEMBER FUNCTIONS*/
/******************/

void	Bureaucrat::addLevel() {
	this->_level++;
	if (_level > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::decrLevel() {
	this->_level--;
	if (_level < 0)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::signForm(Form& form) {
	if (form.getState())
		std::cout << this->getName() + " cannot sign "+ form.getName() + " because Form isn't available (Already Signed)" << std::endl;
	else if (form.getGradeSign() < this->_level)
		std::cout << this->getName() + " cannot exec "+ form.getName() + " because its level is: " + std::to_string(this->getLevel());
	else
		form.sign();
}

void	Bureaucrat::executeForm(Form const& form) {
	if (!form.getState())
		std::cout << this->_name << " couldn't execute this form, because isn't signed yet" << std::endl;
	else if (form.getGradeExec() < this->_level)
		std::cout << this->_name << " couldn't execute this form, because it's execution level is too high" << std::endl;
	else
	{
		form.action();
		std::cout << this->_name << " could execute " << form.getName() << " form succesfully" << std::endl;
	}
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
