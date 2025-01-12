/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/12 19:29:09 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include "ExceptionTemplate.hpp"

# define BUR_HIGH 1
# define BUR_LOW 150

class AForm;

class Bureaucrat
{
	const std::string	_name;
	int			_grade;
	public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &b);
	Bureaucrat &operator=(const Bureaucrat &b);
	~Bureaucrat();
	int	getGrade() const;
	const std::string	&getName() const;
	void	incrementGrade();
	void	decrementGrade();
	void	signForm(AForm &f);
	void	executeForm(AForm const &f);
	
	EXC_CLASS(GradeTooHighException)
	EXC_CLASS(GradeTooLowException)
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat &b);

#endif // BUREAUCRAT_HPP
