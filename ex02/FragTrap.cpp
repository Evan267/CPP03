/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:50:44 by eberger           #+#    #+#             */
/*   Updated: 2023/06/06 19:37:43 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap(){
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_setHitPoints(100);
	this->_setEnergyPoints(50);
	this->_setAttackDamage(20);
	return ;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap constructor called with name" << std::endl;
	this->_setHitPoints(100);
	this->_setEnergyPoints(50);
	this->_setAttackDamage(20);
	return ;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = obj;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

FragTrap&	FragTrap::operator=(const FragTrap &obj)
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High Fives Guys" << std::endl;
}

void	FragTrap::_setAttackDamage(int value)
{
	this->_attack_damage = value;
}

void	FragTrap::_setName(std::string value)
{
	this->_name = value;
}

void	FragTrap::_setHitPoints(int value)
{
	this->_hit_points = value;
}

void	FragTrap::_setEnergyPoints(int value)
{
	this->_energy_points = value;
}
