/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/02 19:45:42 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_name = "FragTrap";
	_hp = 100;
	_ep = 100;
	_atk = 30;
	std::cout << "hello this is frag\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_ep = 100;
	_atk = 30;
	std::cout << "hello this is frag " << _name << "\n";
}

FragTrap::FragTrap(const FragTrap &f) : ClapTrap(f)
{
	std::cout << "frag from " << _name << "\n";
}

FragTrap &FragTrap::operator=(const FragTrap &f)
{
	ClapTrap::operator=(f);
	std::cout << "frag = trap\n";
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "bye bye this was frag " << _name << "\n";
}

void	FragTrap::printInfo(std::ostream &out)
{
	out << "FragTrap " << _name
		<< "; hp: " << _hp << ", ep: " << _ep << ", atk: " << _atk << "\n";
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name
		<< " accepts a high five.\n";
}

std::ostream	&operator<<(std::ostream &out, FragTrap &f)
{
	f.printInfo(out);
	return out;
}
