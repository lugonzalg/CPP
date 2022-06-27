/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:23:32 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/23 23:01:19 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>

int main()
{
	Animal *test[10];
	Animal	check;
	//Animal *check;

	uint8_t	i;

	for (i = 0; i < 5; i++)
		test[i] = new Dog();
	test[i++] = new Dog("deep");
	//*check = *test[i - 1];
	//check->makeSound();
	//std::cout << check->getType();
	for (; i < 10; i++)
		test[i] = new Cat();
	for (i = 0; i < 10; i++)
	{
		test[i]->makeSound();
		std::cout << test[i]->getType();
		*test[i] = *test[5];
		std::cout << test[i]->getType();
		delete test[i];
	}
}
