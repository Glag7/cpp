/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:50:17 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/02 18:49:52 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap	pedro("Pedro");
	FragTrap	frag;
	FragTrap	pedro2(pedro);
	FragTrap	pedro3;

	pedro3 = pedro;
	std::cout << pedro;
	std::cout << pedro2;
	std::cout << pedro3;
	std::cout << frag;
	pedro.highFivesGuys();
	pedro.attack("john fragtrap");
	std::cout << pedro;
	pedro.takeDamage(1);
	std::cout << pedro;
	pedro.beRepaired(123456);
	std::cout << pedro;
	pedro.takeDamage(999999);
	std::cout << pedro;
	pedro.takeDamage(9);
	std::cout << pedro;
	pedro.attack("john fragtrap");
	std::cout << pedro;
	std::cout << frag;
	for (int i = 0; i < 100; ++i)
		frag.attack("john fragtrap");
	std::cout << frag;
	frag.attack("john fragtrap");
	std::cout << frag;
}
