/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/11/28 18:47:52 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hp = 10;
	_ep = 10;
	_atk = 0;
	std::cout << "hello i clap my name is " << name << "\n";
}

ClapTrap::ClapTrap()
{
	_name = "ClapTrap";
	_hp = 10;
	_ep = 10;
	_atk = 0;
	std::cout << "hello i clap\n";
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	*this = c;
	std::cout << "clap from " << _name << "\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &c)
{
	std::cout << "clap = trap\n";
	_name = c._name;
	_hp = c._hp;
	_ep = c._ep;
	_atk = c._atk;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "bye bye this was " << _name << "\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (_ep <= 0 || _hp <= 0)
	{
		std::cout << "ClapTrap " << _name << " is exhausted\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target
		<< ", causing " << _atk << " points of damage\n";
	--_ep;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp <= 0)
	{
		std::cout << "ClapTrap " << _name << " is dead and cannot take damage\n";
		return ;
	}
	if (amount >= _hp)
	{
		std::cout << "ClapTrap " << _name << " takes " << amount << " damage and dies\n";
		_hp = 0;
		return ;
	}
	_hp -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage and has "
		<< _hp << " hp left\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_ep <= 0 || _hp <= 0)
	{
		std::cout << "ClapTrap " << _name << " is exhausted\n";
		return ;
	}
	--_ep;
	_hp += amount;
	std::cout << "ClapTrap " << _name << " repairs itself and regains "
		<< amount << " hp, now has " << _hp << "\n";
}

void	ClapTrap::printInfo(std::ostream &out)
{
	out << "ClapTrap " << _name
		<< "; hp: " << _hp << ", ep: " << _ep << ", atk: " << _atk << "\n";
}

std::ostream	&operator<<(std::ostream &out, ClapTrap &c)
{
	c.printInfo(out);
	return out;
}
