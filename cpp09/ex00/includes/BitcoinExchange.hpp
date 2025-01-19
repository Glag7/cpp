/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/19 15:34:50 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include	<fstream>
#include	<map>
#include	<string>
#include	<iostream>
#include	<cstdlib>
#include	"ExceptionTemplate.hpp" 

class BitcoinExchange
{
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &b);
	BitcoinExchange &operator=(const BitcoinExchange &b);
	~BitcoinExchange();
	public:
	static	std::map<size_t, double>	parseDatabase(
		const std::string &filename, const std::string &sep, double maxValue);
	static	void	showValues(std::map<size_t, double> database,
		const std::string &filename, const std::string &sep, double maxValue);

	EXC_CLASS(NoFileFoundException);
	EXC_CLASS(NoSeparatorFoundException);
	EXC_CLASS(WrongDateFormatException);
	EXC_CLASS(WrongDateException);
	EXC_CLASS(WrongValueFormatException);
	EXC_CLASS(ValueTooHighException);
	EXC_CLASS(NegativeValueException);
};

#endif // BITCOINEXCHANGE_HPP
