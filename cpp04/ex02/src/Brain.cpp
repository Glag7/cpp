/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/03 20:50:17 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "hello i brain\n";
}

Brain::Brain(const Brain &b)
{
	*this = b;
	std::cout << "hello brain copy so cool\n";
}

Brain &Brain::operator=(const Brain &b)
{
	for (int i = 0; i < 100; ++i)
		ideas[i] = b.ideas[i];
	std::cout << "hello = brain\n";
	return *this;
}

void	Brain::setIdea(int i, std::string idea)
{
	if (i >= 0 && i < 100)
		ideas[i] = idea;
}

std::string	Brain::getIdea(int i)
{
	if (i >= 0 && i < 100)
		return ideas[i];
	return ("skibidi...");
}

Brain::~Brain()
{
	std::cout << "bye no more brain\n";
}
