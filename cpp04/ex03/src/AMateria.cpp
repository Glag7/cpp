/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/05 19:13:55 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AMateria.hpp"

AMateria::AMateria()
{
	_type = "stinky";
	std::cout << "stinky default materia created\n";
}

AMateria::AMateria(std::string const &type)
{
	_type = type;
	std::cout << "stinky materia" << _type << "created\n";
}

AMateria::AMateria(const AMateria &a)
{
	*this = a;
	std::cout << "dumb materia copy\n";
}

AMateria &AMateria::operator=(const AMateria &a)
{
	_type = a._type;
	std::cout << "stupid materia =\n";
	return *this;
}

std::string const	&AMateria::getType() const
{
	return _type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "some idiotic materia is being used on " << target.getName() << "\n";
}

AMateria::~AMateria()
{
	std::cout << "materia killed itself\n";
}
