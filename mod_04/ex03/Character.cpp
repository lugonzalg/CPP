/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:37:17 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/24 21:48:04 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Character.hpp>

Character::Character(void)
{
	std::cout << "Character inhereted class void constructor called";
	memset(this->_materia, 0, sizeof(AMateria) * 4);
	this->_materia_size = 0;
}

Character::Character(std::string name)
{
	std::cout << "Character inhereted class void constructor called";
	memset(this->_materia, 0, sizeof(AMateria) * 4);
	this->_materia_size = 0;
}

Character::Character(const Character& obj)
{
	*this = obj;
}

Character::equip(AMateria *ref)
{
	if (this->_materia_size = 3)
	{
		for (uint8_t i = 0; i < 4; i++)
		{
			if (this->_materia == NULL)
				this->_materia[_materia_size] = ref;
		}
	}
}

Character::unequip(int del_pos)
{
	if (del_pos < this->_materia_size)

}
void	Character::setMateriaSize(uint8_t size) {this->_materia_size = size;}
void	Character::setName(uint8_t *name) {this->_name = name;}

uint8_t	Character::getMateriaSize(void) const {return (this->_materia_size);}
