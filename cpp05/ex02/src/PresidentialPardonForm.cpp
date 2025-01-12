/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/12 19:59:58 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	_target = "skibidi";
	std::cout << "hello president\n";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5)
{
	_target = target;
	std::cout << "hello president " << target << "\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p)
{
	*this = p;
	std::cout << "president copy\n";
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &p)
{
	_target = p._target;
	std::cout << "hello = president\n";
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "macron explosion\n";
}

void	PresidentialPardonForm::executeInternal() const
{
	std::cout << _target << " has been pardoned by Zaphod BeebleRox\n";
}
