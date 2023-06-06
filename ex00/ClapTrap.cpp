/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:51:54 by eberger           #+#    #+#             */
/*   Updated: 2023/06/05 17:08:14 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name(""), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Constructor called with name" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hit_points = obj._hit_points;
		this->_energy_points = obj._energy_points;
		this->_attack_damage = obj._attack_damage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0
		&& this->_hit_points > 0)
	{
		this->_energy_points--;
		std::cout << "ClapTrap "
			<< this->_name
			<< " attacks "
			<< target
			<< ", causing "
			<< this->_attack_damage
			<< " points of damage !"
			<< std::endl;
		
	}
	else if (this->_energy_points <= 0)
		this->messageEnergyTooLow();
	else if (this->_hit_points <= 0)
		this->messageHitPointsTooLow();
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points > 0)
	{
		this->_hit_points -= amount;
		std::cout << "ClapTrap "
			<< this->_name
			<< " took "
			<< amount
			<< " damage"
			<< std::endl;
	}
	if (this->_hit_points <= 0)
		this->messageHitPointsTooLow();
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points > 0
		&& this->_hit_points > 0)
	{
		this->_energy_points--;
		this->_hit_points += amount;
		std::cout << "ClapTrap "
			<< this->_name
			<< " repaired "
			<< amount
			<< " points"
			<< std::endl;
		
	}
	else if (this->_energy_points <= 0)
		this->messageEnergyTooLow();
	else if (this->_hit_points <= 0)
		this->messageHitPointsTooLow();
}

void	ClapTrap::messageEnergyTooLow(void)
{
	std::cout << "ClapTrap "
		<< this->_name
		<< " energy is too low"
		<< std::endl;
}

void	ClapTrap::messageHitPointsTooLow(void)
{
	std::cout << "ClapTrap "
		<< this->_name
		<< " is dead"
		<< std::endl;
}

void	ClapTrap::setAttackDamage(unsigned int value)
{
	this->_attack_damage = value;
}

void	ClapTrap::setName(std::string value)
{
	this->_name = value;
}
