/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:50:17 by glaguyon          #+#    #+#             */
/*   Updated: 2024/11/28 18:51:07 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

//XXX IL FAUT REFAIRE FIXED AVE LES BON CONST
int	main()
{
	ScavTrap	joe("Joe");
	ScavTrap	scav;
	ScavTrap	joe2(joe);
	ScavTrap	joe3;

	joe3 = joe;
	std::cout << joe;
	/*ClapTrap	bob("Bob");
	ClapTrap	clap;
	ClapTrap	bob2(bob);
	ClapTrap	bob3;

	bob3 = bob;
	std::cout << bob;
	bob.attack("john claptrap");
	std::cout << bob;
	bob.takeDamage(1);
	std::cout << bob;
	bob.beRepaired(123456);
	std::cout << bob;
	bob.takeDamage(999999);
	std::cout << bob;
	bob.takeDamage(9);
	std::cout << bob;
	bob.attack("john claptrap");
	std::cout << bob;
	std::cout << clap;
	for (int i = 0; i < 10; ++i)
		clap.attack("john claptrap");
	std::cout << clap;
	clap.attack("john claptrap");
	std::cout << clap;
	return 0;*/
}
