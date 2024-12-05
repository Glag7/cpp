/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/05 18:54:56 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "foul ice created\n";
}

Ice::Ice(const Ice &i) : AMateria(i)
{
	std::cout << "revolting ice copy\n";
}

Ice &Ice::operator=(const Ice &i)
{
	AMateria::operator=(i);
	std::cout << "vomit inducing ice =\n";
	return *this;
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

AMateria*	Ice::clone() const
{
	return new Ice(*this);
}

Ice::~Ice()
{
	std::cout << "bye bye\n";
}
