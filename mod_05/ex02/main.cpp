/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:19:09 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/19 20:15:49 by lugonzal         ###   ########.fr       */
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
	Bureaucrat	b1;
	Bureaucrat	b2(5, "Paco");
	Bureaucrat	b_copy(b2);
	Bureaucrat	b3(150, "Jimmy");
	Form		f1("start", 10, 200);

	std::cout << b1;
	std::cout << b2;

	f1.beSigned(b1);
	f1.beSigned(b2);
	b2.signForm(f1);
	b2.signForm(f1);

	std::cout << "\nShrubberyCreationForm\n" << std::endl;
	ShrubberyCreationForm	SC_Form("test");
	ShrubberyCreationForm	SC_Copy(SC_Form);
	ShrubberyCreationForm	SC_Empty;

	SC_Empty = SC_Copy;
	b2.signForm(SC_Form);
	b2.executeForm(SC_Form);

	b3.signForm(SC_Copy);
	b3.executeForm(SC_Copy);

	b_copy.signForm(SC_Empty);
	b_copy.executeForm(SC_Empty);
	//SC_Form.execute(b2);

	std::cout << "\nRobotomyRequestForm\n" << std::endl;
	RobotomyRequestForm	RR_Form("test");
	RobotomyRequestForm	RR_Copy(RR_Form);
	RobotomyRequestForm	RR_Empty;

	RR_Empty = RR_Copy;
	b2.signForm(SC_Form);
	b2.executeForm(SC_Form);

	b3.signForm(SC_Copy);
	b3.executeForm(SC_Copy);

	b_copy.signForm(SC_Empty);
	b_copy.executeForm(SC_Empty);

	std::cout << "\nPresidentialPardonForm\n" << std::endl;
	PresidentialPardonForm	PR_Form("test");
	PresidentialPardonForm	PR_Copy(PR_Form);
	PresidentialPardonForm	PR_Empty;

	PR_Empty = PR_Copy;
	b2.signForm(SC_Form);
	b2.executeForm(SC_Form);

	b3.signForm(SC_Copy);
	b3.executeForm(SC_Copy);

	b_copy.signForm(SC_Empty);
	b_copy.executeForm(SC_Empty);

	return 0;
}
