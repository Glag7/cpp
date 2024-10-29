/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/29 17:24:56 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include <fstream>
#include "Fixed.hpp"

Fixed::Fixed()
{
	//std::cout << "hello this is fixed\n";
	_value = 0;
}

Fixed::Fixed(const int value)
{
	//std::cout << "hello this is fixed but int\n";
	_value = value << _fixed;
}

Fixed::Fixed(const float value)
{
	//std::cout << "hello this is fixed but float\n";
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
	//std::cout << "hello this is fixed from fixed\n";
	*this = f;
}

Fixed &Fixed::operator=(Fixed const &f)
{
	//std::cout << "hello this is fixed = fixed\n";
	_value = f.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	//std::cout << "bye this was fixed\n";
}

bool		Fixed::operator==(Fixed const &f) const
{
	return _value == f._value;
}

bool		Fixed::operator>=(Fixed const &f) const
{
	return _value >= f._value;
}

bool		Fixed::operator<=(Fixed const &f) const
{
	return _value <= f._value;
}

bool		Fixed::operator!=(Fixed const &f) const
{
	return _value != f._value;
}

bool		Fixed::operator>(Fixed const &f) const
{
	return _value > f._value;
}

bool		Fixed::operator<(Fixed const &f) const
{
	return _value < f._value;
}

Fixed		Fixed::operator+(Fixed const &f) const
{
	Fixed	res;

	res.setRawBits(_value + f._value);
	return res;
}

Fixed		Fixed::operator-(Fixed const &f) const
{
	Fixed	res;

	res.setRawBits(_value - f._value);
	return res;
}

Fixed		Fixed::operator*(Fixed const &f) const
{
	Fixed	res;

	res.setRawBits(((long long)_value * (long long)f._value) >> _fixed);
	return res;
}

Fixed		Fixed::operator/(Fixed const &f) const
{
	Fixed	res;

	res.setRawBits(((long long)_value << _fixed) / (long long)f._value);
	return res;
}

Fixed		Fixed::operator++()
{
	++_value;
	return *this;
}

Fixed		Fixed::operator++(int)
{
	Fixed	tmp = *this;

	++_value;
	return tmp;
}

Fixed		Fixed::operator--()
{
	--_value;
	return *this;
}

Fixed		Fixed::operator--(int)
{
	Fixed	tmp = *this;

	--_value;
	return tmp;
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}

const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}

const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}

int	Fixed::getRawBits() const
{
	//std::cout << "the bits are raw\n";
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
