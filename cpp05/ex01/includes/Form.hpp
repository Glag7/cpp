/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/10 18:07:04 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include "ExceptionTemplate.hpp"

# define FORM_HIGH 1
# define FORM_LOW 150

class Bureaucrat;

class Form
{
	const std::string	_name;
	bool			_isSigned;
	const int		_signGrade;
	const int		_execGrade;
	public:
	Form();
	Form(std::string name, int signGrade, int execGrade);
	Form(const Form &f);
	Form &operator=(const Form &f);
	~Form();
	const std::string	&getName() const;
	bool			getSigned() const;
	int			getSignGrade() const;
	int			getExecGrade() const;
	void			beSigned(Bureaucrat &b);

	EXC_CLASS(GradeTooHighException)
	EXC_CLASS(GradeTooLowException)
};

std::ostream	&operator<<(std::ostream &o, Form &f);

#endif // FORM_HPP
