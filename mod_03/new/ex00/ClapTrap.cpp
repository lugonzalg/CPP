/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:31:34 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/08 18:42:00 by lugonzal         ###   ########.fr       */
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
	//std::cout << "BEFORE ATTACK: " << this->_hitPoints << std::endl;
    this->_hitPoints -= amount;
    std::cout << this->_name << " did " << amount << " of damage" << std::endl;
    //std::cout << "ATTACK! " << std::endl;
	//std::cout << "AFTER ATTACK: " << this->_hitPoints << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {
	//std::cout << "BEFORE HEAL: " << this->_hitPoints << std::endl;
    this->_hitPoints += amount;
    std::cout << this->_name << " is healed for " << amount << std::endl;
	//std::cout << "AFTER HEAL: " << this->_hitPoints << std::endl;
}

/*********/
/*GETTERS*/
/*********/

std::string&	ClapTrap::getName() { return (this->_name); }
unsigned int	ClapTrap::getDamage() { return (this->_damage); }
unsigned int	ClapTrap::getEnergy() { return (this->_energy); }
unsigned int	ClapTrap::getHitPoints() { return (this->_hitPoints); }
