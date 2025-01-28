/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:28:34 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/28 00:20:01 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "give at least one number\n";
		return 1;
	}

	std::vector<unsigned>	vec;
	std::deque<unsigned>	deq;
	
	try
	{
		for (int i = 1; i < argc; ++i)
			fillContainers(vec, deq, argv[i]);
	}
	catch (std::exception &e)
	{
		std::cout << "Error\n";
		return 1;
	}
	std::cout << "Before:\t";
	for (std::vector<unsigned>::iterator it = vec.begin(); it < vec.end(); ++it)
		std::cout << *it << " ";
	std::cout << "\n";
	epicSortVec(vec);
	std::cout << "After:\t";
	for (std::vector<unsigned>::iterator it = vec.begin(); it < vec.end(); ++it)
		std::cout << *it << " ";
	std::cout << "\n";
}
