/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/10 15:44:41 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

EXC_FUNC(Bureaucrat, GradeTooHighException, "bureaucrat grade too high")
EXC_FUNC(Bureaucrat, GradeTooLowException, "bureaucrat grade too low")

Bureaucrat::Bureaucrat() : _name("defaultcrat")
{
	_grade = 150;
	std::cout << "hellocrat\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > BUR_LOW)
		throw GradeTooLowException();
	if (grade < BUR_HIGH)
		throw GradeTooHighException();
	_grade = grade;
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

void	Bureaucrat::incrementGrade()
{
	if (_grade == BUR_HIGH)
		throw GradeTooHighException();
	_grade--; //??
}

void	Bureaucrat::decrementGrade()
{
	if (_grade == BUR_LOW)
		throw GradeTooLowException();
	_grade++;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat &b)
{
	o << "name: " << b.getName() << ", grade: " << b.getGrade();
	return o;
}
