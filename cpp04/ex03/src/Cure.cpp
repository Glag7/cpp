/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/05 18:54:14 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "fetid cure created\n";
}

Cure::Cure(const Cure &c) : AMateria(c)
{
	std::cout << "terrible cure copy\n";
}

Cure &Cure::operator=(const Cure &c)
{
	AMateria::operator=(c);
	std::cout << "brainless cure =\n";
	return *this;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

AMateria*	Cure::clone() const
{
	return new Cure(*this);
}

Cure::~Cure()
{
	std::cout << "cure put an end to its miserable existence\n";
}
