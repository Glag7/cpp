/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/21 21:44:53 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

EXC_FUNC(BitcoinExchange, NoFileFoundException, "no file found");
EXC_FUNC(BitcoinExchange, NoSeparatorFoundException, "no separator found");
EXC_FUNC(BitcoinExchange, WrongDateFormatException, "wrong date format");
EXC_FUNC(BitcoinExchange, WrongDateException, "date does not exist");
EXC_FUNC(BitcoinExchange, WrongValueFormatException, "wrong value format");
EXC_FUNC(BitcoinExchange, NegativeValueException, "value is negative");
EXC_FUNC(BitcoinExchange, ValueTooHighException, "value too high");
EXC_FUNC(BitcoinExchange, DatabaseEmptyException, "database is empty");

static size_t	getNumber(const std::string &s, size_t expectedLen)
{
	size_t	n = 0;

	for(size_t i = 0; i < expectedLen; ++i)
	{
		if (s[i] < '0' || s[i] > '9')
			throw	BitcoinExchange::WrongDateFormatException();
		n = 10 * n + s[i] - '0';
	}
	return n;
}

static size_t	getDate(const std::string &date)
{
	size_t	year, month, day;

	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		throw BitcoinExchange::WrongDateFormatException();
	year = getNumber(date, 4);
	month = getNumber(&date[5], 2);
	day = getNumber(&date[8], 2);
	if (month == 0 || month > 12 || day == 0 || day > 31
	|| (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11))
	|| (day == 30 && month == 2)
	|| (day == 29 && month == 2 && (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))))
		throw BitcoinExchange::WrongDateException();
	return year * 1e4 + month * 1e2 + day;
}

static double	getValue(const std::string &value, double maxValue)
{
	double	valueDouble;

	if (value.size() == 0)
		throw BitcoinExchange::WrongValueFormatException();
	if (value[0] == '-')
		throw BitcoinExchange::NegativeValueException();
	for (std::string::const_iterator it = value.begin(); it < value.end(); ++it)
	{
		if ((*it < '0' || *it > '9') && *it != '.')
			throw BitcoinExchange::WrongValueFormatException();
	}
	errno = 0;
	valueDouble = std::strtod(value.c_str(), 0);
	if (errno == ERANGE || (maxValue > 0. && valueDouble > maxValue))
		throw BitcoinExchange::ValueTooHighException();
	return valueDouble;
}

static std::pair<size_t, double>	parseLine(
	const std::string &line, const std::string &sep, double maxValue)
{
	size_t		sepPos, date;
	double		value;

	sepPos = line.find(sep);
	if (sepPos == std::string::npos)
		throw BitcoinExchange::NoSeparatorFoundException();
	date = getDate(line.substr(0, sepPos));
	value = getValue(line.substr(sepPos + sep.size()), maxValue);
	return std::pair<size_t, double>(date, value);
}

std::map<size_t, double>	BitcoinExchange::parseDatabase(
	const std::string &filename, const std::string &sep, double maxValue)
{
	std::map<size_t, double>	database;
	std::ifstream	in(filename.c_str());
	std::string	line;

	if (!in)
		throw NoFileFoundException();
	std::getline(in, line);
	while (std::getline(in, line))
	{
		database.insert(parseLine(line, sep, maxValue)); 
	}
	in.close();
	return database;
}

void	BitcoinExchange::showValues(std::map<size_t, double> database,
	const std::string &filename, const std::string &sep, double maxValue)
{
	std::ifstream	in(filename.c_str());
	std::string	line;
	std::pair<size_t, double>	lineData, value;

	if (!in)
		throw NoFileFoundException();
	if (database.size() == 0)
		throw DatabaseEmptyException();
	std::getline(in, line);
	while (std::getline(in, line))
	{
		try
		{
			lineData = parseLine(line, sep, maxValue);
			if (database.lower_bound(lineData.first) == database.end())
				std::cout << line.substr(0, 10)
				<< " => " << lineData.second
				<< " = " << (--database.end())->second * lineData.second << "\n";
			else
				std::cout << line.substr(0, 10)
				<< " => " << lineData.second
				<< " = " << database.lower_bound(lineData.first)->second * lineData.second << "\n";
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << "\n";
		}
	}
	in.close();
}

BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &b){(void)b;}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &b){(void)b;return *this;}
BitcoinExchange::~BitcoinExchange(){}

