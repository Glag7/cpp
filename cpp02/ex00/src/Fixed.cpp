/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/24 17:26:45 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed()
{
	_value = 0;
	std::cout << "hello this is fixed\n";
}

Fixed::Fixed(Fixed const &f)
{
	std::cout << "hello this is fixed from fixed\n";
	*this = f;
}

Fixed &Fixed::operator=(Fixed const &f)
{
	std::cout << "hello this is fixed = fixed\n";
	_value = f.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "bye this was fixed\n";
}

int	Fixed::getRawBits() const
{
	std::cout << "the bits are raw\n";
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}
