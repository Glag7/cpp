/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/14 14:31:27 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "hello\n";
}

Serializer::Serializer(const Serializer &s)
{
	*this = s;
	std::cout << "hello hello\n";
}

Serializer &Serializer::operator=(const Serializer &s)
{
	(void)s;
	std::cout << "hello = hello\n";
	return *this;
}

Serializer::~Serializer()
{
	std::cout << "bye bye\n";
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
