/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:26:41 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/16 15:23:29 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook()
{
	_cur = 0;
	_max = 0;
}

int	Phonebook::readCommand()
{
	std::string	cmd;

	std::cout << "ADD a contact, SEARCH one, or EXIT the phonebook\n";
	std::getline(std::cin, cmd);
	while (!std::cin.eof())
	{
		if (cmd == "ADD" && add())
			return 1;
		else if (cmd == "SEARCH" && search())
				return 1;
		else if (cmd == "EXIT")
			return 0;
		std::cout << "ADD a contact, SEARCH one, or EXIT the phonebook\n";
		std::getline(std::cin, cmd);
	}
	return 1;
}

static std::string	fitText(std::string s)
{
	if (s.length() > 10)
		return (s.substr(0, 9) + ".");

	std::string s2 = s;

	if (s2.length() <= 10)
		s2.insert(s2.begin(), 10 - s.length(), ' ');
	return (s2);
}

void	Phonebook::showPhonebook()
{
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME\n";
	for (int i = 0; i < _max; ++i)
	{
		std::cout << "         " << i + 1 << '|'
			<< fitText(_phonebook[i].firstName()) << '|'
			<< fitText(_phonebook[i].lastName()) << '|'
			<< fitText(_phonebook[i].nickname()) << '\n';
	}
}

int	Phonebook::search()
{
	std::string	s;
	int		index = 0;

	if (_max == 0)
	{
		std::cout << "Empty\n";
		return 0;
	}
	showPhonebook();
	std::cout << "Select INDEX\n";
	std::getline(std::cin, s);
	if (std::cin.eof())
		return 1;
	if (s.length() != 1 || s[0] < '1' || s[0] > _max + '0')
	{
		std::cout << "no\n";
		return 0;
	}
	index = s[0] - '0' - 1;
	std::cout << "FIRST NAME\n" << _phonebook[index].firstName() << '\n'
		<< "LAST NAME\n" << _phonebook[index].lastName() << '\n'
		<< "NICKNAME\n" << _phonebook[index].nickname() << '\n'
		<< "PHONE\n" << _phonebook[index].phone() << '\n'
		<< "SECRET\n" << _phonebook[index].secret() << '\n';
	return (0);
}

int	Phonebook::add()
{
	std::string	s;

	std::cout << "Enter first name\n";
	std::getline(std::cin, s);
	if (std::cin.eof())
		return 1;
	_phonebook[_cur].setFirstName(s);
	std::cout << "Enter last name\n";
	std::getline(std::cin, s);
	if (std::cin.eof())
		return 1;
	_phonebook[_cur].setLastName(s);
	std::cout << "Enter nickname\n";
	std::getline(std::cin, s);
	if (std::cin.eof())
		return 1;
	_phonebook[_cur].setNickname(s);
	std::cout << "Enter phone number\n";
	std::getline(std::cin, s);
	if (std::cin.eof())
		return 1;
	_phonebook[_cur].setPhone(s);
	std::cout << "Enter secret\n";
	std::getline(std::cin, s);
	if (std::cin.eof())
		return 1;
	_phonebook[_cur].setSecret(s);
	if (_max < 8)
		++_max;
	_cur = (_cur + 1) % 8;
	return 0;
}
