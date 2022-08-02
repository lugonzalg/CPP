/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:19:09 by lugonzal          #+#    #+#             */
/*   Updated: 2022/08/02 18:34:24 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

#include "Bureaucrat.hpp"
#include <iostream>

#define OK		 	"\033[92m"
#define FAIL 		"\033[91m"
#define END 		"\033[0m"

static Form	*newForm(std::string const& name, int sign, int exec) {
	Form	*newFo;

	newFo = NULL;
	try {
		newFo = new Form(name, sign, exec);
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
	Bureaucrat	*bureList[4];
	Form		*formList[4];

	Bureaucrat	*highBure;
	Bureaucrat	*lowBure;
	Form		*highForm;
	Form		*lowForm;

	srand( (unsigned)time(NULL) );
	for (int i = 0; i < 4; i++) {
		bureList[i] = newBureaucrat("paco", rand() % 149 + 1);
	}
	srand( (unsigned)time(NULL) );
	for (int i = 0; i < 4; i++) {
		formList[i] = newForm("test", rand() % 149 + 1, rand() % 149 + 1);
	}

	highBure = newBureaucrat("paco", 0);
	lowBure = newBureaucrat("paco", 1234);
	highForm = newForm("test", 0, 123);
	lowForm = newForm("test", 1234, 123);

	std::cout << "COPY: " << std::endl;
	std::cout << *bureList[0] << std::endl;
	Bureaucrat	paCopy(*bureList[0]);
	std::cout << paCopy << std::endl;

	for (int i = 0; i < 2; i++) {
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
		formSign(formList[i + 2], bureList[i + 2]);
		std::cout << "\nSECOND ATTEMPT : " << std::endl;
		formSign(formList[i + 2], bureList[i + 2]);
		std::cout << "FIRST ATTEMPT EXECUTE: " << std::endl;
		formExec(formList[i + 2], bureList[i + 2]);
		std::cout << "SECOND ATTEMPT EXECUTE: " << std::endl;
		formExec(formList[i + 2], bureList[i + 2]);
		delete formList[i + 2];
		delete bureList[i + 2];
	}
	return 0;
}
