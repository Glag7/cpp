/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 20:28:57 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/12 21:08:14 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	test(AForm *form, int sign, int exc)
{
	Bureaucrat	bob("Bob", sign);
	Bureaucrat	joe("Joe", exc);

	joe.executeForm(*form);
	bob.signForm(*form);
	bob.executeForm(*form);
	joe.executeForm(*form);
	joe.executeForm(*form);
	joe.executeForm(*form);
}

int main()
{
	Intern	i;
	{
		AForm	*form = i.makeForm("shrubbery creation", "jorn");
		test(form, 145, 137);
		delete form;
	}
	{
		AForm	*form = i.makeForm("robotomy request", "jorn");
		test(form, 72, 45);
		delete form;
	}
	{
		AForm	*form = i.makeForm("presidential pardon", "jorn");
		test(form, 25, 5);
		delete form;
	}
	i.makeForm("skibidi", "a");
}
