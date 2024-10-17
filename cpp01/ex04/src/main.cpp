/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:10:17 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/17 17:06:19 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void	replace(std::ifstream &in, std::ofstream &out, std::string s1, std::string s2)
{
	std::string	line;

	getline(in, line);
	while (!in.eof())
	{
		std::string	newLine = "";
		size_t		startpos = 0, endpos = 0;
	       
		while (endpos != std::string::npos)
		{
			endpos = line.find(s1, startpos);
			newLine.append(line, startpos, endpos);
			if (endpos != std::string::npos)
			{
				newLine.append(s2);
				endpos += s1.length();
			}
			startpos = endpos;
		}
		out << newLine << std::endl;
		if (out.fail())
		{
			std::cout << "Could not write to output file\n";
			return ;
		}
		getline(in, line);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./sed filename str1 str2\n";
		return 1;
	}
	std::ifstream	in(argv[1]);
	if (!in)
	{
		std::cout << "Cannot open input file\n";
		return (1);
	}
	std::ofstream	out((std::string(argv[1]) + ".replace").c_str());
	if (!out)
	{
		in.close();
		std::cout << "Cannot create output file\n";
		return (1);
	}
	replace(in, out, std::string(argv[2]), std::string(argv[3]));
	in.close();
	out.close();	
}
