/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 20:28:57 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/12 19:43:36 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	{
		AForm	*form = new ShrubberyCreationForm("tree");
		test(form, 145, 137);
		delete form;
	}
	{
		AForm	*form = new RobotomyRequestForm("jorn");
		test(form, 72, 45);
		delete form;
	}
	{
		AForm	*form = new PresidentialPardonForm("sigma boy");
		test(form, 25, 5);
		delete form;
	}
	//tester isSigned avec copie
}
