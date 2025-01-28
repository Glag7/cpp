/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:28:34 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/28 20:42:21 by glaguyon         ###   ########.fr       */
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
	struct	timespec	startVec, startDeq, endVec, endDeq;
	
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

	clock_gettime(CLOCK_MONOTONIC_RAW, &startVec);
	epicSortVec(vec);
	clock_gettime(CLOCK_MONOTONIC_RAW, &endVec);
	clock_gettime(CLOCK_MONOTONIC_RAW, &startDeq);
	epicSortDeq(deq);
	clock_gettime(CLOCK_MONOTONIC_RAW, &endDeq);

	std::cout << "After:\t";
	for (std::vector<unsigned>::iterator it = vec.begin(); it < vec.end(); ++it)
		std::cout << *it << " ";
	std::cout << "\n";

	std::cout << "Time for " << vec.size() << " with vector: "
		<< (endVec.tv_sec - startVec.tv_sec) * 1e9 + endVec.tv_nsec - startVec.tv_nsec
		<< " ns\n";
	std::cout << "Time for " << deq.size() << " with deque: "
		<< (endDeq.tv_sec - startDeq.tv_sec) * 1e9 + endDeq.tv_nsec - startDeq.tv_nsec
		<< " ns\n";
}
