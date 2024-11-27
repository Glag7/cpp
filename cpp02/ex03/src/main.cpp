/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:10:17 by glaguyon          #+#    #+#             */
/*   Updated: 2024/11/27 21:01:30 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int	main()
{
	Point	a(2, 5);
	Point	b(6, 1);
	Point	c(0, 2);

	std::cout << "wow " << bsp(a, b, c, Point(-1, -1)) << "\n";
	std::cout << "wow " << bsp(a, b, c, Point(2, 2)) << "\n";
	std::cout << "wow " << bsp(a, b, c, Point(2, 5)) << "\n";
	std::cout << "wow " << bsp(a, b, c, Point(3, 1.5)) << "\n";
	std::cout << "wow " << bsp(a, b, c, Point(3, 1.51)) << "\n";

	a = Point(0, 0);
	b = Point(1, 0);
	c = Point(0, 1);

	std::cout << "huh " << bsp(a, b, c, Point(.5, .5)) << "\n";
	std::cout << "huh " << bsp(a, b, c, Point(.5, .4)) << "\n";
	
	a = Point(0, 8);
	b = Point(0, 2);
	c = Point(0, 1);
	
	std::cout << "yes " << bsp(a, b, c, Point(0, 4)) << "\n";
	std::cout << "yes " << bsp(a, b, c, Point(0, -9.)) << "\n";
}
