/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:17:24 by lugonzal          #+#    #+#             */
/*   Updated: 2022/08/02 18:34:23 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

#define HIGHLEVEL	1
#define LOWLEVEL 	150
#define OK		 	"\033[92m"
#define FAIL 		"\033[91m"
#define END 		"\033[0m"

/************/
/*INSTRUCTOR*/
/************/

Bureaucrat::Bureaucrat() : _name("lukas"), _level(150) {}

Bureaucrat::Bureaucrat(Bureaucrat const& src) : _name(src.getName()) {
	*this = src;
}

Bureaucrat::Bureaucrat(int level, std::string const& name) : _name(name), _level(level) {
	if (level < HIGHLEVEL) {
		std::cout << FAIL << "Level Error, ";
		throw Bureaucrat::GradeTooHighException();
	}
	else if (_level > LOWLEVEL) {
		std::cout << FAIL << "Level Error, ";
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << OK << "Bureaucrat succesfully instated" << END << std::endl;
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

void	Bureaucrat::signForm(Form& form) {
	if (form.getState())
		std::cout << FAIL << this->getName() + " cannot sign "+ form.getName() + " because Form isn't available (Already Signed)" << std::endl;
	else if (form.getGradeSign() < this->_level)
		std::cout << FAIL << this->getName() + " cannot sign "+ form.getName() + " because its level is too low: " << this->getLevel() << std::endl;
	else {
		std::cout << OK << this->getName() + " signed "+ form.getName() + " succesfully" << std::endl;
		form.sign();
	}
	std::cout << END;
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
	os << "//////BUREAUCRAT///////" << std::endl;
	os << "NAME: " << src.getName() << std::endl;
	os << "GRADE: " << src.getLevel() << std::endl;
	return os;
}

std::ostream& operator<< (std::ostream& os, Bureaucrat::FormStateFalse& e) {
	os << e.what();
	return os;
}
