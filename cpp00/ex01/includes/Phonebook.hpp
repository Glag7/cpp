/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:13:44 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/15 19:58:50 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include "Contact.hpp"

class	Phonebook
{
	Contact	_phonebook[8];
	int	_cur;
	int	_max;
	int	add();
	int	search();
	void	showPhonebook();
	public:
	Phonebook();
	int	readCommand();
};

#endif
