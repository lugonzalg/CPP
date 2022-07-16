/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:36:43 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/08 19:06:27 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

/*************/
/*CONSTRUCTOR*/
/*************/

ClapTrap::ClapTrap() : _name("Lukas Defaut"), _hitPoints(10), _energy(10), _damage(0){
    std::cout << "ClapTrap Default constructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src) {
    std::cout << "ClapTrap Copy constructor" << std::endl;
    *this = src;
}

ClapTrap::ClapTrap(std::string const& name) : _name(name), _hitPoints(10), _energy(10), _damage(0) {
    std::cout << "ClapTrap String constructor" << std::endl;
}

/*************/
/*DESTRUCTOR*/
/*************/

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Default destructor" << std::endl;
}

/**********/
/*OVERLOAD*/
/**********/

ClapTrap&   ClapTrap::operator= (ClapTrap const& src) {
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energy = src._energy;
    this->_damage = src._damage;
    return (*this);
}

/******************/
/*MEMBER FUNCTIONS*/
/******************/

void    ClapTrap::attack(std::string const& target) {
    std::cout << this->_name << " attacks " << target << " with " << this->_damage << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    this->_hitPoints -= amount;
    std::cout << this->_name << " took " << amount << " of damage" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    this->_hitPoints += amount;
    std::cout << this->_name << " is healed for " << amount << std::endl;
}

/*********/
/*GETTERS*/
/*********/

std::string const&	ClapTrap::getName() const { return (this->_name); }
unsigned int	ClapTrap::getDamage() const { return (this->_damage); }
unsigned int	ClapTrap::getEnergy() const { return (this->_energy); }
unsigned int	ClapTrap::getHitPoints() const { return (this->_hitPoints); }

/*********/
/*SETTERS*/
/*********/

void	ClapTrap::setName(std::string const& name) { this->_name = name; }
void	ClapTrap::setDamage(unsigned int damage) { this->_damage = damage; }
void	ClapTrap::setEnergy(unsigned int energy) { this->_energy = energy; }
void	ClapTrap::setHitPoints(unsigned int hitPoints) { this->_hitPoints = hitPoints; }

/**********/
/*OSTREAM*/
/**********/

std::ostream&   operator<< (std::ostream& os, ClapTrap const& src)
{
    os << "////////////////////////////////////" << std::endl;
    os << "NAME: " << src.getName() << std::endl;
    os << "DAMAGE: " << src.getDamage() << std::endl;
    os << "ENERGY: " << src.getEnergy() << std::endl;
    os << "HP: " << src.getHitPoints() << std::endl;
    os << "////////////////////////////////////\n" << std::endl;
    return os;
}
