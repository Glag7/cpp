/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/12 19:38:15 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	std::string	_target;
	public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &s);
	PresidentialPardonForm(const PresidentialPardonForm &p);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &p);
	void		executeInternal() const;
	~PresidentialPardonForm();
};

#endif // PRESIDENTIALPARDONFORM_HPP
