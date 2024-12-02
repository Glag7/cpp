/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:50:17 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/02 18:15:36 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

//XXX IL FAUT REFAIRE FIXED AVE LES BON CONST
int	main()
{
	FragTrap	joe("Joe");
	FragTrap	frag;
	FragTrap	joe2(joe);
	FragTrap	joe3;

	joe3 = joe;
	std::cout << joe;
	std::cout << joe2;
	std::cout << joe3;
	std::cout << frag;
	joe.highFivesGuys();
	joe.attack("john fragtrap");
	std::cout << joe;
	joe.takeDamage(1);
	std::cout << joe;
	joe.beRepaired(123456);
	std::cout << joe;
	joe.takeDamage(999999);
	std::cout << joe;
	joe.takeDamage(9);
	std::cout << joe;
	joe.attack("john fragtrap");
	std::cout << joe;
	std::cout << frag;
	for (int i = 0; i < 100; ++i)
		frag.attack("john fragtrap");
	std::cout << frag;
	frag.attack("john fragtrap");
	std::cout << frag;
}
