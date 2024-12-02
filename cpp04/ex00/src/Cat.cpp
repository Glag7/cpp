/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/02 20:47:39 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "hello i cat\n";
}

Cat::Cat(const Cat &c)
{
	*this = c;
	std::cout << "cat from cat wow\n";
}

Cat &Cat::operator=(const Cat &c)
{
	Animal::operator=(c);
	std::cout << "hello = cat\n";
	return *this;
}

Cat::~Cat()
{
	std::cout << "bye bye gatito muerto\n";
}

void	Cat::makeSound() const
{
	std::cout << "meow meow, meowmeow\n";
}
