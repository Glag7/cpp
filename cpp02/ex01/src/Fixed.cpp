/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/24 18:24:29 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include <fstream>
#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "hello this is fixed\n";
	_value = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "hello this is fixed but int\n";
	_value = value << _fixed;
}

Fixed::Fixed(const float value)
{
	_value = (int)roundf(value * (float)(1 << _fixed));
}

int	Fixed::toInt() const
{
	return _value >> _fixed;
}

float	Fixed::toFloat() const
{
	return (float)(_value) / (float)(1 << _fixed);
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

std::ostream	&operator<<(std::ostream &out, Fixed const &f)
{
	out << f.toFloat();
	return out;
}
