/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:21:14 by eberger           #+#    #+#             */
/*   Updated: 2023/08/16 14:13:05 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

public:

	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &obj);
	~DiamondTrap(void);
	DiamondTrap&	operator=(const DiamondTrap &obj);
	void	attack(const std::string &target);
	void	whoAmI(void);

private:
	
	void	_setName(std::string name);
	void	_setHitPoints(int value);
	void	_setEnergyPoints(int value);
	void	_setAttackDamage(int value);
	std::string	_name;


};

#endif
