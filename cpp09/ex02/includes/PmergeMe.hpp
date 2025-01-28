/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:59:05 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/28 20:52:37 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <limits>
#include <cstdlib>
#include <cerrno>
#include <ctime>

void	fillContainers(std::vector<unsigned> &vec, std::deque<unsigned> &deq, char *s);
void	epicSortVec(std::vector<unsigned> &vec);
void	epicSortDeq(std::deque<unsigned> &deq);

template <typename Cont>
Cont	pairMergeSort(Cont vec)
{
	if (vec.size() < 4)
		return vec;
	Cont	left = pairMergeSort(
		Cont(vec.begin(), vec.begin() + vec.size() / 4 * 2));
	Cont	right = pairMergeSort(
		Cont(vec.begin() + vec.size() / 4 * 2, vec.begin() + vec.size() / 2 * 2));
	Cont	newVec;
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

template <typename Cont>
void	binInsert(Cont &sorted, unsigned n)
{
	if (sorted.size() == 0)
	{
		sorted.insert(sorted.begin(), n);
		return;
	}

	ssize_t	left = 0, right = sorted.size() - 1, mid = (left + right) / 2;

	while (left < right)
	{
		if (n < sorted[mid])
			right = mid - 1;
		else
			left = mid + 1;
		mid = (left + right) / 2;
	}
	if (sorted[mid] > n)
		sorted.insert(sorted.begin() + mid, n);
	else
		sorted.insert(sorted.begin() + mid + 1, n);
}

#endif
