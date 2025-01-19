/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:28:34 by glaguyon          #+#    #+#             */
/*   Updated: 2025/01/19 18:09:38 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <string>
#include <exception>

#define ERROR	\
{ \
 std::cout << "Error\n"; \
 return 1; \
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		ERROR
	
	std::string		s = argv[1];
	std::stack<long> 	st;
	long			tmp;
	
	for (size_t i = 0; i < s.size(); ++i)
	{
		if (i % 2 == 1)
		{
			if(s[i] != ' ')
				ERROR
		}
		else if (s[i] >= '0' && s[i] <= '9')
			st.push(static_cast<long>(s[i] - '0'));
		else if (st.size() < 2)
			ERROR
		else if (s[i] == '+')
		{
			tmp = st.top();
			st.pop();
			st.top() += tmp;
		}
		else if (s[i] == '-')
		{
			tmp = st.top();
			st.pop();
			st.top() -= tmp;
		}
		else if (s[i] == '*')
		{
			tmp = st.top();
			st.pop();
			st.top() *= tmp;
		}
		else if (s[i] == '/')
		{
			tmp = st.top();
			st.pop();
			st.top() /= tmp;
		}
		else
			ERROR

	}
	if (st.size() != 1)
		ERROR
	std::cout << st.top() << "\n";
}
