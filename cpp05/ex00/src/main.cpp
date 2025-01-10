/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 20:28:57 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/10 15:44:22 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

void	test(Bureaucrat &b)
{
	try
	{
		b.incrementGrade();
		b.decrementGrade();
		b.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "chokbar: " << e.what() << "\n";
	}
}

int main()
{
	Bureaucrat	bob("Bob", 1);
	Bureaucrat	joe("Joe", 150);
	try
	{
		Bureaucrat	stupid("Bob", 151);
	}
	catch (std::exception &e)
	{
		std::cout << "chokbar: " << e.what() << "\n";
	}
	try
	{
		Bureaucrat	stupid("Bob", 0);
	}
	catch (std::exception &e)
	{
		std::cout << "chokbar: " << e.what() << "\n";
	}
	test(joe);
	test(bob);

	Bureaucrat	jorn("Jorn", 7);

	std::cout << jorn << "\n";
	jorn.incrementGrade();
	std::cout << jorn << "\n";
	jorn.decrementGrade();
	std::cout << jorn << "\n";
}
