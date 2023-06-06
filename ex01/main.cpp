/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:29:35 by eberger           #+#    #+#             */
/*   Updated: 2023/06/06 18:37:40 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap a("Hello");
	ScavTrap b;
	ScavTrap c(a);

	a.attack("Evan");
	c.attack("42");
	b.attack("OK");
	a.takeDamage(10);
	a.attack("TEST");
	a.beRepaired(5);
	a.attack("TEST");
	a.guardGate();
}
