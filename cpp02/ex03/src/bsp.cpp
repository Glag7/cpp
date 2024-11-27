/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:29:42 by glaguyon          #+#    #+#             */
/*   Updated: 2024/11/27 20:57:29 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	abSide = point.getSide(a, b);
	Fixed	acSide = point.getSide(a, c);
	Fixed	bcSide = point.getSide(b, c);

	return (abSide != 0 && acSide != 0 && bcSide != 0
		&& abSide > 0 == c.getSide(a, b) > 0
		&& acSide > 0 == b.getSide(a, c) > 0
		&& bcSide > 0 == a.getSide(b, c) > 0);
}
