/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:19:09 by lugonzal          #+#    #+#             */
/*   Updated: 2022/08/02 19:01:23 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <iostream>

#define OK		 	"\033[92m"
#define FAIL 		"\033[91m"
#define END 		"\033[0m"

static Form	*newForm(std::string const& name, int num) {
	Form	*newFo;

	newFo = NULL;
	try {
		if (num == 0)
			newFo = new ShrubberyCreationForm(name);
		else if (num == 1)
			newFo = new RobotomyRequestForm(name);
		else if (num == 2)
			newFo = new PresidentialPardonForm(name);
		std::cout << OK << "Form succesfully instated" << END << std::endl;
		std::cout << *newFo << std::endl;
	}
	catch (Form::GradeTooHighException& e) {
		std::cout << "Form Constructor: " << e << END;
	}
	catch (Form::GradeTooLowException& e) {
		std::cout << "Form Constructor: " << e << END;
	}
	return newFo;
}

static Bureaucrat	*newBureaucrat(std::string const& name, int level) {
	Bureaucrat	*newBure;

	newBure= NULL;
	try {
		newBure = new Bureaucrat(level, name);
		std::cout << *newBure;
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cout << "Bureaucrat constructor: ";
		std::cout << e << std::endl << END;
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cout << "Bureaucrat constructor: ";
		std::cout << e << std::endl << END;
	}
	return newBure;
}

static void	formSign(Form *form, Bureaucrat *bure) {
	try {
		form->beSigned(*bure);
	}
	catch (Form::GradeTooHighException& e)
	{
		std::cout << e;
	}
		catch (Form::FormTrueStatus& e)
	{
		std::cout << e;
	}
}

static void	formExec(Form *form, Bureaucrat *bure) {
	try {
		form->execute(*bure);
	}
	catch (Form::GradeTooHighException& e)
	{
		std::cout << e;
	}
	catch (Form::FormFalseStatus& e)
	{
		std::cout << e;
	}
}

int main() {
	Bureaucrat	*bureList[9];
	Form		*formList[9];

	srand( (unsigned)time(NULL) );
	for (int i = 0; i < 8; i++) {
		bureList[i] = newBureaucrat("paco", rand() % 149 + 1);
	}
	srand( (unsigned)time(NULL) );
	for (int i = 0; i < 8; i++) {
		formList[i] = newForm("test", rand() % 2);
	}

	std::cout << "COPY: " << std::endl;
	std::cout << *bureList[0] << std::endl;
	Bureaucrat	paCopy(*bureList[0]);
	std::cout << paCopy << std::endl;

	for (int i = 0; i < 4; i++) {
		std::cout << "FIRST ATTEMPT : " << std::endl;
		formSign(formList[i], bureList[i]);
		std::cout << "\nSECOND ATTEMPT : " << std::endl;
		formSign(formList[i], bureList[i]);
		std::cout << "FIRST ATTEMPT EXECUTE: " << std::endl;
		formExec(formList[i], bureList[i]);
		std::cout << "\nSECOND ATTEMPT EXECUTE: " << std::endl;
		formExec(formList[i], bureList[i]);
		delete formList[i];
		delete bureList[i];
		std::cout << "\nFIRST ATTEMPT : " << std::endl;
		formSign(formList[i + 4], bureList[i + 4]);
		std::cout << "\nSECOND ATTEMPT : " << std::endl;
		formSign(formList[i + 4], bureList[i + 4]);
		std::cout << "FIRST ATTEMPT EXECUTE: " << std::endl;
		formExec(formList[i + 4], bureList[i + 4]);
		std::cout << "SECOND ATTEMPT EXECUTE: " << std::endl;
		formExec(formList[i + 4], bureList[i + 4]);
		delete formList[i + 4];
		delete bureList[i + 4];
	}
	return 0;
}
