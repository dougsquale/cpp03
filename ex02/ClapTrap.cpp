/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:41:54 by dbelpaum          #+#    #+#             */
/*   Updated: 2022/10/28 16:20:45 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap() : _name("ClapTrap"), _health(10), _energy(10), _attackDamage(0)
{
	if (DEBUG)
		std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _health(10), _energy(10), _attackDamage(0)
{
	if (DEBUG)
		std::cout << "ClapTrap constructor called" << std::endl;
	this->_name = name;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	if (DEBUG)
		std::cout << "ClapTrap copy constructor called" << std::endl;
	this->_name = src.getName();
	this->_health = src.getHealth();
	this->_energy = src.getEnergy();
	this->_attackDamage = src.getAttackDamage();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	if (DEBUG)
		std::cout << "ClapTrap destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	if (DEBUG)
		std::cout << "ClapTrap assignation operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_health = rhs.getHealth();
		this->_energy = rhs.getEnergy();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ClapTrap::attack(const std::string& target)
{
	if (_energy <= 0)
	{
		std::cout << _name << " doesn't have enough energy to attack " << target << std::endl;
		return ;
	}
	_energy--;
	std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_health -= amount;
	std::cout << _name << " takes " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy <= 0)
	{
		std::cout << _name << " doesn't have enough energy to be repaired" << std::endl;
		return ;
	}
	std::cout << _name << " repaired itself for " << amount << " health points!" << std::endl;
	_energy--;
	_health += amount;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

int			ClapTrap::getHealth() const
{
	return (this->_health);
}

int			ClapTrap::getEnergy() const
{
	return (this->_energy);
}

int			ClapTrap::getAttackDamage() const
{
	return (this->_attackDamage);
}

void		ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void		ClapTrap::setHealth(int health)
{
	this->_health = health;
}

void		ClapTrap::setEnergy(int energy)
{
	this->_energy = energy;
}

void		ClapTrap::setAttackDamage(int attackDamage)
{
	this->_attackDamage = attackDamage;
}

/* ************************************************************************** */