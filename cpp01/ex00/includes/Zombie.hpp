/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:37:47 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/16 20:02:23 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie
{
	std::string	_name;
	public:
	void	announce();
	Zombie(std::string name);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
