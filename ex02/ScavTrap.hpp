/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:55:33 by eberger           #+#    #+#             */
/*   Updated: 2023/06/06 19:05:22 by eberger          ###   ########.fr       */
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
	void	_setHitPoints(int value);
	void	_setEnergyPoints(int value);
	void	_setAttackDamage(int value);

};

#endif
