/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:19:09 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/31 21:30:51 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <iostream>

int main() {
	/*EX01*/
	Bureaucrat	lukas;
	std::cout << "DEFAULLT: \n" << lukas << std::endl;

	Bureaucrat	paco(5, "Paco");
	std::cout << paco << std::endl;

	Bureaucrat	paCopy(paco);
	std::cout << "COPY: \n" << paCopy << std::endl;

	Bureaucrat	jimmy(150, "Jimmy");
	std::cout << jimmy << std::endl;

	Form		form_1("test_1", 10, 15);
	std::cout << form_1 << std::endl;

	Form		form_2("test_2", 1, 1);
	std::cout << form_2 << std::endl;

	Form		form_3("test_3", 100, 100);
	std::cout << form_3 << std::endl;

	std::cout << "SIGN FORM\n";

	std::cout << "\nFORM 1" << std::endl;
	form_1.beSigned(lukas);
	form_1.beSigned(paco);
	paco.signForm(form_1);
	std::cout << "\nFORM 2" << std::endl;
	paco.signForm(form_2);
	form_2.beSigned(paco);
	std::cout << "\nFORM 3" << std::endl;
	paco.signForm(form_3);
	paco.signForm(form_3);

	std::cout << "\nEXEC FORM\n";

	std::cout << "\nFORM 1" << std::endl;
	form_1.execute(lukas);
	form_1.execute(paco);
	paco.executeForm(form_1);
	std::cout << "\nFORM 2" << std::endl;
	paco.executeForm(form_2);
	form_2.execute(paco);
	std::cout << "\nFORM 3" << std::endl;
	paco.executeForm(form_3);
	paco.executeForm(form_3);

	std::cout << "\nShrubberyCreationForm\n" << std::endl;
	ShrubberyCreationForm	SC_Empty;
	ShrubberyCreationForm	SC_Form("test");
	ShrubberyCreationForm	SC_Copy(SC_Form);

	SC_Empty = SC_Copy;
	std::cout << "\nSTART\n";

	paco.signForm(SC_Form);
	paco.executeForm(SC_Form);

	paco.signForm(SC_Form);
	paco.executeForm(SC_Form);

	jimmy.signForm(SC_Copy);
	jimmy.executeForm(SC_Copy);

	paCopy.signForm(SC_Empty);
	paCopy.executeForm(SC_Empty);

	std::cout << "\nRobotomyRequestForm\n" << std::endl;
	RobotomyRequestForm	RR_Form("test");
	RobotomyRequestForm	RR_Copy(RR_Form);
	RobotomyRequestForm	RR_Empty;

	RR_Empty = RR_Copy;
	std::cout << "\nSTART\n";

	paco.signForm(RR_Form);
	for (int i = 0; i < 10; i++) {
		std::cout << i << "- ";
		paco.executeForm(RR_Form);
	}

	jimmy.signForm(RR_Copy);
	jimmy.executeForm(RR_Copy);

	paCopy.signForm(RR_Empty);
	paCopy.executeForm(RR_Empty);

	std::cout << "\nPresidentialPardonForm\n" << std::endl;
	PresidentialPardonForm	PR_Empty;
	PresidentialPardonForm	PR_Form("test");
	PresidentialPardonForm	PR_Copy(PR_Form);

	PR_Empty = PR_Copy;
	std::cout << "\nSTART\n";

	paco.signForm(PR_Form);
	paco.executeForm(PR_Form);

	jimmy.signForm(PR_Copy);
	jimmy.executeForm(PR_Copy);

	paCopy.signForm(PR_Empty);
	paCopy.executeForm(PR_Empty);

	return 0;
}
