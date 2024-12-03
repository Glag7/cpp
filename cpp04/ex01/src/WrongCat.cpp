/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/02 21:49:41 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "hello i cat\n";
}

WrongCat::WrongCat(const WrongCat &c)
{
	*this = c;
	std::cout << "cat from cat wow\n";
}

WrongCat &WrongCat::operator=(const WrongCat &c)
{
	WrongAnimal::operator=(c);
	std::cout << "hello = cat\n";
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "bye bye gatito muerto\n";
}

void	WrongCat::makeSound() const
{
	std::cout << "meow meow, meowmeow\n";
}
