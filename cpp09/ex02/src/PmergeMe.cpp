/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:59:31 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/21 23:54:08 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	fillContainers(std::vector<unsigned> &vec, std::deque<unsigned> &deq, char *s)
{
	errno = 0;
	char	*end;
	long	n = strtol(s, &end);

	if (errno == ERANGE)
		throw runtime_error("overflow");
	(void)vec;
	(void)deq;
	std::cout << "wow\n";
}
