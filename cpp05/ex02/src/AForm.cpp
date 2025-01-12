/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/12 18:26:53 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

EXC_FUNC(AForm, GradeTooHighException, "form grade too high")
EXC_FUNC(AForm, GradeTooLowException, "form grade too low")
EXC_FUNC(AForm, NotSignedException, "form not signed")

AForm::AForm() :
	_name("stupid form"),
	_isSigned(false), 
	_signGrade(150),
	_execGrade(150)
{
	std::cout << "hello form\n";
}

AForm::AForm(std::string name, int signGrade, int execGrade) :
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

AForm::AForm(const AForm &f) :
	_name(f._name),
	_isSigned(f._isSigned), 
	_signGrade(f._signGrade),
	_execGrade(f._execGrade)
{
	std::cout << "form form form form\n";
}

AForm &AForm::operator=(const AForm &f)
{
	_isSigned = f._isSigned;
	std::cout << "form =\n";
	return *this;
}

const std::string	&AForm::getName() const
{
	return _name;
}

bool			AForm::getSigned() const
{
	return _isSigned;
}

int			AForm::getSignGrade() const
{
	return _signGrade;
}

int			AForm::getExecGrade() const
{
	return _execGrade;
}

void			AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > _signGrade)
		throw GradeTooLowException();
	_isSigned = true;
}

void			execute(Bureaucrat const &b) const
{
	if (!_isSigned)
		throw NotSignedException();
	if (b.getGrade() > _execGrade)
		throw GradeTooLowException();
	executeInternal();
}

AForm::~AForm()
{
	std::cout << "bye bye form\n";
}

std::ostream	&operator<<(std::ostream &o, AForm &f)
{
	o << "AForm " << f.getName() << ", req sign grade: " << f.getSignGrade()
		<< ", req exec grade: " << f.getExecGrade() << ", signed: " << f.getSigned();
	return o;
}
