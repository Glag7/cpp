/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:59:31 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/22 16:36:53 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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
	if (n > static_cast<long>(std::numeric_limits<int>::max()))
		throw std::runtime_error("number too big");
	vec.push_back(static_cast<unsigned>(n));
	deq.push_back(static_cast<unsigned>(n));
}
