/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/11/28 18:49:08 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_name = "ScavTrap";
	_hp = 100;
	_ep = 50;
	_atk = 20;
	std::cout << "hello this is scav\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_ep = 50;
	_atk = 20;
	std::cout << "hello this is scav " << _name << "\n";
}

ScavTrap::ScavTrap(const ScavTrap &s) : ClapTrap(s)
{
	std::cout << "scav from " << _name << "\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s)
{
	ClapTrap::operator=(s);
	std::cout << "scav = trap\n";
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "bye bye this was scav " << _name << "\n";
}

void	ScavTrap::printInfo(std::ostream &out)
{
	out << "ScavTrap " << _name
		<< "; hp: " << _hp << ", ep: " << _ep << ", atk: " << _atk << "\n";
}

std::ostream	&operator<<(std::ostream &out, ScavTrap &s)
{
	s.printInfo(out);
	return out;
}
