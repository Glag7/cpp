/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/11/27 20:11:22 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	Fixed const	_x;
	Fixed const	_y;
	public:
	Point();
	Point(const float x, const float y);
	Point(Point const &p);
	Point &operator=(Point const &p);
	~Point();
	Fixed		getX() const;
	Fixed		getY() const;
	Fixed		getSide(const Point &a, const Point &b) const;
};

#endif // POINT_HPP
