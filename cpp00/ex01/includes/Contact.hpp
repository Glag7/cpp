/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:57:05 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/15 19:29:12 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phone;
	std::string	_secret;
	public:
	std::string	firstName() const;
	std::string	lastName() const;
	std::string	nickname() const;
	std::string	phone() const;
	std::string	secret() const;
	void	setFirstName(std::string);
	void	setLastName(std::string);
	void	setNickname(std::string);
	void	setPhone(std::string);
	void	setSecret(std::string);
};

#endif
