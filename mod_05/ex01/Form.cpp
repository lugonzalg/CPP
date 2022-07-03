/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:03:50 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/02 20:21:43 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/*CONSTRUCTORS*/

Form::Form() : _name("no name"), _state(false), _gradeSign(-1), _gradeExec(-1) {
	//std::cout << "Form Default constructor, Danger!" << std::endl;
}

Form::Form(std::string& name, int sign, int exec) : _name(name), _state(false), _gradeSign(sign), _gradeExec(exec) {
	try {
		if (sign < 0)
			Form::GradeTooHighException();
		else if (sig > 150)
			Form::GradeTooLowException();
		else if (exec < 0)
			Form::GradeTooHighException();
		else if (exec > 150)
			Form::GradeTooLowException();
	}
	catch (Form::GradeTooHighException& e)
		std::cout << "Form can not be created because of " + e;
	catch (Form::GradeTooLowException& e)
		std::cout << "Form can not be created because of " + e;
	//std::cout << "Form Init constructor" << std::endl;
}

/*DESTRUCTORS*/

Form::~Form() {
	//std::cout << "Form Default destructor" << std::endl;
}

/*EXCEPTIONS*/

const std::string& Form::GradeTooHighException::what(std::string const& type) const throw() {
	return ("Form level too high for " + type);
}

const std::string& Form::GradeTooLowException::what(std::string const& type) const throw() {
	return ("Form level too low for " + type);

/*MEMBER FUNCTIONS*/

void	Form::beSigned(Bureaucrat& signer) {
	try
	{
		if (signer.getLevel > this->getGradeSign())
			throw Form::GradeTooLowException("bureocrat sign");
		this->_state = true;
	}
	catch (Form::GradeTooLowException& e)
		std::cout << e;
}

/*GETTERS*/

std::string const&	getName() const { return this->_name; }
bool 				getState() const { this->_state; }
int	const			getGradeSign() const { return this->_gradeSign; }
int	const			getGradeExec() const { return this->_gradeExec; }

/*OSTREAM*/

std::ostream&	operator<< (std::ostream& os, Form::GradeTooHighException& e) {
	os << e;
	return os;
}

std::ostream&	operator<< (std::ostream& os, Form::GradeTooLowException& e) {
	os << e;
	return os;
}
