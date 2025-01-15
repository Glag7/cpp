/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:28:34 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/15 17:14:38 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include "easyfind.hpp"

template <typename T>
void	print_value(T &container, int value)
{
	typename T::iterator	it = easyfind(container, value);

	if (it == container.end())
		std::cout << "value not found: " << value <<"\n";
	else
		std::cout << "value found: " << *it << "\n";
}

int	main(void)
{
	int arr[] = {1, 2, 3, 4};
	std::vector<int>	vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
	std::deque<int>		deq(arr, arr + sizeof(arr) / sizeof(arr[0]));

	print_value(vec, 2);
	print_value(vec, 3);
	print_value(vec, 8);
	print_value(deq, 2);
	print_value(deq, 3);
	print_value(deq, 8);
}
