/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:41:20 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/23 22:59:30 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain(void)
{
	std::cout << "Brain Base class Void constructor called" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->setIdeas(i, "Lukas");
}

Brain::Brain(std::string idea)
{
	std::cout << "Brain Base class String constructor called" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->setIdeas(i, idea);
}

Brain::Brain(const Brain& obj)
{
	std::cout << "Brain Base class Copy constructor called" << std::endl;
	*this = obj;
}

Brain::~Brain(void)
{
	std::cout << "Brain Base class destructor called" << std::endl;
}

Brain&	Brain::operator = (const Brain& obj)
{
	for (size_t i = 0; i < 100; i++)
		this->setIdeas(i, obj.getIdeas(i));
	return (*this);
}

void	Brain::setIdeas(uint8_t pos, std::string idea) 
{
	this->_ideas[pos] = idea;
}

std::string	Brain::getIdeas(uint8_t pos) const
{
	return (this->_ideas[pos]);
}
