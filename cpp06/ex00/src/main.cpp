/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:28:34 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/13 15:44:41 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	if (!argv[1])
		std::cout << "where arg\n";
	ScalarConverter::convert(argv[1]);
}
