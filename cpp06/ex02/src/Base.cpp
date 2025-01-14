/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/14 15:25:05 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
	std::cout << "base done\n";
}

Base	*generate(void)
{
	int	n = rand();

	if (n % 3 == 0)
		return dynamic_cast<Base *>(new A());
	if (n % 3 == 1)
		return dynamic_cast<Base *>(new B());
	return dynamic_cast<Base *>(new C());
}

void	identify(Base* p)
{
	A	*aptr = dynamic_cast<A *>(p);
	B	*bptr = dynamic_cast<B *>(p);
	C	*cptr = dynamic_cast<C *>(p);

	if (aptr)
		std::cout << "Object is A\n";
	else if (bptr)
		std::cout << "Object is B\n";
	else if (cptr)
		std::cout << "Object is C\n";
	else
		std::cout << "????\n";
}

void	identify(Base& p)
{
	try
	{
		A	&aref = dynamic_cast<A &>(p);
		std::cout << "Object is A\n";
		(void)aref;
		return ;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		B	&bref = dynamic_cast<B &>(p);
		std::cout << "Object is B\n";
		(void)bref;
		return ;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		C	&cref = dynamic_cast<C &>(p);
		std::cout << "Object is C\n";
		(void)cref;
		return ;
	}
	catch (std::exception &e)
	{
	}
	std::cout << "????\n";
}
