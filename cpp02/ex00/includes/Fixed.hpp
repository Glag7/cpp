/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/24 17:14:43 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	int			_value;
	static const int	_fixed = 8;
	public:
	Fixed();
	Fixed(const Fixed &f);
	Fixed &operator=(const Fixed &f);
	~Fixed();
	int	getRawBits() const;
	void	setRawBits(int const raw);
};

#endif // FIXED_HPP
