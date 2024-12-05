/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/05 20:21:37 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character()
{
	std::cout << "hello character GROS CACA\n";
	_name = "gros caca";
	for (int i = 0; i < 4; ++i)
		_inv[i] = 0;
}

Character::Character(std::string name)
{
	_name = name;
	std::cout << "hello character" << _name << "\n";
	for (int i = 0; i < 4; ++i)
		_inv[i] = 0;
}

Character::Character(const Character &c)
{
	*this = c;
	std::cout << "hello character copy\n";
}

Character &Character::operator=(const Character &c)
{
	if (this != &c)
	{
		_name = c._name;
		for (int i = 0; i < 4; ++i)
		{
			delete _inv[i];
			if (c._inv[i])
				_inv[i] = c._inv[i]->clone();
			else
				_inv[i] = 0;
		}
	}
	std::cout << "character = !!!!!!! how !!??\n";
	return *this;
}

std::string const &Character::getName() const
{
	return _name;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!_inv[i])
		{
			_inv[i] = m;
			std::cout << "character " << _name << " equips materia " << m->getType() << "\n";
			return ;
		}
	}
	std::cout << "no. impossible. cannot. too much.\n";
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && _inv[idx])
	{
		std::cout << "character " << _name << " unequips materia " << _inv[idx]->getType() << "\n";
		_inv[idx] = 0;
	}
	std::cout << "nothing to unequip\n";
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && _inv[idx])
		_inv[idx]->use(target);
	else
		std::cout << "vorp\n";
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
		delete _inv[i];
	std::cout << "adios character" << _name << "\n";
}
