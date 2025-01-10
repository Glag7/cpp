/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/10 14:42:26 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("defaultcrat")
{
	_grade = 150;
	std::cout << "hellocrat\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	_grade = grade;//XXX
	std::cout << "hello " << name << "\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : _name(b._name)
{
	_grade = b._grade;
	std::cout << "bureau from crat\n";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
	_grade = b._grade;
	std::cout << "bureaucrat =\n";
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "bureaubye\n";
}

int	Bureaucrat::getGrade() const
{
	return _grade;
}

const std::string	&Bureaucrat::getName() const
{
	return _name;
}

void	incrementGrade()
{
	_grade--; //??
}

void	decrementGrade()
{
	_grade++;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat &b)
{
	o << "name: " << b.getName() << ", grade: " << b.getGrade() << "\n";
	return o;
}
