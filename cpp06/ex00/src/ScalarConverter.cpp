/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/14 14:10:10 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cerrno>
#include <cstdlib>
#include <cmath>
#include <limits>
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "how\n";
}

ScalarConverter::ScalarConverter(const ScalarConverter &s)
{
	(void)s;
	std::cout << "no\n";
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &s)
{
	(void)s;
	std::cout << "not possible\n";
	return *this;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "what\n";
}

void	handlePseudoLiterals(const std::string &s)
{
	std::cout << "char: impossible\n"
		<< "int: impossible\n";
	if (s == "+inff" || s == "-inff" || s == "nanf")
		std::cout << "float: " << s << "\n"
			<< "double: " << s.substr(0, s.length() - 1) << "\n";
	else
		std::cout << "float: " << s << "f\n"
			<< "double: " << s << "\n";
}

int	getType(const std::string &s)
{
	size_t	len = s.length();
	bool	hasDot = false,	hasNum = false, hasSign = false;

	if (len == 0)
		return ERROR;
	if (len == 1 && !std::isdigit(s[0]))
		return CHAR;
	for (std::string::const_iterator i = s.begin(); i < s.end() - 1; ++i)
	{
		if (!hasSign && !hasDot && !hasNum && (*i == '+' || *i == '-'))
			hasSign = true;
		else if (!hasDot && *i == '.')
			hasDot = true;
		else if (std::isdigit(*i))
			hasNum = true;
		else
			return ERROR;
	}
	if (s[len - 1] == 'f' && hasDot && hasNum)
		return FLOAT;
	if ((hasDot && isdigit(s[len - 1])) || (!hasDot && hasNum && s[len - 1] == '.'))
		return DOUBLE;
	if (!hasDot && isdigit(s[len - 1]))
		return INT;
	return ERROR;
}

void	convertFromError(const std::string &s)
{
	(void)s;
	std::cout << "char: impossible\n"
		<< "int: impossible\n"
		<< "float: impossible\n"
		<< "double: impossible\n";
}

void	convertFromChar(const std::string &s)
{
	char	c = static_cast<char>(s[0]);

	std::cout << "char: '" << c << "'\n"
		<< "int: " << static_cast<int>(c) << "\n"
		<< "float: " << std::fixed << static_cast<float>(c) << "f\n"
		<< "double: " << std::fixed << static_cast<double>(c) << "\n";
}

void	convertFromInt(const std::string &s)
{
	char	*end;
	long	l;
	int	i = 0;
	
	errno = 0;
	l = std::strtol(s.c_str(), &end, 10);
	if (errno == ERANGE)
		return convertFromError(s);
	if (std::numeric_limits<int>::min() + static_cast<int>(l) > 0
		|| std::numeric_limits<int>::max() - static_cast<int>(l) < 0)
		return convertFromError(s);
	i = static_cast<int>(l);
	if (i >= 32 && i <= 126)
		std::cout << "char: '" << static_cast<char>(i) << "'\n";
	else
		std::cout << "char: non displayable\n";
	std::cout << "int: " << i << "\n"
		<< "float: " << std::fixed << static_cast<float>(i) << "f\n"
		<< "double: " << std::fixed << static_cast<double>(i) << "\n";
}

void	convertFromFloat(const std::string &s)
{
	char	*end;
	double	d;
	float	f;

	errno = 0;
	d = std::strtod(s.c_str(), &end);
	if (errno == ERANGE)
		return convertFromError(s);
	f = static_cast<float>(d);
	if (std::fabs(f) == std::numeric_limits<float>::infinity())
		return convertFromError(s);
	if (d >= 32. && d <= 126.)
		std::cout << "char: '" << static_cast<char>(d) << "'\n";
	else
		std::cout << "char: non displayable\n";
	if (std::numeric_limits<int>::min() + static_cast<int>(d) > 0
		|| std::numeric_limits<int>::max() - static_cast<int>(d) < 0)
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(d) << "\n";
	std::cout << "float: " << std::fixed << static_cast<float>(d) << "f\n"
		<< "double: " << std::fixed << d << "\n";
}

void	convertFromDouble(const std::string &s)
{
	char	*end;
	double	d;

	errno = 0;
	d = std::strtod(s.c_str(), &end);
	if (errno == ERANGE)
		return convertFromError(s);
	if (d >= 32. && d <= 126.)
		std::cout << "char: '" << static_cast<char>(d) << "'\n";
	else
		std::cout << "char: non displayable\n";
	if (std::numeric_limits<int>::min() + static_cast<int>(d) > 0
		|| std::numeric_limits<int>::max() - static_cast<int>(d) < 0)
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(d) << "\n";
	if (std::fabs(static_cast<float>(d)) == std::numeric_limits<float>::infinity())
		std::cout << "float: impossible\n";
	else
		std::cout << "float: " << std::fixed << static_cast<float>(d) << "f\n";
	std::cout << "double: " << std::fixed << d << "\n";
}

void	ScalarConverter::convert(const std::string &s)
{
	static void	(*converters[5])(const std::string &) = {convertFromError, 
								convertFromChar,
								convertFromInt,
								convertFromFloat,
								convertFromDouble};

	if (s == "+inff" || s == "-inff" || s == "nanf"
		|| s == "+inf" || s == "-inf" || s == "nan")
		return handlePseudoLiterals(s);
	converters[getType(s)](s);
}
