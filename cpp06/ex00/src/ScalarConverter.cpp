/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/13 15:57:18 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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
	bool	hasDot = false;

	if (len == 0)
		return ERROR;
	if (len == 1 && !std::isdigit(s[0]))
		return CHAR;
	for (std::string::const_iterator i = s.begin(); i < s.end() - 1; ++i)
	{
		if (!hasDot && *i == '.')
			hasDot = true;
		else if (std::isdigit(*i))
			return ERROR;
	}
	if (s[len - 1] == 'f' && hasDot && len > 2)
		return FLOAT;
	if ((hasDot && isdigit(s[len - 1])) || (!hasDot && s[len - 1] == '.'))
		return DOUBLE;
	if (!hasDot && isdigit(s[len - 1]))
		return INT;
	return ERROR;
}

void	ScalarConverter::convert(const std::string &s)
{
	if (s == "+inff" || s == "-inff" || s == "nanf"
		|| s == "+inf" || s == "-inf" || s == "nan")
		return handlePseudoLiterals(s);
	int	type = getType(s);

	if (type == ERROR)
		std::cout << "Couldn't identify a type\n";
	std::cout << type;
}
