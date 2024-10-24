/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:10:17 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/24 18:24:45 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main()
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed( 1234.4321f);
	std::cout << "a is " << a << "\n";
	std::cout << "b is " << b << "\n";
	std::cout << "c is " << c << "\n";
	std::cout << "d is " << d << "\n";
	std::cout << "e is " << e << "\n";
	std::cout << "a is " << a.toInt() << " as integer" << "\n";
	std::cout << "b is " << b.toInt() << " as integer" << "\n";
	std::cout << "c is " << c.toInt() << " as integer" << "\n";
	std::cout << "d is " << d.toInt() << " as integer" << "\n";
}
