/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/03 21:03:59 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
	_brain = new Brain();
	type = "Cat";
	std::cout << "hello i cat\n";
}

Cat::Cat(const Cat &c)
{
	_brain = new Brain();
	*this = c;
	std::cout << "cat from cat wow\n";
}

Cat &Cat::operator=(const Cat &c)
{
	Animal::operator=(c);
	for (int i = 0; i < 100; ++i)
		_brain->setIdea(i, c._brain->getIdea(i));
	std::cout << "hello = cat\n";
	return *this;
}

void	Cat::setIdea(int i, std::string idea)
{
	_brain->setIdea(i, idea);
}

std::string	Cat::getIdea(int i)
{
	return _brain->getIdea(i);
}

Cat::~Cat()
{
	delete	_brain;
	std::cout << "bye bye gatito muerto\n";
}

void	Cat::makeSound() const
{
	std::cout << "meow meow, meowmeow\n";
}
