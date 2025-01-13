/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/13 14:50:38 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>

class	ScalarConverter
{
	ScalarConverter();
	ScalarConverter(const ScalarConverter &s);
	ScalarConverter &operator=(const ScalarConverter &s);
	~ScalarConverter();
	public:
	static void	convert(const std::string &s);
};

enum	e_types
{
	ERROR = 0,
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};

#endif // SCALARCONVERTER_HPP
