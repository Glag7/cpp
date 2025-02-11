/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/15 19:19:36 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>

class Span
{
	std::vector<int>	_arr;
	size_t			_maxSize;
	public:
	Span();
	Span(size_t n);
	Span(const Span &s);
	Span &operator=(const Span &s);
	~Span();
	void		addNumber(int n);
	void		addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
};

#endif // SPAN_HPP
