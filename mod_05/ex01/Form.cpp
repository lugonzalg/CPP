/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:03:50 by lugonzal          #+#    #+#             */
/*   Updated: 2022/08/02 18:34:18 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

#define HIGHLEVEL	1
#define LOWLEVEL 	150

#define OK		 	"\033[92m"
#define FAIL 		"\033[91m"
#define END 		"\033[0m"

/**************/
/*CONSTRUCTORS*/
/**************/

Form::Form() : _name("no name"), _state(false), _gradeSign(1), _gradeExec(1) {
	//std::cout << "Form Default constructor, Danger!" << std::endl;
}

Form::Form(Form const& src) : _gradeSign(src.getGradeSign()), _gradeExec(src.getGradeExec()) {
	*this = src;
}

Form::Form(std::string const& name, int sign, int exec) : _name(name), _state(false), _gradeSign(sign), _gradeExec(exec) {
	if (sign < HIGHLEVEL)
		throw Form::GradeTooHighException();
	else if (exec < HIGHLEVEL)
		throw Form::GradeTooHighException();
	else if (sign > LOWLEVEL)
		throw Form::GradeTooLowException();
	else if (exec > LOWLEVEL)
		throw Form::GradeTooLowException();
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
	return ("Form level too High Exception");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Form level too Low Exception");
}

const char* Form::FormFalseStatus::what() const throw() {
		return (" Form isn't signed, not Available Exception");
}

const char* Form::FormTrueStatus::what() const throw() {
		return (" Form is already signed");
}

/*******************/
/*MEMBER FUNCTIONS*/
/******************/

void	Form::beSigned(Bureaucrat const& signer) {
	if (signer.getLevel() > this->_gradeSign) {
		std::cout << FAIL << "Signer Level: " << signer.getLevel() << " || Form Sign Level: " << this->_gradeSign << ": ";
		throw Form::GradeTooHighException();
	}
	else if (this->_state) {
		std::cout << FAIL << "Form Status Error: " << this->_name;
		throw Form::FormTrueStatus();

	}
	this->_state = true;
	std::cout << OK << signer.getName() << " signed " << this->_name << " form." << std::endl << END;
}

void	Form::execute(Bureaucrat const& bure) {
	if (!this->_state)
		throw Form::FormFalseStatus();
	else if (this->getGradeExec() < bure.getLevel()) {
		std::cout << FAIL << "Signer Level: " << bure.getLevel() << " || Form Execution Level: " << this->_gradeExec << ": ";
		throw Form::GradeTooHighException();
	}
	this->action();
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

std::ostream&	operator<< (std::ostream& os, Form const& src) {
	os << "//////FORM///////" << std::endl;
	os << "Name: " << src.getName() << std::endl;
	os << "State: " << src.getState() << std::endl;
	os << "GradeSign: " << src.getGradeSign() << std::endl;
	os << "GradeExecute: " << src.getGradeExec() << std::endl;
	return os;
}

std::ostream&	operator<< (std::ostream& os, Form::GradeTooHighException const& e) {
	os << FAIL << e.what() << std::endl << END;
	return os;
}

std::ostream&	operator<< (std::ostream& os, Form::GradeTooLowException const& e) {
	os << FAIL << e.what() << std::endl << END;
	return os;
}

std::ostream&	operator<< (std::ostream& os, Form::FormFalseStatus const& e) {
	os << FAIL << e.what() << std::endl << END;
	return os;
}

std::ostream&	operator<< (std::ostream& os, Form::FormTrueStatus const& e) {
	os << FAIL << e.what() << std::endl << END;
	return os;
}
