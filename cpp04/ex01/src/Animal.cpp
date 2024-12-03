/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/02 20:45:36 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Animal.hpp"

Animal::Animal()
{
	type = "sigma";
	std::cout << "hello i animal\n";
}

Animal::Animal(const Animal &a)
{
	*this = a;
	std::cout << "hello animal from animal wow\n";
}

Animal &Animal::operator=(const Animal &a)
{
	type = a.type;
	std::cout << "hello = animal\n";
	return *this;
}

Animal::~Animal()
{
	std::cout << "bye bye i once was animal\n";
}

std::string	Animal::getType() const
{
	return type;
}

void	Animal::makeSound() const
{
	std::cout << "what the sigma\n";
}
