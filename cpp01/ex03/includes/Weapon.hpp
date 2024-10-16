/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:00:49 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/16 20:05:33 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class	Weapon
{
	std::string	_type;
	public:
	const std::string	&getType() const;
	void			setType(std::string type);
}

#endif
