/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/10 18:22:19 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

EXC_FUNC(Form, GradeTooHighException, "form grade too high")
EXC_FUNC(Form, GradeTooLowException, "form grade too low")

Form::Form() :
	_name("stupid form"),
	_isSigned(false), 
	_signGrade(150),
	_execGrade(150)
{
	std::cout << "hello form\n";
}

Form::Form(std::string name, int signGrade, int execGrade) :
	_name(name),
	_isSigned(false), 
	_signGrade(signGrade),
	_execGrade(execGrade)
{
	if (signGrade < FORM_HIGH || execGrade < FORM_HIGH)
		throw GradeTooHighException();
	if (signGrade > FORM_LOW || execGrade > FORM_LOW)
		throw GradeTooLowException();
	std::cout << "hello form " << name << "\n";
}

Form::Form(const Form &f) :
	_name(f._name),
	_isSigned(f._isSigned), 
	_signGrade(f._signGrade),
	_execGrade(f._execGrade)
{
	std::cout << "form form form form\n";
}

Form &Form::operator=(const Form &f)
{
	_isSigned = f._isSigned;
	std::cout << "form =\n";
	return *this;
}

const std::string	&Form::getName() const
{
	return _name;
}

bool			Form::getSigned() const
{
	return _isSigned;
}

int			Form::getSignGrade() const
{
	return _signGrade;
}

int			Form::getExecGrade() const
{
	return _execGrade;
}

void			Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > _signGrade)
		throw GradeTooLowException();
	_isSigned = true;
}

Form::~Form()
{
	std::cout << "bye bye form\n";
}

std::ostream	&operator<<(std::ostream &o, Form &f)
{
	o << "Form " << f.getName() << ", req sign grade: " << f.getSignGrade()
		<< ", req exec grade: " << f.getExecGrade() << ", signed: " << f.getSigned();
	return o;
}
