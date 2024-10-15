/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:26:41 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/15 20:09:51 by glaguyon         ###   ########.fr       */
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
	while (!std::cin.fail() && !std::cin.eof())
	{
		if (cmd == "ADD" && add())
			return 1;
		else if (cmd == "SEARCH" && search())
				return 1;
		else if (cmd == "EXIT")
			return 0;
		std::getline(std::cin, cmd);
	}
	return 1;
}

static std::string	fitText(std::string s)
{
	if (s.length() > 10)
		return (s.substr(0, 9) + " ");

	std::string s2 = s;

	if (s2.length() <= 10)
		s2.insert(s.begin(), 10 - s.length(), ' ');
	return (s2);
}

void	Phonebook::showPhonebook()
{
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME\n";
	for (int i = 0; i < _max; ++i)
	{
		std::cout << fitText(_phonebook[i].firstName()) << '|' << fitText( _phonebook[i].firstName());
	}
}

int	Phonebook::search()
{
	showPhonebook();
	//TODO finish
	return (0);
}

int	Phonebook::add()
{
	std::string	s;

	std::cout << "Enter first name\n";
	std::getline(std::cin, s);
	if (std::cin.fail() || std::cin.eof())
		return 1;
	_phonebook[_cur].setFirstName(s);
	std::cout << "Enter last name\n";
	std::getline(std::cin, s);
	if (std::cin.fail() || std::cin.eof())
		return 1;
	_phonebook[_cur].setLastName(s);
	std::cout << "Enter nickname\n";
	std::getline(std::cin, s);
	if (std::cin.fail() || std::cin.eof())
		return 1;
	_phonebook[_cur].setNickname(s);
	std::cout << "Enter phone number\n";
	std::getline(std::cin, s);
	if (std::cin.fail() || std::cin.eof())
		return 1;
	_phonebook[_cur].setPhone(s);
	std::cout << "Enter secret\n";
	std::getline(std::cin, s);
	if (std::cin.fail() || std::cin.eof())
		return 1;
	_phonebook[_cur].setSecret(s);
	if (_max < 8)
		++_max;
	_cur = (_cur + 1) % 8;
	return 0;
}
