/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:45:29 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/16 19:55:16 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "• The memory address of the string variable.\n" << &string << '\n';
	std::cout << "• The memory address held by stringPTR.\n" << stringPTR << '\n';
	std::cout << "• The memory address held by stringREF.\n" << &stringREF << '\n';
	std::cout << "• The value of the string variable.\n" << string << '\n';
	std::cout << "• The value pointed to by stringPTR.\n" << *stringPTR << '\n';
	std::cout << "• The value pointed to by stringREF.\n" << stringREF << '\n';
}
