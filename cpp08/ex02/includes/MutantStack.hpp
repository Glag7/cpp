/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/15 21:03:48 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	MutantStack();
	MutantStack(const MutantStack &m);
	MutantStack &operator=(const MutantStack &m);
	~MutantStack();
	//????
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	typename std::stack<T>::container_type::iterator	begin();
	typename std::stack<T>::container_type::iterator	end();
	typename std::stack<T>::container_type::const_iterator	begin() const;
	typename std::stack<T>::container_type::const_iterator	end() const;
};

#include "MutantStack.tpp"

#endif // MUTANTSTACK_HPP
