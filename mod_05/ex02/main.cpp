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
#include "Form.hpp"

#include <iostream>

int main() {
	/*EX01*/
	Bureaucrat	b1;
	Bureaucrat	b2(5, "Paco");
	Bureaucrat	b3(150, "Jimmy");
	Form		f1("start", 10, 200);

	f1.beSigned(b2);
	b2.signForm(f1);
	b2.signForm(f1);

	std::cout << "\nShrubberyCreationForm\n" << std::endl;
	ShrubberyCreationForm	SC_Form("test");
	b2.signForm(SC_Form);
	b2.executeForm(SC_Form);
	ShrubberyCreationForm	SC_Form_2("test");
	b3.signForm(SC_Form_2);
	b3.executeForm(SC_Form_2);
	//SC_Form.execute(b2);

	std::cout << "\nRobotomyRequestForm\n" << std::endl;
	RobotomyRequestForm	RR_Form("test");
	b2.signForm(SC_Form);
	b2.executeForm(SC_Form);
	b3.signForm(SC_Form);
	b3.executeForm(SC_Form);

	std::cout << "\nPresidentialPardonForm\n" << std::endl;
	PresidentialPardonForm	PR_Form("test");
	b2.signForm(SC_Form);
	b2.executeForm(SC_Form);
	b3.signForm(SC_Form);
	b3.executeForm(SC_Form);

	return 0;
}
