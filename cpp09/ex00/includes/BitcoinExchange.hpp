/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/17 17:56:33 by glaguyon         ###   ########.fr       */
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
		const std::string &filename, const std::string &sep, double maxValue, bool explode);

	EXC_CLASS(NoFileFoundException);
	EXC_CLASS(NoSeparatorFoundException);
	EXC_CLASS(WrongDateFormatException);
	EXC_CLASS(WrongDateException);
	EXC_CLASS(WrongValueFormatException);
	EXC_CLASS(ValueTooHighException);
};

#endif // BITCOINEXCHANGE_HPP
