/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/02 21:49:21 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "sigma";
	std::cout << "hello i animal\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	*this = a;
	std::cout << "hello animal from animal wow\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a)
{
	type = a.type;
	std::cout << "hello = animal\n";
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "bye bye i once was animal\n";
}

std::string	WrongAnimal::getType() const
{
	return type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "what the sigma\n";
}
