/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/11/27 20:37:16 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>
#include "Fixed.hpp"
#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::Point(const Point &p) : _x(p._x), _y(p._y)
{
}

Point &Point::operator=(const Point &p){
	const_cast<Fixed &>(_x) = p._x;
	const_cast<Fixed &>(_y) = p._y;
	return *this;
}

Point::~Point()
{
}

Fixed	Point::getX() const
{
	return _x;
}

Fixed	Point::getY() const
{
	return _y;
}

Fixed	Point::getSide(const Point &a, const Point &b) const
{
	return ((_y - a._y) * (b._x - a._x) - (_x - a._x) * (b._y - a._y));
}
