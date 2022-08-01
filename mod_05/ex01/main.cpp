/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:19:09 by lugonzal          #+#    #+#             */
/*   Updated: 2022/08/01 21:33:46 by lugonzal         ###   ########.fr       */
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

int main() {
	Bureaucrat	*bureList[4];
	Form		*formList[4];

	Bureaucrat	*lowBure;
	Bureaucrat	*highBure;
	Form		*lowForm;
	Form		*highForm;

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
		formList[i]->beSigned(*bureList[i]);
		bureList[2 + i]->signForm(*formList[2 + i]);
	}
	return 0;
}

/*int main() {
	std::cout << std::endl;
	jimmy.signForm(form_3);

	std::cout << std::endl;
	paco.signForm(form_3);

	std::cout << std::endl;
	paco.signForm(form_3);
	return 0;
}*/
