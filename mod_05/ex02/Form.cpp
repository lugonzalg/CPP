/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:03:50 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/05 20:43:28 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

/**************/
/*CONSTRUCTORS*/
/**************/

Form::Form() : _name("no name"), _state(false), _gradeSign(-1), _gradeExec(-1) {
	//std::cout << "Form Default constructor, Danger!" << std::endl;
}

Form::Form(Form const& src) : _gradeSign(src.getGradeSign()), _gradeExec(src.getGradeExec()) {
	*this = src;
}

Form::Form(std::string const& name, int sign, int exec) : _name(name), _state(false), _gradeSign(sign), _gradeExec(exec) {
	try {
		if (sign < 0 or exec < 0)
			throw Form::GradeTooHighException();
		else if (sign > 150 or exec > 150)
			throw Form::GradeTooLowException();
	}
	catch (Form::GradeTooHighException& e) {
		//std::cout << /*"Form can not be created because of " + */e;
		std::cout << e;
	}
	catch (Form::GradeTooLowException& e) {
		//std::cout << /*"Form can not be created because of " + */e;
		std::cout << e;
	}
	//std::cout << "Form Init constructor" << std::endl;
}

/**************/
/*DESTRUCTORS*/
/**************/

Form::~Form() {
	//std::cout << "Form Default destructor" << std::endl;
}

/************/
/*EXCEPTIONS*/
/************/

const char* Form::GradeTooHighException::what() const throw() {
	return ("Form level too high for be signed");// + type);
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Form level too low for be signed");// + type);
}

const char* Form::FormFalseStatus::what() const throw() {
	return ("Form isn't signed, not available");// + type);
}

/*******************/
/*MEMBER FUNCTIONS*/
/******************/

void	Form::beSigned(Bureaucrat const& signer) {
	try
	{
		if (signer.getLevel() > this->getGradeSign())
			throw Form::GradeTooLowException();
		this->_state = true;
	}
	catch (Form::GradeTooLowException const& e) {
		std::cout << e;
	}
}

void	Form::execute(Bureaucrat const& bure) {
	try
	{
		if (!this->_state)
			throw Form::FormFalseStatus();
		else if (this->getGradeExec() < bure.getLevel())
			throw Form::GradeTooLowException();
		this->action();
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cout << e;
	}
	catch (Form::FormFalseStatus& e)
	{
		std::cout << e;
	}
}

void	Form::action() const { std::cout << "Form: " + this->_name + " doesn't have any utility" << std::endl; }

/**********/
/*OPERATOR*/
/**********/

Form&	Form::operator= (Form const& src) {
	this->_state = src._state;
	return *this;
}

/*********/
/*SETTERS*/
/*********/

void	Form::sign() { this->_state = true; }

/*********/
/*GETTERS*/
/*********/

std::string const&	Form::getName() const { return this->_name; }
bool 				Form::getState() const { return this->_state; }
int					Form::getGradeSign() const { return this->_gradeSign; }
int					Form::getGradeExec() const { return this->_gradeExec; }

/*********/
/*OSTREAM*/
/*********/

std::ostream&	operator<< (std::ostream& os, Form::GradeTooHighException const& e) {
	os << e.what() << std::endl;
	return os;
}

std::ostream&	operator<< (std::ostream& os, Form::GradeTooLowException const& e) {
	os << e.what() << std::endl;
	return os;
}

std::ostream&	operator<< (std::ostream& os, Form::FormFalseStatus const& e) {
	os << e.what() << std::endl;
	return os;
}
