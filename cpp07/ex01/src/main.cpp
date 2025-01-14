/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:28:34 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/14 16:47:37 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "iter.hpp"

template <typename T>
void	doprint(const T &t)
{
	std::cout << "thing is: " << t << "\n";
}

template <typename T>
void	doinc(T &t)
{
	++t;
	std::cout << "thing is: " << t << "\n";
}

int	main(void)
{
	int		intarr[] = {1, 2, 3, 4};
	double		doublearr[] = {.1, .2, .3, .4};
	std::string	strarr[] = {"yes", "no", "wow", "sus"};

	iter(intarr, 4, doprint);
	iter(doublearr, 4, doprint);
	iter(strarr, 4, doprint);
	iter(intarr, 4, doinc);
	iter(doublearr, 4, doinc);
	iter(intarr, 4, doprint);
	iter(doublearr, 4, doprint);
	
	const int		intarr_const[] = {5, 6, 7, 8};
	
	iter(intarr_const, 4, doprint);
}
