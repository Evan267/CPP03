/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 11:54:02 by eberger           #+#    #+#             */
/*   Updated: 2023/06/05 16:46:42 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {

public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &obj);
	~ClapTrap(void);
	ClapTrap	&operator=(const ClapTrap &obj);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		messageEnergyTooLow(void);
	void		messageHitPointsTooLow(void);
	void		setAttackDamage(unsigned int value);
	void		setName(std::string value);

private:
	
	std::string	_name;
	int		_hit_points;
	int		_energy_points;
	int		_attack_damage;

};

#endif
