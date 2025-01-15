/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/15 18:59:16 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

Span::Span() : _arr(0), _maxSize(0)
{
	std::cout << "useless span created\n";
}

Span::Span(size_t n) : _arr(0), _maxSize(n)
{
	std::cout << "span size " << n << " created\n";
}

Span::Span(const Span &s) : _arr(s._arr), _maxSize(s._maxSize)
{
	std::cout << "span copy\n";
}

Span &Span::operator=(const Span &s)
{
	if (this == &s)
		return *this;
	_maxSize = s._maxSize;
	_arr = s._arr;
	std::cout << "span =\n";
	return *this;
}

Span::~Span()
{
	std::cout << "span destroyed\n";
}

void	Span::addNumber(int n)
{
	if (_arr.size() >= _maxSize)
		throw std::length_error("Cannot add more numbers to span");
	_arr.push_back(n);
}

unsigned int	Span::shortestSpan()
{
	if (_arr.size() < 2)
		throw std::out_of_range("Cannot get span from less than 2 numbers");
	
	std::vector<int>	tmp = _arr;
	long	minSpan = 4294967296;
	
	std::sort(tmp.begin(), tmp.end());
	for (size_t i = 0; i + 1 < tmp.size(); ++i)
	{
		long	tmpmin = static_cast<long>(tmp[i + 1]) - static_cast<long>(tmp[i]);
		if (tmpmin < minSpan)
			minSpan = tmpmin;
	}
	return minSpan;
}

unsigned int	Span::longestSpan()
{
	if (_arr.size() < 2)
		throw std::out_of_range("Cannot get span from less than 2 numbers");
	return std::abs(static_cast<long long>(*std::max_element(_arr.begin(), _arr.end()))
		- static_cast<long long>(*std::min_element(_arr.begin(), _arr.end())));
}
