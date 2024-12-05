/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/05 19:18:10 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		_inv[i] = 0;
	std::cout << "materia source yes\n";
}

MateriaSource::MateriaSource(const MateriaSource &m)
{
	*this = m;
	std::cout << "materia copy source\n";
}

MateriaSource &MateriaSource::operator=(const MateriaSource &m)
{
	if (this != &m)
	{
		for (int i = 0; i < 4; ++i)
		{
			delete _inv[i];
			if (m._inv[i])
				_inv[i] = m._inv[i]->clone();
			else
				_inv[i] = 0;
		}
	}
	std::cout << "= source materia\n";
	return *this;
}

void	MateriaSource::learnMateria(AMateria* a)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_inv[i] == 0)
		{
			std::cout << "materia source yes very learned " << a->getType() << "\n";
			_inv[i] = a;
			return;
		}
	}
	std::cout << "nn\n";
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_inv[i] != 0 && _inv[i]->getType() == type)
		{
			std::cout << "materia source yes very created " << type << "\n";
			return _inv[i]->clone();
		}
	}
	std::cout << "no create for you \n";
	return 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		delete _inv[i];
	std::cout << "i hate this no more stupid source\n";
}
