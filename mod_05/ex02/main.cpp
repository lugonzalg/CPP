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

int main() {
	Bureaucrat	b1;
	Bureaucrat	b2(5, "paco");
	Form		f1("start", 10, 200);

	f1.beSigned(b2);
	b2.signForm(f1);
	b2.signForm(f1);
	return 0;
}
