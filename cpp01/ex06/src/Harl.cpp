/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:58:10 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/17 18:42:01 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

void	Harl::_debug()
{
	std::cout << "debug\n";
}

void	Harl::_info()
{
	std::cout << "info\n";
}

void	Harl::_warning()
{
	std::cout << "warning\n";
}

void	Harl::_error()
{
	std::cout << "error\n";
}

void	Harl::complain(std::string level)
{
	static const std::string	s[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int				i = 0;

	while (i < 4 && level != s[i])
		++i;
	switch (i)
	{
	case 0:
		_debug();
	case 1:
		_info();
	case 2:
		_warning();
	case 3:
		_error();
	}
}
