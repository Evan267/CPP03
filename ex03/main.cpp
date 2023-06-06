/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:29:35 by eberger           #+#    #+#             */
/*   Updated: 2023/06/06 20:15:36 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap a("Hello");
	DiamondTrap b;
	DiamondTrap c(a);

	a.attack("Evan");
	c.attack("42");
	b.attack("OK");
	//a.takeDamage(10);
	a.attack("TEST");
	//a.beRepaired(5);
	a.attack("TEST");
	a.highFivesGuys();
}
