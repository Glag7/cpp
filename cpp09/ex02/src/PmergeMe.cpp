/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:59:31 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/28 17:41:21 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static std::vector<unsigned>	pairMergeSort(std::vector<unsigned> vec)
{
	if (vec.size() < 4)
		return vec;
	std::vector<unsigned>	left = pairMergeSort(
		std::vector<unsigned>(vec.begin(), vec.begin() + vec.size() / 4 * 2));
	std::vector<unsigned>	right = pairMergeSort(
		std::vector<unsigned>(vec.begin() + vec.size() / 4 * 2, vec.begin() + vec.size() / 2 * 2));
	std::vector<unsigned>	newVec;
	size_t	i = 0, j = 0;

	while (i < left.size() && j < right.size())
	{
		if (left[i] < right[j])
		{
			newVec.push_back(left[i++]);
			newVec.push_back(left[i++]);
		}
		else
		{
			newVec.push_back(right[j++]);
			newVec.push_back(right[j++]);
		}
	}
	while (i < left.size())
		newVec.push_back(left[i++]);
	while (j < right.size())
		newVec.push_back(right[j++]);
	return newVec;
}

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
	if (alone != -1ULL)
		vec.push_back(alone);
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
