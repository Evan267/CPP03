/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:29:35 by eberger           #+#    #+#             */
/*   Updated: 2023/06/05 17:09:06 by eberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("Hello");
	ClapTrap b;
	ClapTrap c(a);

	a.setAttackDamage(10);
	a.attack("Evan");
	c.attack("42");
	b.setName("Test");
	b.attack("OK");
	a.takeDamage(10);
	a.attack("TEST");
	a.beRepaired(5);
	a.attack("TEST");
}
