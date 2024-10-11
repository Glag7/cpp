/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:27:24 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/11 17:58:19 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define skibidi std

int	main(int, char **av)
{
	++av;
	if (!*av)
		skibidi::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (; *av; ++av)
		{
			skibidi::string	s = *av;

			for (skibidi::string::iterator it = s.begin(); it != s.end(); ++it)
				*it = skibidi::toupper(*it);
			skibidi::cout << s;
		}
		skibidi::cout << "\n";
	}
}
