/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:19:09 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/31 21:31:51 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"
#include <iostream>

int main() {
	/*EX03*/
	Intern	paco;
	Form	*ptr;

	ptr = paco.makeForm("robotomy request", "test");
	if (ptr) std::cout << ptr << std::endl;
	delete ptr;
	ptr = paco.makeForm("shrubbery request", "test");
	if (ptr) std::cout << ptr << std::endl;
	delete ptr;
	ptr = paco.makeForm("presidential request", "test");
	if (ptr) std::cout << ptr << std::endl;
	delete ptr;
	ptr = paco.makeForm("lukas request", "test");
	std::cout << ptr << std::endl;
	return 0;
}
