/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:51:43 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/14 16:10:10 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b)
{
	T	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(const T &a, const T &b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
T	max(const T &a, const T &b)
{
	if (a > b)
		return a;
	return b;
}

#endif
