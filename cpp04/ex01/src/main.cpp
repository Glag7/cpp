/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 20:28:57 by glaguyon          #+#    #+#             */
/*   Updated: 2024/12/03 21:05:01 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		Brain	a;
		a.setIdea(0, "dog");
		Brain	b(a);
		Brain	c;

		c = a;
		std::cout << a.getIdea(0) << "\n";
		std::cout << b.getIdea(0) << "\n";
		std::cout << c.getIdea(0) << "\n";
		a.setIdea(0, "not dog");
		std::cout << a.getIdea(0) << "\n";
		std::cout << b.getIdea(0) << "\n";
		std::cout << c.getIdea(0) << "\n";
		b.setIdea(0, "not dog either");
		std::cout << a.getIdea(0) << "\n";
		std::cout << b.getIdea(0) << "\n";
		std::cout << c.getIdea(0) << "\n";
	}
	{
		Animal	*animals[10];

		for (int i = 0; i < 5; ++i)
			animals[i] = new Cat();
		for (int i = 5; i < 10; ++i)
			animals[i] = new Dog();
		for (int i = 0; i < 10; ++i)
			delete animals[i];
	}
	{
		Cat	a;
		a.setIdea(0, "dog");
		Cat	b(a);
		Cat	c;

		c = a;
		std::cout << a.getIdea(0) << "\n";
		std::cout << b.getIdea(0) << "\n";
		std::cout << c.getIdea(0) << "\n";
		a.setIdea(0, "not dog");
		std::cout << a.getIdea(0) << "\n";
		std::cout << b.getIdea(0) << "\n";
		std::cout << c.getIdea(0) << "\n";
		b.setIdea(0, "not dog either");
		std::cout << a.getIdea(0) << "\n";
		std::cout << b.getIdea(0) << "\n";
		std::cout << c.getIdea(0) << "\n";
	}
}
