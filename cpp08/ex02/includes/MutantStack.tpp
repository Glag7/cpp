/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/15 20:16:55 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &m) : std::stack<T>(m)
{
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &m)
{
	if (this != &m)
		std::stack<T>::operator=(m);
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::begin()
{
	return std::stack<T>::c.begin();
}

template <typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::end()
{
	return std::stack<T>::c.end();
}

template <typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::begin() const
{
	return std::stack<T>::c.begin();
}

template <typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::end() const
{
	return std::stack<T>::c.end();
}

#endif
