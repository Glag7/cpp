/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:28:34 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/14 14:31:38 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int	main(void)
{
	Data		data("chokbar");
	Data		*dataptr = &data;
	uintptr_t	dataptr_int = Serializer::serialize(dataptr);

	std::cout << "data addr: " << dataptr << "\n";
	dataptr->printStuff();
	dataptr = Serializer::deserialize(dataptr_int);
	std::cout << "data addr: " << dataptr << "\n";
	dataptr->printStuff();
}
