/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/11/28 16:43:09 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <sstream>

class ClapTrap
{
	std::string	_name;
	unsigned int		_hp;
	unsigned int		_ep;
	unsigned int		_atk;
	public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &c);
	ClapTrap &operator=(ClapTrap const &c);
	~ClapTrap();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	printInfo(std::ostream &out);
};

std::ostream	&operator<<(std::ostream &out, ClapTrap &c);

#endif // CLAPTRAP_HPP
