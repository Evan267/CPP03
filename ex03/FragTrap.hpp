/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:50:59 by eberger           #+#    #+#             */
/*   Updated: 2023/06/06 20:18:05 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &obj);
	~FragTrap(void);
	FragTrap&	operator=(const FragTrap &obj);
	void		highFivesGuys(void);

private:
	
	void	_setName(std::string name);
	void	_setHitPoints(int value);
	void	_setEnergyPoints(int value);
	void	_setAttackDamage(int value);


};

#endif
