/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/12 21:07:18 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

EXC_FUNC(ShrubberyCreationForm, NoTreesForYouException, "cannot create outfile for trees")

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	_target = "skibidi";
	std::cout << "hello tree\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137)
{
	_target = target;
	std::cout << "hello tree " << target << "\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s) : AForm(s)
{
	std::cout << "tree copy\n";
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s)
{
	this->AForm::operator=(s);
	_target = s._target;
	std::cout << "tree =\n";
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "tree no more\n";
}

void	ShrubberyCreationForm::executeInternal() const
{
	std::ofstream	trees(("./" + _target + "_shrubbery").c_str());

	if (!trees)
		throw NoTreesForYouException();
	trees	<< "       /\\              /\\              /\\      \n"
            	<< "      /\\*\\            /\\*\\            /\\*\\     \n"
          	<< "     /\\O\\*\\          /\\O\\*\\          /\\O\\*\\    \n"
          	<< "    /*/\\/\\*\\        /*/\\/\\*\\        /*/\\/\\*\\   \n"
          	<< "   /\\O\\/\\*\\/\\      /\\O\\/\\*\\/\\      /\\O\\/\\*\\/\\  \n"
          	<< "  /\\*\\/\\*\\/\\*\\    /\\*\\/\\*\\/\\*\\    /\\*\\/\\*\\/\\*\\ \n"
          	<< " /\\O\\/\\/*/\\/O/\\  /\\O\\/\\/*/\\/O/\\  /\\O\\/\\/*/\\/O/\\\n"
          	<< "       ||              ||              ||      \n"
          	<< "       ||              ||              ||      \n"
          	<< "       ||              ||              ||      \n";//merci babonnet
	trees.close();
	std::cout << "trees created\n";
}
