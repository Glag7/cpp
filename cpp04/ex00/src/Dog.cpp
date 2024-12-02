/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/02 20:47:28 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "hello i dog\n";
}

Dog::Dog(const Dog &d)
{
	*this = d;
	std::cout << "hello dog from dog ??\n";
}

Dog &Dog::operator=(const Dog &d)
{
	Animal::operator=(d);
	std::cout << "hello = dog\n";
	return *this;
}

Dog::~Dog()
{
	std::cout << "bye bye dog\n";
}

void	Dog::makeSound() const
{
	std::cout << "hello i bark\n";
}
