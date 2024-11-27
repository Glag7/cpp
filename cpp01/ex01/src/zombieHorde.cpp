/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:29:59 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/18 18:23:13 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	if (n < 0)
		return (0);

	Zombie	*horde = new Zombie[n];

	for (int i = 0; i < n; ++i)
		horde[i].setName(name);
	return (horde);
}
