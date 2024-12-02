/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/02 20:51:28 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <sstream>

class Animal
{
	protected:
	std::string	type;
	public:
	Animal();
	Animal(const Animal &a);
	Animal &operator=(const Animal &a);
	virtual		~Animal();
	std::string		getType() const;
	virtual	void	makeSound() const;
};

#endif // ANIMAL_HPP
