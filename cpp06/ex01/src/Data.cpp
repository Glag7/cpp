/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/14 14:25:26 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

Data::Data() : _stuff("default")
{
	std::cout << "hello data\n";
}

Data::Data(const std::string &s) : _stuff(s)
{
	std::cout << "hello data " << _stuff << "\n";
}

Data::Data(const Data &d)
{
	*this = d;
	std::cout << "data copy\n";
}

Data &Data::operator=(const Data &d)
{
	_stuff = d._stuff;
	std::cout << "data =\n";
	return *this;
}

Data::~Data()
{
	std::cout << "data no more\n";
}

void	Data::printStuff()
{
	std::cout << _stuff << "\n";
}
