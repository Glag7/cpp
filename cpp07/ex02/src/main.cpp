/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:28:34 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/16 21:19:39 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Array.hpp"

int	main(void)
{
	{
		Array<int>	arr(4);
		Array<int>	arr2;
		Array<int>	arr3(arr);

		arr2 = arr;
		arr[1] = 1;
		for (size_t i = 0; i < arr.size(); ++i)
			std::cout << "arr[" << i << "] = " << arr[i] << "\n";
		for (size_t i = 0; i < arr2.size(); ++i)
			std::cout << "arr2[" << i << "] = " << arr2[i] << "\n";
		for (size_t i = 0; i < arr3.size(); ++i)
			std::cout << "arr3[" << i << "] = " << arr3[i] << "\n";
		try
		{
			std::cout << arr[999];
		}
		catch (std::exception &e)
		{
			std::cout << "exception: " << e.what() <<"\n";
		}
	}
	{
		Array<double>	arr(2);
		Array<double>	arr2;
		Array<double>	arr3(arr);

		arr2 = arr;
		arr[1] = 1.8;
		for (size_t i = 0; i < arr.size(); ++i)
			std::cout << "arr[" << i << "] = " << arr[i] << "\n";
		for (size_t i = 0; i < arr2.size(); ++i)
			std::cout << "arr2[" << i << "] = " << arr2[i] << "\n";
		for (size_t i = 0; i < arr3.size(); ++i)
			std::cout << "arr3[" << i << "] = " << arr3[i] << "\n";
		try
		{
			std::cout << arr[999];
		}
		catch (std::exception &e)
		{
			std::cout << "exception: " << e.what() <<"\n";
		}
	}
	{
		Array<std::string>	arr(3);
		Array<std::string>	arr2;
		Array<std::string>	arr3(arr);

		arr2 = arr;
		arr[1] = "chokbar";
		for (size_t i = 0; i < arr.size(); ++i)
			std::cout << "arr[" << i << "] = " << arr[i] << "\n";
		for (size_t i = 0; i < arr2.size(); ++i)
			std::cout << "arr2[" << i << "] = " << arr2[i] << "\n";
		for (size_t i = 0; i < arr3.size(); ++i)
			std::cout << "arr3[" << i << "] = " << arr3[i] << "\n";
		try
		{
			std::cout << arr[999];
		}
		catch (std::exception &e)
		{
			std::cout << "exception: " << e.what() <<"\n";
		}
		{
			const Array<int>	arr(4);
			
			//arr[0] = 1;
			std::cout << "compile please " << arr[0] << "\n";
		}
	}
}
