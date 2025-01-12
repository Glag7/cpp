/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/12 21:08:45 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "hello intern\n";
}

Intern::Intern(const Intern &i)
{
	(void)i;
	std::cout << "intern copy does nothing\n";
}

Intern &Intern::operator=(const Intern &i)
{
	(void)i;
	std::cout << "intern = does nothing\n";
	return *this;
}

Intern::~Intern()
{
	std::cout << "bye intern\n";
}

AForm	*makeShrubbery(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

AForm	*makeRobotomy(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

AForm	*makePresidential(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

AForm	*Intern::makeForm(const std::string &formName, const std::string &target) const
{
	std::string	formNames[3] = {"shrubbery creation",
					"robotomy request",
					"presidential pardon"};
	AForm	*(*formFuncs[3])(const std::string &) = {makeShrubbery, makeRobotomy, makePresidential};

	for (int i = 0; i < 3; ++i)
	{
		if (formName == formNames[i])
		{
			std::cout << "intern created form " << formName << "\n";
			return formFuncs[i](target);
		}
	}
	std::cout << "intern cannot create form " << formName << "\n";
	return 0;
}
