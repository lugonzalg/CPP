/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:19:09 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/06 21:34:31 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"

int main() {
	/*EX03*/
	Intern	paco;
	Form	*ptr;

	ptr = paco.makeForm("robotomy request", "test");
	delete ptr;
	return 0;
}
