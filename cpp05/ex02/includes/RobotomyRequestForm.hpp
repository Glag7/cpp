/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/12 19:38:04 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	std::string	_target;
	public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &s);
	RobotomyRequestForm(const RobotomyRequestForm &r);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &r);
	void		executeInternal() const;
	~RobotomyRequestForm();
};

#endif // ROBOTOMYREQUESTFORM_HPP
