/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:19:09 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/31 19:17:58 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
	Bureaucrat	lukas;
	std::cout << "DEFAULT: \n" << lukas << std::endl;

	Bureaucrat	paco(5, "Paco");
	std::cout << paco << std::endl;

	Bureaucrat	paClon(paco);
	std::cout << "COPY: \n" << paClon << std::endl;

	Bureaucrat	keanu(0, "Keanu");
	std::cout << keanu << std::endl;

	Bureaucrat	jimmy(151, "Jimmy");
	std::cout << jimmy << std::endl;

	Form		form_1("test1", 10, 15);
	std::cout << form_1 << std::endl;

	Form		form_2("test2", 10, 15);
	std::cout << form_2 << std::endl;


	Form		form_3("test2", 10, 15);
	std::cout << form_2 << std::endl;

	Form		form_4("test3", 10, 200);
	std::cout << form_3 << std::endl;

	Form		form_5("test4", 0, 20);
	std::cout << form_4 << std::endl;

	std::cout << std::endl;
	form_1.beSigned(paco);

	std::cout << std::endl;
	form_1.beSigned(paco);

	std::cout << std::endl;
	form_2.beSigned(paClon);

	std::cout << std::endl;
	form_2.beSigned(paClon);

	std::cout << std::endl;
	jimmy.signForm(form_3);

	std::cout << std::endl;
	paco.signForm(form_3);

	std::cout << std::endl;
	paco.signForm(form_3);
	return 0;
}
