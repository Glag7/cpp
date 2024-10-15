/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:43:24 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/15 19:43:55 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


std::string	Contact::firstName() const
{
	return _firstName;
}

std::string	Contact::lastName() const
{
	return _lastName;
}

std::string	Contact::nickname() const
{
	return _nickname;
}

std::string	Contact::phone() const
{
	return _phone;
}

std::string	Contact::secret() const
{
	return _secret;
}

void	Contact::setFirstName(std::string firstName)
{
	 _firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	 _lastName = lastName;
}

void	Contact::setNickname(std::string nickname)
{
	 _nickname = nickname;
}

void	Contact::setPhone(std::string phone)
{
	 _phone = phone;
}

void	Contact::setSecret(std::string secret)
{
	 _secret = secret;
}

