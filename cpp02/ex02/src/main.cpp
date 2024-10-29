/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:10:17 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/29 17:27:04 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main()
{
	Fixed a(1.5f);
	Fixed b(12.f);
	Fixed c(7.5f);

	std::cout << "a is " << a << "\n";
	std::cout << "b is " << b << "\n";
	std::cout << "c is " << c << "\n\n";

	std::cout << "a + b is " << a + b << "\n";
	std::cout << "a - b is " << a - b << "\n";
	std::cout << "a * b is " << a * b << "\n";
	std::cout << "a / b is " << a / b << "\n";
	std::cout << "a + c is " << a + c << "\n";
	std::cout << "a - c is " << a - c << "\n";
	std::cout << "a * c is " << a * c << "\n";
	std::cout << "a / c is " << a / c << "\n\n";

	Fixed d(1);
	std::cout << "d " << d << ", ++d " << ++d << ", d++ " << d++ << ", d " << d << "\n";
	std::cout << "d " << d << ", --d " << --d << ", d-- " << d-- << ", d " << d << "\n\n";

	std::cout << "min a b " << Fixed::min(a, b) << "\n";
	std::cout << "min a c " << Fixed::min(a, c) << "\n";
	std::cout << "min c b " << Fixed::min(c, b) << "\n";
	std::cout << "max a b " << Fixed::max(a, b) << "\n";
	std::cout << "max a c " << Fixed::max(a, c) << "\n";
	std::cout << "max c b " << Fixed::max(c, b) << "\n";
}
