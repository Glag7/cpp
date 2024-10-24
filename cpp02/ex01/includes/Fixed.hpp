/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/24 18:10:09 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <fstream>

class Fixed
{
	int			_value;
	static const int	_fixed = 8;
	public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(Fixed const &f);
	int	toInt() const;
	float	toFloat() const;
	Fixed		&operator=(Fixed const &f);
	~Fixed();
	int	getRawBits() const;
	void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &out, Fixed const &f);

#endif // FIXED_HPP
