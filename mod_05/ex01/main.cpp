/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:19:09 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/03 17:32:22 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
	Bureaucrat	b1;
	Bureaucrat	b2(5, "Paco");
	Bureaucrat	b_copy(b2);
	Bureaucrat	b3(150, "Jummy");
	Form		f1("start", 10, 200);

	std::cout << b1;
	std::cout << b2;

	f1.beSigned(b3);
	f1.beSigned(b2);
	b2.signForm(f1);
	b2.signForm(f1);

	std::cout << b1;
	b1 = b2;
	std::cout << b1;
	std::cout << b2;
	return 0;
}
