/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/12 19:36:10 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include "ExceptionTemplate.hpp"

# define FORM_HIGH 1
# define FORM_LOW 150

class Bureaucrat;

class AForm
{
	const std::string	_name;
	bool			_isSigned;
	const int		_signGrade;
	const int		_execGrade;
	public:
	AForm();
	AForm(std::string name, int signGrade, int execGrade);
	AForm(const AForm &f);
	AForm &operator=(const AForm &f);
	virtual	~AForm();
	const std::string	&getName() const;
	bool			getSigned() const;
	int			getSignGrade() const;
	int			getExecGrade() const;
	void			beSigned(Bureaucrat &b);
	void			execute(Bureaucrat const &b) const;
	virtual void		executeInternal() const = 0;

	EXC_CLASS(GradeTooHighException)
	EXC_CLASS(GradeTooLowException)
	EXC_CLASS(NotSignedException)
};

std::ostream	&operator<<(std::ostream &o, AForm &f);

#endif // FORM_HPP
