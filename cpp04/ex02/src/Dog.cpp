/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/03 21:04:24 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
	_brain = new Brain();
	type = "Dog";
	std::cout << "hello i dog\n";
}

Dog::Dog(const Dog &d)
{
	_brain = new Brain();
	*this = d;
	std::cout << "hello dog from dog ??\n";
}

Dog &Dog::operator=(const Dog &d)
{
	Animal::operator=(d);
	for (int i = 0; i < 100; ++i)
		_brain->setIdea(i, d._brain->getIdea(i));
	std::cout << "hello = dog\n";
	return *this;
}

void	Dog::setIdea(int i, std::string idea)
{
	_brain->setIdea(i, idea);
}

std::string	Dog::getIdea(int i)
{
	return _brain->getIdea(i);
}

Dog::~Dog()
{
	delete	_brain;
	std::cout << "bye bye dog\n";
}

void	Dog::makeSound() const
{
	std::cout << "hello i bark\n";
}
