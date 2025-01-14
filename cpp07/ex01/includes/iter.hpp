/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:17:35 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/14 16:45:42 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T *arr, size_t len, void (*f)(T &))
{
	for (size_t i = 0; i < len; ++i)
		f(arr[i]);
}

template <typename T>
void	iter(const T *arr, size_t len, void (*f)(const T &))
{
	for (size_t i = 0; i < len; ++i)
		f(arr[i]);
}

#endif
