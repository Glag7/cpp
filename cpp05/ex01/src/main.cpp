/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 20:28:57 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/10 18:19:05 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form	stupid("Bob", 151, 1);
	}
	catch (std::exception &e)
	{
		std::cout << "chokbar: " << e.what() << "\n";
	}
	try
	{
		Form	stupid("Bob", 1, 151);
	}
	catch (std::exception &e)
	{
		std::cout << "chokbar: " << e.what() << "\n";
	}
	try
	{
		Form	stupid("Bob", 0, 1);
	}
	catch (std::exception &e)
	{
		std::cout << "chokbar: " << e.what() << "\n";
	}
	try
	{
		Form	stupid("Bob", 1, 0);
	}
	catch (std::exception &e)
	{
		std::cout << "chokbar: " << e.what() << "\n";
	}

	Bureaucrat	jorn("Jorn", 7);
	Form		ellanglo("golem form", 5, 5);

	std::cout << jorn << "\n";
	std::cout << ellanglo << "\n";
	try
	{
		jorn.signForm(ellanglo);
	}
	catch (std::exception &e)
	{
		std::cout << "chokbar: " << e.what() << "\n";
	}
	jorn.incrementGrade();
	std::cout << jorn << "\n";
	std::cout << ellanglo << "\n";
	try
	{
		jorn.signForm(ellanglo);
	}
	catch (std::exception &e)
	{
		std::cout << "chokbar: " << e.what() << "\n";
	}
	jorn.incrementGrade();
	std::cout << jorn << "\n";
	std::cout << ellanglo << "\n";
	try
	{
		jorn.signForm(ellanglo);
	}
	catch (std::exception &e)
	{
		std::cout << "chokbar: " << e.what() << "\n";
	}
}
