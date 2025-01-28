/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:59:31 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/28 20:53:18 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	epicSortVec(std::vector<unsigned> &vec)
{
	size_t	alone = -1ULL;

	for (size_t i = 1; i < vec.size(); i += 2)
	{
		if (vec[i - 1] > vec[i])
			std::swap(vec[i - 1], vec[i]);
	}
	if (vec.size() % 2)
		alone = vec[vec.size() - 1];
	vec = pairMergeSort(vec);

	std::vector<unsigned>	sorted;
	
	for (size_t i = vec.size() - 1; i != 0; )
	{
		binInsert(sorted, vec[i--]);
		sorted.insert(sorted.begin(), vec[i]);
		if (i)
			--i;
	}
	if (alone != -1ULL)
		binInsert(sorted, alone);
	vec = sorted;
}

void	epicSortDeq(std::deque<unsigned> &deq)
{
	size_t	alone = -1ULL;

	for (size_t i = 1; i < deq.size(); i += 2)
	{
		if (deq[i - 1] > deq[i])
			std::swap(deq[i - 1], deq[i]);
	}
	if (deq.size() % 2)
		alone = deq[deq.size() - 1];
	deq = pairMergeSort(deq);

	std::deque<unsigned>	sorted;
	
	for (size_t i = deq.size() - 1; i != 0; )
	{
		binInsert(sorted, deq[i--]);
		sorted.push_front(deq[i]);
		if (i)
			--i;
	}
	if (alone != -1ULL)
		binInsert(sorted, alone);
	deq = sorted;
}

void	fillContainers(std::vector<unsigned> &vec, std::deque<unsigned> &deq, char *s)
{
	errno = 0;
	char	*end;
	long	n = std::strtol(s, &end, 10);

	if (errno == ERANGE)
		throw std::runtime_error("number too big");
	if (*end || end == s)
		throw std::runtime_error("not a number");
	if (n < 0)
		throw std::runtime_error("number is negative");
	if (n > static_cast<long>(std::numeric_limits<unsigned>::max()))
		throw std::runtime_error("number too big");
	vec.push_back(static_cast<unsigned>(n));
	deq.push_back(static_cast<unsigned>(n));
}
