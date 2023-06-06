/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 11:54:02 by eberger           #+#    #+#             */
/*   Updated: 2023/06/06 18:26:26 by eberger          ###   ########.fr       */
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
	void		messageEnergyTooLow(std::string trap);
	void		messageHitPointsTooLow(std::string trap);

protected:
	
	std::string	_name;
	int		_hit_points;
	int		_energy_points;
	int		_attack_damage;

};

#endif
