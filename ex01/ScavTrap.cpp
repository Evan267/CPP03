/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:38:42 by eberger           #+#    #+#             */
/*   Updated: 2023/08/16 12:25:38 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _invincible(0)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_setName("");
	this->_setHitPoints(100);
	this->_setEnergyPoints(50);
	this->_setAttackDamage(20);
	return ;
}

ScavTrap::ScavTrap(std::string name) : _invincible(0)
{
	std::cout << "ScavTrap constructor called with name" << std::endl;
	this->_setName(name);
	this->_setHitPoints(100);
	this->_setEnergyPoints(50);
	this->_setAttackDamage(20);
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = obj;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &obj)
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

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0
		&& this->_hit_points > 0)
	{
		this->_energy_points--;
		std::cout << "ScavTrap "
			<< this->_name
			<< " attacks "
			<< target
			<< ", causing "
			<< this->_attack_damage
			<< " points of damage !"
			<< std::endl;
		
	}
	else if (this->_energy_points <= 0)
		this->messageEnergyTooLow("ScavTrap");
	else if (this->_hit_points <= 0)
		this->messageHitPointsTooLow("ScavTrap");
}

void	ScavTrap::guardGate(void)
{
	this->_invincible = !(this->_invincible);
	if (this->_invincible)
	{
		std::cout << "ScavTrap "
			<< this->_name
			<< " Gate keeper mode on"
			<< std::endl;
	}
	else
	{
		std::cout << "ScavTrap "
			<< this->_name
			<< " Gate keeper mode off"
			<< std::endl;
	}
}

void	ScavTrap::_setAttackDamage(unsigned int value)
{
	this->_attack_damage = value;
}

void	ScavTrap::_setName(std::string value)
{
	this->_name = value;
}

void	ScavTrap::_setHitPoints(unsigned int value)
{
	this->_hit_points = value;
}

void	ScavTrap::_setEnergyPoints(unsigned int value)
{
	this->_energy_points = value;
}
