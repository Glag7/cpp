/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:42:32 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/16 23:24:30 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static size_t	getNumber(const std::string &s, size_t expectedLen)
{
	size_t	n = 0;

	for(size_t i = 0; i < expectedLen; ++i)
	{
		if (s[i] < '0' || s[i] > '9')
			return -1;
		n = 10 * n + s[i] - '0';
	}
	return n;
}

std::map<size_t, double>	parsePrices()//TODO exceptions
{
	std::map<size_t, double>	prices;
	std::ifstream	in("data.csv");
	std::string	line;

	if (!in)
		throw std::runtime_error("prices database not found");
	std::getline(in, line);
	while (std::getline(in, line))
	{
		size_t		comma, year, month, day;
		std::string	date, price;
		char		*end;
		double		priceDouble;

		std::cout << line << "\n";
		comma = line.find(",");
		if (comma == std::string::npos)
			throw std::runtime_error("wrong format (no comma found)");

		date = line.substr(0, comma);
		if (date.size() != 10)
			throw std::runtime_error("wrong format (wrong date length)");
		if (date[4] != '-' || date[7] != '-')
			throw std::runtime_error("wrong format (missing dash)");
		year = getNumber(date, 4);
		if (year == -1ULL)
			throw std::runtime_error("wrong format (year)");
		month = getNumber(date, 4);
		if (month == -1ULL)
			throw std::runtime_error("wrong format (month)");
		day = getNumber(date, 4);
		if (day == -1ULL)
			throw std::runtime_error("wrong format (day)");
		//TODO check date exist

		price = line.substr(comma + 1, line.size());
		if (price.size() < 1 || price[0] < '0' || price[0] > '9')
			throw std::runtime_error("wrong format (price)");//TODO check only num
		errno = 0;
		priceDouble = std::strtod(price.c_str(), &end);
		if (errno == ERANGE || priceDouble > 1000.)
			throw std::runtime_error("wrong value (price)");

		prices.insert(std::pair<size_t, double>
			(year * 10000 + month * 100 + day, priceDouble)); 
	}
	in.close();
	return prices;
}
