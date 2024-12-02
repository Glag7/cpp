/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/02 19:51:12 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	ClapTrap::_name = "DiamondTrap_clap_name";
	_name = "DiamondTrap";
	_hp = 100;
	_ep = 50;
	_atk = 30;
	std::cout << "hello this is diamond. or is it.\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	ClapTrap::_name = name + "_clap_name";
	_name = name;
	_hp = 100;
	_ep = 50;
	_atk = 30;
	std::cout << "hello this is diamond " << _name << ". or maybe " << ClapTrap::_name << "\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &d) : ClapTrap(d)
{
	*this = d;
	std::cout << "diamond from " << _name << ". or from " << ClapTrap::_name << ". who knows\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &d)
{
	_name = d._name;
	ClapTrap::operator=(d);
	std::cout << "diamond = trap\n";
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "bye bye this was diamond " << _name << ". or maybe i was " << ClapTrap::_name << "\n";
}

void	DiamondTrap::whoAmI()
{
	std::cout << "who the fuck i am. " << _name << ". " << ClapTrap::_name
		<< ". death is preferable to this life of constant torment\n";
}

void	DiamondTrap::printInfo(std::ostream &out)
{
	out << "DiamondTrap " << _name << " / " << ClapTrap::_name
		<< "; hp: " << _hp << ", ep: " << _ep << ", atk: " << _atk << "\n";
}

//void	DiamondTrap::attack(const std::string& target)
//{
//	if (_ep <= 0 || _hp <= 0)
//	{
//		std::cout << "DiamondTrap " << _name << " is exhausted\n";
//		return ;
//	}
//	std::cout << "DiamondTrap " << _name << " attacks " << target
//		<< ", causing " << _atk << " points of damage\n";
//	--_ep;
//}

std::ostream	&operator<<(std::ostream &out, DiamondTrap &d)
{
	d.printInfo(out);
	return out;
}
