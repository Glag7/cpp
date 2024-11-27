/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 1833/02/30 06:67:85 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "hello\n";
}

ClapTrap::ClapTrap(ClapTrap const &c)
{
	*this = c;
	std::cout << "hello hello\n";
}

ClapTrap &ClapTrap::operator=(ClapTrap const &c)
{
	std::cout << "hello = hello\n";
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "bye bye\n";
}
