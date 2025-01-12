/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/12 20:01:43 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	_target = "skibidi";
	std::cout << "hello drilling\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45)
{
	_target = target;
	std::cout << "hello drilling " << target << "\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &r)
{
	*this = r;
	std::cout << "drilling drilling\n";
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &r)
{
	_target = r._target;
	std::cout << "hello = drilling\n";
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "drilling bye\n";
}

void	RobotomyRequestForm::executeInternal() const
{
	std::cout << "drilling noises\n";
	if (rand() % 2)
		std::cout << _target << " has been romotomized\n";
	else
		std::cout << _target << " has not been romotomized\n";
}
