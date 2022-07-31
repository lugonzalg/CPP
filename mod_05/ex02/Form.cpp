/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:03:50 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/31 21:30:53 by lugonzal         ###   ########.fr       */
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

Form::Form() : _name("no name"), _state(false), _gradeSign(-1), _gradeExec(-1) {
	//std::cout << "Form Default constructor, Danger!" << std::endl;
}

Form::Form(Form const& src) : _gradeSign(src.getGradeSign()), _gradeExec(src.getGradeExec()) {
	*this = src;
}

Form::Form(std::string const& name, int sign, int exec) : _name(name), _state(false), _gradeSign(sign), _gradeExec(exec) {
	try {
		if (sign < HIGHLEVEL) {
			std::cout << FAIL << "Sign Level Error: Out of range ";
			throw Form::GradeTooHighException();
		}
		else if (exec < HIGHLEVEL) {
			std::cout << FAIL << "Excec Level Error: Out of range ";
			throw Form::GradeTooHighException();
		}
		else if (sign > LOWLEVEL) {
			std::cout << FAIL << "Sign Level Error: Out of range ";
			throw Form::GradeTooLowException();
		}
		else if (exec > LOWLEVEL) {
			std::cout << FAIL << "Excec Level Error: Out of range ";
			throw Form::GradeTooLowException();
		}
		std::cout << OK << "Form succesfully instated" << END << std::endl;
	}
	catch (Form::GradeTooHighException& e) {
		std::cout << "Form Constructor: " << e << END;
	}
	catch (Form::GradeTooLowException& e) {
		std::cout << "Form Constructor: " << e << END;
	}
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
	try
	{
		if (signer.getLevel() > this->_gradeSign) {
			std::cout << FAIL << "Signer level Error, " << signer.getLevel() << ": ";
			throw Form::GradeTooLowException();
		}
		else if (this->_state) {
			std::cout << FAIL << "Form Status Error: " << this->_name;
			throw Form::FormTrueStatus();

		}
		this->_state = true;
		std::cout << OK << signer.getName() << " signed " << this->_name << " form." << std::endl << END;
	}
	catch (Form::GradeTooLowException const& e) {
		std::cout << e << END;
	}
	catch (Form::FormTrueStatus const& e) {
		std::cout << e << END;
	}
}

void	Form::execute(Bureaucrat const& bure) {
	try
	{
		if (!this->_state) {
			std::cout << FAIL << "Form State Error: ";
			throw Form::FormFalseStatus();
		}
		else if (this->getGradeExec() < bure.getLevel()) {
			std::cout << FAIL << "Signer Level Error: ";
			throw Form::GradeTooLowException();
		}
		this->action();
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cout << e << END;
	}
	catch (Form::FormFalseStatus& e)
	{
		std::cout << e << END;
	}
}

void	Form::action() const { std::cout << OK << "Form succesfully executed: " + this->_name + " doesn't have any utility" << END << std::endl; }

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

std::ostream&	operator<< (std::ostream& os, Form::FormTrueStatus const& e) {
	os << e.what() << std::endl;
	return os;
}
