/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:19:09 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/05 20:59:01 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main() {
	/*EX01*/
	Bureaucrat	b1;
	Bureaucrat	b2(5, "paco");
	Form		f1("start", 10, 200);

	f1.beSigned(b2);
	b2.signForm(f1);
	b2.signForm(f1);

	/*EX02*/
	ShrubberyCreationForm	SC_Form("test");
	b2.signForm(SC_Form);
	b2.executeForm(SC_Form);
	//SC_Form.execute(b2);

	return 0;
}
