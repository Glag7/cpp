/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:50:17 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/02 19:46:20 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	walter("Walter");
	DiamondTrap	diamond;
	DiamondTrap	walter2(walter);
	DiamondTrap	walter3;

	walter3 = walter;
	std::cout << walter;
	std::cout << walter2;
	std::cout << walter3;
	std::cout << diamond;
	walter.whoAmI();
	walter.attack("john diamondtrap");
	std::cout << walter;
	walter.takeDamage(1);
	std::cout << walter;
	walter.beRepaired(123456);
	std::cout << walter;
	walter.takeDamage(999999);
	std::cout << walter;
	walter.takeDamage(9);
	std::cout << walter;
	walter.attack("john diamondtrap");
	std::cout << walter;
	std::cout << diamond;
	for (int i = 0; i < 50; ++i)
		diamond.attack("john diamondtrap");
	std::cout << diamond;
	diamond.attack("john diamondtrap");
	std::cout << diamond;
}
