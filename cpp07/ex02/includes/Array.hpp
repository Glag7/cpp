/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/14 19:30:58 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	T	*_array;
	size_t	_size;
	public:
	Array();
	Array(size_t n);
	Array(const Array &a);
	Array &operator=(const Array &a);
	T	&operator[](size_t i);
	~Array();
	size_t	size() const;
};

#include "Array.tpp"

#endif // ARRAY_HPP
