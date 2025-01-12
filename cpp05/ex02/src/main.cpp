/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 20:28:57 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/12 18:17:42 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
	try
	{
		AForm	stupid("Bob", 151, 1);
	}
	catch (std::exception &e)
	{
		std::cout << "chokbar: " << e.what() << "\n";
	}
	try
	{
		AForm	stupid("Bob", 1, 151);
	}
	catch (std::exception &e)
	{
		std::cout << "chokbar: " << e.what() << "\n";
	}
	try
	{
		AForm	stupid("Bob", 0, 1);
	}
	catch (std::exception &e)
	{
		std::cout << "chokbar: " << e.what() << "\n";
	}
	try
	{
		AForm	stupid("Bob", 1, 0);
	}
	catch (std::exception &e)
	{
		std::cout << "chokbar: " << e.what() << "\n";
	}

	Bureaucrat	jorn("Jorn", 7);
	AForm		ellanglo("golem form", 5, 5);

	std::cout << jorn << "\n";
	std::cout << ellanglo << "\n";
	try
	{
		jorn.signAForm(ellanglo);
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
		jorn.signAForm(ellanglo);
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
		jorn.signAForm(ellanglo);
	}
	catch (std::exception &e)
	{
		std::cout << "chokbar: " << e.what() << "\n";
	}
}
