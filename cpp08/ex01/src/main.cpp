/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:28:34 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/15 18:59:33 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int	main(void)
{
	Span	s(5);

	s.addNumber(1);
	s.addNumber(7);
	s.addNumber(8);
	s.addNumber(2147483647);
	s.addNumber(-2147483648);
	std::cout << s.longestSpan() << "\n";
	std::cout << s.shortestSpan() << "\n";
}
