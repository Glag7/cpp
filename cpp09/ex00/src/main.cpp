/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:28:34 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/21 21:45:18 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "give one database\n";
		return 1;
	}
	
	std::map<size_t, double>	prices;
	std::map<size_t, double>	input;
	try
	{
		prices = BitcoinExchange::parseDatabase("data.csv", ",", -1.);
	}
	catch (std::exception &e)
	{
		std::cout << "Could not acquire prices: " << e.what() << "\n";
		return 1;
	}
	BitcoinExchange::showValues(prices, argv[1], " | ", 1000.);
}
