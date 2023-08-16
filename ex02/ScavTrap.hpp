/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:55:33 by eberger           #+#    #+#             */
/*   Updated: 2023/08/16 12:50:34 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &obj);
	~ScavTrap(void);
	ScavTrap& operator=(const ScavTrap &obj);
	void	attack(const std::string &target);
	void	guardGate(void);

private:
	void	_setName(std::string name);
	void	_setHitPoints(unsigned int value);
	void	_setEnergyPoints(unsigned int value);
	void	_setAttackDamage(unsigned int value);
	int		_invincible;

};

#endif
