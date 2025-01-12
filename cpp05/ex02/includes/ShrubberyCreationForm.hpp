/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/12 19:37:44 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	std::string	_target;
	public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &s);
	ShrubberyCreationForm(const ShrubberyCreationForm &s);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &s);
	~ShrubberyCreationForm();
	void		executeInternal() const;
	EXC_CLASS(NoTreesForYouException)
};

#endif // SHRUBBERYCREATIONFORM_HPP
