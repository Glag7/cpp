/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:10:17 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/16 19:43:40 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define NZOMBIE 8

int	main()
{
	Zombie	*zombie = newZombie("Joe");
	
	randomChump("Bob");
	zombie->announce();
	delete zombie;

	Zombie	*horde = zombieHorde(NZOMBIE, "Pablo");
	for(int i = 0; i < NZOMBIE; ++i)
		horde[i].announce();
	delete [] horde;
}
