/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/02 21:48:00 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <sstream>

class WrongAnimal
{
	protected:
	std::string	type;
	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &a);
	WrongAnimal &operator=(const WrongAnimal &a);
	virtual		~WrongAnimal();
	std::string		getType() const;
	void	makeSound() const;
};

#endif // WRONGANIMAL_HPP
