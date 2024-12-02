/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:50:17 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/02 18:50:09 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	joe("Joe");
	ScavTrap	scav;
	ScavTrap	joe2(joe);
	ScavTrap	joe3;

	joe3 = joe;
	std::cout << joe;
	std::cout << joe2;
	std::cout << joe3;
	std::cout << scav;
	joe.guardGuate();
	joe.attack("john scavtrap");
	std::cout << joe;
	joe.takeDamage(1);
	std::cout << joe;
	joe.beRepaired(123456);
	std::cout << joe;
	joe.takeDamage(999999);
	std::cout << joe;
	joe.takeDamage(9);
	std::cout << joe;
	joe.attack("john scavtrap");
	std::cout << joe;
	std::cout << scav;
	for (int i = 0; i < 50; ++i)
		scav.attack("john scavtrap");
	std::cout << scav;
	scav.attack("john scavtrap");
	std::cout << scav;
}
