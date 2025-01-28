/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:59:05 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/28 20:42:12 by glaguyon         ###   ########.fr       */
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

#endif
