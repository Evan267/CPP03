/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:19:43 by eberger           #+#    #+#             */
/*   Updated: 2023/06/06 20:27:07 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	ClapTrap::_name = "_clap_name";
	this->_name = "";
	this->_setHitPoints(FragTrap::_hit_points);
	this->_setEnergyPoints(ScavTrap::_energy_points);
	this->_setAttackDamage(FragTrap::_attack_damage);
	return ;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap constructor called with name" << std::endl;
	this->_name = name;
	ClapTrap::_name = name.append("_clap_name");
	this->_setHitPoints(FragTrap::_hit_points);
	this->_setEnergyPoints(ScavTrap::_energy_points);
	this->_setAttackDamage(FragTrap::_attack_damage);
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = obj;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &obj)
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

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::_setAttackDamage(int value)
{
	this->_attack_damage = value;
}

void	DiamondTrap::_setName(std::string value)
{
	this->_name = value;
}

void	DiamondTrap::_setHitPoints(int value)
{
	this->_hit_points = value;
}

void	DiamondTrap::_setEnergyPoints(int value)
{
	this->_energy_points = value;
}
