/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:38:42 by eberger           #+#    #+#             */
/*   Updated: 2023/06/06 19:06:02 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_setName("");
	this->_setHitPoints(100);
	this->_setEnergyPoints(50);
	this->_setAttackDamage(20);
	return ;
}

ScavTrap::ScavTrap(std::string name)
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
	std::cout << "ScavTrap has switched to Gate keeper mode"
		<< std::endl;
}

void	ScavTrap::_setAttackDamage(int value)
{
	this->_attack_damage = value;
}

void	ScavTrap::_setName(std::string value)
{
	this->_name = value;
}

void	ScavTrap::_setHitPoints(int value)
{
	this->_hit_points = value;
}

void	ScavTrap::_setEnergyPoints(int value)
{
	this->_energy_points = value;
}
