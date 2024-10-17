/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:58:10 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/17 18:22:23 by glaguyon         ###   ########.fr       */
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
	static void		(Harl::*f[4])() = {
		&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	static const std::string	s[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; ++i)
	{
		if (level == s[i])
			(this->*f[i])();
	}
}
